#include "persona.hpp"
#include "forense.hpp"
#include <string>
#include <sstream>

using namespace std;

forense::forense(string RealName,string UserName,string password,int age,string ID,string birth,string fecha_ingreso,string horario)
	:persona(RealName,UserName,password,age,ID,birth),fecha_ingreso(fecha_ingreso),horario("0"){
}
forense::forense(const forense& other)
	:persona(other),fecha_ingreso(other.fecha_ingreso),horario(other.horario){
}
forense::~forense(){
}
string forense::toString()const{
	stringstream ss;
	ss << persona::toString() << "\n\tFecha de Ingreso: " << fecha_ingreso << "\n\tHorario: " << horario;
	return ss.str();
}
string forense::getFechaIngreso()const{
	return fecha_ingreso;
}
void forense::setFechaIngreso(string fecha_ingreso){
	this->fecha_ingreso =fecha_ingreso;
}
string forense::getHorario()const{
	return horario;
}
void forense::setHorario(string horario){
	this->horario=horario;
}
