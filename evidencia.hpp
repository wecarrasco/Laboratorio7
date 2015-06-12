#pragma once

#include <string>
#include <sstream>

using namespace std;

class evidencia{

public:
	evidencia(string name,string type,string place,bool huella,bool process);
	
	~evidencia();
	
	void setName(string Name);
	string geName()const;

	void setType(string type);
	string getType()const;

	void setPlace(string palce);
	string getPlace()const;

	void setHuella(bool huella);
	string getHuella()const;

	void setRealName(string RealName);
	string getRealName()const;

	void setProcess(bool process);
	string getProcess()const;


protected:
	string name;
	string type;
	string place;
	bool huella;
	bool precess;
};