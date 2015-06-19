#include "secuestro.hpp"
#include "casos.hpp"
#include <string>
#include <sstream>

using namespace std;

	secuestro::secuestro(int num_caso,string hour, string date, bool closed, string victim, string lugar,string motivo, bool rescate, 
	int cantidad):Casos(num_caso,hour,date,closed), victim(victim), lugar(lugar), motivo(motivo), rescate(rescate), cantidad(cantidad){

	}

	secuestro::secuestro(const secuestro& sec): casos(sec),victim(sec.victim),lugar(sec.lugar),
	motivo(sec.motivo),rescate(sec.rescate),cantidad(sec.cantidad){

	}

	secuestro::~secuestro(){

	}

	string secuestro::toString()const{
		stringstream ss;
		ss << casos::toString() << "\n\t Tipo de Caso: SECUESTRO \n\tVictima: " << victim << "\n\tLugar: " << lugar << 
		"\n\tMotivo: " << motivo << "\n\tRescate: " << (rescate?"SI":"NO");

		if(rescate){
			ss << "\n\tCantidad: " << cantidad;
		}

		return ss.str();
		
	}

	void secuestro::setVictim(string victim){
		this->victim = victim;
	}

	string secuestro::getVictim()const{
		return victim;
	}

	void secuestro::setLugar(string lugar){
		this->lugar = lugar;
	}

	string secuestro::getLugar()const{
		return lugar;
	}

	void secuestro::setMotivo(string motivo){
		this->motivo = motivo;
	}

	string secuestro::getMotivo()const{
		return motivo;
	}

	void secuestro::setRescate(bool rescate){
		this->rescate = rescate;
	}

	bool secuestro::getRescate()const{
		return rescate;
	}

	int secuestro::getCantidad()const{
		return cantidad;
	}