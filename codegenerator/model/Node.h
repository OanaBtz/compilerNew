//
// Created by dennis on 1/2/18.
//

#ifndef AFPCG_NODE_H
#define AFPCG_NODE_H


#include <vector>
#include <iostream>
#include "types.h"

using namespace std;

class Node
{
private:
    Node* parentNode;
    Type type;
    std::vector<Node*> nodes;
    string data;

public:
    Node(Type type, string data);
    Type getType();
    string getData();
    void addNode(Node* node);
    std::vector<Node*> getNodes();
    void setParent(Node* node);
    Node* getParent();
};



#endif //AFPCG_NODE_H
