//
//  GridGenerator.h
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#ifndef __djBooth__GridGenerator__
#define __djBooth__GridGenerator__

#include <iostream>
#include "DJRect.h"
#include "DJPoint.h"

struct _GridHit {
    int row;
    int column;
    bool isHit;
};
typedef struct _GridHit GridHit;

class GridGenerator {
     
    float totalWidth;
    float totalHeight;
    
    float blockWidth;
    float blockHeight;
    
    float columnWidth;
    float rowHeight;
    
    int rows;
    int columns;
    
    float margin;
    
    DJPoint offset;

public:

    GridGenerator(int _rows,
                  int _columns,
                  float _margin,
                  float _totalWidth,
                  float _totalHeight,
                  float _offsetX = 0.0,
                  float _offsetY = 0.0);
    
    DJPoint getPoint(int r, int c);
    
    DJRect getRect(int r, int c);
    
    GridHit getHit(float x, float y);
    int rowForY(float y);
    int columnForX(float x);
};

#endif /* defined(__djBooth__GridGenerator__) */
