#pragma once

#include "persona.hpp"

using namespace std;

class Investigador{
public:
	Investigador(int casosAtendidos, int casosCerrados, int casosSinResolver);
	~Investigador();
	void setcasosAtendidos(int casosAtendidos);
	int getcasosAtendidos() const;
	void setcasosCerrados(int casosCerrados);
	int getcasosCerrados() const;
	void setcasosSinResolver(int casosSinResolver);
	int getcasosSinResolver() const;

protected:
	int casosAtendidos;
	int casosCerrados;
	int casosSinResolver;
};