#include "Swarm.h"

using namespace caveofprogramming;

void Swarm::update(int elapsed)
{
	int interval = elapsed - lastTime;

	for (int i = 0; i < Swarm::NPARTICLES; i++)
	{
		m_p_Particles[i].update(interval);
	}
	
	lastTime = elapsed;
}

Swarm::Swarm()
{
	m_p_Particles = new Particle[NPARTICLES];
	lastTime = 0;
}


Swarm::~Swarm()
{
	delete[] m_p_Particles;
}
