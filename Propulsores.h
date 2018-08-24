#ifndef PROPULSORES_H
#define PROPULSORES_H

class Propulsores{
	private:
		string Letra;
		int Numero;

	public:
		Propulsores();
		Propulsores(string, int);

		string getLetra();
		void setLetra(string);

		int getNumero();
		void setNumero(int);

		~Misiles();
};
#endif