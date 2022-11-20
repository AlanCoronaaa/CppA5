//
// Created by Alan Corona on 11/20/2022.
//
#include<iostream>
#include<string>
#include <utility>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

class Alumno{

private:
    string nombre;
    int edad{};

public:
    void setNombre(string nom){
        nombre = std::move(nom);
    }
    void setEdad(int ed){
        edad = ed;
    }

    string getNombre(){
        return nombre;
    }
    int getEdad() const{
        return edad;
    }

    void informe(){
        cout << "Nombre: " << getNombre() << endl;
        cout << "Edad: " << getEdad() << endl;
    }
};

int main(){

    string nombreUsuario;
    int edadUsuario;

    Alumno datos;

    cout << "Ingresa tu nombre: ";
    getline(cin, nombreUsuario);
    cout << "Ingresa tu edad: ";
    cin >> edadUsuario;

    datos.setNombre(nombreUsuario);
    datos.setEdad(edadUsuario);
    datos.informe();

    return 0;
}