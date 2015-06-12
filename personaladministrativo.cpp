#include "personaladministrativo.hpp"

PersonalAdministrativo::PersonalAdministrativo(string clave, string puesto){
	this->clave = clave;
	this->puesto = puesto;
}
PersonalAdministrativo::~PersonalAdministrativo(){}
void PersonalAdministrativo::setClave(string clave){
	this->clave = clave;
}
string PersonalAdministrativo::getClave() const{
	return this->clave;
}
void PersonalAdministrativo::setPuesto(string puesto){
	this->puesto = puesto;
}
string PersonalAdministrativo::getPuesto() const{
	return this->puesto;
}