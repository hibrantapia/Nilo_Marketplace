#include <iostream>
#include "Carrito.h"
#include "Cliente.h"
#include "Producto.h"

using namespace std;

// Programa desarrollado por Hibran Tapia.

int opcion_1(int opcion) {

 //Inputs:

 Cliente cliente1("\nCliente: Thomas B. Cole\nGenero: Masculino\nNacimiento: 1/24/1976\nDireccion: Street #3483 Adams Drive, Houston, TX, Texas, US, 77002\nNumero de Telefono: 979-341-1849");
 Cliente cliente2("\nCliente: John E. Morgan\nGenero: Masculino\nNacimiento: 9/24/1979\nDireccion: Street #2034 Front Street, Pontiac, MI, Michigan, US, 48342\nNumero de Telefono: 810-426-1338");

 //Process:

 cliente1.imprimirDatos();
 cliente2.imprimirDatos();

 //Outputs:    

 int regresar;

 cout << "\n1. Salir                         2. Regresar\n"<<endl;
 cin >> regresar;

 if (regresar == 2) {
 int main();
 }

 else if (regresar == 1) {
   cout << "\n       ***GRACIAS POR VISITAR NILO***\n" << endl;
   exit(-1);
 }

 return 0;
 }  


 
int opcion_2(int opcion) {

 //Inputs:

 Producto p1("Ramipril \t\t", 153.99);
 Producto p2("Aspirina  \t\t", 189.66);
 Producto p3("Omeprazol \t\t", 294.78);
 Producto p4("Paracetamol  \t\t", 196.12);
 Producto p5("Ivermectina  \t\t", 144.91);

 Carrito c1("Farmacia");


 //Process:

 c1.agregarProducto(p1,0);
 c1.agregarProducto(p2,1);
 c1.agregarProducto(p3,2);
 c1.agregarProducto(p4,3);
 c1.agregarProducto(p5,4);

 c1.imprimeCarrito();


 //Outputs:    

 int envio = 80;
 float IVA, total;

 IVA = c1.calculaSubtotal() * 0.16;
 total = c1.calculaSubtotal() + envio + IVA;


 cout << "\n                                 Subtotal: $" << c1.calculaSubtotal() << endl;
 cout << "                                 Envio: $80.00" << endl;
 cout << "                                 IVA: $" << IVA << "\n " << endl;
 cout << "                                 Total: $" << total << "\n " << endl;

 int regresar;

 cout << "\n1. Salir                         2. Regresar\n"<<endl;
 cin >> regresar;

 if (regresar == 2) {
 int main();
 }

 else if (regresar == 1) {
   cout << "\n       ***GRACIAS POR COMPRAR EN NILO***\n" << endl;
   exit(-1);
 }

 return 0;
 }  



int opcion_3(int opcion) {

 //Inputs:

 Producto p1("PlayStation 5 \t\t", 19999.99);
 Producto p2("M1 MacbookAir  \t\t", 24999.99);
 Producto p3("Bose QC 35 II \t\t", 7499.78);
 Producto p4("Google Pixel 3  \t\t", 6799.12);
 Producto p5("Xbox Series X  \t\t", 15499.91);

 Carrito c1("Electronicos");


 //Process:

 c1.agregarProducto(p1,0);
 c1.agregarProducto(p2,1);
 c1.agregarProducto(p3,2);
 c1.agregarProducto(p4,3);
 c1.agregarProducto(p5,4);

 c1.imprimeCarrito();


 //Outputs:    

 int envio = 180;
 float IVA, total;

 IVA = c1.calculaSubtotal() * 0.16;
 total = c1.calculaSubtotal() + envio + IVA;


 cout << "\n                                         Subtotal: $" << c1.calculaSubtotal() << endl;
 cout << "                                         Envio: $180.00" << endl;
 cout << "                                         IVA: $" << IVA << "\n " << endl;
 cout << "                                         Total: $" << total << "\n " << endl;

 int regresar;

 cout << "\n1. Salir                                 2. Regresar\n"<<endl;
 cin >> regresar;

 if (regresar == 2) {
 int main();
 }

 else if (regresar == 1) {
   cout << "\n       ***GRACIAS POR COMPRAR EN NILO***\n" << endl;
   exit(-1);
 }

 return 0;
 }  



int opcion_4(int opcion) {

 cout << "\n       ***GRACIAS POR VISITAR NILO***\n" << endl;
 exit(-1);

 return 0;
 }  



int main() {

 int opcion;

do{

 cout << "\n           ***BIENVENIDO A NILO***\n" << endl;

 cout<<"\n1. Ver Datos de los Clientes";
 cout<<"\n2. Ver Productos en Farmacia y Total a Pagar";
 cout<<"\n3. Ver Productos en Electronica y Total a Pagar\n";
 cout<<"\n4. Salir\n";
 cout<<" "<<endl;
 cin>>opcion;
  
    switch (opcion)
    {
       case 1:
          opcion_1(opcion);
          break;
       case 2:
          opcion_2(opcion);
          break;
       case 3:
          opcion_3(opcion);
          break;  
       case 4:
          opcion_4(opcion);
          break;                              
       default:
          cout << "Resultado Incorrecto, Ingresa una Opcion Valida.";
          break;
      }

}while(opcion>0);

 return 0;
 }     