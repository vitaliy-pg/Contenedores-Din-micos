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




    return 0;
}

