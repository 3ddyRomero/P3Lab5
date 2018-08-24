#ifndef PILOTO_H
#define PILOTO_H

#include <string>

using namespace std;

class Piloto{
	private:
			string Nombre;
			int Edad,Experiencia;
	public:
		Piloto();
		Piloto(string, int, int);

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		int getExperiencia();
		void setExperiencia(int);

		~Piloto();
};
#endif