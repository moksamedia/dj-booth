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
    
    int nextRow = 0;
    int nextColumn = 0;

public:

    int currentRow = 0;
    int currentColumn = 0;

    PixelIterator(LightBoard * lightBoard);
    LedPixel * next();
    bool hasNext();
    
};

#endif /* defined(__djBooth__PixelIterator__) */
