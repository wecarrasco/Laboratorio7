#pragma once

#include "persona.hpp"
#include <string>

using namespace std;

class investigador:public persona{
public:
	investigador(string RealName,string UserName,string password,int age,string ID,string birth);
	investigador(const investigador&);	
	
	virtual ~investigador();
	
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