//
//  LightBoard.cpp
//  djBooth
//
//  Created by Andrew Hughes on 12/10/13.
//
//

#include "LightBoard.h"

LightBoard::LightBoard(int rows, int cols) {

    pixelArray = new LedPixel[rows*cols];
    
    numberOfColumns = cols;
    numberOfRows = rows;
    
}

LedPixel* LightBoard::getLedPixel(int r, int c) {
    
    if (r < 0 || c < 0 || r >= numberOfRows || c >= numberOfColumns) {
        printf("EXCEPTION: illegal argument to getLedPixel");
        return NULL;
    }
    
    return &pixelArray[r * numberOfColumns + c];
    
}

void LightBoard::setPixelColor(int r, int c, unsigned int color) {
    LedPixel * pix = getLedPixel(r, c);
    pix->setColorRGB(color);
}

LightBoard::~LightBoard() {
    delete[] pixelArray;
}

