#include <iostream>

using namespace std;

int main (){

    float valor1, valor2, resultado;
    char operadores;

    cout << "Ingrese el primer valor: \n";
    cin >> valor1;

    cout << "Ingrese el segundo valor: \n";
    cin >> valor2;

    cout << "Ingrese un operador (+,-,*,/): \n";
    cin >> operadores;

    switch (operadores){

        case "+":
        resultado = valor1 + valor2;
        cout << "El resultado de la suma es: \n"<< resultado<< "\n";
        break;

        case "-":
        resultado = valor1 - valor2;
        cout << "El resultado de la resta es: \n" << resultado <<"\n";
        break;

        case "*":
        resultado = valor1 * valor2;
        cout << "El resultado de la multiplicación es: \n"<< resultado << "\n";
        break;

        case "/":
        if (valor2 !=0){
            resultado = valor1 / valor2;
            cout << "El resultado de la división es: \n"<< resultado << "\n";
            
        }else {
            cout << "Error: No se puede dividir entre cero. \n";

    
        }
        break;

        default: 
        cout << "Operador no valido.\n";
        break;
        
            }
       return 0;
    }

   
