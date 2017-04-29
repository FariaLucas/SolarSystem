#pragma once
#include "ofMain.h"
#include "CelestialBody.h"

class Asteroid {
private:
	ofImage m_img;
	ofVec2f m_position, m_velocity;
	double m_mass, m_radius;
public:
	Asteroid(int x, int y, double mass, double radius, float VelX, float VelY, string path);

	void Draw();

	void Update(CelestialBody* body);

	void Update(Asteroid* body);

	void Update(ofVec2f position, double mass, double radius);

	ofImage GetImage();

	ofVec2f GetPosition();
	void SetPosition(int x, int y);
};