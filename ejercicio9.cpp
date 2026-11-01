#include <iostream>

int main (){
    using namespace std;

    bool longitud, contieneNumero, contieneMayuscula;
    string cadena; 
    cin >> cadena;

    if(cadena.length() >= 8){
        longitud = true;
    }

    for(int i = 0; i <= cadena.length(); i++){
        char caracteres = cadena[i];

        if(caracteres >= '0' && caracteres <= '9'){
            contieneNumero = true;
        }
        if(caracteres >= 'A' && caracteres <= 'Z'){
            contieneMayuscula = true;
        }
    }

    if(longitud == true && contieneNumero == true && contieneMayuscula == true){
        cout << "Contraseña válida" << endl;
    }else{
        if(contieneNumero != true){
            cout << "Falta un número" << endl;
        }
        if(longitud != true){
            cout << "Es menor a 8 caracteres" << endl;
        }
        if(contieneMayuscula != true){
            cout << "No contiene mayúsculas" << endl;
        }
    }

    return 0;
}