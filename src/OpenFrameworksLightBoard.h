//
//  MacLightBoard.h
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#ifndef __djBooth__OpenFrameworksLightBoard__
#define __djBooth__OpenFrameworksLightBoard__

#include <iostream>
#include "LightBoard.h"
#include "GridGenerator.h"


/**
 *  OpenFrameworks Light Board
 *  - knows how to draw itself using open frameworks
 *  - can also send updates to teensy via serial port
 */
class OpenFrameworksLightBoard : public LightBoard {
    
    // Size of view in which we are drawing the simulated
    // light board
    float viewWidth;
    float viewHeight;
    
    GridGenerator * gridGenerator;

public:
    void draw();
    void sendSerial();
    
    OpenFrameworksLightBoard(int r, int c, float w, float h);
    
    
};

#endif /* defined(__djBooth__OFLightBoard__) */
