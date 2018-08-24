#include "Piloto.h"
#include "Misiles.h"
#include "Propulsores.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int menu();
void llenarVectorPiloto(vector<Piloto*>&, int);
void printVectorPiloto(vector<Piloto*>);

void llenarVectorMisiles(vector<Misiles*>&, int);
void printVectorMisiles(vector<Misiles*>);

void llenarVectorPropulsores(vector<Propulsores*>&, int);
void printVectorPropulsores(vector<Propulsores*>);

//void deleteContentsVectorPiloto(vector<Piloto*>&);

int main(){
    char ejecucion = 'y';
    int na,nb,nc;
    do{
        switch (menu()){
        case 1:{
            
            vector<Piloto*> miVectorPiloto;
            cout<<"Ingrese la cantidad de Pilotos a agregar: ";
            cin>>na;
         	llenarVectorPiloto(miVectorPiloto,na);   
         	printVectorPiloto(miVectorPiloto);        	

            break;
        }
        case 2:{
            
            break;
        }
        case 3:{
            
            break;
        }
        case 4:{

        	break;
        }
        case 5:{

        	break;
        }
        case 6:{

        	break;
        }
        case 7:{
            ejecucion = 'n';
            cout<< "La ejecución ha finalizado " << endl;
            cout<< "****\\\\Buen dia//****" << endl;
            break;
        }
        } //end switch
    } while (ejecucion != 'n');

    return 0;
}


int menu(){
    int opcion=0;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Bienvenido al Laboratorio 5 de Programación III."<<endl;
    cout << "/****Menu****\\" << endl;
    cout << "1. Agregar Piloto." << endl;
    cout << "2. Eliminar Piloto." << endl;
    cout << "3. Agregar Misil." << endl;
    cout << "4. Eliminar Misil." << endl;
    cout << "5. Agregar Propulsor." << endl;
    cout << "6. Eliminar Propulsor." << endl;
    cout << "7. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}

void printVectorPiloto(vector<Piloto*> pVectorPiloto){
	cout<<endl<<"*****Pilotos*****"<<endl;

	for(int i=0;i<pVectorPiloto.size();i++){
		cout<<"Nombre: "<<pVectorPiloto[i]->getNombre()<<endl
		    <<"Edad: "<<pVectorPiloto[i]->getEdad()<<endl
		    <<"Años de Experiencia: "<<pVectorPiloto[i]->getExperiencia()<<endl;
	}
}


//llenar el vector
void llenarVectorPiloto(vector<Piloto*>& pVectorPiloto,int cantidadPilotos){
	Piloto* piloto;
	string nombre;
	int edad, expe;
	for(int i = 0;i<cantidadPilotos;i++){
		piloto = new Piloto();
		cout<<"Ingrese el Nombre del Piloto: ";
		cin>>nombre;
		cout<<"Ingrese la Edad del Piloto: ";
		cin>>edad;
		cout<<"Ingrese los Años de Experiencia del Piloto: ";
		cin>>expe;
		
			piloto->setNombre(nombre);
	        piloto->setEdad(edad);
       		piloto->setExperiencia(expe);
		
		pVectorPiloto.push_back(piloto);
	}


}

void printVectorMisiles(vector<Misiles*> pVectorMisiles){
    cout<<endl<<"*****Misiles*****"<<endl;
    for(int i=0;i<pVectorMisiles.size();i++){
        cout<<"Alcance: "<<pVectorMisiles[i]->getAlcance()<<" metros."<<endl
            <<"Radio de Destrución: "<<pVectorMisiles[i]->getRadio()<<" metros."<<endl;
    }
}


//llenar el vector
void llenarVectorMisiles(vector<Misiles*>& pVectorMisiles,int cantidadMisiles){
    Misiles* misil;
    double alcance, radio;
    for(int i = 0;i<cantidadMisiles;i++){
        misil = new Misiles();
        cout<<"Ingrese el Alcance en metros: ";
        cin>>alcance;
        cout<<"Ingrese el Radio de Destrución en metros: ";
        cin>>radio;
            misil->setAlcance(alcance);
            misil->setRadio(radio);   
        pVectorMisiles.push_back(misil);
    }
}

void printVectorPropulsores(vector<Propulsores*> pVectorPropulsores){
    cout<<endl<<"*****Propulsores*****"<<endl;
    for(int i=0;i<pVectorPropulsores.size();i++){
        cout<<"Código Propulsor: "<<pVectorPropulsores[i]->getLetra()<<pVectorPropulsores[i]->getNumero()<<endl;
    }
}


//llenar el vector
void llenarVectorPropulsores(vector<Propulsores*>& pVectorPropulsores,int cantidadPropulsores){
    Propulsores* propulsor;
    string letra;
    int num;
    for(int i = 0;i<cantidadPropulsores;i++){
        propulsor = new Propulsores();
        cout<<"Ingrese la Letra del Código: ";
        cin>>letra;
        cout<<"Ingrese el Número del Código: ";
        cin>>num;
            propulsor->setLetra(letra);
            propulsor->setNumero(num);   
        pVectorPropulsores.push_back(propulsor);
    }
}