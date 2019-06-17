/* 
 * File: setup.c  
 * Author: 
 * Comments:
 * Revision history: 
 */
 
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include "setup.h"

void InitDevice()
{
    // Run at 16 MHz
    internal_16();
    
    //Setup Analog Pin
    TRISA = 0;
    LATA = 0;
    ANSELA = 0;
    
    //SET I2C
    
    
    
}

#endif	/* XC_HEADER_TEMPLATE_H */
