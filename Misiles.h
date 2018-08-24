#ifndef MISILES_H
#define MISILES_H

class Misiles{
	private:
		double Alcance, Radio;
	public:
		Misiles();
		Misiles(double, double);

		double getAlcance();
		void setAlcance(double);

		double getRadio();
		void setRadio(double);

		~Misiles();
};
#endif