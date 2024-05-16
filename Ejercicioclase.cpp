#include <iostream>

using namespace std;

int main() {
    
    

    int valor1, valor2, resultado;
    char resultadofinal;
    

    cout << "Ingrese el primer valor: \n";
    cin >> valor1;

    cout << "Ingrese el segundo valor: \n";
    cin >> valor2;

    cout << "Eliga una operación (+, -, *, /). \n";
    cin >> resultadofinal;

    switch (resultadofinal) {

        case '+':
            resultado = valor1 + valor2;
            cout << "El resultado de la suma es: \n" << resultado << "\n";
            break;

        case '-':
            resultado = valor1 - valor2;
            cout << "El resultado de la resta es: \n" << resultado << "\n";
            break;

        case '*':
            resultado = valor1 * valor2;
            cout << "El resultado de la multiplicación es: \n" << resultado << "\n";
            break;

        case '/':
            if (valor2 != 0) {
                resultado = valor1 / valor2;
                cout << "El resultado de la división es: \n" << resultado << "\n";
            } else {
                cout << "Error: No se puede dividir entre cero. \n";
            }
            break;

        default:
            cout << "Operador no valido.\n";
            break;
    }
    
    
    

   
    if (resultado % 2 == 0) {
        cout << "El número " << resultado << " es par." << "\n";
    } else {
        cout << "El número " << resultado << " es impar." << "\n";
    }


    return 0;
}
