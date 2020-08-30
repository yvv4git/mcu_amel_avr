// main.c
// 
// A simple blinky program for ATtiny85
// Connect red LED at pin 2 (PB3)

#include <avr/io.h>
#include <util/delay.h>
 
 
int main (void)
{
    DDRB = 0b00001000;

    // main loop
    while (1) {
    



    }
 
  return 1;
}

void blinkPb1()
{
    // set PB1 high
    PORTB = 0b00000010;
    _delay_ms(5000);
    // set PB1 low
    PORTB = 0b00000000;
    _delay_ms(200);

    for (i = 1; i < 3; i++) {
        PORTB = 0b00000010;
        _delay_ms(200);
        // set PB1 low
        PORTB = 0b00000000;
        _delay_ms(200);
    }
}

void blinkPb3()
{
    // set PB3 high
    PORTB = 0b00001000; 
    _delay_ms(5000);
    // set PB3 low
    PORTB = 0b00000000;
    _delay_ms(200);

    for (i = 1; i < 3; i++) {
        PORTB = 0b00001000;
        _delay_ms(200);
        // set PB1 low
        PORTB = 0b00000000;
        _delay_ms(200);
    }
}

void blinkPb4()
{
    // set PB4 high
    PORTB = 0b00010000;
    _delay_ms(5000);
    // set PB4 low
    PORTB = 0b00000000;
    _delay_ms(200);

    for (i = 1; i < 3; i++) {
        PORTB = 0b00010000;
        _delay_ms(200);
        // set PB1 low
        PORTB = 0b00000000;
        _delay_ms(200);
    }
}