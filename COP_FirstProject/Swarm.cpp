#include "Swarm.h"

using namespace caveofprogramming;

void Swarm::update()
{
	for (int i = 0; i < Swarm::NPARTICLES; i++)
	{
		m_p_Particles[i].update();
	}
}

Swarm::Swarm()
{
	m_p_Particles = new Particle[NPARTICLES];
}


Swarm::~Swarm()
{
	delete[] m_p_Particles;
}
