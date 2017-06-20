#include <iostream>
#include "Model.h"

using namespace std;

int main() {



    const double PI = 3.14;
    char test = 's';
    bool isMe = false;
    int hi = 5;
    cout << "Hello, Wosrld!" << endl;

    Model* A = new Model("TSP");

    cout << (A->addVar());


    return 0;


}