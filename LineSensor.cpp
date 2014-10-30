#include <Arduino.h>

// AVR Libc includes
    #include <avr/io.h>

    #include <stdint.h>

    #include "LineSensor.h"

/** LineSensor_Init
 *
 * Summary:
 * Initialize the pin values used by the Line Sensor.
 *
 * Pin Assignments:
 * Pins: A0, A1, A2, A3, A4   
*/
void LineSensor_init(void)
{
    pinMode(A0,INPUT);
    pinMode(A1,INPUT);
    pinMode(A2,INPUT);
    pinMode(A3,INPUT);
    pinMode(A4,INPUT);
}



/** get_SensorLine
 *
 * Summary:
 * Obtain the value retrieved by a certain Sensor ( 1-5 )
 *
 * Parameters:
 * N is the pin number. ie A0,A1,A2,A3, or A4 only.
 *
 * Return Value:
 * Returns the value that the line sensor collects.
 *
 */
uint16_t get_SensorLine(uint8_t N)
{

    uint16_t Line_follower = 0;
    
    Line_follower = analogRead(N);

    return Line_follower ;
}

