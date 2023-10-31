#include <iostream>
#include <vector>
#include "DyV.h"

using namespace std;

int main(){
	vector<int> d{9, 8, 7, 6, 5, 4, 3, 2, 1};
	vector<double> b{1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	vector<char> c{'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
	vector<int> a{1, 2, 3, 4, 5, 6, 7, 8, 9};

cout << "busqueda int: " << BusquedaBinaria(2, a, 0, 8) << endl;
cout << "busqueda float: " << BusquedaBinaria(3.3, b, 0, 8) << endl;
cout << "busqueda char: " << BusquedaBinaria('h', c, 0, 8) << endl;
cout << "busqueda int inv: "<< BusquedaBinaria_INV(2, d, 0, 8) << endl;

return 0;
}

