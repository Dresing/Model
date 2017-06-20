//
// Created by anole15 on 6/13/17.
//

#include <iostream>
#include "Model.h"



Model::~Model()
{
    std::cout << "Dec" << std::endl;
}

Model::Model(string name) {

}

Variable *Model::addVar() {

    Variable* var = new Variable();
    this->variables.push_back(var);
    return var;
}

