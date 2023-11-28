#include<iostream>
#include<vector>
#include<algorithm>
#include<memory>

auto cuadrado = [](auto x) { return x * x; };

int main(){

    int numero = 5;
    auto resultado = cuadrado(numero);






    return 0;
}
