#include "Propulsores.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

#include <string>
using namespace std;

Propulsores::Propulsores(){

}

Propulsores::Propulsores(string pLetra, int pNumero, int pPotencia){
	Letra = pLetra;
	Numero = pNumero;
	Potencia = pPotencia;
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

int Propulsores::getPotencia(){
	return Potencia;
}

void Propulsores::setPotencia(int pPotencia){
	Potencia = pPotencia;
}

Propulsores::~Propulsores(){
	
}