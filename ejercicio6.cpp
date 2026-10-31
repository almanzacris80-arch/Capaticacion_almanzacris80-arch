#include <iostream>

int main (){
    using namespace std;

    int numeros[4];

    for(int i = 0; i <= 3; i++){
        cin >> numeros[i];
    }
    for(int j = 3; j >= 0; j--){
            cout << numeros[j] << " ";
        }


    return 0;
}