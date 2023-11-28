#include<iostream>
#include<valarray>
using namespace std;
int main(){
    std::valarray<double> valarray1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::valarray<double> valarray2 = {2.0, 1.0, 2.0, 1.0, 2.0};

    std::valarray<double> suma = valarray1 + valarray2;
    std::valarray<double> resta = valarray1 - valarray2;
    std::valarray<double> multiplicacion = valarray1 * valarray2;
    std::valarray<double> division = valarray1 / valarray2;

    std::cout << "Valarray1: ";
    for (const auto& elemento : valarray1) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
    std::cout << "Valarray2: ";
    for (const auto& elemento : valarray2) {
        std::cout << elemento << " ";
    }
        std::cout << std::endl;
    std::cout << "Suma: ";
    for (const auto& elemento : suma) {
        std::cout << elemento << " ";
    }
        std::cout << std::endl;
    std::cout << "Resta: ";
    for (const auto& elemento : resta) {
        std::cout << elemento << " ";
    }
        std::cout << std::endl;
    std::cout << "Multiplicacion: ";
    for (const auto& elemento : multiplicacion) {
        std::cout << elemento << " ";
    }
        std::cout << std::endl;


    return 0;
}

