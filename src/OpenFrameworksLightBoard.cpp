//
//  MacLightBoard.cpp
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#include "OpenFrameworksLightBoard.h"

OpenFrameworksLightBoard::OpenFrameworksLightBoard(int r, int c, float w, float h) : LightBoard(r,c) {
    
    viewHeight=h;
    viewWidth=w;
    
    float margin = 5;
    
    gridGenerator = new GridGenerator(r,c,margin,w,h);
}

/**
 *  Draw LED pixels to screen using Open Frameworks
 */
void OpenFrameworksLightBoard::draw() {
    
}

/**
 *  Update Teensy 3.0 controller via serial
 */
void OpenFrameworksLightBoard::sendSerial() {
    
}