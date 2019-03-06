#include <iostream>

using namespace std;

class List {

private:
	List* nextItem = NULL;

	int value;

public:

	int getValue() {
		return this->value;
	};

	void addNewItem(int number) {
		nextItem = new List(number);
	};

	List* getNextItem() {
		return this->nextItem;
	};


	List( int value){ 
		this->value = value;

		cout << "Constructor is executed whith value = " << value << endl; 
	};

	~List() {
		cout << "Destructor is executed and value was " << value << endl;
		delete nextItem;
	};
};


int main() {

	const int LOOP_LENGTH = 10;

	cout << "OBJECT CREATION PART: " << endl << endl;

	// We create new object
	List* l1 = new List(0);

	// Now we add new item -> next object in the list
	l1->addNewItem(1);

	// this pointer refereces to a newly created object
	List* l2 = l1->getNextItem();

	// In this loop we will create new objects with values from 2 to 11
	for (int i = 0; i < LOOP_LENGTH; i++) {
		l2->addNewItem(i + 2);
		
		l2 = l2->getNextItem();
	};

	cout << endl << "PRINTING OBJECT ATRIBUTE VALUES PART: " << endl << endl;

	// now we set l2 pointer to the begining of the list
	l2 = l1;

	// In this loop we will print values. +2 is beacause there was 2 values created outside the loop
	for (int i = 0; i < LOOP_LENGTH +2; i++) {
		cout << "Value in index " << i << " is: " << l2->getValue() << "\n";
		l2 = l2->getNextItem();
	};


	cout << endl << "CLEANING PART: " << endl << endl;
	// now we delete all the classes
	// all the object are deleted. If you know why,
	// send me an email with explanation and you will get 3 points.
	delete l1;

	// wait for input to close console -> press enter to exit program
	getchar();
}
