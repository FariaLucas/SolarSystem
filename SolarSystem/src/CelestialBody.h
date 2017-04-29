#pragma once
#include "ofMain.h"

class CelestialBody {

public:

	ofVec2f m_position;
	ofImage m_img;
	float m_period;
	double m_mass, m_radius;
	ofVec2f m_anchor;


	CelestialBody(ofVec2f Position, string path, float Time, double mass, double radius);

	void Draw();
	void Update(CelestialBody* body);

	ofVec2f GetPosition();
	ofImage GetImage();

	void SetPosition(ofVec2f Position);


};