//
//  LedPixel.h
//  djBooth
//
//  Created by Andrew Hughes on 12/10/13.
//
//

#ifndef __djBooth__LedPixel__
#define __djBooth__LedPixel__

#include <iostream>

class LedPixel {
    
    unsigned int color = 0xFF0000;

public:
    
    // color
    void setColorRGB(unsigned int newColor);
    unsigned int getColorRGB();
    
    LedPixel();
    
};

#endif /* defined(__djBooth__LedPixel__) */
