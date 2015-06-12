#pragma once

#include "persona.hpp"

#include <string>

using namespace std;

class PersonalAdministrativo{
public:
	PersonalAdministrativo(string clave, string puesto);
	~PersonalAdministrativo();
	void setClave(string clave);
	string getClave() const;
	void setPuesto(string puesto);
	string getPuesto() const;
protected:
	string clave;
	string puesto;
};