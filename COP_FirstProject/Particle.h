#pragma once

namespace caveofprogramming
{
	class Particle
	{
	public:
		double m_x;
		double m_y;

		void update(int intervals);
		Particle();
		virtual ~Particle();

	private:
		double m_speed;
		double m_direction;
		void init();
	};
}