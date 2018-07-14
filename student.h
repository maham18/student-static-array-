
#include <iostream>
#include <string>
using namespace std;
class student
{
private:
	string name;
	string seatno;
	string courselist[10];
	int index;

public:
	student()                          //NULL
	{
		this->name = "MAHAM KHAN";
		this->seatno = "B16101067";
		this->courselist[0] = "BSCS 401";
	
	}
	student(student& clone)                  //COPY
	{
		this->name = "MAHAM KHAN";
		this->seatno = "B16101067";
		for (int i = 0; i < 10; i++) {
			this->courselist[i] = clone.courselist[i];
		}

	}

//setters

void setname(string name)
{
	this->name=name;
}

void setseatno(string seatno)
{
	this->seatno=seatno;
}

//getters

string getname()
{
	return this->name;

}

string getseatno()
{
	return this->seatno;
}


	void addcourse(string coursename, int index)
	{
		this->courselist[index] = coursename;
	}
	string getcourse(int n)
	{
		return this->courselist[n];
	}
	void display()
	{
		cout << "I AM UBIT STUDENT!!!!" << endl;
		cout << "NAME: " << this->name << endl;
		cout << "SEAT NUMBER: " << this->seatno << endl;
		cout << "COURSE LIST...: " << endl;
		cout << this->courselist[0] << endl;
	}


};



 ostream& operator << (ostream& s,student Z)
{
	return s << "( " << Z.getname() << " , " << Z.getseatno() << " )" << endl;
}
