#include "personaladministrativo.hpp"
#include <sstream>
#include <string>

PersonalAdministrativo::PersonalAdministrativo(string RealName,string UserName,string password,int age,string ID,string birth, string clave, string puesto)
		:persona(RealName,UserName,password,age,ID,birth),clave(clave),puesto(puesto){
	this->clave = clave;
	this->puesto = puesto;
}
PersonalAdministrativo::PersonalAdministrativo(const PersonalAdministrativo& other)
		:persona(other),clave(other.clave),puesto(other.puesto){

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

string PersonalAdministrativo::toString()const{
	stringstream ss;
	ss << persona::toString() << "Clave: " << clave << "Puesto: " << puesto;
	return ss.str();
}