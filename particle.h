#pragma once
#include "vector3.h"

class Particle
{
private:

public:
	Particle();
	~Particle();
	Particle(float x, float y, float z);
	Vector3 velocity;
	Vector3 position;
	Vector3 acceleration;

	void Integrate(float dt);
};