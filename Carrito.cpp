#include <iostream>
#include "Carrito.h"

Carrito::Carrito() {
    clave = "Sin Clave";
}

Carrito::Carrito(string clave) {
    this-> clave = clave;
}

void Carrito::agregarProducto(Producto producto, int pos) {
    productos[pos] = producto;
}

void Carrito::imprimeCarrito() {
    cout << "\nTu carrito de "<< clave << " contiene los siguientes productos: \n" << endl;
    for (int i=0;i<5;i++){
        productos[i].imprimeProducto();
    }
}

double Carrito::calculaSubtotal() {

    double total = 0;
    int numProductos = 0;

    for (int i=0;i<5;i++) {
        numProductos++;
        total = total + productos[i].getPrecio();
    }    
    return total;
}

Carrito::~Carrito(){
    
}