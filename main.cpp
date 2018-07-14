#include <iostream>
#include <string>

#include "student.h"

int main()
{
	student x;
	student y(x);
	cout<<"student x"<<endl;
	x.display();
	x.addcourse("BSCS 402",1);
	x.addcourse("BSCS 403", 2);
	x.addcourse("BSCS 404", 3);
	x.addcourse("BSCS 405", 4);
	cout<<x.getcourse(1)<<endl;
	cout << x.getcourse(2) << endl;
	cout << x.getcourse(3) << endl;
	cout << x.getcourse(4) << endl<<endl<<endl<<endl;

	
x=y;
	cout<<"student y"<<endl;
		cout << y.getcourse(2) << endl;
y.display();
	system("pause");
}

