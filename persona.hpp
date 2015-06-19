#pragma once

#include <string>
#include <sstream>

using namespace std;

class persona{

public:
	persona(string RealName,string UserName,string password,int age,string ID,string birth);
	persona(const persona&);
	virtual ~persona();
	
	void setRealName(string RealName);
	string getRealName()const;

	void setUser(string UserName);
	string getUser()const;

	void setPassword(string password);
	string getPassword()const;

	void setAge(int age);
	int getAge()const;

	void setID(string ID);
	string getID()const;

	void setBirth(string birth);
	string getBirth()const;

	bool logIn(string UserName,string password);
	
	virtual string toString();

protected:
	string RealName;
	string UserName;
	string password;
	int age;
	string ID;
	string birth;

};