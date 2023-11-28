#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    std::vector<int> miVectornumeros;
    miVectornumeros.push_back(10);
    miVectornumeros.push_back(20);
    miVectornumeros.push_back(30);
    miVectornumeros.push_back(40);
    miVectornumeros.push_back(50);
    miVectornumeros.push_back(60);
    miVectornumeros.push_back(70);
    miVectornumeros.push_back(80);

    std::cout << "Elementos del vector numeros:" << std::endl;
    for (std::vector<int>::iterator it = miVectornumeros.begin(); it != miVectornumeros.end(); ++it) {
        std::cout << *it << " ";  // Mostrar el elemento actual
    }
    std::cout << std::endl;

    std::vector<std::string> miVectorAlimentos;
    miVectorAlimentos.push_back("Manzana");
    miVectorAlimentos.push_back("Pera");
    miVectorAlimentos.push_back("Kiwi");
    miVectorAlimentos.push_back("Naranja");
    miVectorAlimentos.push_back("Mandarina");
    miVectorAlimentos.push_back("Ciruela");

    std::cout << "Elementos del vector alimentos:" << std::endl;

    for (std::vector<std::string>::iterator it = miVectorAlimentos.begin(); it != miVectorAlimentos.end(); ++it) {
        std::cout << *it << " ";  // Mostrar el elemento actual
    }
    std::cout << std::endl;
return 0;
}