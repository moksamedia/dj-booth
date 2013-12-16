//
//  PixelIterator.h
//  djBooth
//
//  Created by Andrew Hughes on 12/16/13.
//
//

#ifndef __djBooth__PixelIterator__
#define __djBooth__PixelIterator__

#include <iostream>
#import "LightBoard.h"

class PixelIterator {
    
    LightBoard * lightBoard;
    
    int currentRow = 0;
    int currentColumn = 0;
    
public:
    
    PixelIterator(LightBoard * lightBoard);
    LedPixel * next();
    bool hasNext();
    
};

#endif /* defined(__djBooth__PixelIterator__) */