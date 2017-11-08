/*! \file font5x7.h \brief Graphic LCD Font (Ascii Characters). */
//*****************************************************************************
//
// File Name	: 'font5x7.h'
// Title		: Graphic LCD Font (Ascii Charaters)
// Author		: Pascal Stang
// Date			: 10/19/2001
// Revised		: 10/19/2001
// Version		: 0.1
// Target MCU	: Atmel AVR
// Editor Tabs	: 4
//
//*****************************************************************************

#ifndef FONT5X7_H
#define FONT5X7_H

// standard ascii 5x7 font
// defines ascii characters 0x20-0x7F (32-127)  __attribute__ ((progmem))

 const unsigned char Font5x7[480] = {
 0x00, 0x00, 0x00, 0x00, 0x00,  // (space)
 0x00, 0x00, 0x7D, 0x00, 0x00,  // !
 0x00, 0x70, 0x00, 0x70, 0x00,  // "
 0x14, 0x7F, 0x14, 0x7F, 0x14,  // #
 0x12, 0x2A, 0x7F, 0x2A, 0x24,  // $
 0x62, 0x64, 0x08, 0x13, 0x23,  // %
 0x36, 0x49, 0x55, 0x22, 0x05,  // &
 0x00, 0x50, 0x60, 0x00, 0x00,  // '
 0x00, 0x1C, 0x22, 0x41, 0x00,  // (
 0x00, 0x41, 0x22, 0x1C, 0x00,  // )
 0x08, 0x2A, 0x1C, 0x2A, 0x08,  // *
 0x08, 0x08, 0x3E, 0x08, 0x08,  // +
 0x00, 0x05, 0x06, 0x00, 0x00,  // ,
 0x08, 0x08, 0x08, 0x08, 0x08,  // -
 0x00, 0x03, 0x03, 0x00, 0x00,  // .
 0x02, 0x04, 0x08, 0x10, 0x20,  // /
 0x3E, 0x45, 0x49, 0x51, 0x3E,  // 0
 0x00, 0x21, 0x7F, 0x01, 0x00,  // 1
 0x21, 0x43, 0x45, 0x49, 0x31,  // 2
 0x42, 0x41, 0x51, 0x69, 0x46,  // 3
 0x0C, 0x14, 0x24, 0x7F, 0x04,  // 4
 0x72, 0x51, 0x51, 0x51, 0x4E,  // 5
 0x1E, 0x29, 0x49, 0x49, 0x06,  // 6
 0x40, 0x47, 0x48, 0x50, 0x60,  // 7
 0x36, 0x49, 0x49, 0x49, 0x36,  // 8
 0x30, 0x49, 0x49, 0x4A, 0x3C,  // 9
 0x00, 0x36, 0x36, 0x00, 0x00,  // :
 0x00, 0x35, 0x36, 0x00, 0x00,  // ;
 0x00, 0x08, 0x14, 0x22, 0x41,  // <
 0x14, 0x14, 0x14, 0x14, 0x14,  // =
 0x41, 0x22, 0x14, 0x08, 0x00,  // >
 0x20, 0x40, 0x45, 0x48, 0x30,  // ?
 0x26, 0x49, 0x4F, 0x41, 0x3E,  // @
 0x3F, 0x44, 0x44, 0x44, 0x3F,  // A
 0x7F, 0x49, 0x49, 0x49, 0x36,  // B
 0x3E, 0x41, 0x41, 0x41, 0x22,  // C
 0x7F, 0x41, 0x41, 0x22, 0x1C,  // D
 0x7F, 0x49, 0x49, 0x49, 0x41,  // E
 0x7F, 0x48, 0x48, 0x40, 0x40,  // F
 0x3E, 0x41, 0x41, 0x45, 0x26,  // G
 0x7F, 0x08, 0x08, 0x08, 0x7F,  // H
 0x00, 0x41, 0x7F, 0x41, 0x00,  // I
 0x02, 0x01, 0x41, 0x7E, 0x40,  // J
 0x7F, 0x08, 0x14, 0x22, 0x41,  // K
 0x7F, 0x01, 0x01, 0x01, 0x01,  // L
 0x7F, 0x20, 0x10, 0x20, 0x7F,  // M
 0x7F, 0x10, 0x08, 0x04, 0x7F,  // N
 0x3E, 0x41, 0x41, 0x41, 0x3E,  // O
 0x7F, 0x48, 0x48, 0x48, 0x30,  // P
 0x3E, 0x41, 0x45, 0x42, 0x3D,  // Q
 0x7F, 0x48, 0x4C, 0x4A, 0x31,  // R
 0x31, 0x49, 0x49, 0x49, 0x46,  // S
 0x40, 0x40, 0x7F, 0x40, 0x40,  // T
 0x7E, 0x01, 0x01, 0x01, 0x7E,  // U
 0x7C, 0x02, 0x01, 0x02, 0x7C,  // V
 0x7F, 0x02, 0x0C, 0x02, 0x7F,  // W
 0x63, 0x14, 0x08, 0x14, 0x63,  // X
 0x60, 0x10, 0x0F, 0x10, 0x60,  // Y
 0x43, 0x45, 0x49, 0x51, 0x61,  // Z
 0x00, 0x00, 0x7F, 0x41, 0x41,  // [
 0x20, 0x10, 0x08, 0x04, 0x02,  // "\"
 0x41, 0x41, 0x7F, 0x00, 0x00,  // ]
 0x10, 0x20, 0x40, 0x20, 0x10,  // ^
 0x01, 0x01, 0x01, 0x01, 0x01,  // _
 0x00, 0x40, 0x20, 0x10, 0x00,  // `
 0x02, 0x15, 0x15, 0x15, 0x0F,  // a
 0x7F, 0x09, 0x11, 0x11, 0x0E,  // b
 0x0E, 0x11, 0x11, 0x11, 0x02,  // c
 0x0E, 0x11, 0x11, 0x09, 0x7F,  // d
 0x0E, 0x15, 0x15, 0x15, 0x0C,  // e
 0x08, 0x3F, 0x48, 0x40, 0x20,  // f
 0x08, 0x14, 0x15, 0x15, 0x1E,  // g
 0x7F, 0x08, 0x10, 0x10, 0x0F,  // h
 0x00, 0x11, 0x5F, 0x01, 0x00,  // i
 0x02, 0x01, 0x11, 0x5E, 0x00,  // j
 0x00, 0x7F, 0x04, 0x0A, 0x11,  // k
 0x00, 0x41, 0x7F, 0x01, 0x00,  // l
 0x1F, 0x10, 0x0C, 0x10, 0x0F,  // m
 0x1F, 0x08, 0x10, 0x10, 0x0F,  // n
 0x0E, 0x11, 0x11, 0x11, 0x0E,  // o
 0x1F, 0x14, 0x14, 0x14, 0x08,  // p
 0x08, 0x14, 0x14, 0x0C, 0x1F,  // q
 0x1F, 0x08, 0x10, 0x10, 0x08,  // r
 0x09, 0x15, 0x15, 0x15, 0x02,  // s
 0x10, 0x7E, 0x11, 0x01, 0x02,  // t
 0x1E, 0x01, 0x01, 0x02, 0x1F,  // u
 0x1C, 0x02, 0x01, 0x02, 0x1C,  // v
 0x1E, 0x01, 0x06, 0x01, 0x1E,  // w
 0x11, 0x0A, 0x04, 0x0A, 0x11,  // x
 0x18, 0x05, 0x05, 0x05, 0x1E,  // y
 0x11, 0x13, 0x15, 0x19, 0x11,  // z
 0x00, 0x08, 0x36, 0x41, 0x00,  // {
 0x00, 0x00, 0x7F, 0x00, 0x00,  // |
 0x00, 0x41, 0x36, 0x08, 0x00,  // }
 0x08, 0x08, 0x2A, 0x1C, 0x08,  // ->
 0x08, 0x1C, 0x2A, 0x08, 0x08,  // <-
};


/*
 const unsigned char Font5x7[] = {
	0x00, 0x00, 0x00, 0x00, 0x00,// (space)
	0x00, 0x00, 0x5F, 0x00, 0x00,// !
	0x00, 0x07, 0x00, 0x07, 0x00,// "
	0x14, 0x7F, 0x14, 0x7F, 0x14,// #
	0x24, 0x2A, 0x7F, 0x2A, 0x12,// $
	0x23, 0x13, 0x08, 0x64, 0x62,// %
	0x36, 0x49, 0x55, 0x22, 0x50,// &
	0x00, 0x05, 0x03, 0x00, 0x00,// '
	0x00, 0x1C, 0x22, 0x41, 0x00,// (
	0x00, 0x41, 0x22, 0x1C, 0x00,// )
	0x08, 0x2A, 0x1C, 0x2A, 0x08,// *
	0x08, 0x08, 0x3E, 0x08, 0x08,// +
	0x00, 0x50, 0x30, 0x00, 0x00,// ,
	0x08, 0x08, 0x08, 0x08, 0x08,// -
	0x00, 0x60, 0x60, 0x00, 0x00,// .
	0x20, 0x10, 0x08, 0x04, 0x02,// /
	0x3E, 0x51, 0x49, 0x45, 0x3E,// 0
	0x00, 0x42, 0x7F, 0x40, 0x00,// 1
	0x42, 0x61, 0x51, 0x49, 0x46,// 2
	0x21, 0x41, 0x45, 0x4B, 0x31,// 3
	0x18, 0x14, 0x12, 0x7F, 0x10,// 4
	0x27, 0x45, 0x45, 0x45, 0x39,// 5
	0x3C, 0x4A, 0x49, 0x49, 0x30,// 6
	0x01, 0x71, 0x09, 0x05, 0x03,// 7
	0x36, 0x49, 0x49, 0x49, 0x36,// 8
	0x06, 0x49, 0x49, 0x29, 0x1E,// 9
	0x00, 0x36, 0x36, 0x00, 0x00,// :
	0x00, 0x56, 0x36, 0x00, 0x00,// ;
	0x00, 0x08, 0x14, 0x22, 0x41,// <
	0x14, 0x14, 0x14, 0x14, 0x14,// =
	0x41, 0x22, 0x14, 0x08, 0x00,// >
	0x02, 0x01, 0x51, 0x09, 0x06,// ?
	0x32, 0x49, 0x79, 0x41, 0x3E,// @
	0x7E, 0x11, 0x11, 0x11, 0x7E,// A
	0x7F, 0x49, 0x49, 0x49, 0x36,// B
	0x3E, 0x41, 0x41, 0x41, 0x22,// C
	0x7F, 0x41, 0x41, 0x22, 0x1C,// D
	0x7F, 0x49, 0x49, 0x49, 0x41,// E
	0x7F, 0x09, 0x09, 0x01, 0x01,// F
	0x3E, 0x41, 0x41, 0x51, 0x32,// G
	0x7F, 0x08, 0x08, 0x08, 0x7F,// H
	0x00, 0x41, 0x7F, 0x41, 0x00,// I
	0x20, 0x40, 0x41, 0x3F, 0x01,// J
	0x7F, 0x08, 0x14, 0x22, 0x41,// K
	0x7F, 0x40, 0x40, 0x40, 0x40,// L
	0x7F, 0x02, 0x04, 0x02, 0x7F,// M
	0x7F, 0x04, 0x08, 0x10, 0x7F,// N
	0x3E, 0x41, 0x41, 0x41, 0x3E,// O
	0x7F, 0x09, 0x09, 0x09, 0x06,// P
	0x3E, 0x41, 0x51, 0x21, 0x5E,// Q
	0x7F, 0x09, 0x19, 0x29, 0x46,// R
	0x46, 0x49, 0x49, 0x49, 0x31,// S
	0x01, 0x01, 0x7F, 0x01, 0x01,// T
	0x3F, 0x40, 0x40, 0x40, 0x3F,// U
	0x1F, 0x20, 0x40, 0x20, 0x1F,// V
	0x7F, 0x20, 0x18, 0x20, 0x7F,// W
	0x63, 0x14, 0x08, 0x14, 0x63,// X
	0x03, 0x04, 0x78, 0x04, 0x03,// Y
	0x61, 0x51, 0x49, 0x45, 0x43,// Z
	0x00, 0x00, 0x7F, 0x41, 0x41,// [
	0x02, 0x04, 0x08, 0x10, 0x20,// "\"
	0x41, 0x41, 0x7F, 0x00, 0x00,// ]
	0x04, 0x02, 0x01, 0x02, 0x04,// ^
	0x40, 0x40, 0x40, 0x40, 0x40,// _
	0x00, 0x01, 0x02, 0x04, 0x00,// `
	0x20, 0x54, 0x54, 0x54, 0x78,// a
	0x7F, 0x48, 0x44, 0x44, 0x38,// b
	0x38, 0x44, 0x44, 0x44, 0x20,// c
	0x38, 0x44, 0x44, 0x48, 0x7F,// d
	0x38, 0x54, 0x54, 0x54, 0x18,// e
	0x08, 0x7E, 0x09, 0x01, 0x02,// f
	0x08, 0x14, 0x54, 0x54, 0x3C,// g
	0x7F, 0x08, 0x04, 0x04, 0x78,// h
	0x00, 0x44, 0x7D, 0x40, 0x00,// i
	0x20, 0x40, 0x44, 0x3D, 0x00,// j
	0x00, 0x7F, 0x10, 0x28, 0x44,// k
	0x00, 0x41, 0x7F, 0x40, 0x00,// l
	0x7C, 0x04, 0x18, 0x04, 0x78,// m
	0x7C, 0x08, 0x04, 0x04, 0x78,// n
	0x38, 0x44, 0x44, 0x44, 0x38,// o
	0x7C, 0x14, 0x14, 0x14, 0x08,// p
	0x08, 0x14, 0x14, 0x18, 0x7C,// q
	0x7C, 0x08, 0x04, 0x04, 0x08,// r
	0x48, 0x54, 0x54, 0x54, 0x20,// s
	0x04, 0x3F, 0x44, 0x40, 0x20,// t
	0x3C, 0x40, 0x40, 0x20, 0x7C,// u
	0x1C, 0x20, 0x40, 0x20, 0x1C,// v
	0x3C, 0x40, 0x30, 0x40, 0x3C,// w
	0x44, 0x28, 0x10, 0x28, 0x44,// x
	0x0C, 0x50, 0x50, 0x50, 0x3C,// y
	0x44, 0x64, 0x54, 0x4C, 0x44,// z
	0x00, 0x08, 0x36, 0x41, 0x00,// {
	0x00, 0x00, 0x7F, 0x00, 0x00,// |
	0x00, 0x41, 0x36, 0x08, 0x00,// }
	0x08, 0x08, 0x2A, 0x1C, 0x08,// ->
	0x08, 0x1C, 0x2A, 0x08, 0x08 // <-
};*/


#endif
/*
const unsigned char  Font5x6[320] = {
 0x00, 0x00, 0x00, 0x00, 0x00, // chr: ' '  (2 wide)
 0x7A, 0x00, 0x00, 0x00, 0x00, // chr: '!'  (1 wide)
 0x60, 0x00, 0x60, 0x00, 0x00, // chr: '"'  (3 wide)
 0x28, 0x7C, 0x28, 0x7C, 0x28, // chr: '#'  (5 wide)
 0x24, 0x54, 0x7E, 0x54, 0x48, // chr: '$'  (5 wide)
 0x22, 0x04, 0x08, 0x10, 0x22, // chr: '%'  (5 wide)
 0x2C, 0x52, 0x2A, 0x04, 0x0A, // chr: '&'  (5 wide)
 0x20, 0x40, 0x00, 0x00, 0x00, // chr: '''  (2 wide)
 0x3C, 0x42, 0x00, 0x00, 0x00, // chr: '('  (2 wide)
 0x42, 0x3C, 0x00, 0x00, 0x00, // chr: ')'  (2 wide)
 0x2A, 0x1C, 0x1C, 0x2A, 0x00, // chr: '*'  (4 wide)
 0x08, 0x1C, 0x08, 0x00, 0x00, // chr: '+'  (3 wide)
 0x02, 0x04, 0x00, 0x00, 0x00, // chr: ','  (2 wide)
 0x08, 0x08, 0x08, 0x00, 0x00, // chr: '-'  (3 wide)
 0x02, 0x00, 0x00, 0x00, 0x00, // chr: '.'  (1 wide)
 0x02, 0x04, 0x08, 0x10, 0x20, // chr: '/'  (5 wide)
 0x3C, 0x4A, 0x52, 0x3C, 0x00, // chr: '0'  (4 wide)
 0x22, 0x7E, 0x02, 0x00, 0x00, // chr: '1'  (3 wide)
 0x26, 0x4A, 0x52, 0x22, 0x00, // chr: '2'  (4 wide)
 0x42, 0x52, 0x52, 0x2C, 0x00, // chr: '3'  (4 wide)
 0x78, 0x08, 0x3E, 0x08, 0x00, // chr: '4'  (4 wide)
 0x72, 0x52, 0x52, 0x4C, 0x00, // chr: '5'  (4 wide)
 0x3C, 0x52, 0x52, 0x4C, 0x00, // chr: '6'  (4 wide)
 0x40, 0x4E, 0x50, 0x60, 0x00, // chr: '7'  (4 wide)
 0x2C, 0x52, 0x52, 0x2C, 0x00, // chr: '8'  (4 wide)
 0x30, 0x4A, 0x4A, 0x3C, 0x00, // chr: '9'  (4 wide)
 0x24, 0x00, 0x00, 0x00, 0x00, // chr: ':'  (1 wide)
 0x02, 0x24, 0x00, 0x00, 0x00, // chr: ';'  (2 wide)
 0x08, 0x14, 0x22, 0x00, 0x00, // chr: '<'  (3 wide)
 0x14, 0x14, 0x14, 0x00, 0x00, // chr: '='  (3 wide)
 0x22, 0x14, 0x08, 0x00, 0x00, // chr: '>'  (3 wide)
 0x20, 0x4A, 0x50, 0x20, 0x00, // chr: '?'  (4 wide)
 0x1C, 0x20, 0x2C, 0x22, 0x1C, // chr: '@'  (5 wide)
 0x3E, 0x48, 0x48, 0x3E, 0x00, // chr: 'A'  (4 wide)
 0x7E, 0x52, 0x52, 0x2C, 0x00, // chr: 'B'  (4 wide)
 0x3C, 0x42, 0x42, 0x24, 0x00, // chr: 'C'  (4 wide)
 0x7E, 0x42, 0x42, 0x3C, 0x00, // chr: 'D'  (4 wide)
 0x7E, 0x52, 0x52, 0x42, 0x00, // chr: 'E'  (4 wide)
 0x7E, 0x50, 0x50, 0x40, 0x00, // chr: 'F'  (4 wide)
 0x3C, 0x42, 0x4A, 0x2C, 0x00, // chr: 'G'  (4 wide)
 0x7E, 0x10, 0x10, 0x7E, 0x00, // chr: 'H'  (4 wide)
 0x7E, 0x00, 0x00, 0x00, 0x00, // chr: 'I'  (1 wide)
 0x04, 0x02, 0x7C, 0x00, 0x00, // chr: 'J'  (3 wide)
 0x7E, 0x10, 0x28, 0x44, 0x02, // chr: 'K'  (5 wide)
 0x7E, 0x02, 0x02, 0x02, 0x00, // chr: 'L'  (4 wide)
 0x7E, 0x20, 0x10, 0x20, 0x7E, // chr: 'M'  (5 wide)
 0x7E, 0x20, 0x10, 0x08, 0x7E, // chr: 'N'  (5 wide)
 0x3C, 0x42, 0x42, 0x3C, 0x00, // chr: 'O'  (4 wide)
 0x7E, 0x48, 0x48, 0x30, 0x00, // chr: 'P'  (4 wide)
 0x3C, 0x42, 0x44, 0x3A, 0x00, // chr: 'Q'  (4 wide)
 0x7E, 0x48, 0x4C, 0x32, 0x00, // chr: 'R'  (4 wide)
 0x24, 0x52, 0x4A, 0x24, 0x00, // chr: 'S'  (4 wide)
 0x40, 0x40, 0x7E, 0x40, 0x40, // chr: 'T'  (5 wide)
 0x7C, 0x02, 0x02, 0x7C, 0x00, // chr: 'U'  (4 wide)
 0x70, 0x0C, 0x02, 0x0C, 0x70, // chr: 'V'  (5 wide)
 0x7C, 0x02, 0x04, 0x02, 0x7C, // chr: 'W'  (5 wide)
 0x42, 0x24, 0x18, 0x24, 0x42, // chr: 'X'  (5 wide)
 0x60, 0x10, 0x0E, 0x10, 0x60, // chr: 'Y'  (5 wide)
 0x46, 0x4A, 0x52, 0x62, 0x00, // chr: 'Z'  (4 wide)
 0x7E, 0x42, 0x00, 0x00, 0x00, // chr: '['  (2 wide)
 0x20, 0x10, 0x08, 0x04, 0x02, // chr: '\'  (5 wide)
 0x42, 0x7E, 0x00, 0x00, 0x00, // chr: ']'  (2 wide)
 0x20, 0x40, 0x20, 0x00, 0x00, // chr: '^'  (3 wide)
 0x02, 0x02, 0x02, 0x02, 0x00, // chr: '_'  (4 wide)
};
*/
/*
//__flash unsigned char small_font[64][6]=__attribute__ ((progmem))
const unsigned char  Font5x6[64][6] = {
{3, 0x00, 0x00, 0x00, 0x00, 0x00}, // chr: ' '  (2 wide)
{2, 0x5e, 0x00, 0x00, 0x00, 0x00}, // chr: '!'  (1 wide)
{4, 0x06, 0x00, 0x06, 0x00, 0x00}, // chr: '"'  (3 wide)
{6, 0x14, 0x3e, 0x14, 0x3e, 0x14}, // chr: '#'  (5 wide)
{6, 0x24, 0x2a, 0x7e, 0x2a, 0x12}, // chr: '$'  (5 wide)
{6, 0x44, 0x20, 0x10, 0x08, 0x44}, // chr: '%'  (5 wide)
{6, 0x34, 0x4a, 0x54, 0x20, 0x50}, // chr: '&'  (5 wide)
{3, 0x04, 0x02, 0x00, 0x00, 0x00}, // chr: '''  (2 wide)
{3, 0x3c, 0x42, 0x00, 0x00, 0x00}, // chr: '('  (2 wide)
{3, 0x42, 0x3c, 0x00, 0x00, 0x00}, // chr: ')'  (2 wide)
{5, 0x54, 0x38, 0x38, 0x54, 0x00}, // chr: '*'  (4 wide)
{4, 0x10, 0x38, 0x10, 0x00, 0x00}, // chr: '+'  (3 wide)
{3, 0x40, 0x20, 0x00, 0x00, 0x00}, // chr: ','  (2 wide)
{4, 0x10, 0x10, 0x10, 0x00, 0x00}, // chr: '-'  (3 wide)
{2, 0x40, 0x00, 0x00, 0x00, 0x00}, // chr: '.'  (1 wide)
{6, 0x40, 0x20, 0x10, 0x08, 0x04}, // chr: '/'  (5 wide)
{5, 0x3c, 0x52, 0x4a, 0x3c, 0x00}, // chr: '0'  (4 wide)
{4, 0x44, 0x7e, 0x40, 0x00, 0x00}, // chr: '1'  (3 wide)
{5, 0x64, 0x52, 0x4a, 0x44, 0x00}, // chr: '2'  (4 wide)
{5, 0x42, 0x4a, 0x4a, 0x34, 0x00}, // chr: '3'  (4 wide)
{5, 0x1e, 0x10, 0x7c, 0x10, 0x00}, // chr: '4'  (4 wide)
{5, 0x4e, 0x4a, 0x4a, 0x32, 0x00}, // chr: '5'  (4 wide)
{5, 0x3c, 0x4a, 0x4a, 0x32, 0x00}, // chr: '6'  (4 wide)
{5, 0x02, 0x72, 0x0a, 0x06, 0x00}, // chr: '7'  (4 wide)
{5, 0x34, 0x4a, 0x4a, 0x34, 0x00}, // chr: '8'  (4 wide)
{5, 0x0c, 0x52, 0x52, 0x3c, 0x00}, // chr: '9'  (4 wide)
{2, 0x24, 0x00, 0x00, 0x00, 0x00}, // chr: ':'  (1 wide)
{3, 0x40, 0x24, 0x00, 0x00, 0x00}, // chr: ';'  (2 wide)
{4, 0x10, 0x28, 0x44, 0x00, 0x00}, // chr: '<'  (3 wide)
{4, 0x28, 0x28, 0x28, 0x00, 0x00}, // chr: '='  (3 wide)
{4, 0x44, 0x28, 0x10, 0x00, 0x00}, // chr: '>'  (3 wide)
{5, 0x04, 0x52, 0x0a, 0x04, 0x00}, // chr: '?'  (4 wide)
{6, 0x38, 0x04, 0x34, 0x44, 0x38}, // chr: '@'  (5 wide)
{5, 0x7c, 0x12, 0x12, 0x7c, 0x00}, // chr: 'A'  (4 wide)
{5, 0x7e, 0x4a, 0x4a, 0x34, 0x00}, // chr: 'B'  (4 wide)
{5, 0x3c, 0x42, 0x42, 0x24, 0x00}, // chr: 'C'  (4 wide)
{5, 0x7e, 0x42, 0x42, 0x3c, 0x00}, // chr: 'D'  (4 wide)
{5, 0x7e, 0x4a, 0x4a, 0x42, 0x00}, // chr: 'E'  (4 wide)
{5, 0x7e, 0x0a, 0x0a, 0x02, 0x00}, // chr: 'F'  (4 wide)
{5, 0x3c, 0x42, 0x52, 0x34, 0x00}, // chr: 'G'  (4 wide)
{5, 0x7e, 0x08, 0x08, 0x7e, 0x00}, // chr: 'H'  (4 wide)
{2, 0x7e, 0x00, 0x00, 0x00, 0x00}, // chr: 'I'  (1 wide)
{4, 0x20, 0x40, 0x3e, 0x00, 0x00}, // chr: 'J'  (3 wide)
{6, 0x7e, 0x08, 0x14, 0x22, 0x40}, // chr: 'K'  (5 wide)
{5, 0x7e, 0x40, 0x40, 0x40, 0x00}, // chr: 'L'  (4 wide)
{6, 0x7e, 0x04, 0x08, 0x04, 0x7e}, // chr: 'M'  (5 wide)
{6, 0x7e, 0x04, 0x08, 0x10, 0x7e}, // chr: 'N'  (5 wide)
{5, 0x3c, 0x42, 0x42, 0x3c, 0x00}, // chr: 'O'  (4 wide)
{5, 0x7e, 0x12, 0x12, 0x0c, 0x00}, // chr: 'P'  (4 wide)
{5, 0x3c, 0x42, 0x22, 0x5c, 0x00}, // chr: 'Q'  (4 wide)
{5, 0x7e, 0x12, 0x32, 0x4c, 0x00}, // chr: 'R'  (4 wide)
{5, 0x24, 0x4a, 0x52, 0x24, 0x00}, // chr: 'S'  (4 wide)
{6, 0x02, 0x02, 0x7e, 0x02, 0x02}, // chr: 'T'  (5 wide)
{5, 0x3e, 0x40, 0x40, 0x3e, 0x00}, // chr: 'U'  (4 wide)
{6, 0x0e, 0x30, 0x40, 0x30, 0x0e}, // chr: 'V'  (5 wide)
{6, 0x3e, 0x40, 0x20, 0x40, 0x3e}, // chr: 'W'  (5 wide)
{6, 0x42, 0x24, 0x18, 0x24, 0x42}, // chr: 'X'  (5 wide)
{6, 0x06, 0x08, 0x70, 0x08, 0x06}, // chr: 'Y'  (5 wide)
{5, 0x62, 0x52, 0x4a, 0x46, 0x00}, // chr: 'Z'  (4 wide)
{3, 0x7e, 0x42, 0x00, 0x00, 0x00}, // chr: '['  (2 wide)
{6, 0x04, 0x08, 0x10, 0x20, 0x40}, // chr: '\'  (5 wide)
{3, 0x42, 0x7e, 0x00, 0x00, 0x00}, // chr: ']'  (2 wide)
{4, 0x04, 0x02, 0x04, 0x00, 0x00}, // chr: '^'  (3 wide)
{5, 0x40, 0x40, 0x40, 0x40, 0x00}  // chr: '_'  (4 wide)
};*/