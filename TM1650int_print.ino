#include <Wire.h>
#include <TM1650.h>
/*
 code Owner:vivibobovivibobo@64gmail.com
 connection:
gnd>>>>>gnd
Vcc>>>>>5v
SDA>>>>>A4    arduino UNO or another.
SCL>>>>>A5
*/
TM1650 d;

void myprin (int x)
{int a,b,c,e;
String a1,b1,c1,d1,t;
char s[4];
a=x % 10 ;
b=(x / 10) % 10 ;
c=(x / 100) % 10 ;
e=(x / 1000) % 10 ;
a1=String(e);
b1=String(c);
c1=String(b);
d1=String(a);
t=a1+b1+c1+d1;
t.toCharArray(s,5);
d.displayString(s);
}


void setup() 
{
  Wire.begin(); //Join the bus as master

 // Serial.begin(38400); //Start serial communication at 9600 for debug statements
 // Serial.println("TM1650 Example Code");

  d.init();
   
}

void loop() 
{

  
 
 for (int i=0; i<10000; i++) {
   //d.setBrightness(i);
    delay(100);
     myprin(i);
 }
  
  
  
}
