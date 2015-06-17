#pragma once

#include <string>
#include <sstream>

using namespace std;

class evidencia{

public:
	evidencia(string name,string type,string place,bool fingerPrint,bool process);
	
	~evidencia();
	
	void setName(string Name);
	string geName()const;

	void setType(string type);
	string getType()const;

	void setPlace(string palce);
	string getPlace()const;

	void setHuella(bool fingerPrint);
	string getHuella()const;

	void setProcess(bool process);
	string getProcess()const;

	string toString()const;


protected:
	string name;
	string type;
	string place;
	bool fingerPrint;
	bool precess;
};