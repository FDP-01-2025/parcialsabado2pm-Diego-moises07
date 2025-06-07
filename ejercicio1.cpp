#include <iostream>
#include <math.h>;
using namespace std;
int main(){
    int n, i=2, p=1;
    cout << "asigna tu maxima potencia: ";
    cin >> n;
    for (p; p<=n; p++)
    {
        cout << pow(i, p) << endl;
    }
    return 0;    

}