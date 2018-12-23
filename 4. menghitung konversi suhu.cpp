#include <iostream>
using namespace std;
int main()
{
    float C,F,K,R;
    cout <<"program konversi suhu"<<endl;
    cout <<"masukan nilai celciusnya =";
    cin>>C;
    F=C*9/5+32;
    K=273.15;
    R=C*4/5;
    cout<<"nilai fahrenheit ="<<F<<endl<<"nilai kelvin="<<K<<endl<<"nilai reamur"<<R;
    return 0;
}
