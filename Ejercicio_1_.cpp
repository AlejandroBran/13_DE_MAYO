#include <iostream>

using namespace std;

int main (){

    float horas = 0;
    float horas_b, horas_e, salario_neto, impuesto,salario_liquido;
    string nombre;

    cout << "Digite el nombre: ";
    cin >> nombre;
    cout << "Digite las horas trabajadas: ";
    cin >> horas;

    if(horas <=160 && horas>0){

        horas_b =horas;

        horas_e = 0;
    }
    else {

        horas_b =160;

        horas_e = horas - 160;

    }
    salario_neto =horas_b * 10 + horas_e * 10 * 1.5;

    if(salario_neto <= 2000){

        impuesto = salario_neto * 0;
    }
    
    else if (salario_neto>2000 && salario_neto<2200)
    {
        impuesto = salario_neto * 0.2;

    }
    else{

        impuesto =salario_neto *0.3;
    }

    cout << "Como estas"<<nombre << "Su datos de salrio son. \n";
    cout << "\ttotalSalario neto: " << salario_neto;
    cout << "\n\ttotalImpuesto:\t" << impuesto;
    cout << "\n\ttotalSalario Liquido:\t" << salario_neto-impuesto << "\n";

    

    




    return 0;
}
    

