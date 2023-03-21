#ifndef PRODUCTO_DEFINDED
#define PRODUCTO_DEFINDED

#include <iostream>

using namespace std;

class Producto {

    private:
        string nombre;
        float precio;

    public:
        Producto();
        ~Producto();

        Producto(string nombre);
        Producto(string nombre, float precio);

        void setNombre(string nombre);
        void setPrecio(float precio);

        string getNombre();
        float getPrecio();
        void imprimeProducto();

};
#endif