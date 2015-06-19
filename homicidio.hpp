#pragma once
#include "casos.hpp"
#include <string>

using namespace std;

class homicidio: public casos{

public:
	
	homicidio(string, string, string): casos(int,string,string,bool);
	virtual ~homicidio();

	virtual string toString()const; 
	
	string getSospechoso_p()const;
	void setSospechoso_p(string);
	
	string getCulpable()const;
	void setCulpable(string);
	
	string getVictima()const;
	void setVictima(string);

protected:
	vector<string>sospechosos;
	string sospechoso_p;
	string culpable;
	string victima;
};