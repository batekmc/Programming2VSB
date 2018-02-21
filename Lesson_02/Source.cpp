#include <iostream>

using namespace std;

class Student {
private:
	int ID;
public:
	char name[64] = "Karel Vorezprut";
	char text[64] = "My text";
};

int main() 
{
	int *myPointer = new int;
	int variable = 55;

	myPointer = &variable;

	cout << " *Pointer: " << *myPointer << " variable: " << variable << endl;

	cout << " Pointer: " << myPointer << " &variable: " << &variable << endl;

	Student *classVar = new Student();
	
	cout << "Student pointer size in bytes: " << sizeof(classVar) << " student object size in bytes: " << sizeof(*classVar) << endl;

	// Accessing to public attributes of the object
	cout << classVar->name << " , " << classVar->text << endl;

	getchar();
}



