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
		int cont=-1;
		for (auto it = personas.rbegin(); it != personas.rend(); ++it) //ver por anio
		{
			for (auto it2 = personas[it->first].rbegin(); it2 != personas[it->first].rend(); ++it2)  // ver por mes
			{
				for (auto it3 = personas[it->first][it2->first].rbegin(); it3 != personas[it->first][it2->first].rend(); ++it3)  //ver por dia
				{
					cont++;
					if (cont == 0 || cont == cant - 1) // para que muestre el primer y ultimo 
					{
						cout << personas[it->first][it2->first][it3->first] << endl;
					}
				}
			}
		}
	}

