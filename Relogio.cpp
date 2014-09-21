#include "Relogio.h"

#include <iostream>
using std::cout;

Relogio::Relogio()
{
	hora = 0;
}

Relogio::~Relogio()
{
}

void Relogio::mostrarHorario()
{
	cout << "A hora eh:" << hora << '\n';
}