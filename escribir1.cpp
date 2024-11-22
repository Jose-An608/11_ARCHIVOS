#include <iostream>
#include <string>
using namespace std;
#include <fstream>

int main(){
	string ruc, producto;
	int unidades;
	double precio;
	char aux;
	ofstream archivo;
	
	archivo.open("output.txt"); //Apertura (creacion)
	
	cout << "RUC del cliente (X para terminar):  ";
	cin >> ruc;
	
	while(ruc != "X"){
		//queda pendiente el intro anterior...
		
		cin.get(aux); //leemos el intro
		cout << "Producto: ";
		getline(cin, producto);
		cout << "Unidades: ";
		cin >> unidades;
		cout << "Precio: ";
		cin >> precio;
		//escribimos los datos en una linea del archivo
		//con un espacio de separacion entre ellos
		archivo << ruc << " " << unidades << " "
			<< precio << " " << producto << endl;
		cout << "RUC del cliente (X para terminar): ";
		cin >> ruc;
	}
	//escribimos el centinela final
	archivo << "X";
	archivo.close(); //cierre del archivo
	
	return 0;
}
