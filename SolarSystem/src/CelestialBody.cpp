#include "CelestialBody.h"

CelestialBody::CelestialBody(ofVec2f Position, string path, float Time, double mass, double radius){

	SetPosition(Position);
	m_img.load(path);
	m_period = Time;
	m_anchor.set(GetPosition());
	m_mass = mass;
	m_radius = radius;
	
}

void CelestialBody::Draw(){

	ofImage imagem = GetImage();
	imagem.setAnchorPercent(0.5, 0.5);
	ofPushMatrix();
	ofTranslate(GetPosition());
	imagem.draw(0, 0);
	ofPopMatrix();

}

void CelestialBody::Update(CelestialBody* body){


	m_anchor.rotate(m_period);
	m_position = m_anchor;
	m_position += body->GetPosition();
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

