#include "Propulsores.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

#include <string>

Propulsores::Propulsores(){

}

Propulsores::Propulsores(string pLetra, int pNumero){
	Letra = pLetra;
	Numero = pNumero;
}

string Propulsores::getLetra(){
	return Letra;
}

void Propulsores::setLetra(string pLetra){
	Letra = pLetra;
}

int Propulsores::getNumero(){
	Numero = (rand() % 1000) + 1;
	return Numero;
}

void Propulsores::setNumero(int pNumero){
	Numero = pNumero;
}

Propulsores::~Propulsores(){
	
}