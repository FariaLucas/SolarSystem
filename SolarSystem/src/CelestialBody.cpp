#include "CelestialBody.h"

CelestialBody::CelestialBody(ofVec2f Position, string path, double InitialAngle){
	SetPosition(Position);
	m_img.load(path);
	m_angle = InitialAngle;
}

void CelestialBody::Draw(){

	ofImage imagem = GetImage();
	imagem.setAnchorPercent(0.5, 0.5);
	ofPushMatrix();
	ofTranslate(GetPosition());
	ofRotateZ(ofRadToDeg(m_angle));
	imagem.draw(0, 0);
	ofPopMatrix();

}

void CelestialBody::Update(double angle){
	m_angle -= angle;
	m_angle = m_angle < 0 ? 360 : m_angle;
}

ofVec2f CelestialBody::GetPosition(){
	return m_position;
}

ofImage CelestialBody::GetImage(){
	return m_img;
}

void CelestialBody::SetPosition(ofVec2f Position){
	m_position.set(Position);
}

