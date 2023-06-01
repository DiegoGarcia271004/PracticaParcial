#include <iostream>
#include "Libreria.h"
using namespace std;

int main()
{
    float precio;

    cout << "Ingrese un precio." << endl;
    cin >> precio;

    cout << "El precio con descuento es de: " << Descuento(precio) << "$";

    return 0;
}
