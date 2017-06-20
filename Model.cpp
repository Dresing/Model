//
// Created by anole15 on 6/13/17.
//
#include <tuple>
#include <list>
#include "Model.h"




Model::~Model()
{
    std::cout << "Dec" << std::endl;
}

Model::Model(string name) {

}


Variable *Model::addVar(string name) {

    Variable* var = new Variable(name);
    this->variables.push_back(var);
    return var;
}

Variable *Model::getVar(size_t location) {
    return this->variables.at(location);
}

void Model::addConstraint(ConstraintList constraints, string oprand, long value) {

}

