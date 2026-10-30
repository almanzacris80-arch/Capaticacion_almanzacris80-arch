#include <iostream>
#include <string>
#include <cctype>

int main (){
    using namespace std;

    string cadena;
    int vocales = 0;
    getline(cin, cadena);

    for(int i = 0; i < cadena.length(); i++){
        char letras = tolower(cadena[i]);

        if(letras == 'a' || letras == 'e' || letras == 'i' || letras == 'o' || letras == 'u'){
            vocales++;
        }
    }

    cout << "Total de vocales: " << vocales << endl;



    return 0;
}
