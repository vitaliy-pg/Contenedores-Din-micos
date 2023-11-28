#include<iostream>
#include<vector>
#include<algorithm>
#include<memory>

auto cuadrado = [](auto x) { return x * x; };

int main(){

    int numero = 5;
    auto resultado = cuadrado(numero);

    std::cout << "El cuadrado de " << numero << " es " << resultado << std::endl;




    return 0;
}
