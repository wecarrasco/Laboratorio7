#include "persona.hpp"
#include "investigador.hpp"
#include <string>
#include <sstream>

using namespace std;

Investigador::Investigador(string RealName,string UserName,string password,int age,string ID,string birth)
	:persona(string RealName,string UserName,string password,int age,string ID,string birth),casosAtendidos(0),casosCerrados(0),casosSinResolver(0){
	
}
Investigador::Investigador(const Investigador& other)	
	:persona(other),casosAtendidos(other.casosAtendidos),casosCerrados(other.casosCerrados),casosSinResolver(other.casosSinResolver){

}
Investigador::~Investigador(){

}
void Investigador::setcasosAtendidos(int casosAtendidos){
	this->casosAtendidos = casosAtendidos;
}
int Investigador::getcasosAtendidos() const{
	return this->casosAtendidos;
}
void Investigador::setcasosCerrados(int casosCerrados){
	this->casosCerrados = casosCerrados;
}
int Investigador::getcasosCerrados() const{
	return this->casosCerrados
}
void Investigador::setcasosSinResolver(int casosSinResolver){
	this->casosSinResolver = casosSinResolver;
}
int Investigador::getcasosSinResolver() const{
	return this->casosSinResolver;
}

string Investigador::toString()const{
	stringstream ss;
	ss << persona::toString() << "\n\t Caso Atendidos: " << casosAtendidos << "\n\t Caso Cerrados: " << casosCerrados << "\n\t Caso sin Resolver: " << casosSinResolver;
	return ss.str();
}