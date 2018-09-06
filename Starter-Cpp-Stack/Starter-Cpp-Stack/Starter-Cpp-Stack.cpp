#include "pch.h"
#include <iostream>
#include <list>

using namespace std;

int main()
{
	// using a Struct Object so simplify usage
	struct Cstring
	{
		char* var;

		Cstring(char* Var = 0)
		{
			var = Var;
		}

		void ToLower()
		{
			char elem;
			for (int i = 0; i < sizeof(var); i++)
			{
				elem = var[i];
				tolower(elem);
				var[i] = elem;
				elem = NULL;
			}
		}

		void set(char* str)
		{
			var = str;
		}

		inline void operator=(char*& cstr)
		{
			var = cstr;
		}

		
	};

	list<Cstring> stack;
	Cstring option;
	cout << "Welcome to my Little Stack Simulator" << endl;

	system("pause");
	do 
	{
		system("cls");

		cout << "Options \n P for Push \n F for Flush \n Pp for Pop \n E for Exit \n" << endl;
		char* str = 0;
		cin >> str;
		option = str;
		option.ToLower();

		if (option.var == "p")
		{
			char* var = 0;
			cin >> var;
			stack.push_back(var);
			var = NULL;
		}
		else if (option.var == "f")
		{
			stack.clear();
		}
		else if (option.var == "pp")
		{
			cout << stack.back();
			stack.pop_back();
		}

		system("pause");
	} while (option.var != "e");
}
