#ifndef CLIENTE_DEFINDED
#define CLIENTE_DEFINDED

#include <iostream>

using namespace std;

class Cliente {

   private:
    string datos;

   public:
    Cliente();
    ~Cliente();

    Cliente(string datos);
   
    string getDatos();
    void setDatos(string datos);
    void imprimirDatos();

};
#endif