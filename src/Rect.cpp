//
//  Rect.cpp
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#include "Rect.h"

Rect::Rect(Point origin, float width, float height) {
    this->width = width;
    this->height = height;
    this->origin.x = origin.x;
    this->origin.y = origin.y;
}

Rect::Rect() {
    width = 0.0;
    height = 0.0;
    origin.x = 0.0;
    origin.y = 0.0;
}