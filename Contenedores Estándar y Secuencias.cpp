#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<stack>

using namespace std;

int main(){
    std::list<double> miLista;

    miLista.push_back(3.14);// efectivamente es el numero pi
    miLista.push_back(5.44);
    miLista.push_back(2.74);
    miLista.push_back(1.84);
    miLista.push_back(6.31);
    miLista.push_back(9.62);

    std::stack<double, std::list<double>> miStack(miLista);


    std::cout << "Elementos originales de la lista:" << std::endl;
    for (const auto& elemento : miLista) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    std::cout << "\nOperaciones de la pila:" << std::endl;

    miStack.push(10.0);
    miStack.push(20.0);
    miStack.push(30.0);

    std::cout << "Top despues de push: " << miStack.top() << std::endl;

    miStack.pop();

    std::cout << "Top despues de pop: " << miStack.top() << std::endl;

    miLista.push_back(6.6);
    miLista.push_back(7.7);
    miLista.push_back(8.8);

    std::cout << "\nElementos actualizados de la lista:" << std::endl;
    for (const auto& elemento : miLista) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}
