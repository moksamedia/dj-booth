//
//  GridGenerator.cpp
//  djBooth
//
//  Created by Andrew Hughes on 12/11/13.
//
//

#include "GridGenerator.h"

GridGenerator::GridGenerator(int _rows,
                             int _columns,
                             float _margin,
                             float _totalWidth,
                             float _totalHeight) {
    
    
    Point offset;
    
    GridGenerator(_rows, _columns, _margin, _totalWidth, _totalHeight, offset);
    
}

GridGenerator::GridGenerator(int _rows,
                             int _columns,
                             float _margin,
                             float _totalWidth,
                             float _totalHeight,
                             Point _offset) {
    
    rows = _rows;
    columns = _columns;
    margin = _margin;
    totalWidth = _totalWidth;
    totalHeight = _totalHeight;
    offset.x = _offset.x;
    offset.y = _offset.y;
    
    blockWidth = (totalWidth - margin * (columns - 1)) / columns;
    blockHeight = (totalHeight - margin * (rows - 1)) / rows;
    
}

Point GridGenerator::getPoint(int row, int column) {
    float x = column * (blockWidth + margin) + offset.x;
    float y = row * (blockHeight + margin) + offset.y;
    return MakePoint(x,y);
}

Rect GridGenerator::getRect(int row, int column) {
    return MakeRect(getPoint(row,column), blockWidth, blockHeight);
}

