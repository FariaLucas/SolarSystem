#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetBackgroundColor(0, 0, 0);

	SunPosition.set(ofGetWidth() / 2, ofGetHeight() /2);
	PlanetPosition.set(80, 80);
	MoonPosition.set(100, 50);
	
	Sun = new CelestialBody(SunPosition, "Sun.png", 0);
	Planet = new CelestialBody(PlanetPosition, "Planet.png", 0);
	Moon = new CelestialBody(MoonPosition, "Moon.png", 200);
	ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){
	Planet->Update(0.00449);
	Moon->Update(0.0043);

	PlanetPosition.set((distance *  cos(ofDegToRad(alpha)) + SunPosition.x), (-distance * sin(ofDegToRad( alpha)) + SunPosition.y));
	Planet->SetPosition(PlanetPosition);

	MoonPosition.set((50 * cos(ofDegToRad(beta)) + PlanetPosition.x) , (-50 * sin(ofDegToRad(beta)) + PlanetPosition.y));
	Moon->SetPosition(MoonPosition);

	alpha += 0.27397260273973;
	beta += 0.27397260273973 * 13;
}

//--------------------------------------------------------------
void ofApp::draw(){
	Sun->Draw();
	Planet->Draw();
	Moon->Draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
