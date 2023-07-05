//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v1.2 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleCyber();                                    //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2023 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define CYBER_STYLE_PROPS_COUNT  16

// Custom style name: cyber
static const GuiStyleProp cyberStyleProps[CYBER_STYLE_PROPS_COUNT] = {
    { 0, 0, 0x2f7486ff },    // DEFAULT_BORDER_COLOR_NORMAL 
    { 0, 1, 0x024658ff },    // DEFAULT_BASE_COLOR_NORMAL 
    { 0, 2, 0x51bfd3ff },    // DEFAULT_TEXT_COLOR_NORMAL 
    { 0, 3, 0x82cde0ff },    // DEFAULT_BORDER_COLOR_FOCUSED 
    { 0, 4, 0x3299b4ff },    // DEFAULT_BASE_COLOR_FOCUSED 
    { 0, 5, 0xb6e1eaff },    // DEFAULT_TEXT_COLOR_FOCUSED 
    { 0, 6, 0xeb7630ff },    // DEFAULT_BORDER_COLOR_PRESSED 
    { 0, 7, 0xffbc51ff },    // DEFAULT_BASE_COLOR_PRESSED 
    { 0, 8, 0xd86f36ff },    // DEFAULT_TEXT_COLOR_PRESSED 
    { 0, 9, 0x134b5aff },    // DEFAULT_BORDER_COLOR_DISABLED 
    { 0, 10, 0x02313dff },    // DEFAULT_BASE_COLOR_DISABLED 
    { 0, 11, 0x17505fff },    // DEFAULT_TEXT_COLOR_DISABLED 
    { 0, 16, 0x0000000e },    // DEFAULT_TEXT_SIZE 
    { 0, 17, 0x00000000 },    // DEFAULT_TEXT_SPACING 
    { 0, 18, 0x81c0d0ff },    // DEFAULT_LINE_COLOR 
    { 0, 19, 0x00222bff },    // DEFAULT_BACKGROUND_COLOR 
};

// WARNING: This style uses a custom font:  (size: 14, spacing: 0)

#define CYBER_COMPRESSED_DATA_SIZE 1104

// Font image pixels data compressed (DEFLATE)
// NOTE: Original pixel data simplified to GRAYSCALE
static unsigned char cyberFontData[CYBER_COMPRESSED_DATA_SIZE] = { 0xed,
    0xdd, 0xe1, 0x6e, 0x9b, 0x30, 0x14, 0x05, 0x60, 0xb4, 0xf7, 0x7f, 0xe3, 0x8d, 0x9d, 0x49, 0x95, 0xb6, 0xa9, 0x9b, 0x02,
    0xf6, 0xb5, 0x4d, 0x48, 0xfa, 0xed, 0xfb, 0xd7, 0x94, 0x05, 0x7c, 0xb1, 0x81, 0xfa, 0xc4, 0xc9, 0x06, 0x00, 0xb0, 0x58,
    0x2e, 0x7e, 0xb7, 0x34, 0xff, 0x74, 0xde, 0x11, 0xfd, 0xfe, 0xf7, 0xdc, 0x63, 0x5f, 0x77, 0x74, 0x8f, 0x8e, 0x24, 0x27,
    0xc7, 0x99, 0x87, 0x2d, 0xf3, 0xef, 0x56, 0x39, 0xd8, 0xbe, 0x6f, 0x4f, 0xfb, 0xce, 0xc3, 0x1c, 0xee, 0xfd, 0xda, 0xf3,
    0x39, 0x87, 0x6d, 0xb6, 0x77, 0x6c, 0x75, 0xdc, 0xce, 0xab, 0xea, 0xff, 0xf9, 0xdf, 0xa3, 0xff, 0x29, 0x0d, 0xad, 0x56,
    0x3d, 0xbb, 0xc6, 0xeb, 0xbf, 0x75, 0x9d, 0x5f, 0xeb, 0xc7, 0xc5, 0x34, 0x54, 0xba, 0xbf, 0x1f, 0xad, 0x1a, 0xaf, 0xf7,
    0x86, 0x63, 0xd9, 0xcb, 0xef, 0x98, 0xee, 0x3d, 0xea, 0xad, 0x7f, 0x0e, 0x46, 0xee, 0x79, 0x3d, 0xaa, 0x7a, 0x36, 0x56,
    0xc6, 0x9f, 0x6b, 0xeb, 0x3f, 0x36, 0xfe, 0x9f, 0xbf, 0xdf, 0xf7, 0x0f, 0xed, 0x7b, 0xf5, 0x2a, 0xfd, 0xbf, 0xed, 0x3d,
    0x73, 0x93, 0xf1, 0xbf, 0x5e, 0xff, 0xbf, 0xfd, 0x3f, 0x03, 0x15, 0x6b, 0x3f, 0xae, 0x2b, 0xae, 0xff, 0xe3, 0xf6, 0xc6,
    0xbd, 0xcc, 0x84, 0xab, 0xde, 0xea, 0x7b, 0xed, 0xb1, 0xeb, 0x7f, 0x1a, 0xcf, 0xae, 0x75, 0xf5, 0xbf, 0xde, 0x8f, 0xe6,
    0x23, 0x78, 0x4e, 0xfd, 0xaf, 0x1b, 0xff, 0x7b, 0xee, 0xff, 0xf3, 0x26, 0xf5, 0x4f, 0x47, 0xaf, 0xea, 0x7d, 0xfa, 0x5c,
    0x79, 0xbf, 0xe2, 0xf9, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0xd3, 0xac, 0x63, 0x0a, 0xc9, 0x86, 0xf7, 0x6e,
    0xa3, 0x96, 0xa3, 0xcc, 0x49, 0x4e, 0x35, 0x0d, 0xbf, 0x71, 0xb6, 0x7d, 0x6d, 0x1e, 0xfc, 0x38, 0x27, 0xbb, 0x36, 0xf1,
    0xb0, 0x35, 0x67, 0xc0, 0x67, 0x1c, 0x4d, 0x9a, 0xb7, 0xaf, 0x65, 0x25, 0x8f, 0xf3, 0x68, 0xb5, 0x1c, 0x74, 0x86, 0x32,
    0x8b, 0x19, 0x7c, 0x7d, 0x74, 0xa4, 0x38, 0x4b, 0x35, 0x3d, 0xfe, 0xe9, 0x8a, 0xa3, 0xc9, 0xa7, 0x4c, 0xe4, 0xfc, 0xd6,
    0x38, 0xce, 0x9a, 0x54, 0xfb, 0xef, 0xda, 0x1c, 0x74, 0xff, 0x58, 0x9f, 0x49, 0xe9, 0x94, 0xda, 0xd9, 0xfc, 0xbb, 0xa5,
    0x46, 0x8f, 0x66, 0x9f, 0x98, 0xb1, 0x69, 0x4b, 0x1a, 0x65, 0xb0, 0x0f, 0xed, 0x85, 0xb6, 0xfc, 0x96, 0xfd, 0x8f, 0xad,
    0x38, 0x26, 0xae, 0xa9, 0xfe, 0x59, 0xde, 0xed, 0xd1, 0xef, 0xef, 0x43, 0x9f, 0xa4, 0x48, 0x7e, 0x7e, 0xd8, 0x97, 0x64,
    0xac, 0x72, 0x78, 0x45, 0x4a, 0xd7, 0x58, 0xdf, 0x33, 0x26, 0xb5, 0xe5, 0xa0, 0xf7, 0x85, 0x09, 0xb3, 0x2c, 0xca, 0xee,
    0x3f, 0xea, 0xff, 0xd7, 0x8d, 0x76, 0xdb, 0xd2, 0xeb, 0xf3, 0x9c, 0x2b, 0x74, 0x3d, 0x07, 0xbf, 0xf6, 0xfa, 0x7f, 0xd5,
    0x19, 0xb3, 0x62, 0xfc, 0x9f, 0xff, 0x94, 0x33, 0x7a, 0x4f, 0x9b, 0x62, 0x5e, 0x77, 0xf6, 0x1d, 0xef, 0xda, 0xfb, 0xff,
    0xd6, 0xa3, 0x49, 0xf1, 0x53, 0x5f, 0x57, 0xb5, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaf, 0x9a, 0xfe, 0x4d,
    0x69, 0xc6, 0x7a, 0x6c, 0xeb, 0x7a, 0xfe, 0x72, 0x5d, 0x4e, 0x26, 0x27, 0xbf, 0xdb, 0xba, 0x5e, 0xd9, 0x79, 0x8a, 0x77,
    0xbf, 0x41, 0x0a, 0x78, 0x2c, 0x53, 0x98, 0xa5, 0x79, 0x97, 0xde, 0xff, 0x63, 0x56, 0xfd, 0x73, 0x98, 0xe4, 0xcb, 0x85,
    0x29, 0xdf, 0xf5, 0x99, 0xe8, 0x99, 0x7d, 0xe5, 0x7e, 0xf5, 0xaf, 0xae, 0x37, 0x99, 0x83, 0xd4, 0x7b, 0x4e, 0x32, 0xb1,
    0x77, 0xaa, 0xff, 0x36, 0xa1, 0xfe, 0xf5, 0xf1, 0x3f, 0x27, 0xe9, 0xe2, 0x34, 0x8d, 0x65, 0x73, 0x73, 0xfb, 0xad, 0x67,
    0xed, 0xe3, 0x15, 0x27, 0xcf, 0xd6, 0x33, 0x7d, 0x7e, 0xff, 0xae, 0x8e, 0xff, 0x2b, 0xfb, 0x7f, 0x5e, 0xaa, 0xff, 0xb7,
    0x5c, 0xff, 0xeb, 0x29, 0xfe, 0x0c, 0xa6, 0x80, 0xf7, 0xe6, 0xfa, 0xde, 0x67, 0xfc, 0x9f, 0x5b, 0xff, 0xdc, 0xe2, 0xfe,
    0x2f, 0x4b, 0xc6, 0xe7, 0xf6, 0xf1, 0x25, 0x83, 0x89, 0xee, 0xb9, 0x77, 0xf0, 0xd7, 0xde, 0xff, 0x8f, 0xf5, 0xa0, 0xf6,
    0x63, 0xca, 0xf4, 0xf1, 0x77, 0x74, 0xed, 0xdf, 0xb9, 0xe3, 0x3f, 0xaf, 0xf4, 0xd9, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x30, 0x8f, 0x96, 0xe2, 0x6a, 0x5d, 0xe9, 0x5c, 0x13, 0xaa, 0xb2, 0xfa, 0x6a, 0x7d, 0x9e, 0x76, 0xce, 0x2c, 0x6f,
    0x86, 0xe7, 0xe8, 0xdb, 0x5e, 0x4f, 0x79, 0x3e, 0xbd, 0x67, 0x36, 0xbf, 0x27, 0xa3, 0x90, 0xf2, 0x1c, 0xec, 0x75, 0xab,
    0x85, 0x8e, 0xcf, 0x0e, 0x8f, 0x7e, 0x63, 0xf2, 0xfa, 0xfa, 0xb7, 0x7c, 0x7f, 0x74, 0x3d, 0x0b, 0x36, 0xf6, 0xcd, 0xfe,
    0x39, 0xcc, 0x87, 0x8e, 0x9f, 0x01, 0xf5, 0x6c, 0xcd, 0x3b, 0xd5, 0xff, 0xbc, 0x4d, 0x53, 0xae, 0xfe, 0xd8, 0xb7, 0x81,
    0xaf, 0xcd, 0x60, 0xec, 0x4d, 0xe7, 0x46, 0x6d, 0xad, 0xd7, 0x7d, 0x78, 0x55, 0xdc, 0x2b, 0xeb, 0x3f, 0x5e, 0x89, 0x2c,
    0xc9, 0xa8, 0xe7, 0xb2, 0x4f, 0xdf, 0x54, 0x72, 0x7e, 0xf5, 0x6d, 0xe7, 0xd5, 0xbf, 0xa5, 0x67, 0x8f, 0xf7, 0xff, 0x91,
    0x57, 0xd3, 0xdc, 0x0b, 0xef, 0x95, 0xc1, 0xca, 0xc0, 0x5e, 0x5c, 0x59, 0xff, 0xe3, 0xea, 0xcd, 0xb8, 0xfe, 0x8f, 0x55,
    0xf8, 0xbc, 0x05, 0x7e, 0xa8, 0xff, 0xe0, 0x73, 0x46, 0x1a, 0x9e, 0xa3, 0xaa, 0x4f, 0x18, 0xe7, 0xaf, 0x8c, 0x65, 0x94,
    0x47, 0x9f, 0x11, 0x9e, 0x71, 0x6d, 0xb8, 0xea, 0xe9, 0xd0, 0xf3, 0xbf, 0xbf, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xf0, 0x8a, 0xf3, 0x63, 0x79, 0x93, 0xf9, 0xc5, 0x34, 0x7d, 0x8b, 0xf6, 0xf9, 0xea, 0xa9, 0xc7, 0x6b, 0xaf, 0xee, 0xa5,
    0xd4, 0x55, 0x7d, 0x9f, 0xe6, 0x27, 0x04, 0xfe, 0xdf, 0x72, 0xef, 0x98, 0x05, 0xcd, 0xf4, 0xe4, 0x6a, 0x26, 0xa5, 0x3a,
    0x7a, 0xf2, 0xc6, 0xfd, 0xc9, 0xa9, 0x39, 0xaf, 0xce, 0xca, 0xb6, 0xcd, 0xa9, 0xff, 0x58, 0x76, 0x3a, 0xcb, 0x52, 0x13,
    0x5f, 0xa7, 0xfe, 0x5b, 0x71, 0xbd, 0xd2, 0xb9, 0xfd, 0xbf, 0x67, 0xbf, 0x52, 0x4e, 0x35, 0x57, 0xfa, 0x7f, 0xde, 0xbe,
    0xfe, 0xb5, 0xd6, 0xcc, 0x94, 0x1e, 0x57, 0xcb, 0x4e, 0xed, 0xe5, 0xf4, 0x69, 0x6f, 0xfd, 0x73, 0x69, 0xff, 0xdf, 0x1a,
    0x57, 0xc3, 0x9c, 0xd9, 0x96, 0xf5, 0xf5, 0x8a, 0x57, 0xdf, 0x85, 0xd5, 0x3f, 0x21, 0x31, 0xa3, 0xfe, 0x63, 0xab, 0x68,
    0x3e, 0xa7, 0x3d, 0x56, 0xec, 0x5d, 0x6e, 0x90, 0x41, 0xed, 0xeb, 0x25, 0x33, 0xfb, 0xff, 0xca, 0x7b, 0x0c, 0xf5, 0x5f,
    0xf1, 0xce, 0x57, 0xd4, 0x7f, 0xfb, 0x52, 0xe9, 0xcc, 0xf7, 0xcf, 0xa2, 0x4a, 0xda, 0x7e, 0xed, 0xbf, 0x40, 0x69, 0x05,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xd9, 0xf3, 0x6e, 0x79, 0x42, 0x9a, 0xaa, 0x25, 0x4f, 0xd3, 0x96, 0x14, 0x39, 0x9e,
    0x5b, 0x32, 0xc3, 0xb4, 0xaa, 0xfe, 0x47, 0xdf, 0x54, 0xdc, 0x9e, 0x50, 0xcb, 0x92, 0x9f, 0xaa, 0xfd, 0x15, 0xf5, 0xdf,
    0x9a, 0x92, 0x6b, 0x99, 0x96, 0x7b, 0xbd, 0x53, 0x1e, 0xec, 0x7d, 0xce, 0x80, 0xfa, 0xea, 0x9d, 0xf5, 0xfe, 0x3f, 0x73,
    0x3d, 0x67, 0xf5, 0x5f, 0x93, 0xbf, 0x68, 0x5f, 0xbd, 0xb1, 0xb2, 0x4a, 0xed, 0xcc, 0x75, 0xdb, 0x9d, 0x01, 0xef, 0x96,
    0xef, 0xd2, 0xff, 0xbf, 0xea, 0xa7, 0x0b, 0xd5, 0x1f, 0xf5, 0x67, 0xfc, 0xf9, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0x0f, 0xbf, 0x00 };

// Font characters rectangles data
static const Rectangle cyberFontRecs[95] = {
    { 4, 4, 4 , 14 },
    { 16, 4, 1 , 8 },
    { 25, 4, 4 , 3 },
    { 37, 4, 8 , 8 },
    { 53, 4, 8 , 9 },
    { 69, 4, 8 , 8 },
    { 85, 4, 8 , 8 },
    { 101, 4, 1 , 3 },
    { 110, 4, 4 , 9 },
    { 122, 4, 4 , 9 },
    { 134, 4, 5 , 6 },
    { 147, 4, 5 , 6 },
    { 160, 4, 2 , 2 },
    { 170, 4, 4 , 1 },
    { 182, 4, 1 , 1 },
    { 191, 4, 8 , 8 },
    { 207, 4, 8 , 8 },
    { 223, 4, 2 , 8 },
    { 233, 4, 8 , 8 },
    { 4, 26, 8 , 8 },
    { 20, 26, 8 , 8 },
    { 36, 26, 8 , 8 },
    { 52, 26, 8 , 8 },
    { 68, 26, 7 , 8 },
    { 83, 26, 8 , 8 },
    { 99, 26, 8 , 8 },
    { 115, 26, 1 , 4 },
    { 124, 26, 2 , 5 },
    { 134, 26, 4 , 8 },
    { 146, 26, 5 , 3 },
    { 159, 26, 4 , 8 },
    { 171, 26, 7 , 8 },
    { 186, 26, 8 , 8 },
    { 202, 26, 8 , 8 },
    { 218, 26, 8 , 8 },
    { 234, 26, 8 , 8 },
    { 4, 48, 8 , 8 },
    { 20, 48, 7 , 8 },
    { 35, 48, 7 , 8 },
    { 50, 48, 8 , 8 },
    { 66, 48, 8 , 8 },
    { 82, 48, 5 , 8 },
    { 95, 48, 7 , 8 },
    { 110, 48, 8 , 8 },
    { 126, 48, 7 , 8 },
    { 141, 48, 8 , 8 },
    { 157, 48, 8 , 8 },
    { 173, 48, 8 , 8 },
    { 189, 48, 8 , 8 },
    { 205, 48, 8 , 9 },
    { 221, 48, 8 , 8 },
    { 237, 48, 8 , 8 },
    { 4, 70, 8 , 8 },
    { 20, 70, 8 , 8 },
    { 36, 70, 8 , 8 },
    { 52, 70, 9 , 8 },
    { 69, 70, 8 , 8 },
    { 85, 70, 8 , 8 },
    { 101, 70, 8 , 8 },
    { 117, 70, 4 , 9 },
    { 129, 70, 8 , 8 },
    { 145, 70, 4 , 9 },
    { 157, 70, 4 , 3 },
    { 169, 70, 7 , 1 },
    { 184, 70, 2 , 3 },
    { 194, 70, 7 , 5 },
    { 209, 70, 7 , 8 },
    { 224, 70, 7 , 5 },
    { 239, 70, 7 , 8 },
    { 4, 92, 7 , 5 },
    { 19, 92, 4 , 8 },
    { 31, 92, 7 , 7 },
    { 46, 92, 7 , 8 },
    { 61, 92, 1 , 8 },
    { 70, 92, 3 , 10 },
    { 81, 92, 7 , 8 },
    { 96, 92, 4 , 8 },
    { 108, 92, 9 , 5 },
    { 125, 92, 7 , 5 },
    { 140, 92, 7 , 5 },
    { 155, 92, 7 , 7 },
    { 170, 92, 7 , 7 },
    { 185, 92, 5 , 5 },
    { 198, 92, 7 , 5 },
    { 213, 92, 5 , 8 },
    { 226, 92, 7 , 5 },
    { 4, 114, 7 , 5 },
    { 19, 114, 9 , 5 },
    { 36, 114, 7 , 5 },
    { 51, 114, 7 , 7 },
    { 66, 114, 7 , 5 },
    { 81, 114, 4 , 9 },
    { 93, 114, 1 , 9 },
    { 102, 114, 4 , 9 },
    { 114, 114, 8 , 2 },
};

// Font characters info data
// NOTE: No chars.image data provided
static const GlyphInfo cyberFontChars[95] = {
    { 32, 0, 11, 4, { 0 }},
    { 33, 0, 3, 2, { 0 }},
    { 34, 0, 3, 4, { 0 }},
    { 35, 0, 3, 8, { 0 }},
    { 36, 0, 3, 8, { 0 }},
    { 37, 0, 3, 8, { 0 }},
    { 38, 0, 3, 8, { 0 }},
    { 39, 0, 3, 2, { 0 }},
    { 40, 0, 3, 4, { 0 }},
    { 41, 0, 3, 4, { 0 }},
    { 42, 0, 4, 6, { 0 }},
    { 43, 0, 4, 6, { 0 }},
    { 44, 0, 10, 3, { 0 }},
    { 45, 0, 7, 5, { 0 }},
    { 46, 0, 10, 2, { 0 }},
    { 47, 0, 3, 8, { 0 }},
    { 48, 0, 3, 8, { 0 }},
    { 49, 0, 3, 3, { 0 }},
    { 50, 0, 3, 8, { 0 }},
    { 51, 0, 3, 8, { 0 }},
    { 52, 0, 3, 8, { 0 }},
    { 53, 0, 3, 8, { 0 }},
    { 54, 0, 3, 8, { 0 }},
    { 55, 0, 3, 7, { 0 }},
    { 56, 0, 3, 8, { 0 }},
    { 57, 0, 3, 8, { 0 }},
    { 58, 0, 6, 2, { 0 }},
    { 59, 0, 6, 3, { 0 }},
    { 60, 0, 3, 5, { 0 }},
    { 61, 0, 6, 6, { 0 }},
    { 62, 0, 3, 5, { 0 }},
    { 63, 0, 3, 7, { 0 }},
    { 64, 0, 3, 8, { 0 }},
    { 65, 0, 3, 8, { 0 }},
    { 66, 0, 3, 8, { 0 }},
    { 67, 0, 3, 8, { 0 }},
    { 68, 0, 3, 8, { 0 }},
    { 69, 0, 3, 7, { 0 }},
    { 70, 0, 3, 7, { 0 }},
    { 71, 0, 3, 8, { 0 }},
    { 72, 0, 3, 8, { 0 }},
    { 73, 0, 3, 6, { 0 }},
    { 74, 0, 3, 7, { 0 }},
    { 75, 0, 3, 8, { 0 }},
    { 76, 0, 3, 7, { 0 }},
    { 77, 0, 3, 9, { 0 }},
    { 78, 0, 3, 8, { 0 }},
    { 79, 0, 3, 8, { 0 }},
    { 80, 0, 3, 8, { 0 }},
    { 81, 0, 3, 8, { 0 }},
    { 82, 0, 3, 8, { 0 }},
    { 83, 0, 3, 8, { 0 }},
    { 84, 0, 3, 8, { 0 }},
    { 85, 0, 3, 8, { 0 }},
    { 86, 0, 3, 8, { 0 }},
    { 87, 0, 3, 10, { 0 }},
    { 88, 0, 3, 8, { 0 }},
    { 89, 0, 3, 8, { 0 }},
    { 90, 0, 3, 8, { 0 }},
    { 91, 0, 3, 4, { 0 }},
    { 92, 0, 3, 8, { 0 }},
    { 93, 0, 3, 4, { 0 }},
    { 94, 0, 3, 4, { 0 }},
    { 95, 0, 11, 7, { 0 }},
    { 96, 0, 3, 3, { 0 }},
    { 97, 0, 6, 7, { 0 }},
    { 98, 0, 3, 7, { 0 }},
    { 99, 0, 6, 7, { 0 }},
    { 100, 0, 3, 7, { 0 }},
    { 101, 0, 6, 7, { 0 }},
    { 102, 0, 3, 5, { 0 }},
    { 103, 0, 6, 7, { 0 }},
    { 104, 0, 3, 7, { 0 }},
    { 105, 0, 3, 2, { 0 }},
    { 106, -2, 3, 2, { 0 }},
    { 107, 0, 3, 7, { 0 }},
    { 108, 0, 3, 4, { 0 }},
    { 109, 0, 6, 10, { 0 }},
    { 110, 0, 6, 7, { 0 }},
    { 111, 0, 6, 7, { 0 }},
    { 112, 0, 6, 7, { 0 }},
    { 113, 0, 6, 7, { 0 }},
    { 114, 0, 6, 6, { 0 }},
    { 115, 0, 6, 7, { 0 }},
    { 116, 0, 3, 6, { 0 }},
    { 117, 0, 6, 7, { 0 }},
    { 118, 0, 6, 7, { 0 }},
    { 119, 0, 6, 10, { 0 }},
    { 120, 0, 6, 7, { 0 }},
    { 121, 0, 6, 7, { 0 }},
    { 122, 0, 6, 7, { 0 }},
    { 123, 0, 3, 5, { 0 }},
    { 124, 0, 3, 2, { 0 }},
    { 125, 0, 3, 5, { 0 }},
    { 126, 0, 6, 8, { 0 }},
};

// Style loading function: cyber
static void GuiLoadStyleCyber(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < CYBER_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(cyberStyleProps[i].controlId, cyberStyleProps[i].propertyId, cyberStyleProps[i].propertyValue);
    }

    // Custom font loading
    // NOTE: Compressed font image data (DEFLATE), it requires DecompressData() function
    int cyberFontDataSize = 0;
    unsigned char *data = DecompressData(cyberFontData, CYBER_COMPRESSED_DATA_SIZE, &cyberFontDataSize);
    Image imFont = { data, 256, 256, 1, 2 };

    Font font = { 0 };
    font.baseSize = 14;
    font.glyphCount = 95;

    // Load texture from image
    font.texture = LoadTextureFromImage(imFont);
    UnloadImage(imFont);  // Uncompressed data can be unloaded from memory

    // Copy char recs data from global fontRecs
    // NOTE: Required to avoid issues if trying to free font
    font.recs = (Rectangle *)malloc(font.glyphCount*sizeof(Rectangle));
    memcpy(font.recs, cyberFontRecs, font.glyphCount*sizeof(Rectangle));

    // Copy font char info data from global fontChars
    // NOTE: Required to avoid issues if trying to free font
    font.glyphs = (GlyphInfo *)malloc(font.glyphCount*sizeof(GlyphInfo));
    memcpy(font.glyphs, cyberFontChars, font.glyphCount*sizeof(GlyphInfo));

    GuiSetFont(font);

    // Setup a white rectangle on the font to be used on shapes drawing,
    // this way we make sure all gui can be drawn on a single pass because no texture change is required
    // NOTE: Setting up this rectangle is a manual process (for the moment)
    Rectangle whiteChar = { 89, 9, 2, 2 };
    SetShapesTexture(font.texture, whiteChar);

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}
