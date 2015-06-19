#include "persona.hpp"
#include "investigador.hpp"
#include <string>
#include <sstream>

using namespace std;

investigador::investigador(string RealName,string UserName,string password,int age,string ID,string birth)
	:persona(string RealName,string UserName,string password,int age,string ID,string birth),casosAtendidos(0),casosCerrados(0),casosSinResolver(0){
	
}
investigador::investigador(const Investigador& other)	
	:persona(other),casosAtendidos(other.casosAtendidos),casosCerrados(other.casosCerrados),casosSinResolver(other.casosSinResolver){

}
investigador::~investigador(){

}
void investigador::setcasosAtendidos(int casosAtendidos){
	this->casosAtendidos = casosAtendidos;
}
int investigador::getcasosAtendidos() const{
	return this->casosAtendidos;
}
void investigador::setcasosCerrados(int casosCerrados){
	this->casosCerrados = casosCerrados;
}
int investigador::getcasosCerrados() const{
	return this->casosCerrados
}
void investigador::setcasosSinResolver(int casosSinResolver){
	this->casosSinResolver = casosSinResolver;
}
int investigador::getcasosSinResolver() const{
	return this->casosSinResolver;
}

string investigador::toString()const{
	stringstream ss;
	ss << persona::toString() << "\n\t Caso Atendidos: " << casosAtendidos << "\n\t Caso Cerrados: " << casosCerrados << "\n\t Caso sin Resolver: " << casosSinResolver;
	return ss.str();
}