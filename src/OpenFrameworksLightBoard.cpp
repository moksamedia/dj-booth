//
//  MacLightBoard.cpp
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#include "OpenFrameworksLightBoard.h"
#include "ofMain.h"
#include "PixelIterator.h"
#include "testApp.h"

OpenFrameworksLightBoard::OpenFrameworksLightBoard(int r, int c, float w, float h) : LightBoard(r,c) {
    
    viewHeight=h;
    viewWidth=w;
    
    float margin = 5;
    
    gridGenerator = new GridGenerator(r,c,margin,w,h,OUTER_MARGIN,OUTER_MARGIN);
}

OpenFrameworksLightBoard::~OpenFrameworksLightBoard() {
    delete gridGenerator;
}

void OpenFrameworksLightBoard::checkHit(float x, float y) {
    GridHit hit = gridGenerator->getHit(x, y);
    if (hit.isHit) {
        ofLog(OF_LOG_NOTICE, "Hit! Row = %d, Col = %d", hit.row, hit.column);
    }
    else {
        ofLog(OF_LOG_NOTICE, "No hit.");
    }
}


/**
 *  Draw LED pixels to screen using Open Frameworks
 */
void OpenFrameworksLightBoard::draw() {
    
    PixelIterator * itr = new PixelIterator(this);
    
    int row, col;
    LedPixel * pix;
    
    while (itr->hasNext()) {
        
        pix = itr->next();
        row = itr->currentRow;
        col = itr->currentColumn;
        
        DJRect rect = gridGenerator->getRect(row, col);
        
        unsigned int color = pix->getColorRGB();
        
        ofSetHexColor(color);
        
        ofRect(rect.origin.x, rect.origin.y, rect.width, rect.height);
        
        ofFill();
        
    }
    
    delete itr;
    
}

/**
 *  Update Teensy 3.0 controller via serial
 */
void OpenFrameworksLightBoard::sendSerial() {
    
}