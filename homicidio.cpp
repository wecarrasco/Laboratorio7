#include "evidencias.hpp"
#include "homicidio.hpp"
#include <string>
#include <sstream>

using namespace std;

homicidio::homicidio(string sospechoso_p, string culpable, string victima, int num_caso, string hour, string date, bool closed)
:Casos(num_caso,hour,date,closed), sospechoso_p(sospechoso_p), culpable(culpable), victima(victima){
	vector<string> sospechosos;
}

string homicidio::toString()const{
	stringstream ss;
	ss<< casos::toString()<< "\t Sospechoso Principal: "<<sospechoso_p<<endl;
	if (closed==true){
		ss<<"\t Culpable: "<<culpable<<endl;
	}
	ss<<"\t Victima: "<<victima<<endl;
	return ss.str();
}


string homicidio::getSospechoso_p()const{
	return sospechoso_p;
}

void homicidio::setSospechoso_p(string){
	this->sospechoso_p=sospechoso_p;
}

string homicidio::getCulpable()const{
	return culpable;
}

void homicidio::setCulpable(string){
	this->culpable=culpable;
}

string homicidio::getVictima()const{
	return victima;
}

void homicidio::setVictima(string){
	this->victima=victima;
}