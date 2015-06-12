#pragma once

#include <string>
#include <sstream>

class persona{

public:
	persona(string RealName,string UserName,string password,int age,string ID,string birth);
	
	~persona();
	
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

	string toString();

protected:
	string RealName;
	string UserName;
	string password;
	int age;
	string ID;
	string birth;

};