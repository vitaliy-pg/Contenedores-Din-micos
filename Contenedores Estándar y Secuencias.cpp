#include<iostream>
#include<list>
#include<stack>
uisng namespace std;
int main(){
    std::list<double> miLista;
    miLista.push_back(3.14);
    miLista.push_back(5.44);
    miLista.push_back(2.74);
    miLista.push_back(8.84);
    miLista.push_back(6.31);
    miLista.push_back(9.62);

    std::stack<double, std::list<double>> miStack(miLista);


    std::cout << "Elementos originales de la lista:" << std::endl;
    for (const auto& elemento : miLista) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    std::cout << "\nOperaciones de la pila:" << std::endl;







    reututn 0;
}
