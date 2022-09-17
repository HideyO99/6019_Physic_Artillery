#pragma once
#include "particle.h"
#include <vector>

#define Bullet_mass 0.01f
#define Bullet_init_velocity 100.0f
#define Garvity 9.8f

class ParticleManager
{
private:
	std::vector<Particle> m_Particles;

public:
	ParticleManager();
	~ParticleManager();

	Particle& CreateParticle(const Vector3& position);
	void Integrate(float duration);


};