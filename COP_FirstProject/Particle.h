#pragma once

namespace caveofprogramming
{
	class Particle
	{
	public:
		double m_x;
		double m_y;
		double m_speed;
		double m_direction;

		void update();
		Particle();
		virtual ~Particle();
	};
}