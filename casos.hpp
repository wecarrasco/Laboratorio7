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
	
	void addInvestigators(investigator* investigator);
	void addEvidence(evidencias* evidencia);
	
	void setNum_caso(int);
	int getNum_caso()const;
	
	void setHour(string);
	string getHour()const;
	
	void setDate(string)const;
	string getDate();
	
	void setClosed(bool)const;
	bool getClosed();

protected:
	int num_caso;
	vector<investigador*> investigators;
	vector<evidencia*> evidence; 
	string hour;
	stirng date;
	bool closed;
	
};