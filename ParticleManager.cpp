#include "ParticleManager.h"


ParticleManager::ParticleManager()
{

}

ParticleManager::~ParticleManager()
{

}

Particle& ParticleManager::CreateParticle(const Vector3& position)
{
	// Assume this is a Bullet
	// f = mass * acceleration
	// f / mass = acceleration
	// gravity as acceleration 
	// gravity is -9.8 m/s^2

	Particle p;						// p is added onto the stack
	p.position = position;
	p.acceleration = Vector3(0.0f, Garvity, 0.0f);	// Gravity
	p.mass = Bullet_mass;

	m_Particles.push_back(p);
	return m_Particles[m_Particles.size() - 1];
}

void ParticleManager::Integrate(float duration)
{

}