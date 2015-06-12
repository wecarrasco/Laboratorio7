#include "investigador.hpp"

Investigador::Investigador(int casosAtendidos, int casosCerrados, int casosSinResolver){
	this->casosAtendidos = casosAtendidos;
	this->casosCerrados = casosCerrados;
	this->casosSinResolver = casosSinResolver;
}
Investigador::~Investigador(){}
void Investigador::setcasosAtendidos(int casosAtendidos){
	this->casosAtendidos = casosAtendidos;
}
int Investigador::getcasosAtendidos() const{
	return this->casosAtendidos;
}
void Investigador::setcasosCerrados(int casosCerrados){
	this->casosCerrados = casosCerrados;
}
int PersonalAdministrativo::getcasosCerrados() const{
	return this->casosCerrados
}
void PersonalAdministrativo::setcasosSinResolver(int casosSinResolver){
	this->casosSinResolver = casosSinResolver;
}
int PersonalAdministrativo::getcasosSinResolver() const{
	return this->casosSinResolver;
}