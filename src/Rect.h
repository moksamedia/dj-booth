//
//  Rect.h
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#ifndef __djBooth__Rect__
#define __djBooth__Rect__

#include <iostream>
#include "Point.h"

class Rect {
    
public:
    
    Point origin;
    float width;
    float height;
    
    Rect(Point origin, float width, float height);
    
    Rect();
};


Rect MakeRect(Point p, float width, float height) {
    Rect rect;
    rect.origin.x = p.x;
    rect.origin.y = p.y;
    rect.width = width;
    rect.height = height;
    return rect;
}

#endif /* defined(__djBooth__Rect__) */
