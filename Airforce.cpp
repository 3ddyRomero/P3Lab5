#include "Piloto.h"
#include "Misiles.h"
#include "Propulsores.h"
#include <iostream>
#include <vector>

using namespace std;

int menu();

int main(){
    char ejecucion = 'y';
    do{
        switch (menu()){
        case 1:{
            
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
        case 7:
            ejecucion = 'n';
            cout<< "La ejecución ha finalizado " << endl;
            cout<< "****\\\\Buen dia//****" << endl;
            break;

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