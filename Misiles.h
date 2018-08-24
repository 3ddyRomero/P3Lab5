#ifndef MISILES_H
#define MISILES_H

class Misiles{
	private:
		int Alcance, Radio;
	public:
		Misiles();
		Misiles(int,int);

		int getAlcance();
		void setAlcance(int);

		int getRadio();
		void setRadio(int);

		~Misiles();
};
#endif