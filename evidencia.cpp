#include "evidencia.hpp"
#include <string>
#include <sstream>

using namespace std;

evidencia::evidencia(string name,string type,string place,bool fingerPrint,bool process){
	this-> name = name;
	this-> type = type;
	this-> place = place;
	this-> fingerPrint = fingerPrint;
	this-> process = process;
}
	
evidencia::~evidencia(){

}
	
void evidencia::setName(string Name){
	this-> name = name;
}

string evidencia::geName()const{
	return name;
}

void evidencia::setType(string type){
	this-> type = type;
}
string evidencia::getType()const{
	return type;
}
void evidencia::setPlace(string palce){
	this-> place = place;
}
string evidencia::getPlace()const{
	return palce;
}
void evidencia::setHuella(bool fingerPrint){
	this-> fingerPrint = fingerPrint;
}
string evidencia::getHuella()const{
	return fingerPrint;
}
void setProcess(bool process){
	this-> process = process;
}
string getProcess()const{
	return process;
}
string toString()const{
	stringstream ss;
	string finger=" ";
	stirng proces=" ";
	if(fingerPrint==true){
		finger="yes";
	}else{
		finger="no";
	}
	if(process==true){
		proces="yes";
	}else{
		proces="no";
	}
	ss << "name" << name << "\t Arma: " << type << "\t Place: " << place << "\t Finger Print?: " << finger << "\t Process?: " << proces;
	return ss.str();  
}
