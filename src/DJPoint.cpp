//
//  Point.cpp
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#include "DJPoint.h"

DJPoint::DJPoint(float _x, float _y) {
    x = _x;
    y = _y;
}

DJPoint::DJPoint() {
    x = 0.0;
    y = 0.0;
}

DJPoint DJPoint::Make(float x, float y) {
    DJPoint p;
    p.x = x;
    p.y = y;
    return p;
}