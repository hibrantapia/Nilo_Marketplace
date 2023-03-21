#include <iostream>
#include "Producto.h"

using namespace std;

class Carrito {

    private:
        string clave;
        Producto productos[5];

    public: 
        Carrito();
        ~Carrito();

        Carrito(string clave);

        void agregarProducto(Producto producto, int pos);
        void imprimeCarrito();
        double calculaSubtotal();

};