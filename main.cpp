#include <iostream>

using namespace std;

int main() {
     string cadena;

    getline(cin, cadena); cout<<endl;
    //Al meter un tipo de dato, se imprimira la cantidad de bytes que usa en memoria
    //Por ejemplo -> entrada: "int", salida: 4.

    if(cadena == "char"){
        cout<<sizeof(char)<<endl;
    }
    
    else if(cadena == "int"){
        cout<<sizeof(int)<<endl;
    }
    
	else if(cadena == "short"){
        cout<<sizeof(short)<<endl;
    }
    
	else if(cadena == "float"){
        cout<<sizeof(float)<<endl;
    }

    else if(cadena == "double"){
        cout<<sizeof(double)<<endl;
    }

    return 0;
}