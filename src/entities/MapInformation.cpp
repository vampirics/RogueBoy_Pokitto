#include "MapInformation.h"
#include "../utils/Enums.h"

uint8_t MapInformation::getLevel() {
    return this->level;
}

uint16_t MapInformation::getWidth() {
    return this->width;
}

uint16_t MapInformation::getHeight() {
    return this->height;
}

uint16_t MapInformation::getTimer() {
    return this->timer;
}

void MapInformation::setLevel(uint8_t level) {
    this->level = level;
}

void MapInformation::setWidth(uint16_t width) {
    this->width = width;
}

void MapInformation::setHeight(uint16_t height) {
    this->height = height;
}

void MapInformation::setTimer(uint16_t timer) {
    this->timer = timer;
}

void MapInformation::decTimer() {
    //SJH 
    this->timer--;
}

MapTiles MapInformation::getBlock(int16_t x, int16_t y) {


    if ((x < 0) || (x >= this->width) || (y< 0) || (y >= this->height)) {
        return MapTiles::NewFill;
    } 
    else {
        MapTiles Block = static_cast<MapTiles>(this->mapData[(x + (y * this->width))]);
        return Block;
    }

}

void MapInformation::setBlock(uint8_t x, uint8_t y, MapTiles block) {

    if ((x >= this->width) || (y >= this->height)) {
        return;
    }
    this->mapData[x + (y * (this->width))] = static_cast<uint8_t>(block);

}

void MapInformation::setBlock(uint16_t index, MapTiles block) {

    if (index > (this->height * this->width)) {
        return;
    }
    this->mapData[index] = static_cast<uint8_t>(block);

}

void MapInformation::swap(uint8_t & a, uint8_t & b) {

    uint8_t t = a;
    a = b;
    b = t;

}

bool MapInformation::between(uint8_t x, uint8_t y, uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2) {

    if (x > x1)     swap(x, x1);
    if (y > y1)     swap(y, y1);
        
    return ((x <= x2) && (x2 <= x1) && (y <= y2) && (y2 <= y1));

}

int8_t MapInformation::getTileX(uint16_t x) {
    
    return (x / TILE_WIDTH);

}

uint8_t MapInformation::getTileY(uint16_t y) {
    
    return (y / TILE_HEIGHT);

}

uint8_t MapInformation::getTileXOffset(uint16_t x) {
    
    return (x % TILE_WIDTH);

}

uint8_t MapInformation::getTileYOffset(uint16_t y) {
    
    return (y % TILE_HEIGHT);

}

uint16_t MapInformation::getDistance(int x,int y,int x1,int y1) {
    
    uint16_t ret = (abs(this->getTileX(x) - this->getTileX(x1)) + abs(this->getTileY(y) - this->getTileY(y1))); 
    return ret;
    
}

uint8_t MapInformation::getOffset(uint8_t x, uint8_t y) {

    if ((x >= this->width) || (y >= this->height)) {
        return 0;
    }
    return (x + (y * (this->width)));

}


bool MapInformation::isWalkable(uint16_t x, uint16_t y, Direction direction, uint8_t width, uint8_t height) {

    MapTiles tile1 = MapTiles::Empty;
    MapTiles tile2 = MapTiles::Empty;
    int16_t xMod = x % 16;
    int16_t yMod = y % 16;

    uint8_t widthHalf = width / 2;
    uint8_t heightHalf = height / 2;
    
    bool walk = true; 

    switch (direction) {

        case Direction::Up:
            //printf("Up (%i,%i) %i,%i > %i,%i > %i,%i .. ", x, y, this->getTileX(x), this->getTileY(y), this->getTileX(x - widthHalf), this->getTileY(y - heightHalf), this->getTileX(x - widthHalf+ 16), this->getTileY(y - heightHalf));        
            //printf("x=%i %% 16 = %i .. ", x, ((x - widthHalf) % 16) + width);        
            tile1 = this->getBlock(this->getTileX(x - widthHalf), this->getTileY(y - heightHalf));
            if (((x - widthHalf) % 16) + width > 16) tile2 = this->getBlock(this->getTileX(x - widthHalf + 16), this->getTileY(y - heightHalf));
            //printf("%i %i ", tile1, tile2);
            break;

        case Direction::Right:
            //printf("Right (%i,%i) %i,%i > %i,%i > %i,%i .. ", x, y, this->getTileX(x), this->getTileY(y), this->getTileX(x + widthHalf - 1), this->getTileY(y - heightHalf), this->getTileX(x + widthHalf - 1), this->getTileY(y - heightHalf + 16));        
            //printf("y=%i %% 16 = %i .. ", y, ((y - heightHalf) % 16) + height);        
            tile1 = this->getBlock(this->getTileX(x + widthHalf - 1), this->getTileY(y - heightHalf));
            if (((y - heightHalf) % 16) + height > 16) tile2 = this->getBlock(this->getTileX(x + widthHalf - 1), this->getTileY(y - heightHalf + 16)); 
            //printf("%i %i ", tile1, tile2);
            break;

        case Direction::Down:
            //printf("Down (%i,%i) %i,%i > %i,%i > %i,%i .. ", x, y, this->getTileX(x), this->getTileY(y), this->getTileX(x - widthHalf), this->getTileY(y + heightHalf - 1), this->getTileX(x - widthHalf+ 16), this->getTileY(y + heightHalf - 1));        
            //printf("y=%i %% 16 = %i .. ", y, ((x - widthHalf) % 16) + width);        
            tile1 = this->getBlock(this->getTileX(x - widthHalf), this->getTileY(y + heightHalf - 1));
            if (((x - widthHalf) % 16) + width > 16) tile2 = this->getBlock(this->getTileX(x - widthHalf + 16), this->getTileY(y + heightHalf - 1));
            //printf("%i %i ", tile1, tile2);
            break;

        case Direction::Left:
            //printf("Left (%i,%i) %i,%i > %i,%i > %i,%i .. ", x, y, this->getTileX(x), this->getTileY(y), this->getTileX(x - widthHalf), this->getTileY(y - heightHalf), this->getTileX(x - widthHalf), this->getTileY(y - heightHalf + 16));        
            //printf("y=%i %% 16 = %i .. ", y, ((y - heightHalf) % 16) + height);        
            tile1 = this->getBlock(this->getTileX(x - widthHalf), this->getTileY(y - heightHalf));
            if (((y - heightHalf) % 16) + height > 16) tile2 = this->getBlock(this->getTileX(x - widthHalf), this->getTileY(y - heightHalf + 16));
            //printf("%i %i ", tile1, tile2);
            break;

            
    }
//printf("%i %i\n", tile1, tile2);

    switch (tile1) {

        case MapTiles::OpenDoor:
        case MapTiles::UpStairs:
        case MapTiles::DownStairs:
        case MapTiles::Empty:
        case MapTiles::OpenChest:
        case MapTiles::Rubble:
        case MapTiles::PressPlate:
        case MapTiles::NewBlank:
        case MapTiles::NewDoorLHSOpen:
        case MapTiles::NewDoorRHSOpen:
        case MapTiles::NewDoorTOPOpen:
        case MapTiles::NewDoorBOTOpen:
            walk = true;
            break;

        case MapTiles::NewStraightTOP:
        case MapTiles::NewStraightBOT:
        case MapTiles::NewDoorTOP:
        case MapTiles::NewDoorBOT:

            switch (direction) {

                case Direction::Left:
                case Direction::Right:
                    walk = true;
                    break;

                default:
                    walk = false;
                    break;
                
            }

            break;

        case MapTiles::NewStraightLHS:
        case MapTiles::NewStraightRHS:
        case MapTiles::NewDoorLHS:
        case MapTiles::NewDoorRHS:

            switch (direction) {

                case Direction::Up:
                case Direction::Down:
                    walk = true;
                    break;

                default:
                    walk = false;
                    break;
                
            }

            break;

        case MapTiles::NewCornerLL:

            switch (direction) {

                case Direction::Down:
                case Direction::Left:
                    walk = true;
                    break;

                default:
                    walk = false;
                    break;
                
            }

            break;

        case MapTiles::NewCornerLR:

            switch (direction) {

                case Direction::Down:
                case Direction::Right:
                    walk = true;
                    break;

                default:
                    walk = false;
                    break;
                
            }

            break;

        case MapTiles::NewCornerTL:

            switch (direction) {

                case Direction::Up:
                case Direction::Left:
                    walk = true;
                    break;

                default:
                    walk = false;
                    break;
                
            }

            break;

        case MapTiles::NewCornerTR:

            switch (direction) {

                case Direction::Up:
                case Direction::Right:
                    walk = true;
                    break;

                default:
                    walk = false;
                    break;
                
            }

            break;

        case MapTiles::NewUpperLeftTriangle:
            {
                xMod = (x - widthHalf) % 16;
                yMod = (y - heightHalf) % 16;

                switch (direction) {

                    case Direction::Left:
                        //printf("%i, %i > %i\n", xMod, yMod, xMod + yMod);
                        if (xMod + yMod >= 16) {
                            walk = true;
                        }
                        else {
                            walk = false;
                        }
                        break;

                    case Direction::Up:
                        //printf("NULT:1 %i, %i > %i\n", xMod, yMod, xMod + yMod);
                        if (xMod + yMod >= 16) {
                            walk = true;
                        }
                        else {
                            walk = false;
                        }
                        break;

                    default:
                        walk = true;

                }

            }
            break;

        case MapTiles::NewUpperRightTriangle:
            {
                xMod = (x + widthHalf) % 16;
                yMod = (y - heightHalf) % 16;

                switch (direction) {

                    case Direction::Right:
                        //printf("UR-R1 %i, %i > %i\n", xMod - 2, yMod, xMod + yMod);
                        if (xMod - 2 < yMod) {
                            walk = true;
                        }
                        else {
                            walk = false;
                        }
                        break;

                    case Direction::Up:
                        //printf("UR-U1 %i, %i > %i\n", xMod, yMod, xMod + yMod);
                        if (xMod - 2 < yMod) {
                            walk = true;
                        }
                        else {
                            walk = false;
                        }
                        break;

                    default:
                        walk = true;
                        break;

                }

            }
            break;

        case MapTiles::NewLowerLeftTriangle:
            {
                xMod = (x - widthHalf) % 16;
                yMod = (y + heightHalf) % 16;

                switch (direction) {

                    case Direction::Left:
                        //printf("LL-R1 %i, %i > %i\n", xMod, yMod, xMod + yMod);
                        if (yMod != 0 && xMod >= yMod) {
                            walk = true;
                        }
                        else {
                            walk = false;
                        }
                        break;

                    case Direction::Down:
                        //printf("LL-D1 %i, %i > %i\n", xMod, yMod, xMod + yMod);
                        if (xMod >= yMod) {
                            walk = true;
                        }
                        else {
                            walk = false;
                        }
                        break;

                    default:
                        walk = true;
                        break;

                }

            }
            break;

        case MapTiles::NewLowerRightTriangle:
            {
                xMod = (x + widthHalf) % 16;
                yMod = (y + heightHalf) % 16;

                switch (direction) {

                    case Direction::Right:
                        //printf("LR-R1 %i, %i > %i\n", xMod, yMod, xMod + yMod);
                        if (yMod != 0 && xMod + yMod <= 16) {
                            walk = true;
                        }
                        else {
                            walk = false;
                        }
                        break;

                    case Direction::Down:
                        //printf("LR-D1 %i, %i > %i\n", xMod, yMod, xMod + yMod);
                        if (xMod != 0 && xMod + yMod <= 16) {
                            walk = true;
                        }
                        else {
                            walk = false;
                        }
                        break;

                    default:
                        walk = true;
                        break;

                }

            }
            break;

        default:
            walk = false;
            break;
        
    }

    if (walk == true) {

        switch (tile2) {

            case MapTiles::OpenDoor:
            case MapTiles::UpStairs:
            case MapTiles::DownStairs:
            case MapTiles::Empty:
            case MapTiles::OpenChest:
            case MapTiles::Rubble:
            case MapTiles::PressPlate:
            case MapTiles::NewBlank:
            case MapTiles::NewDoorLHSOpen:
            case MapTiles::NewDoorRHSOpen:
            case MapTiles::NewDoorTOPOpen:
            case MapTiles::NewDoorBOTOpen:
                walk = true;
                break;

            case MapTiles::NewStraightTOP:
            case MapTiles::NewDoorTOP:
                {
                    xMod = (x + widthHalf) % 16;
                    yMod = (y - heightHalf) % 16;
                    
                    //printf("STOP-2 %i, %i > %i\n", xMod, yMod, xMod + yMod);

                    switch (direction) {

                        // case Direction::Left:
                        // case Direction::Right:
                        //     walk = true;
                        //     break;

                        default:
                            walk = false;
                            break;
                        
                    }

                }
                break;

            case MapTiles::NewStraightBOT:
            case MapTiles::NewDoorBOT:
                {
                    xMod = (x + widthHalf) % 16;
                    yMod = (y + heightHalf) % 16;
                    
                    //printf("SBOT-2 %i, %i > %i\n", xMod, yMod, xMod + yMod);

                    switch (direction) {

                        // case Direction::Left:
                        // case Direction::Right:
                        //     walk = true;
                        //     break;

                        default:
                            walk = false;
                            break;
                        
                    }

                }
                break;

            case MapTiles::NewStraightLHS:
            case MapTiles::NewStraightRHS:
            case MapTiles::NewDoorLHS:
            case MapTiles::NewDoorRHS:
                {

                    switch (direction) {

                        case Direction::Up:
                        case Direction::Down:
                            walk = true;
                            break;

                        default:
                            walk = false;
                            break;
                        
                    }

                }
                break;

        case MapTiles::NewCornerLL:

            switch (direction) {

                case Direction::Down:
                case Direction::Left:
                    walk = true;
                    break;

                default:
                    walk = false;
                    break;
                
            }

            break;

        case MapTiles::NewCornerLR:

            switch (direction) {

                case Direction::Down:
                case Direction::Right:
                    walk = true;
                    break;

                default:
                    walk = false;
                    break;
                
            }

            break;

        case MapTiles::NewCornerTL:

            switch (direction) {

                case Direction::Up:
                case Direction::Left:
                    walk = true;
                    break;

                default:
                    walk = false;
                    break;
                
            }

            break;

        case MapTiles::NewCornerTR:

            switch (direction) {

                case Direction::Up:
                case Direction::Right:
                    walk = true;
                    break;

                default:
                    walk = false;
                    break;
                
            }

            break;

        case MapTiles::NewUpperLeftTriangle:
                walk = true;
                break;

            case MapTiles::NewUpperRightTriangle:
                {
                    //printf("up\n");
                    xMod = (x + widthHalf) % 16;
                    yMod = (y - heightHalf) % 16;

                    switch (direction) {

                        // case Direction::Right:
                        //printf("UR-R2 %i, %i > %i\n", xMod - 2, yMod, xMod + yMod);
                        //     if (xMod - 2 < yMod) {
                        //         walk = true;
                        //     }
                        //     else {
                        //         walk = false;
                        //     }
                        //     break;

                        case Direction::Up:
                            //printf("UR-U2 %i, %i > %i\n", xMod, yMod, xMod + yMod);
                            if (xMod - 2 < yMod) {
                                walk = true;
                            }
                            else {
                                walk = false;
                            }
                            break;

                        default:
                            walk = true;
                            break;

                    }

                }
                break;

            case MapTiles::NewLowerLeftTriangle:
                {
                    //printf("ll\n");
                    xMod = (x - widthHalf) % 16;
                    yMod = (y + heightHalf) % 16;

                    switch (direction) {

                        case Direction::Left:
                            //printf("LL-L2 %i, %i > %i\n", xMod, yMod, xMod + yMod);
                            if (xMod >= yMod) {
                                walk = true;
                            }
                            else {
                                walk = false;
                            }
                            break;

                        default:
                            walk = true;
                            break;

                    }

                }
                break;

            case MapTiles::NewLowerRightTriangle:
                {
                    //printf("up\n");
                    xMod = (x + widthHalf) % 16;
                    yMod = (y + heightHalf) % 16;

                    switch (direction) {

                        case Direction::Right:
                            //printf("LR-R2 %i, %i > %i\n", xMod, yMod, xMod + yMod);
                            if (xMod + yMod <= 16) {
                                walk = true;
                            }
                            else {
                                walk = false;
                            }
                            break;

                        case Direction::Down:
                            //printf("LR-D2 %i, %i > %i\n", xMod, yMod, xMod + yMod);
                            if (xMod + yMod <= 16) {
                                walk = true;
                            }
                            else {
                                walk = false;
                            }
                            break;

                        default:
                            walk = true;
                            break;

                    }

                }
                break;

            default:
                walk = false;
                break;
            
        }

    }

    //printf(" -----> %i\n", walk);
    return walk;

    
}