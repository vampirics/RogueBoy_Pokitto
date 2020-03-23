#pragma once

#include "Pokitto.h"

using PC = Pokitto::Core;
using PD = Pokitto::Display;
using PS = Pokitto::Sound;

/*
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
   10 - MapTiles::SwitchOn
   11 - MapTiles::SwitchOff
   12 - Wall_Torch
   13 - Window_Wall
   14 - Sign_wall
   15 - Spear_Door
   16 - Explosive_barrel
   17 - Locked_Stairs_Down
   18 - MapTiles::Rubble

*/


// -----------------------------------------------------------------------------

// const uint8_t MAP_1[] = {
//     /* Map Size */   4, 4,
//     /* Player Pos */ 0, 0,
//     9,8,8,8,
//     8,8,8,8,
//     8,8,8,8,
//     8,8,8,3,
//     /* Object Count */ 4,
//     Object::Coin, 1, 1, 0,
//     Object::Coin, 1, 2, 0,
//     Object::Coin, 2, 2, 0,
//     Object::Coin, 2, 1, 0,
//     /* Environment Count */ 0,
// };

const uint8_t MAP_Test[] = {
    /* Map Size */   14, 11,
    /* Player Pos */ 1, 1,
    /* Timner */     200,
    1,1,1,1,1,1,1,1,1,1,1,1, 1,1,
    1,9,8,8,8,8,19,8,8,8,8,8,8,1,
    1,8,8,8,8,8,8,8,8,8,8,8,8,1,
    1,8,8,8,8,8,8,8,8,8,8,8,8,1,
    1,8,8,8,8,8,8,8,8,8,8,8,8,1,
    1,8,8,8,8,8,8,8,8,8,8,8,8,1,
    1,8,8,8,8,1,1,1,1,8,8,8,8,1,
    1,8,8,8,8,1,20,20,1,8,8,8,8,1,
    1,8,8,8,8,1,20,20,1,8,8,8,8,1,
    1,8,8,8,8,1,20,20,1,8,8,8,3,1,
    1,1,1,1,1,1,20,20,1,1,1,1,1,1,

    /* Object Count */ 14,
    Object::Coin, 2, 2, 0,
    Object::Coin, 2, 3, 0,
    Object::Coin, 3, 3, 0,
    Object::Donut, 4, 4, 20,
    Object::Key, 5, 4, 20,
    Object::Potion, 6, 4, 20,

    Object::Donut, 11, 4, 20,
    Object::Ham, 12, 4, 20,
    Object::Spanner, 6, 5, 20,

    Object::Ham, 12, 5, 20,
    Object::Ham, 12, 6, 20,
    Object::Ham, 12, 7, 20,
    Object::Ham, 12, 8, 20,
    Object::Donut, 10, 9, 20,

    /* Environment Count */ 1,

};

// -----------------------------------------------------------------------------

const uint8_t MAP_1[] = {
    /* Map Size */   6, 6,
    /* Player Pos */ 1, 1,
    /* Timner */     255,
    1,1,1,1,1,1,
    1,9,8,8,8,1,
    1,8,8,8,8,1,
    1,8,8,8,8,1,
    1,8,8,8,3,1,
    1,1,1,1,1,1,
    /* Object Count */ 4,
    Object::Coin, 2, 2, 0,
    Object::Coin, 2, 3, 0,
    Object::Coin, 3, 3, 0,
    Object::Coin, 3, 2, 0,
    /* Environment Count */ 0,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_2[] = {
    /* Map Size */   9,7,
    /* Player Pos */ 1,1,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,
    1,9,8,8,8,8,8,8,1,
    1,8,8,8,4,4,8,8,1,
    1,8,8,8,0,4,8,4,1,
    1,4,8,8,8,8,8,4,1,
    1,4,4,8,8,8,8,17,1,
    1,1,1,1,1,1,1,1,1,
    /* Object Count */ 0,
    /* Environment Count */ 0,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_3[] = {
    /* Map Size */   11,8,
    /* Player Pos */ 4,1,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,
    1,4,8,8,9,8,8,8,1,1,1,
    1,8,8,8,8,8,8,8,2,8,1,
    1,11,8,8,8,8,8,8,1,8,1,
    1,1,1,15,1,15,1,1,1,11,1,
    1,1,1,8,1,8,1,1,1,1,1,
    1,1,1,0,1,3,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 2,
    Object::Spider,9,3,1,
    Object::Bat,3,5,20,
    /* Environment Count */ 2,
    1,3,3,4,
    9,4,5,4,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_4[] = {
    /* Map Size */   11,9,
    /* Player Pos */ 5,1,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,
    1,4,4,8,8,9,4,8,4,4,1,
    1,4,8,8,8,11,8,8,8,4,1,
    1,8,8,4,8,8,8,4,8,8,1,
    1,1,16,1,15,1,15,1,15,1,1,
    1,1,8,1,8,1,8,1,8,1,1,
    1,1,8,1,8,1,8,1,8,1,1,
    1,1,17,1,11,1,0,1,11,1,1,
    1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 1,
    Object::Spider,4,6,1,
    /* Environment Count */ 4,
    5,2,4,4,
    8,7,6,4,
    4,7,8,4,
    8,7,2,4,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_5[] = {
    /* Map Size */   12,12,
    /* Player Pos */ 1,1,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,9,8,8,8,8,6,8,8,8,1,1,
    1,8,8,8,4,1,1,1,1,6,1,1,
    1,1,1,1,1,1,8,2,8,8,1,1,
    1,8,8,8,8,2,8,1,8,8,0,1,
    1,1,1,1,1,1,8,1,1,1,1,1,
    1,1,8,8,0,1,8,8,1,1,1,1,
    1,1,8,1,1,8,8,8,1,1,1,1,
    1,1,8,8,8,8,8,8,1,1,1,1,
    1,1,1,1,1,1,8,1,1,1,17,1,
    1,1,1,1,1,1,8,8,8,8,8,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 14,
    Object::Floater,6,7,30,
    Object::Bat,7,7,20,
    Object::Bat,7,8,20,
    Object::Bat,6,8,20,
    Object::Bat,5,8,20,
    Object::Bat,5,7,20,
    Object::Spider,8,3,20,
    Object::Spider,9,4,20,
    Object::Bat,8,4,20,
    Object::Donut,9,3,20,
    Object::SackOCash,2,4,20,
    Object::SackOCash,3,4,20,
    Object::SackOCash,4,4,20,
    Object::Key,1,4,20,
    /* Environment Count */ 0,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_6[] = {
    /* Map Size */   11,12,
    /* Player Pos */ 3,1,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,
    1,12,1,9,1,13,1,1,13,1,1,
    1,4,8,8,8,11,1,8,4,1,1,
    1,1,1,15,1,1,1,4,8,1,1,
    1,8,8,8,8,8,8,8,8,1,1,
    1,12,1,16,1,1,1,8,4,1,1,
    1,8,8,8,8,8,1,4,4,1,1,
    1,8,8,17,8,8,1,4,11,1,1,
    1,1,1,1,1,1,1,16,16,1,1,
    1,1,1,1,1,1,1,8,8,1,1,
    1,1,1,1,1,1,1,8,0,1,1,
    1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 6,
    Object::Skull,7,10,10,
    Object::Spider,8,9,10,
    Object::Skull,7,9,10,
    Object::Spider,7,10,30,
    Object::Skull,7,9,30,
    Object::Spider,8,9,30,
    /* Environment Count */ 4,
    5,2,3,3,
    8,7,8,8,
    8,7,7,8,
    8,7,3,5,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_7[] = {
    /* Map Size */   12,12,
    /* Player Pos */ 1,1,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,9,8,8,1,8,8,8,8,8,1,1,
    1,8,8,1,1,8,8,1,8,8,1,1,
    1,1,4,1,8,8, 1,1,8,1,1,1,
    1,8,8,8,8,8,1,8,8,1,1,1,
    1,8,8,1,1,1,1,8,8,8,8,1,
    1,1,1,1,8,8,8,8,1,8,8,1,
    1,1,1,8,8,8,8,1,1,1,8,1,
    1,1,8,8,8,8,1,1,8,8,8,1,
    1,1,8,8,1,1,1,8,8,8,1,1,
    1,1,17,8,1,1,8,8,8,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 10,
    Object::Key,6,10,30,
    Object::Spider,2,5,30,
    Object::Spider,1,5,30,
    Object::Spider,1,4,30,
    Object::Bat,8,1,30,
    Object::Bat,9,2,30,
    Object::Skull,8,9,30,
    Object::Floater,3,9,30,
    Object::Floater,2,8,30,
    Object::Floater,9,8,30,
    /* Environment Count */ 0,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_8[] = {
    /* Map Size */   12,12,
    /* Player Pos */ 1,1,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,9,1,1,8,8,2,8,8,8,8,1,
    1,8,1,8,8,1,1,1,1,1,8,1,
    1,8,8,8,1,1,1,1,1,1,8,1,
    1,1,8,1,8,1,1,8,8,8,8,1,
    1,1,8,1,8,1,1,8,8,8,8,1,
    1,8,8,8,8,1,1,8,8,8,8,1,
    1,4,1,8,1,1,1,1,1,1,1,1,
    1,8,1,8,8,8,1,1,1,1,1,1,
    1,8,1,1,1,2,1,1,1,1,1,1,
    1,8,1,1,1,3,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 9,
    Object::Key,1,10,1,
    Object::Floater,4,4,30,
    Object::Skull,4,4,30,
    Object::Key,4,4,1,
    Object::Floater,10,4,100,
    Object::SackOCash,7,5,1,
    Object::SackOCash,8,5,1,
    Object::SackOCash,9,5,1,
    Object::SackOCash,10,5,1,
    /* Environment Count */ 0,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_9[] = {
    /* Map Size */   11,11,
    /* Player Pos */ 6,9,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,
    1,10,8,8,1,8,8,8,8,8,1,
    1,8,8,8,1,8,1,1,1,8,1,
    1,1,8,13,1,6,1,1,1,8,1,
    1,8,8,8,15,8,8,8,1,8,1,
    1,1,1,1,1,8,8,11,1,8,1,
    1,8,8,8,6,8,8,8,1,8,1,
    1,15,13,1,1,1,1,12,1,8,1,
    1,8,8,8,8,1,8,8,8,8,1,
    1,8,8,8,17,1,9,8,8,8,1,
    1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 5,
    Object::Key,2,2,30,
    Object::Bat,2,2,30,
    Object::Skull,6,5,30,
    Object::Spider,9,4,30,
    Object::Spider,6,1,30,
    /* Environment Count */ 5,
    7,5,5,3,
    7,5,4,4,
    7,5,4,6,
    1,1,4,6,
    1,1,1,7,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_10[] = {
    /* Map Size */   9,9,
    /* Player Pos */ 1,1,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,
    1,9,8,8,8,1,8,8,1,
    1,8,8,8,8,4,8,8,1,
    1,8,8,8,8,1,8,8,1,
    1,8,8,8,17,1,8,8,1,
    1,1,4,1,1,1,1,1,1,
    1,8,8,8,8,1,1,1,1,
    1,8,8,8,8,1,1,1,1,
    1,1,1,1,1,1,1,1,1,
    /* Object Count */ 15,
    Object::Coin,2,2,10,
    Object::Coin,2,3,10,
    Object::Coin,3,3,10,
    Object::Coin,3,2,10,
    Object::Key,4,7,10,
    Object::Spider,4,7,50,
    Object::Spider,3,7,50,
    Object::Spider,2,7,50,
    Object::Spider,1,7,50,
    Object::Skull,7,4,50,
    Object::Skull,7,3,50,
    Object::Skull,7,2,50,
    Object::Skull,7,1,50,
    Object::Coin,7,1,50,
    Object::Coin,7,2,50,
    /* Environment Count */ 0,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_11[] = {
    /* Map Size */   12,8,
    /* Player Pos */ 2,2,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,8,8,8,1,1,1,0,1,3,1,1,
    1,8,9,8,2,8,8,4,1,8,1,1,
    1,8,8,8,1,8,8,1,1,8,8,1,
    1,1,4,1,1,1,2,1,1,1,8,1,
    1,8,8,8,1,8,8,8,8,8,8,1,
    1,8,8,8,1,1,8,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 11,
    Object::Donut,2,6,20,
    Object::Spider,3,5,20,
    Object::Spider,1,5,20,
    Object::Bat,6,2,20,
    Object::Key,1,6,20,
    Object::Bat,5,3,20,
    Object::Bat,6,6,20,
    Object::Spider,5,5,20,
    Object::Skull,8,5,20,
    Object::Floater,9,3,20,
    Object::Skull,10,5,20,
    /* Environment Count */ 0,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_12[] = {
    /* Map Size */   4,12,
    /* Player Pos */ 1,1,
    /* Timner */     255,
    1,1,1,1,
    1,8,11,1,
    1,8,11,1,
    1,8,11,1,
    1,8,11,1,
    1,8,1,1,
    1,15,1,1,
    1,15,1,1,
    1,15,8,1,
    1,15,1,1,
    1,17,1,1,
    1,1,1,1,
    /* Object Count */ 3,
    Object::Key,2,8,40,
    Object::Bat,2,8,40,
    Object::Bat,2,8,40,
    /* Environment Count */ 4,
    2,4,1,8,
    2,2,1,7,
    2,2,1,6,
    2,4,1,9,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_13[] = {
    /* Map Size */   11,12,
    /* Player Pos */ 4,2,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,
    1,4,4,4,4,1,1,12,1,1,1,
    1,4,7,4,8,8,8,8,1,3,1,
    1,4,4,8,8,7,8,8,15,8,1,
    1,1,12,1,1,1,8,1,1,12,1,
    1,1,8,8,8,1,8,4,8,8,1,
    1,1,8,1,2,1,1,1,1,8,1,
    1,1,8,1,8,4,8,8,8,8,1,
    1,1,8,12,1,1,8,1,1,12,1,
    1,1,8,8,11,1,8,8,4,0,1,
    1,1,12,1,1,1,1,12,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 7,
    Object::Skull,8,5,20,
    Object::Skull,8,5,20,
    Object::Spider,7,9,20,
    Object::Spider,7,9,20,
    Object::Spider,7,9,20,
    Object::Bat,2,9,20,
    Object::Floater,2,9,20,
    /* Environment Count */ 1,
    4,9,8,3,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_14[] = {
    /* Map Size */   11,11,
    /* Player Pos */ 5,5,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,
    1,8,8,8,8,8,8,8,8,8,1,
    1,8,7,8,7,8,7,8,7,8,1,
    1,8,8,8,8,8,8,8,8,8,1,
    1,8,7,8,7,8,7,8,7,8,1,
    1,8,8,8,8,8,8,8,8,8,1,
    1,8,7,8,7,8,7,8,7,8,1,
    1,8,8,8,8,8,8,8,8,8,1,
    1,8,7,8,7,17,7,8,7,8,1,
    1,8,8,8,8,8,8,8,8,8,1,
    1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 15,
    Object::Bat,8,3,100,
    Object::Bat,7,2,100,
    Object::Bat,5,2,100,
    Object::Bat,3,2,100,
    Object::Bat,2,3,100,
    Object::Bat,2,5,100,
    Object::Bat,2,7,100,
    Object::Bat,3,8,100,
    Object::SackOCash,1,9,100,
    Object::Bat,7,8,100,
    Object::Bat,8,7,100,
    Object::Bat,8,5,100,
    Object::Key,1,1,100,
    Object::SackOCash,9,1,100,
    Object::Coin,9,9,100,
    /* Environment Count */ 0,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_15[] = {
    /* Map Size */   12,11,
    /* Player Pos */ 6,5,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,8,8,1,1,1,1,1,
    1,8,8,8,1,8,8,1,8,8,8,1,
    1,16,16,16,1,8,8,1,16,16,16,1,
    1,8,8,8,1,1,1,1,8,8,8,1,
    1,17,8,14,6,8,8,6,14,8,17,1,
    1,8,8,8,1,1,1,1,8,8,8,1,
    1,16,16,16,1,8,8,1,16,16,16,1,
    1,8,8,8,1,8,8,1,8,8,8,1,
    1,1,1,1,1,8,8,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 14,
    Object::Floater,9,8,50,
    Object::Floater,10,8,50,
    Object::Floater,8,8,50,
    Object::Spider,8,2,50,
    Object::Spider,9,2,50,
    Object::Spider,10,2,50,
    Object::Bat,3,2,50,
    Object::Bat,2,2,50,
    Object::Bat,1,2,50,
    Object::Skull,1,8,50,
    Object::Skull,2,8,50,
    Object::Skull,3,8,50,
    Object::Key,2,2,50,
    Object::Key,9,8,50,
    /* Environment Count */ 14,
    3,5,4,5,
    8,5,7,5,
    8,5,8,7,
    8,5,9,7,
    8,5,10,7,
    8,5,8,3,
    8,5,9,3,
    8,5,10,3,
    3,5,3,7,
    3,5,3,3,
    3,5,2,3,
    3,5,1,3,
    3,5,2,7,
    3,5,1,7,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_16[] = {
    /* Map Size */   11,11,
    /* Player Pos */ 5,8,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,
    1,8,8,15,1,1,1,1,0,8,1,
    1,0,1,8,8,14,8,8,1,8,1,
    1,1,8,2,8,8,8,2,8,15,1,
    1,1,8,8,1,8,1,8,8,1,1,
    1,1,14,8,8,1,8,8,14,1,1,
    1,1,8,8,1,0,1,8,8,1,1,
    1,15,8,1,8,8,8,2,8,1,1,
    1,8,1,8,8,9,8,8,1,8,1,
    1,3,8,1,1,1,1,1,8,8,1,
    1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 10,
    Object::Spider,7,5,50,
    Object::Spider,8,4,50,
    Object::Bat,9,1,50,
    Object::Bat,9,1,50,
    Object::Floater,6,2,50,
    Object::Skull,1,1,50,
    Object::Skull,1,1,50,
    Object::Skull,2,4,50,
    Object::Skull,3,5,50,
    Object::Floater,2,6,50,
    /* Environment Count */ 6,
    8,5,7,7,
    8,5,9,3,
    5,2,7,3,
    5,2,3,1,
    2,5,3,3,
    2,5,1,7,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_17[] = {
    /* Map Size */   12,11,
    /* Player Pos */ 2,2,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,8,8,8,12,8,8,8,8,8,8,1,
    1,8,9,8,1,8,8,1,8,8,8,1,
    1,12,1,8,1,8,1,1,8,1,12,1,
    1,8,8,8,1,8,8,1,8,8,8,1,
    1,14,8,8,16,8,8,12,8,8,8,1,
    1,1,1,13,1,1,2,1,1,1,8,1,
    1,8,8,8,1,8,8,8,1,8,8,1,
    1,8,8,8,15,8,17,8,12,8,8,1,
    1,8,8,8,1,8,8,8,1,11,8,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 14,
    Object::Key,10,8,50,
    Object::Key,2,8,50,
    Object::Spider,5,7,50,
    Object::Spider,7,9,50,
    Object::Skull,8,4,50,
    Object::Skull,6,2,50,
    Object::Bat,1,4,50,
    Object::Bat,2,5,50,
    Object::Bat,10,8,50,
    Object::Bat,9,7,50,
    Object::Floater,9,7,50,
    Object::Floater,1,7,30,
    Object::Floater,3,9,30,
    Object::Floater,1,9,30,
    /* Environment Count */ 3,
    1,5,4,5,
    10,1,4,8,
    9,9,4,8,
};

// -----------------------------------------------------------------------------

const uint8_t MAP_18[] = {
    /* Map Size */   11,10,
    /* Player Pos */ 5,1,
    /* Timner */     255,
    1,1,1,1,1,1,1,1,1,1,1,
    1,8,8,8,8,9,8,8,8,8,1,
    1,8,14,8,14,8,14,8,14,8,1,
    1,8,8,8,8,8,8,8,8,8,1,
    1,8,14,8,14,8,14,8,14,8,1,
    1,8,8,8,8,8,8,8,8,8,1,
    1,8,14,8,14,8,14,8,14,8,1,
    1,8,8,8,8,8,8,8,8,8,1,
    1,1,1,1,1,17,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,
    /* Object Count */ 0,
    /* Environment Count */ 3,
    8,2,5,8,
    2,4,5,8,
    8,6,5,8,
};
