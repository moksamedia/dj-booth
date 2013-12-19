//
//  LightBoard.h
//  djBooth
//
//  Created by Andrew Hughes on 12/10/13.
//
//

#ifndef __djBooth__LightBoard__
#define __djBooth__LightBoard__

#include <iostream>
#include "LedPixel.h"

class LightBoard {
    
    LedPixel * pixelArray;
    
public:
    
    int numberOfRows = 9;
    int numberOfColumns = 67;

    LightBoard(int rows, int cols);
    ~LightBoard();
    
    LedPixel* getLedPixel(int r, int c);
    void setPixelColor(int r, int c, unsigned int color);
};

#endif /* defined(__djBooth__LightBoard__) */
