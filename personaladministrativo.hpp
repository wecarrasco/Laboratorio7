#pragma once

#include "persona.hpp"

#include <string>

using namespace std;

class PersonalAdministrativo: public persona{
public:
	PersonalAdministrativo(string RealName,string UserName,string password,int age,string ID,string birth, string clave, string puesto);
	PersonalAdministrativo(const PersonalAdministrativo&);
	virtual ~PersonalAdministrativo();
	void setClave(string clave);
	string getClave() const;
	void setPuesto(string puesto);
	string getPuesto() const;
	virtual string toString()const;
protected:
	string clave;
	string puesto;
};