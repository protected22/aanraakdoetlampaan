#include <CapacitiveSensor.h>
CapacitiveSensor touchSwitch = CapacitiveSensor(4, 2);
int LEDpin = 11;
String Touch = "Touch"; 
String Ready = "Ready!"; 
const int buzzer = 9; //buzzer to arduino pin 9


void setup(){
pinMode(LEDpin, OUTPUT);
Serial.begin(9600);
pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
}
void loop(){
long val = touchSwitch.capacitiveSensor(100);
if (val > 3000) {
digitalWrite(LEDpin, HIGH);
Serial.println(Touch); // print sensor output
tone(buzzer, 1100); // Send 1KHz sound signal...
} else {
digitalWrite(LEDpin, LOW);
Serial.println(Ready); // print sensor output
noTone(buzzer);     // Stop sound...
}





//debuging
//Serial.println(val); // print sensor output
//tone(buzzer, 1100); // Send 1KHz sound signal...
//delay(500);
//tone(buzzer, 800); // Send 1KHz sound signal...
//delay(500);
//tone(buzzer, 500); // Send 1KHz sound signal...
//delay(500);
//tone(buzzer, 500); // Send 1KHz sound signal...
//delay(500);
//tone(buzzer, 800); // Send 1KHz sound signal...
//delay(500);
//tone(buzzer, 1100); // Send 1KHz sound signal...
//delay(500);
//noTone(buzzer);     // Stop sound...
////Serial.println(val); // print sensor output
}
