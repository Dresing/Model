//
// Created by anole15 on 6/13/17.
//

#ifndef HELLOWORLD_MODEL_H
#define HELLOWORLD_MODEL_H


#include <vector>
#include "../Model/Variable.h"

using namespace std;

class Model{

private:

    vector<Variable *> variables;

public:
    Model(string name);
    ~Model();
    Variable* addVar();

};


#endif //HELLOWORLD_MODEL_H
