//
//  Rect.h
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#ifndef __djBooth__DJRect__
#define __djBooth__DJRect__

#include <iostream>
#include "DJPoint.h"

class DJRect {
    
public:
    
    DJPoint origin;
    float width;
    float height;
    
    DJRect(DJPoint origin, float width, float height);
    
    DJRect();
    
    static DJRect Make(DJPoint p, float width, float height);
};

#endif /* defined(__djBooth__Rect__) */
