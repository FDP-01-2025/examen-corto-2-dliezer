#include <iostream>
using namespace std;
// Se nombran las varibles que se ocuparan
int main(void){
    int Edad, Op, Saldo = 300, C_casual = 90, P_formal = 30, Ch_Premium = 900, B_moderna = 80, F_elegante = 110, A_premium = 250;
    // Se le pide al usuario la talla
    cout << "Ingresa tu edad para calcular tu talla\n";
    cin >> Edad;
    // Se calcula la talla segun la edad ingresada
    if(Edad >= 0 && Edad < 11){
        cout << "Tu talla es la 8\n";
    }
    else{
        if(Edad > 10 && Edad <= 15){
            cout << "Tu talla es la 12\n";
        }
        else{
            if(Edad > 15 && Edad < 61){
                cout << "Tu talla es la 16\n";
            }
            else{
                cout << "Tu talla es la 18\n";
            }
        }
    }
    // Se le pide al usuario que escoja una opcion para desplegar una de las listas
    cout << "Escoge una de las opciones para mostrarte la lista de ropa:\n  1 -Para Hombre\n  2 -Para mujer\n  3 -Mostrar todo \n";
    cin >> Op;
    // Se despliega una lista dependiendo de lo que el usuario selecciono
    switch(Op){
        case 1:
            cout << " Camisa Casual: $90 (descuento del 30%)\n Pantalón Formal: $130 (descuento del 30%)\n Chaqueta Premium: $900 (descuento del 30%)\n";
            break;
        case 2:
            cout << "Blusa Moderna: $80 (descuento del 20%)\n Falda Elegante: $110 (descuento del 20%)\n Abrigo Premium: $250 (descuento del 20%)\n";
            break;
        case 3:
            cout << " Camisa Casual: $90 (descuento del 30%)\n Pantalón Formal: $130 (descuento del 30%)\n Chaqueta Premium: $900 (descuento del 30%)\n Blusa Moderna: $80 (descuento del 20%)\n Falda Elegante: $110 (descuento del 20%)\n Abrigo Premium: $250 (descuento del 20%)\n";
            break;
    }

    return 0;
}
