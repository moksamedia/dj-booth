//
//  PixelIterator.cpp
//  djBooth
//
//  Created by Andrew Hughes on 12/16/13.
//
//

#include "PixelIterator.h"

PixelIterator::PixelIterator(LightBoard * lightBoard) {
    this->lightBoard = lightBoard;
}

/*
 *  Get the next LedPixel. The logic here:
 *  - start at r=0,c=0
 *  - check to see if we're completely finished first
 *  - return next from current iteration vars state
 *  - increment last
 */
LedPixel * PixelIterator::next() {
    
    // Make sure we aren't done
    if (!hasNext()) {
        return NULL;
    }
    
    // Get the next LedPixel
    LedPixel * next = lightBoard->getLedPixel(currentRow, currentColumn);
    
    // Do this so that we can increment the counters here, but
    // still grab the current row and column
    currentColumn = nextColumn;
    currentRow = nextRow;
    
    // Increment the current row
    nextRow += 1;
    
    // If the row has looped, go back to zero and increment columns
    if (nextRow >= lightBoard->numberOfRows) {
        nextRow = 0;
        nextColumn += 1;
    }
    
    return next;
}

bool PixelIterator::hasNext() {
    return (nextColumn < lightBoard->numberOfColumns);
}
