#pragma once

#define OUTER_MARGIN 10
#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 161

#include "ofMain.h"
#include "OpenFrameworksLightBoard.h"

class testApp : public ofBaseApp {

    OpenFrameworksLightBoard * lightBoard;
    
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
