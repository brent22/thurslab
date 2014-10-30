// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.

    #include <avr/io.h>
    #include <avr/interrupt.h>
    #include <stdint.h>
    #include <string.h>
    #include <ctype.h>
    #include <Servo.h> 
    
    // our includes
    #include "LineSensor.h"
    #include "LineSensor.cpp"

uint8_t get_line(void);
 


 
void setup() 
{ 
  
  Serial.begin(9600);
  LineSensor_init();
  
} 
 
 
void loop()
{ 
  // A0
  Serial.println("A0 = ");
  Serial.println(get_SensorLine(A0));
  Serial.println("\n");

  // A1
  Serial.println("A1 = ");
  Serial.println(get_SensorLine(A1));
  Serial.println("\n");
  
  // A2
  Serial.println("A2 = ");
  Serial.println(get_SensorLine(A2));
  Serial.println("\n");
  
  // A3
  Serial.println("A3 = ");
  Serial.println(get_SensorLine(A3));
  Serial.println("\n");
  
  // A4
  Serial.println("A4 = ");
  Serial.println(get_SensorLine(A4));
  Serial.println("\n");
  
  // Delay
  delay(150); 
  
}

