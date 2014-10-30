
#ifndef LineSensor_H
    #define LineSensor_H

    #define F_CLK 16000000UL
    #define BAUD_RATE 9600L

    #define LINE_TERMINATOR 0x0A    // ASCII Line Feed

    #define BUF_LEN 100

    #define MAX_FIELDS 20           // must be less than 127

    // Configure Liquid Crystal Display
	// MASTER Arduino to control Line Tracker pins A0-A4
    #define LineT1 A0
    #define LineT2 A1
    #define LineT3 A2           
    #define LineT4 A3           
    #define LineT5 A4   

    // Functions
    void LineSensor_init(void);
    uint16_t get_SensorLine(uint8_t N);

#endif
