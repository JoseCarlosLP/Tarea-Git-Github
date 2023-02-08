	#include <iostream>
	#include <map>
	using namespace std;

	int main()
	{  
		//  anio     mes      dia   nombre
		map<int, map<int, map<int, string >>> personas;
		int cant = 0;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{	
			string nombre;
			int dia;
			int mes;
			int anio;
			cin >> nombre;
			cin >> dia;
			cin >> mes;
			cin >> anio;
			personas[anio][mes][dia] = nombre;
			cant++;
		}
	}

