#include "casos.hpp"
#include "investigador.hpp"
#include "evidencia.hpp"
#include <string>
#include <sstream>
#include <vector>

using namespace std;

casos::casos(int num_caso,string hour,string date,bool closed):num_caso(num_caso),
hour(hour),date(date),closed(closed){
		vector<investigador*> investigator;
		vector<evidencia*> evidence; 
}

casos::casos(const casos& other):num_caso(other.num_caso),hour(other.hour),
date(other.date),closed(other.closed){
	this->investigator = other.investigator;
	this->evidence = other.evidence;
}

string casos::toString()const{
		stringstream ss;
		ss << "Caso Número: " << num_caso << " \n\tHora: " << hour << "\n\tFecha: "	<< date << "\n\tCaso Cerrado?: " << closed << "\n\tInvestigadores: ";
		for (int i = 0; i < investigator.size(); i++){
			ss << "\t\t" << investigator[i]->toString() << "\n";
		}
		ss << "\n\tEvidencia: ";
		for (int i = 0; i < evidence.size(); i++){
			ss << "\t\t" << evidence[i]->toString() << "\n";
		}

		return ss.str();  	
}

void casos::setNum_caso(int num_caso){
	this->num_caso = num_caso;
}

void casos::addInvestigators(investigador* investigator){
	this->investigator.push_back(investigator);
}

void casos::addEvidence(evidencia* evidence){
	this-> evidence.push_back(evidence);

}

int casos::getNum_caso()const{
	return num_caso;
}

void casos::setHour(string hour){
	this->hour = hour;
}

string casos::getHour()const{
	return hour;
}

void casos::setDate(string date){
	this->date = date;
}	

string casos::getDate()const{
	return date;
}

void casos::setClosed(bool closed){
	this->closed = closed;
}

bool casos::getClosed()const{
	return closed;	
}

casos::~casos(){
	for(int i = 0; i < investigator.size(); i++){
		delete investigator[i];
	}
	for(int i = 0; i < evidence.size(); i++){
		delete evidence[i];
	}
}
