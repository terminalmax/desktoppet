////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
// ImageAsCode exporter v1.0 - Image pixel data exported as an array of bytes         //
//                                                                                    //
// more info and bugs-report:  github.com/raysan5/raylib                              //
// feedback and support:       ray[at]raylib.com                                      //
//                                                                                    //
// Copyright (c) 2018-2023 Ramon Santamaria (@raysan5)                                //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////

// Image data information
#define SLIME_WIDTH    128
#define SLIME_HEIGHT   9
#define SLIME_FORMAT   7          // raylib internal pixel format

static constexpr unsigned char SLIME_DATA[4608] = { 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0,
0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e,
0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8,
0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8,
0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x0,
0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e,
0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8,
0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0,
0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e,
0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0,
0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0,
0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e,
0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e,
0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0,
0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0,
0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8,
0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xf8, 0xd0, 0x88, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x0,
0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x3b,
0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x3b, 0xb4, 0x70, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8,
0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e,
0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e, 0x21, 0x21, 0xff, 0x2e,
0x21, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0, 0xa8,
0xd0, 0x80, 0x0, 0xa8, 0xd0, 0x80, 0x0 };
