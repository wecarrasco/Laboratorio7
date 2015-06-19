#include "casos.h"
#include "Investigador.h"
#include "Evidencias.h"
#include <string>
#include <sstream>
#include <vector>

using namespace std;

Casos::Casos(int num_caso,string hour,string date,bool closed):num_caso(num_caso),
hour(hour),date(date),closed(closed){
		vector<investigator*> investigators;
		vector<evidencias*> evidence; 
}

Casos::Casos(const Casos& other):num_caso(other.num_caso),hour(other.hour),
date(other.date),closed(other.closed){
	investigators = other.investigators;
	evidence = other.evidence;
}

string Casos::toString()const{
		stringstream ss;
		ss << "Caso Número: " << num_caso << " \n\tHora: " << hour << "\n\tFecha: "
		<< date << "\n\tCaso Cerrado?: " << cerrado << "\n\tInvestigadores: ";
		for (int i = 0; i < investigators.size(); i++){
			ss << "\t\t" << investigators[i]->toString() << "\n";
		}
		ss << "\n\tEvidencia: ";
		for (int i = 0; i < evidence.size(); i++){
			ss << "\t\t" << evidence[i]->toString() << "\n";
		}

		retrun ss.str();  	
}

void Casos::setNum_caso(int num_caso){
	this->num_caso = num_caso;
}

void Casos::addInvestigators(investigator* investigator){
	investigators.push_back(investigator);
}

void Casos::addEvidence(evidencias* evidencia);
	evidence.push_back(evidencia);
}

int Casos::getNum_caso()const{
	return num_caso;
}

void Casos::setHour(string hour){
	this->hour = hour;
}

string Casos::getHour()const{
	return hour;
}

void Casos::setDate(string date){
	this->date = date;
}	

string Casos::getDate()const{
	return date;
}

void Casos::setClosed(bool closed){
	this->closed = closed;
}

bool Casos::getClosed()const{
	return closed;	
}

Casos::~Casos(){
	for(int i = 0; i < investigators.size(); i++){
		delete investigators[i];
	}
	for(int i = 0; i < evidence.size(); í++){
		delete evidence[i];
	}
}