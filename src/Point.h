//
//  Point.h
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#ifndef __djBooth__Point__
#define __djBooth__Point__

#include <iostream>


class Point {
    
public:
    
    float x;
    float y;
    
    Point(float _x, float _y);
    Point();
};


Point MakePoint(float x, float y) {
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

#endif /* defined(__djBooth__Point__) */
