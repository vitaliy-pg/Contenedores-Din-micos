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
std::cout << std::endl;
    auto maxElement = std::max_element(miVector.begin(), miVector.end());

    std::cout << "Elemento mas grande: " << *maxElement << std::endl;

    miVector.push_back(10);
    miVector.push_back(12);
    miVector.push_back(9);

    std::cout << "Vector con nuevos elementos:" << std::endl;
    for (const auto& elemento : miVector) {
        std::cout << elemento << " ";
    }
std::cout << std::endl;


    return 0;
}