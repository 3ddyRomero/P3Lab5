#include "Piloto.h"
#include <iostream>
#include <string>

Piloto::Piloto(){

}

Piloto::Piloto(string pNombre,int pEdad, int pExperiencia){
	Nombre = pNombre;
	Edad = pEdad;
	Experiencia = pExperiencia;
}

string Piloto::getNombre(){
	return Nombre;
}

void Piloto::setNombre(string pNombre){
	Nombre = pNombre;
}

int Piloto::getEdad(){
	return Edad;
}

void Piloto::setEdad(int pEdad){
	Edad = pEdad;
}

int Piloto::getExperiencia(){
	return Experiencia;
}

void Piloto::setExperiencia(int pExperiencia){
	Experiencia = pExperiencia;
}

Piloto::~Piloto(){

}