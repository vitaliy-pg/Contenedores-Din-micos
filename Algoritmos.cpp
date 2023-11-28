#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    std::vector<int> miVector = {7, 2, 5, 1, 8, 3, 6, 4};

    std::cout << "Vector original:" << std::endl;
    for (const auto& elemento : miVector) {
        std::cout << elemento << " ";
    }
std::cout << std::endl;

    std::sort(miVector.begin(), miVector.end());

    std::cout << "Vector ordenado:" << std::endl;
    for (const auto& elemento : miVector) {
        std::cout << elemento << " ";
    }







    return 0;
}