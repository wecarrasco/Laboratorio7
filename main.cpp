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
		}else if(opc == 2){
			int tipo;
			cout << "Ingrese numero: " << endl;
			cout << "1) Admin" << endl;
			cout << "2) Investigador" << endl;
			cout << "3) Forense" << endl;
			cin >> tipo;

			if (tipo == 1)
			{
				string RealName,string UserName,string password, string ID,string birth, string clave, string puesto;
				int age;
				cout << "Nombre: ";
				cin << RealName;
				cout << "Usuario: ";
				cin >> UserName;
				cout << "Contrasena: ";
				cin >> password;
				cout << "ID: ";
				cin >> ID;
				cout << "Fecha de Nacimiento: ";
				cin >> birth;
				cout << "Clave: ";
				cin >> clave;
				cout << "Puesto: ";
				cin >> puesto;
				PersonalAdministrativo p (RealName, UserName, password, age, ID, birth, clave, puesto);
				listaPersonas.push_back(p);
			}

		}
	}

return 0;
}