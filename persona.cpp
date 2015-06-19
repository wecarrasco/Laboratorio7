#include "persona.hpp"
#include <string>
#include <sstream>

using namespace std;

persona::persona(string RealName,string UserName,string password,int age,string ID,string birth)
		 :RealName(RealName),UserName(UserName),password(password),age(age),ID(ID),birth(birth){
	this-> RealName = RealName;
	this-> UserName = UserName;
	this-> password = password;
	this-> age = age;
	this-> ID = ID;
	this-> birth = birth;
}

persona::persona(const persona& other)
		 :RealName(other.RealName),UserName(other.UserName),password(other.password),age(other.age),ID(other.ID),birth(other.birth){

}

persona::~persona(){

}

void persona::setRealName(string RealName){
	this->RealName = RealName;
}

string persona::getRealName()const{
	return this->RealName;
}

void persona::setUser(string UserName){
	this->UserName = UserName;
}

string persona::getUser()const{
	return this->UserName;
}

void persona::setPassword(string password){
	this->password = password;
}
string persona::getPassword()const{
	return this->password;
}

void persona::setAge(int age){
	this->age = age;
}
int persona::getAge()const{
	return this->age;
}

void persona::setID(string ID){
	this->ID = ID;
}
string persona::getID()const{
	return this->ID;
}

void persona::setBirth(string birth){
	this->birth = birth;
}
string persona::getBirth()const{
	return this->birth;
}

string persona::toString()const{
	stringstream ss;
	ss << "Nombre: " << RealName << "Usuario: " << UserName << "Password: " << " " << "Edad: " << age << "ID: " << ID << "Birth: " << birth;
	return ss.str();
}

bool persona::logIn(string UserName,string password){
	return this->UserName==UserName && this->password==password;
}

