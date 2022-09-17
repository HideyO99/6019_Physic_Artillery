#include "particle.h"
#include <iostream>

void Particle::Integrate(float dt)
{
	std::cout << "velocity = " << velocity.y << " + " << acceleration.y << " * " << dt << "\n";
	velocity = velocity + acceleration * dt;
	std::cout << "position = " << position.y << " + " << velocity.y << " * " << dt << "\n";
	position = position + velocity * dt;
}

Particle::Particle()
{
	position.x = 0.0f;
	position.y = 0.0f;
	position.z = 0.0f;
}

Particle::Particle(float x,float y, float z)
{
	position.x = x;
	position.y = y;
	position.z = z;
}

Particle::~Particle()
{
	
}