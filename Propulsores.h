#ifndef PROPULSORES_H
#define PROPULSORES_H

#include <string>
using namespace std;

class Propulsores{
	private:
		string Letra;
		int Numero, Potencia;

	public:
		Propulsores();
		Propulsores(string, int, int);

		string getLetra();
		void setLetra(string);

		int getNumero();
		void setNumero(int);

		int getPotencia();
		void setPotencia(int);

		~Propulsores();
};
#endif