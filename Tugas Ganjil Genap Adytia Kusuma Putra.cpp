#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    cout << "masukan bilangan genap :";
    cin >> a;
    
    cout << "masukan bilangan ganjil :";
    cin >> b;
    
    if (a % 2 == 0 || b % 2 == 1){
        cout <<endl<< "benar, ini bilangan ganjil dan genap" <<endl;
    } else {
        cout << "dia bukan bilangan ganjil dan genap" <<endl;
    }
     
    return 0;
}
