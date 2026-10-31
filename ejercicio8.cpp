#include <iostream>

int main (){
    using namespace std;

    int numeros[6];
    int numeroMayor;

    for(int i = 0; i < 6; i++){
        cin >> numeros[i];
    }
    numeroMayor = numeros[0];

    for(int i = 0; i < 6; i++){
        if(numeros[i] > numeroMayor){
            numeroMayor = numeros[i];
        }
    }
    cout << "El número mayor es: " << numeroMayor << endl;

    return 0;
}