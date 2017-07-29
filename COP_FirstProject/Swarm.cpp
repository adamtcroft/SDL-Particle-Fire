#include "Swarm.h"

using namespace caveofprogramming;

Swarm::Swarm()
{
	m_p_Particles = new Particle[NPARTICLES];
}


Swarm::~Swarm()
{
	delete[] m_p_Particles;
}
