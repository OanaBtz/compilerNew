//
// Created by dennis on 1/2/18.
//

#include "Node.h"
#include <iostream>
#include "types.h"


using namespace std;

Node::Node(Type type, string data)
{
    this->type = type;
    this->data = data;
    this->parentNode = NULL;
    if(type == TYPE && data == "FED")
    {
        data = "bold";
    }
}

Type Node::getType()
{
    return type;
}
string Node::getData()
{
    return data;
}

void Node::addNode(Node* node)
{
    nodes.push_back(node);
    node->setParent(this);
}

std::vector<Node*> Node::getNodes()
{
    return nodes;
}

void Node::setParent(Node* node)
{
    parentNode = node;
}

Node* Node::getParent()
{
    return parentNode;
}
