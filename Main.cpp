#include <iostream>
#include <typeinfo>
#include "casos.hpp"
#include "evidencia.hpp"
#include "homicidio.hpp"
#include "secuestro.hpp"
#include "persona.hpp"
#include "forense.hpp"
#include "investigador.hpp"
#include "personaladministrativo.hpp"

using namespace std;
int menuPrincipal();
int Tipo_Cuenta();
string menuArmas();
bool menuSN();
int menuUsuario();

int main(int argc, char* argv[]){
	vector <persona> personas;
	vector <casos> lista_casos;
	vector <evidencia> lista_evidencias;
	int op_prin;//int para el Menu Principal
	do{
		op_prin=menuPrincipal();
		switch(op_prin){
			case 1:{
				int cuenta=Tipo_Cuenta();
				cout<<"Ingrese su nombre real: ";
				string nom_real;
				cin>>nom_real;
				cout<<endl;
				cout<<"Ingrese su nombre de usuario: ";
				string nom_usu;
				cin>>nom_usu;
				cout<<endl;
				cout<<"Ingrese su contrasena: ";
				string contrasena;
				cin>>contrasena;
				cout<<endl;
				cout<<"Ingrese su edad: ";
				int edad;
				cin>>edad;
				cout<<endl;
				cout<<"Ingrese su cedula de identidad: ";
				string cedula;
				cin>>cedula;
				cout<<endl;
				cout<<"Ingrese su fecha de nacimiento: ";
				string fecha_nac;
				cin>>fecha_nac;
				cout<<endl;
				if (cuenta==1){
					cout<<"Ingrese su clave de ingreso al sistema: ";
					string clave;
					cin>>clave;
					cout<<endl;
					cout<<"Ingrese su puesto en el organigrama: ";
					string puesto;
					cin>>puesto;
					cout<<endl; 
					PersonalAdministrativo p(nom_real,nom_usu,contrasena,edad,cedula,fecha_nac,clave,puesto);
					personas.push_back(p);
				}else if (cuenta==2){
					cout<<"Ingrese el numero de casos atendidos: ";
					int casos_a;
					cin>>casos_a;
					cout<<endl;
					cout<<"Ingrese el numero de casos cerrados: ";
					int casos_c;
					cin>>casos_c;
					cout<<endl;
					cout<<"Ingrese el numero de casos sin resolver: ";
					int casos_sr;
					cin>>casos_sr;
					cout<<endl;
					investigador i(nom_real,num_usu,contrasena,edad,cedula,fecha_nac,casos_a,casos_c,casos_sr);
					personas.push_back(i);
				}else if (cuenta==3){
					cout<<"Ingrese la fecha de ingreso a la organizacion: ";
					string fecha_i;
					cin>>fecha_i;
					cout<<endl;
					cout<<"Ingrese su horario de trabajo: ";
					string horario;
					cin>>horario;
					cout<<endl;
					forense f(nom_real,num_usu,contrasena,edad,cedula,fecha_nac,fecha_i,horario);
					personas.push_back(f);
				}//end if;
			}
			case 2:{
				string usuario, contrasena;
				cout << "\nINICIO SESION:\nIngrese su nombre de usuario: ";
				cin >> usuario;
				cout << "Ingrese su contrasena: ";
				cin >> contrasena;
				int tipousuario = -1;
				for (int i = 0; i < personas.size(); ++i){
					if(personas[i]->logIn(usuario,contrasena)){
						if(typeid(personas[i]).name() == "forense"){
							tipousuario = 3;
						}else if(typeid(personas[i]).name() == "investigador"){
							tipousuario = 2;
						}else if(typeid(personas[i]).name() == "PersonalAdministrativo"){
							tipousuario = 1;
						}else{
							cout << "error" << endl;
						}
						break;
					}
				}
				if(tipousuario != -1){
					switch(menuUsuario()){
						case 1:{ // agregar caso
							int num_caso;
							string hour,date;
							bool closed;
							cout << "AGREGAR CASO:\n" << endl;
							int op_caso = menuCaso();
							cout << "Ingrese numero de caso: ";
							cin >> num_caso;
							cout << "Ingrese la fecha del incidente: ";
							cin >> fecha;
							cout << "Ingrese la hora del incidente: ";
							cin >> hora;
							cout << "Esta el caso cerrado? " << endl;
							closed = menuSN();
							if(op_caso == 1){
								string sospechoso_prin, culpable,victima;
								cout << "Ingrese el sospechoso principal: ";
								cin >> sospechoso_prin;
								cout << "Ingrese la victima: ";
								cin >> victima;
								if(closed){
									cout << "Ingrese el nombre del culpable: ";
									cin >> culpable;
								} else{
									culpable = "";
								}

								homicidio h(num_caso,hour,date,closed,sospechoso_prin,culpable,victima);
								lista_casos.push_back(h);
							}else{
								string victima,lugar,motivo;
								bool rescate;
								int cant_rescate;
								cout << "Ingrese el nombre de la victima: ";
								cin>> victima;
								cout << "Ingrese el lugar del secuestro: ";
								cin >> lugar;
								cout << "Ingrese el motivo: ";
								cin >> motivo;
								cout << "Se pidio rescate? " << endl;
								rescate = menuSN();
								if(rescate){
									cout << "Ingrese la cantidad pedida de rescate: ";
									cin >> rescate;
								}else{
									rescate = 0;
								}

								secuestro s(num_caso,hour,date,closed,victima,lugar,motivo,rescate,cant_rescate);
								lista_casos.push_back(s);	
							}
							int pos;
							do{
								cout << "Lista de Investigadores:" << endl;
								for (int i = 0; i < personas.size(); ++i)
									if(typeid(personas[i].name() == "investigador")){
										cout << i+1 << personas[i]->toString() << endl;
									}
								cout << "Ingrese el investigador que desea agregar al caso:\n(si no va a agregar mas, ingrese -1)"<< endl;
								cin >> pos;
								if(pos != -1){
									(lista_casos.back())->addInvestigators(personas[i-1]);
								}
							}while(pos != -1);
							break;
						}
						case 2:{ // ver caso
							if(tipousuario != 3){
								cout << "Lista de Secuestros:" << endl;
								for (int i = 0; i < lista_casos.size(); ++i){
									if(typeid(lista_casos[i]).name() == "secuestro")
										cout << lista_casos[i]->toString() << endl;
								}
								cout << endl;
							}
							if(tipousuario != 1){
								cout << "Lista de Homicidios:" << endl;
								for (int i = 0; i < lista_casos.size(); ++i){
									if(typeid(lista_casos[i]).name() == "homicidio")
										cout << lista_casos[i]->toString() << endl;
								}
								cout << endl;
							}
							break;
						}
						case 3:{ //eliminar caso
							int pos;
							cout << "Lista de Casos: "
							for (int i = 0; i < lista_casos.size(); ++i)
								cout << i+1 << lista_casos[i]->toString() << endl;
							cout << "Ingrese el caso que desea eliminar: ";
							cin >> pos;
							pos--;
							delete lista_casos[pos];
							lista_casos.erase(lista_casos.begin()+pos);
							cout << "Caso eliminado exitosamente" << endl;
							break;
						}
						case 4:{ //agregar evidencia
							if(tipousuario == 2){
								string nombre, arma, lugar;
								bool huellas, procesada;
								cout << "AGREGAR EVIDENCIA:\nIngrese nombre: ";
								cin >> nombre;
								cout << "Ingrese arma: " << endl;
								arma = menuArmas();
								cout << "Ingrese lugar: ";
								cin >> lugar;
								cout << "Encontro huellas? " << endl;
								huellas = menuSN();
								cout << "Fue procesada? " << endl;
								procesada = menuSN();
								evidencia e(nombre,arma,lugar,huellas,procesada);
								lista_evidencias.push_back(e);
								cout << "Evidencia agregada exitosamente" << endl;
							}else
								cout << "No tiene acceso a esta funcion." << endl;
							break;
						}
						case 5:{ //ver evidencia
							cout << "Lista de Evidencias:" << endl;
							for (int i = 0; i < lista_evidencias.size(); ++i)
								cout << lista_evidencias[i]->toString() << endl;
							cout << endl;
							break;
						}
						case 6:{ // eliminar evidencia
							int pos;
							cout << "Lista de Evidencias:" << endl;
							for (int i = 0; i < lista_evidencias.size(); ++i)
								cout << i+1 << lista_evidencias[i]->toString() << endl;
							cout << "Ingrese la evidencia que desea eliminar: ";
							cin >> pos;
							pos--;
							delete lista_evidencias[pos];
							lista_evidencias.erase(lista_evidencias.begin()+pos);
							cout << "evidencia eliminado exitosamente" << endl;
							break;
						}
						case 7:{ // ver usuarios
							cout << "Lista de Usuarios:" << endl;
							for (int i = 0; i < personas.size(); ++i)
								cout << personas[i]->toString() << endl;
							cout << endl;
							break;
						}
						case 8:{ // eliminar usuarios
							int pos;
							cout << "Lista de Usuarios:" << endl;
							for (int i = 0; i < personas.size(); ++i)
								cout << i+1 << personas[i]->toString() << endl;
							cout << "Ingrese el usuario que desea eliminar: ";
							cin >> pos;
							pos--;
							delete personas[pos];
							personas.erase(personas.begin()+pos);
							cout << "usuario eliminado exitosamente" << endl;
							break;
						}
					}
				}else{
					cout << "Combinacion de usuario y contrasena incorrectos..." << endl;
				}
				break;
			}
		}
	}while(opcion != 3);	
}

int menuPrincipal(){
	int opcion;
	cout<<"BIENVENIDO"<<endl;
	cout<<"1. Iniciar Sesion."<<endl;
	cout<<"2. Crear una Cuenta."<<endl;
	cout<<"3. Salir" << endl;
	cout<<"Ingrese su opcion: ";
	cin>>opcion;
	cout<<endl;

	while (!(opcion<1||opcion>3)){
		cout<<"Opcion no valida."<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		cout<<endl;
	}//end while 
	return opcion;
}

int menuCaso(){
	int opcion;
	cout<<"1. Homicidio"<<endl;
	cout<<"2. Secuestro"<<endl;
	cout<<"Ingrese su opcion: ";
	cin>>opcion;
	cout<<endl;

	while (!(opcion<1||opcion>2)){
		cout<<"Opcion no valida."<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		cout<<endl;
	}//end while 
	return opcion;
}

string menuArmas(){
	int opcion;
	cout<<"1. Blanca"<<endl;
	cout<<"2. Fuego"<<endl;
	cout<<"3. Evidencia Circunstancial"<<endl;
	cout<<"Ingrese su opcion: ";
	cin>>opcion;
	cout<<endl;

	while (opcion<1||opcion>3){
		cout<<"Opcion no valida."<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		cout<<endl;
	}//end while 
	if(opcion == 1)
		return "blanca";
	else if(opcion == 2)
		return "fuego"
	else
		return "evidencia circunstancial"
}

bool menuSN(){
	int opcion;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cout<<"Ingrese su opcion: ";
	cin>>opcion;
	cout<<endl;

	while (opcion<1||opcion>2){
		cout<<"Opcion no valida."<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		cout<<endl;
	}//end while 
	if(opcion == 1)
		return true;
	else
		return false;
}

int menuUsuario(){
	int opcion;
	cout<<"MENU USUARIO:"<<endl
		<<"1. Agregar Caso"<<endl
		<<"2. Ver Casos" << endl
		<<"3. Eliminar Caso"<<endl
		<<"4. Agregar Evidencias"<<endl
		<<"5. Ver Evidencias" << endl
		<<"6. Eliminar Evidencias"<<endl
		<<"7. Ver Usuarios" << endl
		<<"7. Eliminar Usuario"<<endl
		<<"8. Salir"
		<<"Ingrese su opcion: ";
	cin>>opcion;
	cout<<endl;

	while (opcion<1 || opcion>8){
		cout<<"Opcion no valida."<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		cout<<endl;
	}//end while 
	return opcion;
}

int Tipo_Cuenta(){
	int opcion;
	cout<<"TIPOS DE CUENTA:"<<endl;
	cout<<"1. Personal Administrativo"<<endl;
	cout<<"2. Investigador"<<endl;
	cout<<"3. Forense"<<endl;
	cout<<"Ingrese su opcion: ";
	cin>>opcion;
	cout<<endl;

	while (!(opcion==1||opcion==2||opcion==3)){
		cout<<"Opcion no valida."<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		cout<<endl;
	}//end while 
	return opcion;
}


>>>>>>> 396e88b02b760d4956a4c65b9bd1cfbcc34e5c0c
