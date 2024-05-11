/*
 * File:   S27042.c
 * Author: admin
 *
 * Created on 30 January, 2024, 10:50 AM
 */


#include <xc.h>

void main(void) {
    unsigned i,j,s;
    TRISB=0;
    LATB=0;
    i=0X0A;
    j=0X05;
    s=i+j;
    PORTB=s;
    PORTC=i;
    PORTD=j;
    
    
    return;
}
