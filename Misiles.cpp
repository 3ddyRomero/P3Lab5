#include "Misiles.h"
#include <iostream>

Misiles::Misiles(){

}

Misiles::Misiles(int pAlcance, int pRadio){
	Alcance = pAlcance;
	Radio = pRadio;
}

int Misiles::getAlcance(){
	return Alcance;
}

void Misiles::setAlcance(int pAlcance){
	Alcance = pAlcance;
}

int Misiles::getRadio(){
	return Radio;
}

void Misiles::setRadio(int pRadio){
	Radio = pRadio;
}

Misiles::~Misiles(){
	
}