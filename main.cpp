#include "casos.hpp"
#include "evidencia.hpp"
#include "forense.hpp"
#include "homicidio.hpp"
#include "investigador.hpp"
#include "persona.hpp"
#include "personaladministrativo.hpp"
#include "secuestro.hpp"


#include <string>
#include <sstream>
#include <iostream>
#include <vector>


int main(int argc, char const *argv[])
{
	vector <PersonalAdministrativo> listaAdmin;
	vector <forense> listaForense;
	vector <Investigador> listaInvestigador;

	vector <persona> listaPersonas;
	bool login = false;

	string usuario, Contrasena;

	while(true){
		int opc;
		cout << "1) LogIn" << endl;
		cout << "2) SignIn" << endl;
		cin >> opc;
		if(opc == 1){
			while(!login){			
				cout << "Usuario: ";
				cin >> usuario;
				cout << "Contrasena: ";
				cin >> Contrasena;
				for (int i = 0; i < listaPersonas.size(); i++)
				{
					string user, pass;
					user = listaPersonas[i].getUser();
					pass = listaPersonas[i].getPassword();
					if ((user == usuario) && (pass == Contrasena))
					{
						login = true;
					}
				}

				if(!login){
					cout << "USUARIO INCORRECTO\n\n" << endl;
				}else{
					cout << "USUARIO CORRECTO\n\n" << endl;
				}
			}
		}
	}

return 0;
}