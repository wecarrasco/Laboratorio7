#pragma once
#include "casos.hpp"
#include <string>

using namespace std;

class secuestro: public casos{

public:
	secuestro(int,string,string,bool,string,string,string,bool,int);
	secuestro(const Secuestro&);
	virtual ~secuestro();
	
	virtual string toString()const;
	
	void setVictim(string);
	string getVictim()const;
	
	void setLugar(string);
	string getLugar()const;
	
	void setMotivo(string);
	string getMotivo()const;
	
	void setRescate(bool);
	bool getRescate()const;
	
	int getCantidad()const;
protected:
	string victim; 
	string lugar;
	string motivo;
	bool rescate;
	int cantidad;
};