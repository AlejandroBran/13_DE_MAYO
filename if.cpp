#include <iostream>

using namespace std;

int main (){

    int n;

    cout << "Que nivel desea ir: \n";
    cin >> n;

    if (n>=1 && n<=25){

        if(n==1 ){
            cout << "Solo puede subir. \n";
        }
        else if (n>=2 && n<=24 ){
            cout << "Solo puedo bajar o subir. \n";
        }
        else{

            cout << "Solo puede bajar. \n";
        }
        
    }
    else {
        cout << "Ha ingresado un error. \n";
    }

    return 0;
}