#pragma once

#include "Particle.h"

namespace caveofprogramming
{
	class Swarm
	{
	private:
		Particle *m_p_Particles;

	public:
		const static int NPARTICLES = 5000;

		Swarm();
		virtual ~Swarm();
		const Particle * const getParticles() { return m_p_Particles; } ;
	};
}