
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int ARRAY_SIZE = 50;
const int RANDOM_NUMBERS_GENERATE_TO = 50;


class MyFirstClass
{
public:
	/*
	This is constructor and is called when an object is created
	*/
	MyFirstClass()
	{
		cout << this->privateAccesibleText << endl;
	}

	char publicAccesibleText[256] = "This is variable, which you can access and modify at will:)";

	void initArrayWithRandomNumbers()
	{
		this->generateRandomNumbers(this->myPrivateArray);
	}

	void printArrayToSTDOUT()
	{
		this->printArray(this->myPrivateArray);
	}

	void sortArray()
	{
		this->sort(this->myPrivateArray);
	}

	/*
	You can't return an array, sou you return array pointer
	*/
	char* getPrivateTextVariable()
	{
		return this->privateAccesibleText;
	}

private:
	int myPrivateArray[ARRAY_SIZE];
	char privateAccesibleText[256] = "This text is accesible within your class.";

	void printArray(int array[])
	{
		for (int i = 0; i < ARRAY_SIZE; i++)
			cout << array[i] << ", ";

		cout << "\n";
	}

	void generateRandomNumbers(int array[])
	{
		srand((unsigned)time(NULL));

		for (int i = 0; i < ARRAY_SIZE; i++)
			array[i] = rand() % RANDOM_NUMBERS_GENERATE_TO + 1;
	}

	/*
	Simple sort algorithm which always looks for smallest number
	and puts it to position
	*/
	void sort(int array[])
	{
		for (int i = 0; i < ARRAY_SIZE - 1; i++)
		{
			int currentMin = array[i];
			int currentMinIndex = i;

			for (int j = i + 1; j < ARRAY_SIZE; j++)
			{
				if (currentMin > array[j])
				{
					currentMin = array[j];
					currentMinIndex = j;
				}
			}

			if (currentMinIndex != i)
			{
				array[currentMinIndex] = array[i];
				array[i] = currentMin;

			}
		}
	}
};


int main()
{
	MyFirstClass *classVariable = new MyFirstClass();

	cout << classVariable->publicAccesibleText << endl;

	classVariable->initArrayWithRandomNumbers();

	cout << "This is array filled with random numbers:\n";

	classVariable->printArrayToSTDOUT();

	classVariable->sortArray();

	cout << "Now array is sorted!\n";

	classVariable->printArrayToSTDOUT();

	cout << classVariable->getPrivateTextVariable() << endl;

	getchar();

}

1.	Vytvorte tridu Auto
2.	Auto bud emit 1 atribut -> barva – textovy popis barvy -> bude privatni
3.	Barva se bude nastavovat v konstruktoru
4.	Auto bude mit metodu, ktera vypise barvu
5.	Auto bude mit metodu pro zmenu barvy
6.	Vytvorte object typu Auto a zmente jeho barvu
5B
•	Implementujte tridu motor. Tato trida bude mit jedinou public metodu, ktera pouze vypise informace o motoru – jmeno metody je Run()
•	Pridejte tridu motor do tridy auto jako privatni atribut. Implementujte metodu motorBezi(), ve tride auto, ktera poze zavola metodu Run tridy motor. Instance motoru se vytvori v konstruktoru tridy Auto



