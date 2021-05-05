/*
 * File:   newavr-main.c
 * Author: daniel ayala 
 *
 * Created on 3 de mayo de 2021, 11:51 PM
 */


#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
int main(void) {
    DDRB = 0xFF;
    while (1) {
    PORTB = 0b00000001;
    _delay_ms(2000);
    PORTB = 000000000;
    _delay_ms(2000);
    }
}
