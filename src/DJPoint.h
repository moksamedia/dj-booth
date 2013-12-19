//
//  Point.h
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#ifndef __djBooth__DJPoint__
#define __djBooth__DJPoint__

#include <iostream>


class DJPoint {
    
public:
    
    float x;
    float y;
    
    DJPoint(float _x, float _y);
    DJPoint();
    
    static DJPoint Make(float x, float y);
};

#endif /* defined(__djBooth__Point__) */
