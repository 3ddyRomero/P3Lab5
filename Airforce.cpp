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
void deleteContentsVectorPiloto(vector<Piloto*>&);

int main(){
    char ejecucion = 'y';
    int na,nb,nc;
    do{
        switch (menu()){
        case 1:{
            
            vector<Plioto*> miVectorPiloto;
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
	cout<<endl<<"Elementos del vector: "<<endl;

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
