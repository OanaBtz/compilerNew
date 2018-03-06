//
// Created by dennis on 1/2/18.
//

#include "searching.h"


Node* findAreaDefinition(Node* node, string name, Node* result)
{
    if(node->getType() == DOCUMENT)
    {
        for (unsigned long i = 0; i < node->getNodes().size(); ++i)
        {
            if(node->getNodes().at(i)->getType() == AREADEFINITION)
            {
                if(node->getNodes().at(i)->getNodes().at(0)->getData() == name)
                {
                    return node->getNodes().at(i);
                }
            }
        }
    }
    if(node->getParent() != NULL)
    {
        result = findAreaDefinition(node->getParent(), name, result);
    }
    return result;
}