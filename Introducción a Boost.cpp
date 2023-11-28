#include <iostream>
#include <boost/lexical_cast.hpp>

int main(){
    try {
        std::string cadena = "123";
        int numero = boost::lexical_cast<int>(cadena);

        std::cout << "Número convertido: " << numero << std::endl;
    } catch (const boost::bad_lexical_cast& ex) {
        std::cerr << "Error al convertir la cadena: " << ex.what() << std::endl;


    return 0;
}