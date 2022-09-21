#pragma once
#include "Dependencias.h"

class Vertice
{
private:
	char nombre;
	int pesoSalida;


public:
	Vertice(char nombre, int pesoSalida) : nombre(nombre), pesoSalida(pesoSalida) {
		
	};
	~Vertice() {};

	char getLetra() { return nombre; };
	int getPeso() { return pesoSalida; };

};
