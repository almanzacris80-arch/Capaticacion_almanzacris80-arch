#include <iostream>
#include <cctype>
#include <string>

int main (){
    using namespace std;

    string cadena, cadenaSinEspacios, cadenaInversa;
    getline(cin, cadena);

    for(int i = 0; i < cadena.length(); i++){
        char letras = cadena[i];

        if((letras >= 'A' && letras <= 'Z') || (letras >= 'a' && letras <= 'z')){
            cadenaSinEspacios += tolower(letras);
        }
    }

    for(int i = cadenaSinEspacios.length()-1; i >= 0; i--){
        cadenaInversa += cadenaSinEspacios[i];
    }

    if(cadenaSinEspacios == cadenaInversa){
        cout << "Es políndromo: True" << endl;
    }else{
        cout << "Es políndromo: False" << endl;
    }

    return 0;
}