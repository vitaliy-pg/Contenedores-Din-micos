#include<iostream>
#include<vector>
#include<algorithm>
#include<memory>

auto cuadrado = [](auto x) { return x * x; };

int main(){

    int numero = 5;
    auto resultado = cuadrado(numero);

    std::cout << "El cuadrado de " << numero << " es " << resultado << std::endl;

// Usar expresión lambda con for_each para imprimir el cuadrado de cada elemento en un vector
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    std::cout << "Cuadrados de los elementos en el vector:" << std::endl;



    return 0;
}
