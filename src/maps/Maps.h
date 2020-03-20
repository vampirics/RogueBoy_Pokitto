#pragma once

#include "Pokitto.h"

using PC = Pokitto::Core;
using PD = Pokitto::Display;
using PS = Pokitto::Sound;

/*
uint8_t enum Block {CLOSED_CHEST,
                    BLANK_WALL,
                    LOCKED_DOOR,
                    DOWN_STAIRS,
                    BARREL,
                    OPEN_CHEST,
                    OPEN_DOOR,
                    FULL_BLOCK_WALL,
                    EMPTY,
                    UP_STAIRS,
                    SWITCH_ON,
                    SWITCH_OFF,
                    TORCH_WALL,
                    WINDOW_WALL,
                    SIGN_WALL,
                    SPEAR_DOOR,
                    EXPLOSIVE_BARREL,
                    LOCKED_STAIRS,
                    RUBBLE};

*/
/*


// 162 becomes 77.
const uint8_t MAP_5[] = {
// 10,10,
// 0,0,
// 9,8,8,8,8,6,8,8,8,1,
// 8,8,8,4,1,1,1,1,6,1,
// 1,1,1,1,1,8,2,8,8,1,
// 8,8,8,8,2,8,1,8,8,0,
// 1,1,1,1,1,8,1,1,1,1,
// 1,8,8,0,1,8,8,1,1,1,
// 1,8,1,1,8,8,8,1,1,1,
// 1,8,8,8,8,8,8,1,1,1,
// 1,1,1,1,1,8,1,1,1,17,
// 1,1,1,1,1,8,8,8,8,8,
// 14,
// 6,5,6,20,
// 9,6,6,20,
// 9,6,7,20,
// 9,5,7,20,
// 9,4,7,20,
// 9,4,6,20,
// 8,7,2,20,
// 8,8,3,20,
// 9,7,3,20,
// 3,8,2,20,
// 2,1,3,20,
// 2,2,3,20,
// 2,3,3,20,
// 4,0,3,20,
// 0,

   MAP DEFINITIONS
   0 - Closed_chest
   1 - Blank_Wall
   2 - Locked_Door
   3 - Stairs_Down
   4 - Barrel
   5 - Open_chest
   6 - Open_Door
   7 - Full_Block_Wall
   8 - Blank Space
   9 - Stairs_UP
   10 - Switch_ON
   11 - Switch_OFF
   12 - Wall_Torch
   13 - Window_Wall
   14 - Sign_wall
   15 - Spear_Door
   16 - explosive_barrel
   17 - Locked_Stairs_Down
   18 - Rubble


          1:Coin
          2:Sack o cash
          3:Jelly Filled Doughnut
          4:Key
          5:Ham
          6:Floater
          7:Skull
          8:Spider
          9:Bat

const uint8_t TEST_MAP[] = {
  //Map Dimentions (unused)
  map.height, map.width,
  //PLAYER STARTING POSITION
  0, 0,
  //MAP DATA
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 17, 16, 15, 14, 13, 12, 11, 10,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
  //Number of Objects
  8,
  //Objects
  //<ID><xpos><ypos><Health>
  1, 5, 2, 1,
  2, 5, 3, 1,
  3, 5, 4, 1,
  4, 5, 5, 1,
  5, 6, 2, 1,
  6, 6, 3, 1,
  7, 6, 4, 1,
  8, 6, 5, 1,
  //Number of Oparators
  3,
  //Oparator (Switch locations/active points)
  //<xpos of switch><ypos of switch><x active><y active>
  9,7,9,2,
  9,7,9,3,
  9,7,9,4,
};
*/


const uint8_t MAP_18[] = {
// 9,8,
// 4,0,
// 8,8,8,8,9,8,8,8,8,
// 8,14,8,14,8,14,8,14,8,
// 8,8,8,8,8,8,8,8,8,
// 8,14,8,14,8,14,8,14,8,
// 8,8,8,8,8,8,8,8,8,
// 8,14,8,14,8,14,8,14,8,
// 8,8,8,8,8,8,8,8,8,
// 1,1,1,1,17,1,1,1,1,
// 0,
// 3,
// 7,1,4,7,
// 1,3,4,7,
// 7,5,4,7,
0x98,
0x40,
68, 73, 69, 113, 65, 113, 65, 113, 65, 
113, 65, 71, 67, 113, 65, 113, 65, 113, 
65, 113, 65, 71, 67, 113, 65, 113, 65, 
113, 65, 113, 65, 71, 67, 12, 137, 12, 0, 
0,
3,
0x71,0x47,
0x13,0x47,
0x75,0x47,
};


const uint8_t MAP_17[] = {
// 10,9,
// 1,1,
// 8,8,8,12,8,8,8,8,8,8,
// 8,9,8,1,8,8,1,8,8,8,
// 12,1,8,1,8,1,1,8,1,12,
// 8,8,8,1,8,8,1,8,8,8,
// 14,8,8,16,8,8,12,8,8,8,
// 1,1,13,1,1,2,1,1,1,8,
// 8,8,8,1,8,8,8,1,8,8,
// 8,8,8,15,8,17,8,12,8,8,
// 8,8,8,1,8,8,8,1,1,1,
// 14,
// 4,9,6,50,
// 8,4,6,50,
// 8,6,8,50,
// 7,7,3,50,
// 7,5,1,50,
// 9,0,3,50,
// 9,1,4,50,
// 9,9,7,50,
// 9,8,6,50,
// 6,8,6,50,
// 4,1,7,50,
// 6,0,6,30,
// 6,2,8,30,
// 6,0,8,30,
// 2,
// 0,4,3,4,
// 9,0,3,7,
0xA9,
0x11,
67, 97, 71, 73, 65, 9, 66, 9, 67, 
97, 9, 65, 9, 65, 10, 65, 9, 97, 
67, 9, 66, 9, 67, 113, 66, 129, 66, 
97, 67, 10, 105, 10, 17, 11, 68, 9, 
67, 9, 69, 121, 65, 137, 65, 97, 69, 
9, 67, 11, 0, 
14,
4,0x96,50,
8,0x46,50,
8,0x68,50,
7,0x73,50,
7,0x51,50,
9,0x03,50,
9,0x14,50,
9,0x97,50,
9,0x86,50,
6,0x86,50,
4,0x17,50,
6,0x06,30,
6,0x28,30,
6,0x08,30,
2,
0x04,0x34,
0x90,0x37,
};

const uint8_t MAP_16[] = {
// 9,9,
// 4,7,
// 8,8,15,1,1,1,1,0,8,
// 0,1,8,8,14,8,8,1,8,
// 1,8,2,8,8,8,2,8,15,
// 1,8,8,1,8,1,8,8,1,
// 1,14,8,8,1,8,8,14,1,
// 1,8,8,1,0,1,8,8,1,
// 15,8,1,8,8,8,2,8,1,
// 8,1,8,8,9,8,8,1,8,
// 3,8,1,1,1,1,1,8,8,
// 10,
// 8,6,4,50,
// 8,7,3,50,
// 9,8,0,50,
// 9,8,0,50,
// 6,5,1,50,
// 7,0,0,50,
// 7,0,0,50,
// 7,1,3,50,
// 7,2,4,50,
// 6,1,5,50,
// 6,
// 7,4,6,6,
// 7,4,8,2,
// 4,1,6,2,
// 4,1,2,0,
// 1,4,2,2,
// 1,4,0,6,
0x99,
0x47,
66, 121, 12, 1, 65, 1, 9, 66, 113, 
66, 9, 65, 9, 65, 17, 67, 17, 79, 
9, 66, 9, 65, 9, 66, 10, 113, 66, 
9, 66, 113, 10, 66, 9, 1, 9, 66, 9, 
121, 65, 9, 67, 17, 65, 9, 65, 9, 
66, 73, 66, 9, 65, 25, 65, 13, 66, 0, 
10,
8,0x64,50,
8,0x73,50,
9,0x80,50,
9,0x80,50,
6,0x51,50,
7,0x00,50,
7,0x00,50,
7,0x13,50,
7,0x24,50,
6,0x15,50,
6,
0x74,0x66,
0x74,0x82,
0x41,0x62,
0x41,0x20,
0x14,0x22,
0x14,0x06,
};



const uint8_t MAP_15[] = {
// 10,9,
// 5,4,
// 1,1,1,1,8,8,1,1,1,1,
// 8,8,8,1,8,8,1,8,8,8,
// 16,16,16,1,8,8,1,16,16,16,
// 8,8,8,1,1,1,1,8,8,8,
// 17,8,14,6,8,8,6,14,8,17,
// 8,8,8,1,1,1,1,8,8,8,
// 16,16,16,1,8,8,1,16,16,16,
// 8,8,8,1,8,8,1,8,8,8,
// 1,1,1,1,8,8,1,1,1,1,
// 14,
// 6,8,7,50,
// 6,9,7,50,
// 6,7,7,50,
// 8,7,1,50,
// 8,8,1,50,
// 8,9,1,50,
// 9,2,1,50,
// 9,1,1,50,
// 9,0,1,50,
// 7,0,7,50,
// 7,1,7,50,
// 7,2,7,50,
// 4,1,1,50,
// 4,8,7,50,
// 14,
// 2,4,3,4,
// 7,4,6,4,
// 7,4,7,6,
// 7,4,8,6,
// 7,4,9,6,
// 7,4,7,2,
// 7,4,8,2,
// 7,4,9,2,
// 2,4,2,6,
// 2,4,2,2,
// 2,4,1,2,
// 2,4,0,2,
// 2,4,1,6,
// 2,4,0,6,
0xA9,
0x54,
12, 66, 12, 67, 9, 66, 9, 67, 131, 9, 
66, 9, 131, 67, 12, 67, 137, 65, 113, 49, 
66, 49, 113, 65, 137, 67, 12, 67, 131, 9, 
66, 9, 131, 67, 9, 66, 9, 67, 12, 66, 12, 0, 
14,
6,0x87,50,
6,0x97,50,
6,0x77,50,
8,0x71,50,
8,0x81,50,
8,0x91,50,
9,0x21,50,
9,0x11,50,
9,0x01,50,
7,0x07,50,
7,0x17,50,
7,0x27,50,
4,0x11,50,
4,0x87,50,
14,
0x24,0x34,
0x74,0x64,
0x74,0x76,
0x74,0x86,
0x74,0x96,
0x74,0x72,
0x74,0x82,
0x74,0x92,
0x24,0x26,
0x24,0x22,
0x24,0x12,
0x24,0x02,
0x24,0x16,
0x24,0x06,
};

const uint8_t MAP_14[] = {
// 9,9,
// 4,4,
// 8,8,8,8,8,8,8,8,8,
// 8,7,8,7,8,7,8,7,8,
// 8,8,8,8,8,8,8,8,8,
// 8,7,8,7,8,7,8,7,8,
// 8,8,8,8,8,8,8,8,8,
// 8,7,8,7,8,7,8,7,8,
// 8,8,8,8,8,8,8,8,8,
// 8,7,8,7,17,7,8,7,8,
// 8,8,8,8,8,8,8,8,8,
// 15,
// 9,7,2,100,
// 9,6,1,100,
// 9,4,1,100,
// 9,2,1,100,
// 9,1,2,100,
// 9,1,4,100,
// 9,1,6,100,
// 9,2,7,100,
// 2,0,8,100,
// 9,6,7,100,
// 9,7,6,100,
// 9,7,4,100,
// 4,0,0,100,
// 2,8,0,100,
// 1,8,8,100,
// 0,
0x99,
0x44,
71, 67, 57, 65, 57, 65, 57, 65, 71, 67, 
57, 65, 57, 65, 57, 65, 71, 67, 57, 65, 
57, 65, 57, 65, 71, 67, 57, 65, 57, 137, 
57, 65, 57, 71, 67, 0, 
15,
9,0x72,100,
9,0x61,100,
9,0x41,100,
9,0x21,100,
9,0x12,100,
9,0x14,100,
9,0x16,100,
9,0x27,100,
2,0x08,100,
9,0x67,100,
9,0x76,100,
9,0x74,100,
4,0x00,100,
2,0x80,100,
1,0x88,100,
0,
};

const uint8_t MAP_13[] = {
// 9,10,
// 3,1,
// 4,4,4,4,1,1,12,1,1,
// 4,7,4,8,8,8,8,1,3,
// 4,4,8,8,7,8,8,15,8,
// 1,12,1,1,1,8,1,1,12,
// 1,8,8,8,1,8,4,8,8,
// 1,8,1,2,1,1,1,1,8,
// 1,8,1,8,4,8,8,8,8,
// 1,8,12,1,1,8,1,1,12,
// 1,8,8,11,1,8,8,4,0,
// 1,12,1,1,1,1,12,1,1,
// 7,
// 7,7,4,20,
// 7,7,4,20,
// 8,6,8,20,
// 8,6,8,20,
// 8,6,8,20,
// 9,1,8,20,
// 6,1,8,20,
// 1,
// 3,8,7,2,
0x9A,
0x31,
36, 10, 97, 10, 33, 57, 33, 68, 9,
25, 34, 66, 57, 66, 121, 65, 9, 97,
11, 65, 10, 97, 9, 67, 9, 65, 33,
66, 9, 65, 9, 17, 12, 65, 9, 65, 
9, 65, 33, 68, 9, 65, 97, 10, 65, 
10, 97, 9, 66, 89, 9, 66, 32, 9,
97, 12, 97, 10, 0,
7,
7,0x74,20,
7,0x74,20,
8,0x68,20,
8,0x68,20,
8,0x68,20,
9,0x18,20,
6,0x18,20,
1,
0x38,0x72,

};

const uint8_t MAP_12[] = {
// 2,10,
// 0,0,
// 8,11,
// 8,11,
// 8,11,
// 8,11,
// 8,1,
// 15,1,
// 15,1,
// 15,8,
// 15,1,
// 17,1,
// 3,
// 4,1,7,40,
// 9,1,7,40,
// 9,1,7,40,
// 8,
// 1,3,0,7,
// 1,1,0,6,
// 1,1,0,5,
// 1,3,0,8,

0x2A,
0x00,
65, 89, 65, 89, 65, 89, 65, 89,
65, 9, 121, 9, 121, 9, 121, 65,
121, 9, 137, 9, 0,
3,
4,0x17,40,
9,0x17,40,
9,0x17,40,
8,
0x13,0x07,
0x11,0x06,
0x11,0x05,
0x13,0x08,

};

const uint8_t MAP_11[] = {
// 10,6,
// 1,1,
// 8,8,8,1,1,1,0,1,3,1,
// 8,9,8,2,8,8,4,1,8,1,
// 8,8,8,1,8,8,1,1,8,8,
// 1,4,1,1,1,2,1,1,1,8,
// 8,8,8,1,8,8,8,8,8,8,
// 8,8,8,1,1,8,1,1,1,1,
// 11,
// 3,1,5,20,
// 8,2,4,20,
// 8,0,4,20,
// 9,5,1,20,
// 4,0,5,20,
// 9,4,2,20,
// 9,5,5,20,
// 8,4,4,20,
// 7,7,4,20,
// 6,8,2,20,
// 7,9,4,20,
// 0,

0xA6,
0x11,
67, 11, 1, 9, 25, 9, 65, 73, 65, 17, 
66, 33, 9, 65, 9, 67, 9, 66, 10, 66,
9, 33, 11, 17, 11, 68, 9, 70, 67, 10,
65, 12, 0,
11,
3,0x15,20,
8,0x24,20,
8,0x04,20,
9,0x51,20,
4,0x05,20,
9,0x42,20,
9,0x55,20,
8,0x44,20,
7,0x74,20,
6,0x82,20,
7,0x94,20,
0,
};

const uint8_t MAP_10[] = {
// 7,7,
// 0,0,
// 9,8,8,8,1,8,8,
// 8,8,8,8,4,8,8,
// 8,8,8,8,1,8,8,
// 8,8,8,17,1,8,8,
// 1,4,1,1,1,1,1,
// 8,8,8,8,1,1,1,
// 8,8,8,8,1,1,1,
// 15,
// 1,1,1,10,
// 1,1,2,10,
// 1,2,2,10,
// 1,2,1,10,
// 4,3,6,10,
// 8,3,6,50,
// 8,2,6,50,
// 8,1,6,50,
// 8,0,6,50,
// 7,6,3,50,
// 7,6,2,50,
// 7,6,1,50,
// 7,6,0,50,
// 1,6,0,50,
// 1,6,1,50,
// 0,
0x77,
0x00,
73, 67, 9, 70, 33, 70, 9,
69, 137, 9, 66, 9, 33, 13,
68, 11, 68, 11, 0,
15,
1,0x11,10,
1,0x12,10,
1,0x22,10,
1,0x21,10,
4,0x36,10,
8,0x36,50,
8,0x26,50,
8,0x16,50,
8,0x06,50,
7,0x63,50,
7,0x62,50,
7,0x61,50,
7,0x60,50,
1,0x60,50,
1,0x61,50,
0,
};


const uint8_t MAP_9[] = {
// 9,9,
// 5,8,
// 10,8,8,1,8,8,8,8,8,
// 8,8,8,1,8,1,1,1,8,
// 1,8,13,1,6,1,1,1,8,
// 8,8,8,15,8,8,8,1,8,
// 1,1,1,1,8,8,11,1,8,
// 8,8,8,6,8,8,8,1,8,
// 15,13,1,1,1,1,12,1,8,
// 8,8,8,8,1,8,8,8,8,
// 8,8,8,17,1,9,8,8,8,
// 5,
// 4,1,1,30,
// 9,1,1,30,
// 7,5,4,30,
// 8,8,3,30,
// 8,5,0,30,
// 5,
// 6,4,4,2,
// 6,4,3,3,
// 6,4,3,5,
// 0,0,3,5,
// 0,0,0,6,
0x99,
0x58,
81, 66, 9, 72, 67, 9, 65, 11, 65,
9, 65, 105, 9, 49, 11, 68, 121, 67,
9, 65, 12, 66, 89, 9, 68, 49, 67,
9, 65, 121, 105, 12, 97, 9, 69, 9,
71, 137, 9, 73, 67, 0,
5,
4,0x11,30,
9,0x11,30,
7,0x54,30,
8,0x83,30,
8,0x50,30,
5,
0x64,0x42,
0x64,0x33,
0x64,0x35,
0x00,0x35,
0x00,0x06,
};

const uint8_t MAP_8[] = {
// 10,10,
// 0,0,
// 9,1,1,8,8,2,8,8,8,8,
// 8,1,8,8,1,1,1,1,1,8,
// 8,8,8,1,1,1,1,1,1,8,
// 1,8,1,8,1,1,8,8,8,8,
// 1,8,1,8,1,1,8,8,8,8,
// 8,8,8,8,1,1,8,8,8,8,
// 4,1,8,1,1,1,1,1,1,1,
// 8,1,8,8,8,1,1,1,1,1,
// 8,1,1,1,2,1,1,1,1,1,
// 8,1,1,1,3,1,1,1,1,1,
// 9,
// 4,0,9,1,
// 6,3,3,30,
// 7,3,3,30,
// 4,3,3,1,
// 6,9,3,100,
// 2,6,4,1,
// 2,7,4,1,
// 2,8,4,1,
// 2,9,4,1,
// 0,
0xAA,
0x00,
73, 10, 66, 17, 69, 9, 66, 13, 68, 14, 
65, 9, 65, 9, 65, 10, 68, 9, 65, 9, 65, 
10, 68, 68, 10, 68, 33, 9, 65, 15, 65, 
9, 67, 13, 65, 11, 17, 13, 65, 11, 25, 
13, 0, 
9,
4,0x09,1,
6,0x33,30,
7,0x33,30,
4,0x33,1,
6,0x93,100,
2,0x64,1,
2,0x74,1,
2,0x84,1,
2,0x94,1,
0,
};


const uint8_t MAP_7[] = {
// 10,10,
// 0,0,
// 9,8,8,1,8,8,8,8,8,1,
// 8,8,1,1,8,8,1,8,8,1,
// 1,4,1,8,8, 1,1,8,1,1,
// 8,8,8,8,8,1,8,8,1,1,
// 8,8,1,1,1,1,8,8,8,8,
// 1,1,1,8,8,8,8,1,8,8,
// 1,1,8,8,8,8,1,1,1,8,
// 1,8,8,8,8,1,1,8,8,8,
// 1,8,8,1,1,1,8,8,8,1,
// 1,17,8,1,1,8,8,8,1,1,
// 10,
// 4,5,9,30,
// 8,1,4,30,
// 8,0,4,30,
// 8,0,3,30,
// 9,7,0,30,
// 9,8,1,30,
// 7,7,8,30,
// 6,2,8,30,
// 6,1,7,30,
// 6,8,7,30,
//0,
0xAA,
0x00,
73, 66, 9, 69, 9, 66, 10, 66, 9, 
66, 10, 33, 9, 66, 10, 65, 10, 69, 
9, 66, 10, 66, 12, 68, 11, 68, 9, 
66, 10, 68, 11, 65, 9, 68, 10, 67, 
9, 66, 11, 67, 10, 137, 65, 10, 67, 
10, 0, 
10,
4,0x59,30,
8,0x14,30,
8,0x04,30,
8,0x03,30,
9,0x70,30,
9,0x81,30,
7,0x78,30,
6,0x28,30,
6,0x17,30,
6,0x87,30,
0,
};

const uint8_t MAP_6[] = {
// 9,10,
// 2,0,
// 12,1,9,1,13,1,1,13,1,
// 4,8,8,8,11,1,8,4,1,
// 1,1,15,1,1,1,4,8,1,
// 8,8,8,8,8,8,8,8,1,
// 12,1,16,1,1,1,8,4,1,
// 8,8,8,8,8,1,4,4,1,
// 8,8,17,8,8,1,4,11,1,
// 1,1,1,1,1,1,16,16,1,
// 1,1,1,1,1,1,8,8,1,
// 1,1,1,1,1,1,8,0,1,
// 6,
// 7,6,9,10,
// 8,7,8,10,
// 7,6,8,10,
// 8,6,9,30,
// 7,6,8,30,
// 8,7,8,30,
// 4,
// 4,1,2,2,
// 7,6,7,7,
// 7,6,6,7,
// 7,6,2,4,
0x9A,
0x20,
97, 9, 73, 9, 105, 10, 105, 9, 33,
67, 89, 9, 65, 33, 11, 121, 11, 33,
65, 9, 71, 65, 9, 97, 9, 129, 11, 65,
33, 9, 69, 9, 34, 9, 66, 137, 66, 9,
33, 89, 15, 130, 15, 66, 15, 65, 1, 9,
0,
6,
7,0x69,10,
8,0x78,10,
7,0x68,10,
8,0x69,30,
7,0x68,30,
8,0x78,30,
4,
0x41,0x22,
0x76,0x77,
0x76,0x67,
0x76,0x24,
};

// 162 becomes 77.
const uint8_t MAP_5[] = {
// 10,10,
// 0,0,
// 9,8,8,8,8,6,8,8,8,1,
// 8,8,8,4,1,1,1,1,6,1,
// 1,1,1,1,1,8,2,8,8,1,
// 8,8,8,8,2,8,1,8,8,0,
// 1,1,1,1,1,8,1,1,1,1,
// 1,8,8,0,1,8,8,1,1,1,
// 1,8,1,1,8,8,8,1,1,1,
// 1,8,8,8,8,8,8,1,1,1,
// 1,1,1,1,1,8,1,1,1,17,
// 1,1,1,1,1,8,8,8,8,8,
// 14,
// 6,5,6,20,
// 9,6,6,20,
// 9,6,7,20,
// 9,5,7,20,
// 9,4,7,20,
// 9,4,6,20,
// 8,7,2,20,
// 8,8,3,20,
// 9,7,3,20,
// 3,8,2,20,
// 2,1,3,20,
// 2,2,3,20,
// 2,3,3,20,
// 4,0,3,20,
// 0,
0xAA, 0x00,
73, 68, 49, 67, 9, 67, 33, 12, 49, 14,
65, 17, 66, 9, 68, 17, 65, 9, 66, 1,
13, 65, 13, 66, 1, 9, 66, 12, 65, 10,
67, 12, 70, 11, 13, 65, 11, 137, 13, 69,
0,
14, 
6,0x56,20,
9,0x66,20,
9,0x67,20,
9,0x57,20,
9,0x47,20,
9,0x46,20,
8,0x72,20,
8,0x83,20,
9,0x73,20,
3,0x82,20,
2,0x13,20,
2,0x23,20,
2,0x33,20,
4,0x03,20,
0,
};


// 89 becomes 59 ..
const uint8_t MAP_4[] = {
// 9,7,
// 4,0,
// 4,4,8,8,9,4,8,4,4,
// 4,8,8,8,11,8,8,8,4,
// 8,8,4,8,8,8,4,8,8,
// 1,16,1,15,1,15,1,15,1,
// 1,8,1,8,1,8,1,8,1,
// 1,8,1,8,1,8,1,8,1,
// 1,17,1,11,1,0,1,11,1,
// 1,
// 8,3,5,1,
// 4,
// 4,1,3,3,
// 7,6,5,3,
// 3,6,7,3,
// 7,6,1,3,
0x97,
0x40,
34, 66, 73, 33, 65, 35, 67, 89, 67,
33, 66, 33, 67, 33, 66, 9, 129, 9,
121, 9, 121, 9, 121, 10, 65, 9, 65, 
9, 65, 9, 65, 10, 65, 9, 65, 9, 65,
9, 65, 10, 137, 9, 89, 9, 1, 9, 89,
9, 0,
1,
8, 0x35, 1,
4,
0x41, 0x33,
0x76, 0x53,
0x36, 0x73,
0x76, 0x13,
};

// 76 becomes 42
const uint8_t MAP_3[] = {
// 9,6,
// 3,0,
// 4,8,8,9,8,8,8,1,1,
// 8,8,8,8,8,8,8,2,8,
// 11,8,8,8,8,8,8,1,8,
// 1,1,15,1,15,1,1,1,11,
// 1,1,8,1,8,1,1,1,1,
// 1,1,0,1,3,1,1,1,1,
// 2,
// 8,8,2,1,
// 9,2,4,20,
// 2,
// 0,2,2,3,
// 8,3,4,3,
0x96,
0x30,
33, 66, 73, 67, 10, 71, 17, 65, 89,
70, 9, 65, 10, 121, 9, 121, 11, 89,
10, 65, 9, 65, 14, 1, 9, 25, 12, 0,
2,
8,0x82,1,
9,0x24,20,
2,
0x02,0x23,
0x83,0x43,
};



// 41 becomes 18
const uint8_t MAP_2[] = {
// 7,5,
// 0,0,
// 9,8,8,8,8,8,8,
// 8,8,8,4,4,8,8,
// 8,8,8,0,4,8,4,
// 4,8,8,8,8,8,4,
// 4,4,8,8,8,8,17,
0x75,
0x00,
73, 71, 66, 34, 69, 1, 33, 
65, 34, 69, 35, 68, 137, 0,
0,
0,
};

// 38 becoomes 21
const uint8_t MAP_1[] = {
// 4,4,
// 0,0,
// 9,8,8,8,
// 8,8,8,8,
// 8,8,8,8,
// 8,8,8,3,
// 4,
// 1,1,1,100,
// 1,1,2,100,
// 1,2,2,100,
// 1,2,1,100,
// 0,
0x44,
0x00,
73,71,71,25,0,
4,
1,0x11,100,
1,0x12,100,
1,0x22,100,
1,0x21,100,
0,
};

