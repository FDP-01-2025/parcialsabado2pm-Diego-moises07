#include <iostream>;
using namespace std;
int main(){
   int edad;
   cout << "ingrese la edad:";
   cin >> edad;
    if (edad<18)
    {
        /* code */cout << "es menor de edad";
    }
    if (59>edad>17)
    {
        /* code */cout << "es un adulto";
    }
    
    else
    cout << "es un adulto mayor";
    return 0;
}