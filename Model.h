//
// Created by anole15 on 6/13/17.
//

#ifndef HELLOWORLD_MODEL_H
#define HELLOWORLD_MODEL_H


#include <vector>
#include <array>
#include "../Model/Variable.h"
typedef list <tuple<long, Variable *>> ConstraintList;
using namespace std;

class Model{

private:

    vector<Variable *> variables;

public:
    Model(string name);
    ~Model();
    Variable* addVar(string name);
    Variable *getVar(size_t location);
    void Model::addConstraint(ConstraintList constraints, string oprand, long value);
};


#endif //HELLOWORLD_MODEL_H
