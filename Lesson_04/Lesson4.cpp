#include <iostream>
#include <string>

using namespace std;

class Client {
private:
	int code;
	string name;
public:

	static int refCounter;

	Client(int _code, string _name) {
		this->code = _code;
		this->name = _name;

		this->refCounter++;
	}

	int getCode() {
		return this->code;
	}

	string getName() {
		return this->name;
	}


};

int Client::refCounter = 0;

int main() {

	Client *c = new Client(5, "test");
	cout << "How many objects have we created? Curently there was " << Client::refCounter << " objects created" << endl;
	delete c;
	c = new Client(6, "test");
	cout << "How many objects have we created? Curently there was " << Client::refCounter << " objects created" << endl;
	delete c;
	c = new Client(88, "test");
	cout << "How many objects have we created? Curently there was " << Client::refCounter << " objects created" << endl;
	delete c;
	c = new Client(59, "test");
	cout << "How many objects have we created? Curently there was " << Client::refCounter << " objects created" << endl;
	delete c;
	c = new Client(255, "test");
	cout << "How many objects have we created? Curently there was " << Client::refCounter << " objects created" << endl;

	getchar();

}