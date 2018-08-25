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
void deleteContentsVectorPiloto(vector<Piloto*>&,int);

void llenarVectorMisiles(vector<Misiles*>&, int);
void printVectorMisiles(vector<Misiles*>);
void deleteContentsVectorMisiles(vector<Misiles*>&,int);

void llenarVectorPropulsores(vector<Propulsores*>&, int);
void printVectorPropulsores(vector<Propulsores*>);
void deleteContentsVectorPropulsores(vector<Propulsores*>&,int);

//void deleteContentsVectorPiloto(vector<Piloto*>&);

int main(){
    char ejecucion = 'y';
    int na,nb,nc;
    int da,db,dc;

    vector<Piloto*> miVectorPiloto;
    vector<Misiles*> miVectorMisil;
    vector<Propulsores*> miVectorPropulsor;

    do{
        switch (menu()){
        case 1:{
            
            //vector<Piloto*> miVectorPiloto;
            cout<<"Ingrese la cantidad de Pilotos a agregar: ";
            cin>>na;
         	llenarVectorPiloto(miVectorPiloto,na);   
         	        	

            break;
        }
        case 2:{

            printVectorPiloto(miVectorPiloto);
            cout<<"Ingrese la Posición a Eliminar: ";
            cin>>da;
            deleteContentsVectorPiloto(miVectorPiloto,da);
            
            break;
        }
        case 3:{

            //vector<Misiles*> miVectorMisil;
            cout<<"Ingrese la cantidad de Misiles a agregar: ";
            cin>>nb;
            llenarVectorMisiles(miVectorMisil,nb); 
            
            break;
        }
        case 4:{

            printVectorMisiles(miVectorMisil);
            cout<<"Ingrese la Posición a Eliminar: ";
            cin>>db;
            deleteContentsVectorMisiles(miVectorMisil,db);

        	break;
        }
        case 5:{

            //vector<Propulsores*> miVectorPropulsor;
            cout<<"Ingrese la cantidad de Propulsores a agregar: ";
            cin>>nc;
            llenarVectorPropulsores(miVectorPropulsor,nc); 

        	break;
        }
        case 6:{

            printVectorPropulsores(miVectorPropulsor);
            cout<<"Ingrese la Posición a Eliminar: ";
            cin>>dc;
            deleteContentsVectorPropulsores(miVectorPropulsor,dc);

            break;
        }
        case 7:{

            cout<<"----->Reporte de la Range Air Force<-----"<<endl;
            printVectorPiloto(miVectorPiloto);
            printVectorMisiles(miVectorMisil);
            printVectorPropulsores(miVectorPropulsor);

            break;
        }
        case 8:{
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
    cout << "7. Imprimir Reporte." << endl;
    cout << "8. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
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

//llenar el vector
void llenarVectorPropulsores(vector<Propulsores*>& pVectorPropulsores,int cantidadPropulsores){
    Propulsores* propulsor;
    string letra;
    int num,potencia;
    for(int i = 0;i<cantidadPropulsores;i++){
        propulsor = new Propulsores();
        cout<<"Ingrese la Letra del Código: ";
        cin>>letra;
        cout<<"Ingrese la Potencia entre 30-50: ";
        cin>>potencia;
            propulsor->setLetra(letra);
            propulsor->setNumero(num); 
            propulsor->setPotencia(potencia);  
        pVectorPropulsores.push_back(propulsor);
    }
}







void printVectorMisiles(vector<Misiles*> pVectorMisiles){
    cout<<endl<<"*****Misiles*****"<<endl;
    for(int i=0;i<pVectorMisiles.size();i++){
        cout<<"Alcance: "<<pVectorMisiles[i]->getAlcance()<<" metros."<<endl
            <<"Radio de Destrución: "<<pVectorMisiles[i]->getRadio()<<" metros."<<endl;
    }
}

void printVectorPiloto(vector<Piloto*> pVectorPiloto){
    cout<<endl<<"*****Pilotos*****"<<endl;

    for(int i=0;i<pVectorPiloto.size();i++){
        cout<<"Nombre: "<<pVectorPiloto[i]->getNombre()<<endl
            <<"Edad: "<<pVectorPiloto[i]->getEdad()<<endl
            <<"Años de Experiencia: "<<pVectorPiloto[i]->getExperiencia()<<endl;
    }
}

void printVectorPropulsores(vector<Propulsores*> pVectorPropulsores){
    cout<<endl<<"*****Propulsores*****"<<endl;
    for(int i=0;i<pVectorPropulsores.size();i++){
        cout<<"Código Propulsor: "<<pVectorPropulsores[i]->getLetra()<<pVectorPropulsores[i]->getNumero()<<endl
            <<"Potencia del Propulsor: "<<pVectorPropulsores[i]->getPotencia()<<endl;
    }
}









void deleteContentsVectorPiloto(vector<Piloto*>& pVectorPiloto, int pos){
    for(int i=0;i<pVectorPiloto.size();i++){
        if(pVectorPiloto[i] == pVectorPiloto[pos]){
        
       // pVectorPiloto.remove(pos);
        pVectorPiloto.erase (pVectorPiloto.begin()+pos);
        //delete pVectorPiloto[i];

        //pVectorPiloto[i]=NULL;
        }
    }
    //alternativa
    //pVector.clear();
}

void deleteContentsVectorPropulsores(vector<Propulsores*>& pVectorPropulsores, int pos){
    for(int i=0;i<pVectorPropulsores.size();i++){
        if(pVectorPropulsores[i] == pVectorPropulsores[pos]){
        
           pVectorPropulsores.erase (pVectorPropulsores.begin()+pos);
        
        }
    }
}

void deleteContentsVectorMisiles(vector<Misiles*>& pVectorMisiles, int pos){
    for(int i=0;i<pVectorMisiles.size();i++){
        if(pVectorMisiles[i] == pVectorMisiles[pos]){
        
           pVectorMisiles.erase (pVectorMisiles.begin()+pos);
        
        }
    }
}