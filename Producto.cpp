#include <iostream>
#include "Producto.h"

Producto::Producto(){
    nombre = "Sin nombre";
    precio = 0;
}

Producto::Producto(string nombre) {
    this-> nombre = nombre;
    precio = 0;
}

Producto::Producto(string nombre, float precio) {
    this-> nombre = nombre;
    this-> precio = precio;
}

void Producto::setNombre(string nombre) {
    this-> nombre = nombre;
}
void Producto::setPrecio(float precio) {
    this-> precio = precio;
}

string Producto::getNombre(){
    return nombre;
}
float Producto::getPrecio(){
    return precio;
}
void Producto::imprimeProducto(){
    cout << "Concepto: " << nombre << " Precio: $" << precio << endl;
}

Producto::~Producto(){
    
}