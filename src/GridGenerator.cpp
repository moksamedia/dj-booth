//
//  GridGenerator.cpp
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#include "GridGenerator.h"
#include <math.h>

GridGenerator::GridGenerator(int _rows,
                             int _columns,
                             float _margin,
                             float _totalWidth,
                             float _totalHeight,
                             float _offsetX,
                             float _offsetY) {
    
    rows = _rows;
    columns = _columns;
    margin = _margin;
    totalWidth = _totalWidth;
    totalHeight = _totalHeight;
    
    offset.x = _offsetX;
    offset.y = _offsetY;
    
    columnWidth = blockWidth + margin;
    rowHeight = blockHeight + margin;
    
    blockWidth = (totalWidth - margin * ((float)columns - 1)) / (float)columns;
    blockHeight = (totalHeight - margin * ((float)rows - 1)) / (float)rows;
    
}

DJPoint GridGenerator::getPoint(int row, int column) {
    float x = column * (blockWidth + margin) + offset.x;
    float y = row * (blockHeight + margin) + offset.y;
    return DJPoint::Make(x,y);
}

DJRect GridGenerator::getRect(int row, int column) {
    DJPoint p = getPoint(row,column);
    float w = blockWidth;
    float h = blockHeight;
    return DJRect::Make(p,w,h);
}

GridHit GridGenerator::getHit(float x, float y) {
    
    GridHit hit;
    
    hit.row = rowForY(y);
    hit.column = columnForX(x);
    hit.isHit = (hit.row != -1 && hit.column != -1);
 
    return hit;
}

int GridGenerator::rowForY(float y) {
    
    if (y < 0) {
        return -1;
    }
    
    int row = trunc(y/(blockHeight + margin));

    float remainder = y / (blockHeight + margin) - (float)(row);
    
    float endOfBlock = blockHeight / (blockHeight + margin);
    
    if (remainder > endOfBlock || row >= rows) {
        return -1;
    }
    
    return row;
    
}

int GridGenerator::columnForX(float x) {
    
    if (x < 0) {
        return -1;
    }
    
    int column = trunc(x/(blockWidth + margin));

    float remainder = x / (blockWidth + margin) - (float)(column);
    
    float endOfBlock = blockWidth / (blockWidth + margin);
    
    if (remainder > endOfBlock || column >= columns) {
        return -1;
    }
    
    return column;

}
