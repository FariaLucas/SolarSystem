#pragma once
#include "CelestialBody.h"
#include "ofMain.h"

class ofApp : public ofBaseApp{

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		CelestialBody* Sun;
		CelestialBody* Planet;
		CelestialBody* Moon;

		ofVec2f SunPosition;
		ofVec2f PlanetPosition;
		ofVec2f MoonPosition;

		double distance = 180;

		double beta = 0;
		double alpha = 0;


};
