#include <iostream>

int main (){
    using namespace std;

    int grados;
    char tipoGrado;
    double gradosC, gradosF;
    cin >> grados >> tipoGrado;

    if(tipoGrado == 'c' || tipoGrado == 'C'){
        gradosF = grados * (9.0 / 5.0) + 32;
        cout << grados << "°C equivalen a " << gradosF << "°F" << endl;
    }else if(tipoGrado == 'f' || tipoGrado == 'F'){
        gradosC = (grados - 32) * (5.0 / 9.0);
        cout << grados << "°F equivalen a " << gradosC << "°C" << endl;
    }

    return 0;
}