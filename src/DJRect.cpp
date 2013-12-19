//
//  Rect.cpp
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#include "DJRect.h"

DJRect::DJRect(DJPoint origin, float width, float height) {
    this->width = width;
    this->height = height;
    this->origin.x = origin.x;
    this->origin.y = origin.y;
}

DJRect::DJRect() {
    width = 0.0;
    height = 0.0;
    origin.x = 0.0;
    origin.y = 0.0;
}

DJRect DJRect::Make(DJPoint p, float width, float height) {
    DJRect rect;
    rect.origin.x = p.x;
    rect.origin.y = p.y;
    rect.width = width;
    rect.height = height;
    return rect;
}
