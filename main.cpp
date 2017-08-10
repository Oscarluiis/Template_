#include <iostream>

using namespace std;

template <typename T1, typename T2>
T2 sumar(T1 param1, T2 param2)
{
    return param1 + param2;
}

int main()
{
    cout<<sumar(10,20)<<endl;
    cout<<sumar(string("Hola"),string("Mundo"))<<endl;
    cout<<sumar(10.5,20)<<endl;
    cout<<sumar(10,20.5)<<endl;
}