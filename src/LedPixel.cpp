//
//  LedPixel.cpp
//  djBooth
//
//  Created by Andrew Hughes on 12/10/13.
//
//

#include "LedPixel.h"


// color
void LedPixel::setColorRGB(unsigned int newColor) {
    color = newColor;
}


unsigned int LedPixel::getColorRGB() {
    return color;
}
