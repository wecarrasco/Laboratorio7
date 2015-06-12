#include "persona.hpp"


persona::persona(string RealName,string UserName,string password,int age,string ID,string birth);
	this-> RealName = RealName;
	this-> UserName = UserName;
	this-> password = password
	this-> age = age;
	this-> ID = ID;
	this-> birth = birth;
}

persona::~persona(){

}

void setRealName(string RealName){
	this->RealName = RealName;
}

string getRealName()const{
	return this->RealName;
}

void setUser(string UserName){
	this->UserName = UserName;
}

string getUser()const{
	return this->UserName;
}

void setPassword(string password){
	this->password = password;
}
string getPassword()const{
	return this->password;
}

void setAge(int age){
	this->age = age;
}
int getAge()const{
	return this->age;
}

void setID(string ID){
	this->ID = ID;
}
string getID()const{
	return this->ID;
}

void setBirth(string birth){
	this->birth = birth;
}
string getBirth()const{
	return this->birth;
}

string toString(){
	stringstream ss;
	ss << "Nombre: " << RealName << "Usuario: " << UserName << "Password: " << " " << "Edad: " << age << "ID: " << ID << "Birth: " << birth;
	return ss;
}

