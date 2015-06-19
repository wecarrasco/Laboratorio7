#pragma once
#include <string>
#include "persona.hpp"

using namespace std;

class forense:public persona{

public:

	forense(string RealName,string UserName,string password,int age,string ID,string birth,string fecha_ingreso,string horario);
	forense(const forense&);
	virtual ~forense();
	
	virtual string toString()const;
	
	string getFechaIngreso()const;
	void setFechaIngreso(string);
	
	string getHorario()const;
	void setHorario(string);

protected:

	string fecha_ingreso;
	string horario;
};
