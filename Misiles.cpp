#include "Misiles.h"
#include <iostream>

Misiles::Misiles(){

}

Misiles::Misiles(double pAlcance, double pRadio){
	Alcance = pAlcance;
	Radio = pRadio;
}

double Misiles::getAlcance(){
	return Alcance;
}

void Misiles::setAlcance(double pAlcance){
	Alcance = pAlcance;
}

double Misiles::getRadio(){
	return Radio;
}

void Misiles::setRadio(double pRadio){
	Radio = pRadio;
}

Misiles::~Misiles(){
	
}