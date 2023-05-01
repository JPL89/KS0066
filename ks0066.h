// @File                KS0066.H	 		
// @Author		JOSIMAR PEREIRA LEITE
// @country		Brazil
// @Date		11/10/22
//
//
// Copyright (C) 2021  JOSIMAR PEREIRA LEITE
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//

#ifndef KS0066_H
#define KS0066_H

#include <xc.h>

#define RS PORTCbits.RC4
#define RW PORTCbits.RC5
#define EN PORTCbits.RC6
#define D4 PORTBbits.RB3
#define D5 PORTBbits.RB4
#define D6 PORTBbits.RB5
#define D7 PORTCbits.RC7

#define RS_TRIS TRISC     
#define RW_TRIS TRISC     
#define EN_TRIS TRISC     
#define D4_TRIS TRISB     
#define D5_TRIS TRISB     
#define D6_TRIS TRISB     
#define D7_TRIS TRISC

void KS0066_Command(unsigned char data);
void KS0066_Char(unsigned char data);
void KS0066_Goto(unsigned char x, unsigned char y);
void KS0066_StringXY(const char *data, unsigned char x, unsigned char y);
void KS0066_String(const char *data);
void KS0066_IntXY(long num, unsigned char x, unsigned char y);
void KS0066_Int(long num);
void KS0066_FloatXY(double f, long decimal, unsigned char x, unsigned char y);
void KS0066_Float(double f, long decimal, unsigned char x, unsigned char y);
void KS0066_Clear(unsigned char Line);
void KS0066_Custom(unsigned char loc, const unsigned char data[]);
void KS0066_Init(void);

#endif // KS0066_H