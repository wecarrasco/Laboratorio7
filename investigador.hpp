#pragma once

#include "persona.hpp"
#include <string>

using namespace std;

class Investigador:public persona{
public:
	Investigador(string RealName,string UserName,string password,int age,string ID,string birth);
	Investigador(const Investigador&);	
	
	virtual ~Investigador();
	
	void setcasosAtendidos(int casosAtendidos);
	int getcasosAtendidos() const;
	
	void setcasosCerrados(int casosCerrados);
	int getcasosCerrados() const;
	
	void setcasosSinResolver(int casosSinResolver);
	int getcasosSinResolver() const;
	
	virtual string toString()const;

protected:
	int casosAtendidos;
	int casosCerrados;
	int casosSinResolver;
};