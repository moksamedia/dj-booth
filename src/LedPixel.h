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
    
    unsigned int color = 0xFFFFFF;

public:
    
    // color
    void setColorRGB(unsigned int newColor);
    unsigned int getColorRGB();
        
    
};

#endif /* defined(__djBooth__LedPixel__) */
