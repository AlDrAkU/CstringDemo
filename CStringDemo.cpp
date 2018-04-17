#include <iostream>
int g_StaticArray[1000000];
int main() {

	//char name[]{ "Apple" }; // c-string
	//std::cout << name << '\n';
	//int a = sizeof(name);
	//int b = strlen(name); // number of chars excluding the "/0"
	//name[5] = 's';
	//std::cout << name << '\n';
	//wchar_t wName[]{ L"Car" };
	//std::wcout << wName << '\n';

	//a = sizeof(wName);
	//b = wcslen(wName);


	//int staticArray[300000];

	int *pNumber = new int; // one int on the heap
	*pNumber = 42; // dereference operator
	int value = *pNumber;
	std::cout << value << '\n';
	delete pNumber;
	pNumber = nullptr;

	//while (true) new int;
	int size{ 25414 };
	int *pDynArray = new int[size];
	pDynArray[0] = 5;
	int a = sizeof(pDynArray); // it's the size of 
	delete[] pDynArray;
	while (true)
	{
		std::cout << "Press enter to allocate 1GByte.";
		std::cin.get();
		pDynArray = new int[int(pow(2, 28))];
	}

}