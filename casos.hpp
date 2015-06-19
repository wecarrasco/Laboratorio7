#pragma once
#include "investigador.hpp"
#include "evidencia.hpp"
#include <string>
#include <vector>

using namespace std;

class casos{
public:
	casos(int num_caso,string hour,string date,bool closed);
	casos(const casos&);
	virtual ~casos();
	
	virtual string toString()const;
	
	void addInvestigators(investigador* investigator);
	void addEvidence(evidencia* evidence);
	
	void setNum_caso(int);
	int getNum_caso()const;
	
	void setHour(string);
	string getHour()const;
	
	void setDate(string);
	string getDate()const;
	
	void setClosed(bool);
	bool getClosed()const;

protected:
	int num_caso;
	vector<investigador*> investigator;
	vector<evidencia*> evidence; 
	string hour;
	string date;
	bool closed;
	
};