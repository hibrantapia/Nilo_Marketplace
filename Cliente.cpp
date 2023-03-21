#include "Cliente.h"

Cliente::Cliente(string datos) {
  this-> datos = datos;
}

void Cliente::setDatos(string datos) {
  this-> datos = datos;
}

string Cliente::getDatos() {
  return datos;
}

void Cliente::imprimirDatos() {
  cout << datos << endl;
}

Cliente::~Cliente() {
}