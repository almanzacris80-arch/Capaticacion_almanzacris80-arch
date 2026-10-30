#include <iostream>

int main (){
    using namespace std;

    int abejas, avispas, fAbejas, fAvispas;
    cout << "Abejas = "<< endl;
    cin >> abejas;
    cout << "Avispas = " << endl;
    cin >> avispas;

    fAbejas = abejas * 2;
    fAvispas = avispas * 3;

    if(fAbejas > fAvispas){
        cout<<"Ganan las Abejas ("<<fAbejas<<" vs "<<fAvispas<<")"<<endl;
    }else{
        cout<<"Ganan las Avispas ("<<fAvispas<<" vs "<<fAbejas<<")"<<endl;
    }

    return 0;
}