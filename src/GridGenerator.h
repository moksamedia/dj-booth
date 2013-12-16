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
#include "Rect.h"
#include "Point.h"

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
    
    Point offset;

public:

    GridGenerator(int _rows,
                  int _columns,
                  float _margin,
                  float _totalWidth,
                  float _totalHeight,
                  Point _offset);
    
    GridGenerator(int _rows,
                  int _columns,
                  float _margin,
                  float _totalWidth,
                  float _totalHeight);
    
    Point getPoint(int r, int c);
    
    Rect getRect(int r, int c);
};

#endif /* defined(__djBooth__GridGenerator__) */
