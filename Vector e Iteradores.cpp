#include<iostream>
#include<vector>
using namespace std;

int main() {
    std::vector<int> miVector;
    miVector.push_back(10);
    miVector.push_back(20);
    miVector.push_back(30);
    miVector.push_back(40);
    miVector.push_back(50);
    miVector.push_back(60);
    miVector.push_back(70);
    miVector.push_back(80);

    std::cout << "Elementos del vector:" << std::endl;
    for (std::vector<int>::iterator it = miVector.begin(); it != miVector.end(); ++it) {
        std::cout << *it << std::endl;
    }

    std::cout<<std::endl;

return 0;
}