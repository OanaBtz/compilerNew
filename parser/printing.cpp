#include "./parserTypes.h"

#ifndef AFPCG_PRINTING
#define AFPCG_PRINTING

void printNode(Node* node)
{

	cout << types[node->getType()];
	if(node->getData().length() > 0)
	{
		cout << "       data: " + node->getData();
	}
	cout << endl;
}

string getNodeName(Node* node, vector<Node>* list, int c)
{
	string data = types[node->getType()];
	if(node->getType() == AREA)
	{
		data += "   name: " + list->at(c+1).getData();
	}
	return data;
}

void printList(std::vector<Node> list)
{
	for(int i=0; i< list.size(); i++)
	{
		string p = "";

		p = types[list[i].getType()];

		if(list[i].getData().length() > 0)
		{
			p += "       data: " + list[i].getData();
		}
		
		cout<<i<<" "<<p<<endl;
	}
}

void printTree(Node* currentNode, int indent)
{
	string p;
	for (int i = 0; i < indent; ++i)
	{
		p += "\t";
	}

	p += types[currentNode->getType()];
	if(currentNode->getData().length() > 0)
	{
		p += "       data: " + currentNode->getData();
	}
	cout << p << endl;
	for (int i = 0; i < currentNode->getNodes().size(); ++i)
	{
		printTree(currentNode->getNodes().at(i), indent+1);
	}
}

#endif