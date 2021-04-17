#define upPin(p1) (1<<p1)
#define downPin(p1) ~(1<<p1)
#define up2pins(p1,p2) (1<<p1)|(1<<p2)
#define down2pins(p1,p2) ~(1<<p1)&~(1<<p2)
#define up3pins(p1,p2,p3) (1<<p1)|(1<<p2)|(1<<p3)
#define down3pins(p1,p2,p3) ~(1<<p1)&~(1<<p2)&~(1<<p3)
#define up4pins(p1,p2,p3,p4) (1<<p1)|(1<<p2)|(1<<p3)|(1<<p4)
#define down4pins(p1,p2,p3,p4) ~(1<<p1)&~(1<<p2)&~(1<<p3)&~(1<<p4)
#define up5pins(p1,p2,p3,p4,p5) (1<<p1)|(1<<p2)|(1<<p3)|(1<<p4)|(1<<p5)
#define down5pins(p1,p2,p3,p4,p5) ~(1<<p1)&~(1<<p2)&~(1<<p3)&~(1<<p4)&~(1<<p5)
#define up6pins(p1,p2,p3,p4,p5,p6) (1<<p1)|(1<<p2)|(1<<p3)|(1<<p4)|(1<<p5)|(1<<p6)
#define down6pins(p1,p2,p3,p4,p5,p6) ~(1<<p1)&~(1<<p2)&~(1<<p3)&~(1<<p4)&~(1<<p5)&~(1<<p6)
#define up7pins(p1,p2,p3,p4,p5,p6,p7) (1<<p1)|(1<<p2)|(1<<p3)|(1<<p4)|(1<<p5)|(1<<p6)|(1<<p7)
#define down7pins(p1,p2,p3,p4,p5,p6,p7) ~(1<<p1)&~(1<<p2)&~(1<<p3)&~(1<<p4)&~(1<<p5)&~(1<<p6)&~(1<<p7)
#define up8pins(p1,p2,p3,p4,p5,p6,p7,p8) (1<<p1)|(1<<p2)|(1<<p3)|(1<<p4)|(1<<p5)|(1<<p6)|(1<<p7)|(1<<p8)
#define down8pins(p1,p2,p3,p4,p5,p6,p7,p8) ~(1<<p1)&~(1<<p2)&~(1<<p3)&~(1<<p4)&~(1<<p5)&~(1<<p6)&~(1<<p7)&~(1<<p8)

#define setOnlyPinAsOutA(p1) DDRA=upPin(p1)
#define setOnly2pinsAsOutA(p1,p2) DDRA=up2pins(p1,p2)
#define setOnly3pinsAsOutA(p1,p2,p3) DDRA=up3pins(p1,p2,p3)
#define setOnly4pinsAsOutA(p1,p2,p3,p4) DDRA=up4pins(p1,p2,p3,p4)
#define setOnly5pinsAsOutA(p1,p2,p3,p4,p5) DDRA=up5pins(p1,p2,p3,p4,p5)
#define setOnly6pinsAsOutA(p1,p2,p3,p4,p5,p6) DDRA=up6pins(p1,p2,p3,p4,p5,p6)
#define setOnly7pinsAsOutA(p1,p2,p3,p4,p5,p6,p7) DDRA=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define setOnly8pinsAsOutA(p1,p2,p3,p4,p5,p6,p7,p8) DDRA=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setPinAsOutA(p1) DDRA|=upPin(p1)
#define set2pinsAsOutA(p1,p2) DDRA|=up2pins(p1,p2)
#define set3pinsAsOutA(p1,p2,p3) DDRA|=up3pins(p1,p2,p3)
#define set4pinsAsOutA(p1,p2,p3,p4) DDRA|=up4pins(p1,p2,p3,p4)
#define set5pinsAsOutA(p1,p2,p3,p4,p5) DDRA|=up5pins(p1,p2,p3,p4,p5)
#define set6pinsAsOutA(p1,p2,p3,p4,p5,p6) DDRA|=up6pins(p1,p2,p3,p4,p5,p6)
#define set7pinsAsOutA(p1,p2,p3,p4,p5,p6,p7) DDRA|=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define set8pinsAsOutA(p1,p2,p3,p4,p5,p6,p7,p8) DDRA|=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setPinAsInA(p1) DDRA&=downPin(p1)
#define set2pinsAsInA(p1,p2) DDRA&=down2pins(p1,p2)
#define set3pinsAsInA(p1,p2,p3) DDRA&=down3pins(p1,p2,p3)
#define set4pinsAsInA(p1,p2,p3,p4) DDRA&=down4pins(p1,p2,p3,p4)
#define set5pinsAsInA(p1,p2,p3,p4,p5) DDRA&=down5pins(p1,p2,p3,p4,p5)
#define set6pinsAsInA(p1,p2,p3,p4,p5,p6) DDRA&=down6pins(p1,p2,p3,p4,p5,p6)
#define set7pinsAsInA(p1,p2,p3,p4,p5,p6,p7) DDRA&=down7pins(p1,p2,p3,p4,p5,p6,p7)
#define set8pinsAsInA(p1,p2,p3,p4,p5,p6,p7,p8) DDRA&=down8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setAllAsOutA DDRA=0xFF
#define setAllAsInA DDRA=0x00
#define setCustomDirectionA(direction) DDRA=direction

#define upOnlyPinA(p1) PORTA=upPin(p1)
#define upOnly2pinsA(p1,p2) PORTA=up2pins(p1,p2)
#define upOnly3pinsA(p1,p2,p3) PORTA=up3pins(p1,p2,p3)
#define upOnly4pinsA(p1,p2,p3,p4) PORTA=up4pins(p1,p2,p3,p4)
#define upOnly5pinsA(p1,p2,p3,p4,p5) PORTA=up5pins(p1,p2,p3,p4,p5)
#define upOnly6pinsA(p1,p2,p3,p4,p5,p6) PORTA=up6pins(p1,p2,p3,p4,p5,p6)
#define upOnly7pinsA(p1,p2,p3,p4,p5,p6,p7) PORTA=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define upOnly8pinsA(p1,p2,p3,p4,p5,p6,p7,p8) PORTA=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define upPinA(p1) PORTA|=upPin(p1)
#define up2pinsA(p1,p2) PORTA|=up2pins(p1,p2)
#define up3pinsA(p1,p2,p3) PORTA|=up3pins(p1,p2,p3)
#define up4pinsA(p1,p2,p3,p4) PORTA|=up4pins(p1,p2,p3,p4)
#define up5pinsA(p1,p2,p3,p4,p5) PORTA|=up5pins(p1,p2,p3,p4,p5)
#define up6pinsA(p1,p2,p3,p4,p5,p6) PORTA|=up6pins(p1,p2,p3,p4,p5,p6)
#define up7pinsA(p1,p2,p3,p4,p5,p6,p7) PORTA|=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define up8pinsA(p1,p2,p3,p4,p5,p6,p7,p8) PORTA|=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define downPinA(p1) PORTA&=downPin(p1)
#define down2pinsA(p1,p2) PORTA&=down2pins(p1,p2)
#define down3pinsA(p1,p2,p3) PORTA&=down3pins(p1,p2,p3)
#define down4pinsA(p1,p2,p3,p4) PORTA&=down4pins(p1,p2,p3,p4)
#define down5pinsA(p1,p2,p3,p4,p5) PORTA&=down5pins(p1,p2,p3,p4,p5)
#define down6pinsA(p1,p2,p3,p4,p5,p6) PORTA&=down6pins(p1,p2,p3,p4,p5,p6)
#define down7pinsA(p1,p2,p3,p4,p5,p6,p7) PORTA&=down7pins(p1,p2,p3,p4,p5,p6,p7)
#define down8pinsA(p1,p2,p3,p4,p5,p6,p7,p8) PORTA&=down8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define upAllA PORTA=0xFF
#define downAllA PORTA=0x00
#define setAllA(custom) PORTA=custom

#define isSetA(p) (PINA&(1<<p))>0
#define isResetA(p) (PINA&(1<<p))==0

#define setOnlyPinAsOutB(p1) DDRB=upPin(p1)
#define setOnly2pinsAsOutB(p1,p2) DDRB=up2pins(p1,p2)
#define setOnly3pinsAsOutB(p1,p2,p3) DDRB=up3pins(p1,p2,p3)
#define setOnly4pinsAsOutB(p1,p2,p3,p4) DDRB=up4pins(p1,p2,p3,p4)
#define setOnly5pinsAsOutB(p1,p2,p3,p4,p5) DDRB=up5pins(p1,p2,p3,p4,p5)
#define setOnly6pinsAsOutB(p1,p2,p3,p4,p5,p6) DDRB=up6pins(p1,p2,p3,p4,p5,p6)
#define setOnly7pinsAsOutB(p1,p2,p3,p4,p5,p6,p7) DDRB=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define setOnly8pinsAsOutB(p1,p2,p3,p4,p5,p6,p7,p8) DDRB=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setPinAsOutB(p1) DDRB|=upPin(p1)
#define set2pinsAsOutB(p1,p2) DDRB|=up2pins(p1,p2)
#define set3pinsAsOutB(p1,p2,p3) DDRB|=up3pins(p1,p2,p3)
#define set4pinsAsOutB(p1,p2,p3,p4) DDRB|=up4pins(p1,p2,p3,p4)
#define set5pinsAsOutB(p1,p2,p3,p4,p5) DDRB|=up5pins(p1,p2,p3,p4,p5)
#define set6pinsAsOutB(p1,p2,p3,p4,p5,p6) DDRB|=up6pins(p1,p2,p3,p4,p5,p6)
#define set7pinsAsOutB(p1,p2,p3,p4,p5,p6,p7) DDRB|=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define set8pinsAsOutB(p1,p2,p3,p4,p5,p6,p7,p8) DDRB|=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setPinAsInB(p1) DDRB&=downPin(p1)
#define set2pinsAsInB(p1,p2) DDRB&=down2pins(p1,p2)
#define set3pinsAsInB(p1,p2,p3) DDRB&=down3pins(p1,p2,p3)
#define set4pinsAsInB(p1,p2,p3,p4) DDRB&=down4pins(p1,p2,p3,p4)
#define set5pinsAsInB(p1,p2,p3,p4,p5) DDRB&=down5pins(p1,p2,p3,p4,p5)
#define set6pinsAsInB(p1,p2,p3,p4,p5,p6) DDRB&=down6pins(p1,p2,p3,p4,p5,p6)
#define set7pinsAsInB(p1,p2,p3,p4,p5,p6,p7) DDRB&=down7pins(p1,p2,p3,p4,p5,p6,p7)
#define set8pinsAsInB(p1,p2,p3,p4,p5,p6,p7,p8) DDRB&=down8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setAllAsOutB DDRB=0xFF
#define setAllAsInB DDRB=0x00
#define setCustomDirectionB(direction) DDRB=direction

#define upOnlyPinB(p1) PORTB=upPin(p1)
#define upOnly2pinsB(p1,p2) PORTB=up2pins(p1,p2)
#define upOnly3pinsB(p1,p2,p3) PORTB=up3pins(p1,p2,p3)
#define upOnly4pinsB(p1,p2,p3,p4) PORTB=up4pins(p1,p2,p3,p4)
#define upOnly5pinsB(p1,p2,p3,p4,p5) PORTB=up5pins(p1,p2,p3,p4,p5)
#define upOnly6pinsB(p1,p2,p3,p4,p5,p6) PORTB=up6pins(p1,p2,p3,p4,p5,p6)
#define upOnly7pinsB(p1,p2,p3,p4,p5,p6,p7) PORTB=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define upOnly8pinsB(p1,p2,p3,p4,p5,p6,p7,p8) PORTB=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define upPinB(p1) PORTB|=upPin(p1)
#define up2pinsB(p1,p2) PORTB|=up2pins(p1,p2)
#define up3pinsB(p1,p2,p3) PORTB|=up3pins(p1,p2,p3)
#define up4pinsB(p1,p2,p3,p4) PORTB|=up4pins(p1,p2,p3,p4)
#define up5pinsB(p1,p2,p3,p4,p5) PORTB|=up5pins(p1,p2,p3,p4,p5)
#define up6pinsB(p1,p2,p3,p4,p5,p6) PORTB|=up6pins(p1,p2,p3,p4,p5,p6)
#define up7pinsB(p1,p2,p3,p4,p5,p6,p7) PORTB|=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define up8pinsB(p1,p2,p3,p4,p5,p6,p7,p8) PORTB|=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define downPinB(p1) PORTB&=downPin(p1)
#define down2pinsB(p1,p2) PORTB&=down2pins(p1,p2)
#define down3pinsB(p1,p2,p3) PORTB&=down3pins(p1,p2,p3)
#define down4pinsB(p1,p2,p3,p4) PORTB&=down4pins(p1,p2,p3,p4)
#define down5pinsB(p1,p2,p3,p4,p5) PORTB&=down5pins(p1,p2,p3,p4,p5)
#define down6pinsB(p1,p2,p3,p4,p5,p6) PORTB&=down6pins(p1,p2,p3,p4,p5,p6)
#define down7pinsB(p1,p2,p3,p4,p5,p6,p7) PORTB&=down7pins(p1,p2,p3,p4,p5,p6,p7)
#define down8pinsB(p1,p2,p3,p4,p5,p6,p7,p8) PORTB&=down8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define upAllB PORTB=0xFF
#define downAllB PORTB=0x00
#define setAllB(custom) PORTB=custom

#define isSetB(p) (PINB&(1<<p))>0
#define isResetB(p) (PINB&(1<<p))==0

#define setOnlyPinAsOutC(p1) DDRC=upPin(p1)
#define setOnly2pinsAsOutC(p1,p2) DDRC=up2pins(p1,p2)
#define setOnly3pinsAsOutC(p1,p2,p3) DDRC=up3pins(p1,p2,p3)
#define setOnly4pinsAsOutC(p1,p2,p3,p4) DDRC=up4pins(p1,p2,p3,p4)
#define setOnly5pinsAsOutC(p1,p2,p3,p4,p5) DDRC=up5pins(p1,p2,p3,p4,p5)
#define setOnly6pinsAsOutC(p1,p2,p3,p4,p5,p6) DDRC=up6pins(p1,p2,p3,p4,p5,p6)
#define setOnly7pinsAsOutC(p1,p2,p3,p4,p5,p6,p7) DDRC=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define setOnly8pinsAsOutC(p1,p2,p3,p4,p5,p6,p7,p8) DDRC=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setPinAsOutC(p1) DDRC|=upPin(p1)
#define set2pinsAsOutC(p1,p2) DDRC|=up2pins(p1,p2)
#define set3pinsAsOutC(p1,p2,p3) DDRC|=up3pins(p1,p2,p3)
#define set4pinsAsOutC(p1,p2,p3,p4) DDRC|=up4pins(p1,p2,p3,p4)
#define set5pinsAsOutC(p1,p2,p3,p4,p5) DDRC|=up5pins(p1,p2,p3,p4,p5)
#define set6pinsAsOutC(p1,p2,p3,p4,p5,p6) DDRC|=up6pins(p1,p2,p3,p4,p5,p6)
#define set7pinsAsOutC(p1,p2,p3,p4,p5,p6,p7) DDRC|=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define set8pinsAsOutC(p1,p2,p3,p4,p5,p6,p7,p8) DDRC|=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setPinAsInC(p1) DDRC&=downPin(p1)
#define set2pinsAsInC(p1,p2) DDRC&=down2pins(p1,p2)
#define set3pinsAsInC(p1,p2,p3) DDRC&=down3pins(p1,p2,p3)
#define set4pinsAsInC(p1,p2,p3,p4) DDRC&=down4pins(p1,p2,p3,p4)
#define set5pinsAsInC(p1,p2,p3,p4,p5) DDRC&=down5pins(p1,p2,p3,p4,p5)
#define set6pinsAsInC(p1,p2,p3,p4,p5,p6) DDRC&=down6pins(p1,p2,p3,p4,p5,p6)
#define set7pinsAsInC(p1,p2,p3,p4,p5,p6,p7) DDRC&=down7pins(p1,p2,p3,p4,p5,p6,p7)
#define set8pinsAsInC(p1,p2,p3,p4,p5,p6,p7,p8) DDRC&=down8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setAllAsOutC DDRC=0xFF
#define setAllAsInC DDRC=0x00
#define setCustomDirectionC(direction) DDRC=direction

#define upOnlyPinC(p1) PORTC=upPin(p1)
#define upOnly2pinsC(p1,p2) PORTC=up2pins(p1,p2)
#define upOnly3pinsC(p1,p2,p3) PORTC=up3pins(p1,p2,p3)
#define upOnly4pinsC(p1,p2,p3,p4) PORTC=up4pins(p1,p2,p3,p4)
#define upOnly5pinsC(p1,p2,p3,p4,p5) PORTC=up5pins(p1,p2,p3,p4,p5)
#define upOnly6pinsC(p1,p2,p3,p4,p5,p6) PORTC=up6pins(p1,p2,p3,p4,p5,p6)
#define upOnly7pinsC(p1,p2,p3,p4,p5,p6,p7) PORTC=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define upOnly8pinsC(p1,p2,p3,p4,p5,p6,p7,p8) PORTC=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define upPinC(p1) PORTC|=upPin(p1)
#define up2pinsC(p1,p2) PORTC|=up2pins(p1,p2)
#define up3pinsC(p1,p2,p3) PORTC|=up3pins(p1,p2,p3)
#define up4pinsC(p1,p2,p3,p4) PORTC|=up4pins(p1,p2,p3,p4)
#define up5pinsC(p1,p2,p3,p4,p5) PORTC|=up5pins(p1,p2,p3,p4,p5)
#define up6pinsC(p1,p2,p3,p4,p5,p6) PORTC|=up6pins(p1,p2,p3,p4,p5,p6)
#define up7pinsC(p1,p2,p3,p4,p5,p6,p7) PORTC|=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define up8pinsC(p1,p2,p3,p4,p5,p6,p7,p8) PORTC|=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define downPinC(p1) PORTC&=downPin(p1)
#define down2pinsC(p1,p2) PORTC&=down2pins(p1,p2)
#define down3pinsC(p1,p2,p3) PORTC&=down3pins(p1,p2,p3)
#define down4pinsC(p1,p2,p3,p4) PORTC&=down4pins(p1,p2,p3,p4)
#define down5pinsC(p1,p2,p3,p4,p5) PORTC&=down5pins(p1,p2,p3,p4,p5)
#define down6pinsC(p1,p2,p3,p4,p5,p6) PORTC&=down6pins(p1,p2,p3,p4,p5,p6)
#define down7pinsC(p1,p2,p3,p4,p5,p6,p7) PORTC&=down7pins(p1,p2,p3,p4,p5,p6,p7)
#define down8pinsC(p1,p2,p3,p4,p5,p6,p7,p8) PORTC&=down8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define upAllC PORTC=0xFF
#define downAllC PORTC=0x00
#define setAllC(custom) PORTC=custom

#define isSetC(p) (PINC&(1<<p))>0
#define isResetC(p) (PINC&(1<<p))==0

#define setOnlyPinAsOutD(p1) DDRD=upPin(p1)
#define setOnly2pinsAsOutD(p1,p2) DDRD=up2pins(p1,p2)
#define setOnly3pinsAsOutD(p1,p2,p3) DDRD=up3pins(p1,p2,p3)
#define setOnly4pinsAsOutD(p1,p2,p3,p4) DDRD=up4pins(p1,p2,p3,p4)
#define setOnly5pinsAsOutD(p1,p2,p3,p4,p5) DDRD=up5pins(p1,p2,p3,p4,p5)
#define setOnly6pinsAsOutD(p1,p2,p3,p4,p5,p6) DDRD=up6pins(p1,p2,p3,p4,p5,p6)
#define setOnly7pinsAsOutD(p1,p2,p3,p4,p5,p6,p7) DDRD=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define setOnly8pinsAsOutD(p1,p2,p3,p4,p5,p6,p7,p8) DDRD=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setPinAsOutD(p1) DDRD|=upPin(p1)
#define set2pinsAsOutD(p1,p2) DDRD|=up2pins(p1,p2)
#define set3pinsAsOutD(p1,p2,p3) DDRD|=up3pins(p1,p2,p3)
#define set4pinsAsOutD(p1,p2,p3,p4) DDRD|=up4pins(p1,p2,p3,p4)
#define set5pinsAsOutD(p1,p2,p3,p4,p5) DDRD|=up5pins(p1,p2,p3,p4,p5)
#define set6pinsAsOutD(p1,p2,p3,p4,p5,p6) DDRD|=up6pins(p1,p2,p3,p4,p5,p6)
#define set7pinsAsOutD(p1,p2,p3,p4,p5,p6,p7) DDRD|=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define set8pinsAsOutD(p1,p2,p3,p4,p5,p6,p7,p8) DDRD|=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setPinAsInD(p1) DDRD&=downPin(p1)
#define set2pinsAsInD(p1,p2) DDRD&=down2pins(p1,p2)
#define set3pinsAsInD(p1,p2,p3) DDRD&=down3pins(p1,p2,p3)
#define set4pinsAsInD(p1,p2,p3,p4) DDRD&=down4pins(p1,p2,p3,p4)
#define set5pinsAsInD(p1,p2,p3,p4,p5) DDRD&=down5pins(p1,p2,p3,p4,p5)
#define set6pinsAsInD(p1,p2,p3,p4,p5,p6) DDRD&=down6pins(p1,p2,p3,p4,p5,p6)
#define set7pinsAsInD(p1,p2,p3,p4,p5,p6,p7) DDRD&=down7pins(p1,p2,p3,p4,p5,p6,p7)
#define set8pinsAsInD(p1,p2,p3,p4,p5,p6,p7,p8) DDRD&=down8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define setAllAsOutD DDRD=0xFF
#define setAllAsInD DDRD=0x00
#define setCustomDirectionD(direction) DDRD=direction

#define upOnlyPinD(p1) PORTD=upPin(p1)
#define upOnly2pinsD(p1,p2) PORTD=up2pins(p1,p2)
#define upOnly3pinsD(p1,p2,p3) PORTD=up3pins(p1,p2,p3)
#define upOnly4pinsD(p1,p2,p3,p4) PORTD=up4pins(p1,p2,p3,p4)
#define upOnly5pinsD(p1,p2,p3,p4,p5) PORTD=up5pins(p1,p2,p3,p4,p5)
#define upOnly6pinsD(p1,p2,p3,p4,p5,p6) PORTD=up6pins(p1,p2,p3,p4,p5,p6)
#define upOnly7pinsD(p1,p2,p3,p4,p5,p6,p7) PORTD=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define upOnly8pinsD(p1,p2,p3,p4,p5,p6,p7,p8) PORTD=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define upPinD(p1) PORTD|=upPin(p1)
#define up2pinsD(p1,p2) PORTD|=up2pins(p1,p2)
#define up3pinsD(p1,p2,p3) PORTD|=up3pins(p1,p2,p3)
#define up4pinsD(p1,p2,p3,p4) PORTD|=up4pins(p1,p2,p3,p4)
#define up5pinsD(p1,p2,p3,p4,p5) PORTD|=up5pins(p1,p2,p3,p4,p5)
#define up6pinsD(p1,p2,p3,p4,p5,p6) PORTD|=up6pins(p1,p2,p3,p4,p5,p6)
#define up7pinsD(p1,p2,p3,p4,p5,p6,p7) PORTD|=up7pins(p1,p2,p3,p4,p5,p6,p7)
#define up8pinsD(p1,p2,p3,p4,p5,p6,p7,p8) PORTD|=up8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define downPinD(p1) PORTD&=downPin(p1)
#define down2pinsD(p1,p2) PORTD&=down2pins(p1,p2)
#define down3pinsD(p1,p2,p3) PORTD&=down3pins(p1,p2,p3)
#define down4pinsD(p1,p2,p3,p4) PORTD&=down4pins(p1,p2,p3,p4)
#define down5pinsD(p1,p2,p3,p4,p5) PORTD&=down5pins(p1,p2,p3,p4,p5)
#define down6pinsD(p1,p2,p3,p4,p5,p6) PORTD&=down6pins(p1,p2,p3,p4,p5,p6)
#define down7pinsD(p1,p2,p3,p4,p5,p6,p7) PORTD&=down7pins(p1,p2,p3,p4,p5,p6,p7)
#define down8pinsD(p1,p2,p3,p4,p5,p6,p7,p8) PORTD&=down8pins(p1,p2,p3,p4,p5,p6,p7,p8)

#define upAllD PORTD=0xFF
#define downAllD PORTD=0x00
#define setAllD(custom) PORTD=custom

#define isSetD(p) (PIND&(1<<p))>0
#define isResetD(p) (PIND&(1<<p))==0

