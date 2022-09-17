#pragma once
#include "particle.h"

class ParticleManager
{
public:
	ParticleManager();
	~ParticleManager();

	Particle CreateParticle(const Vector3& position);
	void Integrate(float duration);


};