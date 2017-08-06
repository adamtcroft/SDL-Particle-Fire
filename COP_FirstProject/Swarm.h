#pragma once

#include "Particle.h"

namespace caveofprogramming
{
	class Swarm
	{
	private:
		Particle *m_p_Particles;
		int lastTime;

	public:
		const static int NPARTICLES = 5000;

		void update(int elapsed);
		const Particle * const getParticles() { return m_p_Particles; };
		Swarm();
		virtual ~Swarm();
	};
}