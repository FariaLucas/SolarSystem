#pragma once
#include "ofMain.h"

class CelestialBody {
private:
	ofVec2f m_position;
	ofImage m_img;
	double m_angle = 0;
public:
	CelestialBody(ofVec2f Position, string path, double InitialAngle);

	void Draw();
	void Update(double angle);

	ofVec2f GetPosition();
	ofImage GetImage();

	void SetPosition(ofVec2f Position);


};