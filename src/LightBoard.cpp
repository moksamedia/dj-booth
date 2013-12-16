//
//  LightBoard.cpp
//  djBooth
//
//  Created by Andrew Hughes on 12/10/13.
//
//

#include "LightBoard.h"

LightBoard::LightBoard(int rows, int cols) {

    pixelArrayData = new LedPixel[rows*cols];
    pixelArray = new LedPixel*[rows];
    
    for (int i; i < rows; i++) {
        pixelArray[i] = pixelArrayData + cols*i;
    }
    
    numberOfColumns = cols;
    numberOfRows = rows;
    
}

LedPixel* LightBoard::getLedPixel(int r, int c) {
    
    if (r < 0 || c < 0 || r >= numberOfRows || c >= numberOfColumns) {
        printf("EXCEPTION: illegal argument to getLedPixel");
        return NULL;
    }
    
    return &pixelArray[r][c];
    
}

LightBoard::~LightBoard() {
    delete[] pixelArray;
    delete[] pixelArrayData;
}

