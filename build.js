#!/usr/bin/env node
const path = require('path');
const fs = require('fs');
const os = require('os');
const PORTS = ['A', 'B', 'C', 'D'];
const OUT_FILE = path.resolve('.', 'avr-ports.h');

fs.writeFileSync(OUT_FILE, '');

addUpDownPins();

PORTS.forEach(port => {
    addSetOnlyAsOut(port);
    addSetAsOut(port);
    addSetAsIn(port);
    addSetAllDirection(port);
    addUpOnlyPins(port);
    addUpPins(port);
    addDownPins(port);
    addAllPins(port);
    addIsSetAndReset(port);
});

function addUpDownPins() {
    getPinsRange().forEach(pin => {
        addDefine(`up${getPinsNamePart(pin)}${getPinArguments(pin)}`, getSetBitPins(pin));
        addDefine(`down${getPinsNamePart(pin)}${getPinArguments(pin)}`, getSetBitPins(pin, true));
    });
    addLine();
}

function addSetOnlyAsOut(port) {
    getPinsRange().forEach(pin => {
        const name = `setOnly${getPinsNamePart(pin)}AsOut${port}${getPinArguments(pin)}`;
        const body = `DDR${port}=up${getPinsNamePart(pin)}${getPinArguments(pin)}`;
        addDefine(name, body);
    });
    addLine();
}

function addUpOnlyPins(port) {
    getPinsRange().forEach(pin => {
        const name = `upOnly${getPinsNamePart(pin)}${port}${getPinArguments(pin)}`;
        const body = `PORT${port}=up${getPinsNamePart(pin)}${getPinArguments(pin)}`;
        addDefine(name, body);
    });
    addLine();
}
function addSetAsOut(port) {
    getPinsRange().forEach(pin => {
        const name = `set${getPinsNamePart(pin)}AsOut${port}${getPinArguments(pin)}`;
        const body = `DDR${port}|=up${getPinsNamePart(pin)}${getPinArguments(pin)}`;
        addDefine(name, body);
    });
    addLine();
}

function addUpPins(port) {
    getPinsRange().forEach(pin => {
        const name = `up${getPinsNamePart(pin)}${port}${getPinArguments(pin)}`;
        const body = `PORT${port}|=up${getPinsNamePart(pin)}${getPinArguments(pin)}`;
        addDefine(name, body);
    });
    addLine();
}

function addSetAsIn(port) {
    getPinsRange().forEach(pin => {
        const name = `set${getPinsNamePart(pin)}AsIn${port}${getPinArguments(pin)}`;
        const body = `DDR${port}&=down${getPinsNamePart(pin)}${getPinArguments(pin)}`;
        addDefine(name, body);
    });
    addLine();
}

function addDownPins(port) {
    getPinsRange().forEach(pin => {
        const name = `down${getPinsNamePart(pin)}${port}${getPinArguments(pin)}`;
        const body = `PORT${port}&=down${getPinsNamePart(pin)}${getPinArguments(pin)}`;
        addDefine(name, body);
    });
    addLine();
}

function addSetAllDirection(port) {
    addDefine(`setAllAsOut${port}`, `DDR${port}=0xFF`);
    addDefine(`setAllAsIn${port}`, `DDR${port}=0x00`);
    addDefine(`setCustomDirection${port}(direction)`, `DDR${port}=direction`);
    addLine();
}

function addAllPins(port) {
    addDefine(`upAll${port}`, `PORT${port}=0xFF`);
    addDefine(`downAll${port}`, `PORT${port}=0x00`);
    addDefine(`setAll${port}(custom)`, `PORT${port}=custom`);
    addLine();
}

function addIsSetAndReset(port) {
    addDefine(`isSet${port}(p)`, `(PIN${port}&(1<<p))>0`);
    addDefine(`isReset${port}(p)`, `(PIN${port}&(1<<p))==0`);
    addLine();
}

function getPinsRange() {
    return [1, 2, 3, 4, 5, 6, 7, 8];
}

function getPinsNamePart(count) {
    return count === 1 ? 'Pin' : `${count}pins`;
}

function getPinArguments(count) {
    const result = [];
    for (let i = 1; i <= count; i++) {
        result.push(`p${i}`);
    }

    return `(${result.join(',')})`;
}

function getSetBitPins(count, inverted = false) {
    const result = [];
    for (let i = 1; i <= count; i++) {
        result.push(`${inverted ? '~' : ''}(1<<p${i})`);
    }

    return result.join(inverted ? '&' : '|');
}

function addDefine(name, body) {
    fs.appendFileSync(OUT_FILE, `#define ${name} ${body}${os.EOL}`);
}

function addLine() {
    fs.appendFileSync(OUT_FILE, os.EOL);
}
