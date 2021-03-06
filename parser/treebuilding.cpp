#include "./printing.cpp"
#include <stack> 
Node* pNode;
Node* thenNode;
int connectNextNodesUntilNewLine(int addToIndex, int fromIndex)
{
	list[addToIndex]->addNode(list[fromIndex]);
	int i=1;
	while(list[fromIndex+i]->getType() != NEWLINE){
		list[fromIndex]->addNode(list[fromIndex + i]);
		i++;
	}
	list[fromIndex]->addNode(list[fromIndex + i]);
	return fromIndex + i;
}

int connectNextNodesWithoutSpace(int addToIndex, int fromIndex)
{
	list[addToIndex]->addNode(list[fromIndex]);
	int i=1;
	while(list[fromIndex+i]->getType() != NEWLINE ){
		if(list[fromIndex+i]->getType() != SPACE )
			list[fromIndex]->addNode(list[fromIndex + i]);
		i++;
	}
	list[fromIndex]->addNode(list[fromIndex + i]);
	return fromIndex + i;
}

int connectNextNodestoP(int &parent, Node* p, int fromIndex, int &ceNr, int &newLineNr, stack<int> &parents)
{
	list[parent]->addNode(p);
	int i=0;
	int s=1;
	int space = 0;
	while( fromIndex<list.size() && (list[fromIndex]->getType() == NEWLINE || list[fromIndex]->getType() == MATHEX || list[fromIndex]->getType() == SPACE || list[fromIndex]->getType() == NUMBER || list[fromIndex]->getType() == SIZE || list[fromIndex]->getType() == STRING || list[fromIndex]->getType() == VARIABLE )){
		
		
		if(list[fromIndex]->getType() != NEWLINE){
			p->addNode(list[fromIndex]);
		}
		else{
			newLineNr++;
		}
		if(ceNr == newLineNr){
			cout<<"ce problem";
			parents.pop();
			parent = parents.top();
			p->addNode(list[fromIndex]);
			
			fromIndex++;
			if(fromIndex<list.size()) 
				if(list[fromIndex]->getType() == NEWLINE || list[fromIndex]->getType() == MATHEX || list[fromIndex]->getType() == NUMBER || list[fromIndex]->getType() == SIZE || list[fromIndex]->getType() == STRING || list[fromIndex]->getType() == VARIABLE)
				{
					
					pNode = new Node(PARAGRAPH, "");
					ceNr = -1;
					i=connectNextNodestoP(parent, pNode, fromIndex, ceNr, newLineNr, parents);
					return i;
				}
			return fromIndex;
		}
		fromIndex++;
	}
	p->addNode(list[fromIndex -1]);
	
	newLineNr++;
	if(ceNr == newLineNr){
		parents.pop();
		parent = parents.top();
		p->addNode(list[fromIndex]);
		fromIndex++;	
		if(fromIndex<list.size()) 
			if(list[fromIndex]->getType() == NEWLINE || list[fromIndex]->getType() == MATHEX || list[fromIndex]->getType() == NUMBER || list[fromIndex]->getType() == SIZE || list[fromIndex]->getType() == STRING || list[fromIndex]->getType() == VARIABLE )
			{
				pNode = new Node(PARAGRAPH, "");
				ceNr = -1;
				i=connectNextNodestoP(parent, pNode, fromIndex, ceNr, newLineNr, parents);
				return i;
			}
		return fromIndex;
	}
	return fromIndex -1;
}

int connectNextNodesToThenElse(int &parent, int fromIndex, int &ceNr, int &newLineNr, stack<int> &parents)
{
	
	int i=1;
	int j = 0;
	list[parent]->addNode(list[fromIndex]);

	
	while(list[fromIndex+i]->getType() != NEWLINE){
		// TP, SE, IN, LL, SK, PA, QU, US, HR, IS, SP, PN, QU, SP, GO, MG, RC, VR
		if(list[fromIndex+i]->getType() == TP || list[fromIndex+i]->getType() == AREADEFINITION || list[fromIndex+i]->getType() == IM || list[fromIndex+i]->getType() == FO || list[fromIndex+i]->getType() == NV || list[fromIndex+i]->getType() == IF || list[fromIndex+i]->getType() == SU || list[fromIndex+i]->getType() == BOX || list[fromIndex+i]->getType() == SE || list[fromIndex+i]->getType() == IN || list[fromIndex+i]->getType() == LL || list[fromIndex+i]->getType() == SK ||  list[fromIndex+i]->getType() == PA || list[fromIndex+i]->getType() == QU ||  list[fromIndex+i]->getType() == HR || list[fromIndex+i]->getType() == IS || list[fromIndex+i]->getType() == SP || list[fromIndex+i]->getType() == PN || list[fromIndex+i]->getType() == QU || list[fromIndex+i]->getType() == RC || list[fromIndex+i]->getType() == MG || list[fromIndex+i]->getType() == GO || list[fromIndex+i]->getType() == SP || list[fromIndex+i]->getType() == VR)
		{
			list[fromIndex]->addNode(list[fromIndex+i]);
			int j=i+1;
			while(list[fromIndex+j]->getType() != NEWLINE && list[fromIndex+i]->getType() != IF && list[fromIndex+i]->getType() != ELSE && list[fromIndex+i]->getType() != OR && list[fromIndex+i]->getType() != AND && list[fromIndex+i]->getType() != THEN){
				list[fromIndex+i]->addNode(list[fromIndex + j]);
				j++;
			}
			list[fromIndex+i]->addNode(list[fromIndex+j]);
			i = j-1;
		}else if(list[fromIndex+i]->getType() == CT || list[fromIndex+i]->getType() == CE || list[fromIndex+i]->getType() == US){
			pNode = new Node(PARAGRAPH, "");
			parent = fromIndex;
			parents.push(parent);
			list[parent]->addNode(list[fromIndex+i]);
			parent = fromIndex+i;
			parents.push(parent);
			cout<<endl<<endl<<endl<<types[list[parent]->getType()]<<"     "<<types[list[fromIndex+i+1]->getType()]<<endl<<endl<<endl;
			i=connectNextNodestoP(parent, pNode, fromIndex+i+1, ceNr, newLineNr, parents);
			list[parent]->addNode(list[i]);
			parents.pop();
			parent = parents.top();
			list[parent]->addNode(list[i]);
			parents.pop();
			parent = parents.top();
			return i;	
		}else if(list[fromIndex+i]->getType() == MATHEX || list[fromIndex+i]->getType() == NUMBER || list[fromIndex+i]->getType() == SIZE || list[fromIndex+i]->getType() == STRING || list[fromIndex+i]->getType() == VARIABLE){
			pNode = new Node(PARAGRAPH, "");
			parent = fromIndex;
			parents.push(parent);
			i=connectNextNodestoP(parent, pNode, fromIndex+i, ceNr, newLineNr, parents);
			list[parent]->addNode(list[i]);
			parents.pop();
			parent = parents.top();
			return i;	
		}else
			list[fromIndex]->addNode(list[fromIndex + i]);
		i++;
	}
	list[fromIndex]->addNode(list[fromIndex + i]);
	return fromIndex + i;
}

int connectNextNodesToIf(int &parent, int fromIndex, int &ceNr, int &newLineNr, stack<int> &parents)
{
	
	int i=1;
	list[parent]->addNode(list[fromIndex]);
	int flag = 0;
	
	while(list[fromIndex+i]->getType() != NEWLINE){
		// TP, SE, IN, LL, SK, PA, QU, US, HR, IS, SP, PN, QU, SP, GO, MG, RC, 
		if(list[fromIndex+i]->getType() == SE || list[fromIndex+i]->getType() == IM || list[fromIndex+i]->getType() == FO || list[fromIndex+i]->getType() == NV || list[fromIndex+i]->getType() == IF || list[fromIndex+i]->getType() == SU || list[fromIndex+i]->getType() == BOX || list[fromIndex+i]->getType() == SE || list[fromIndex+i]->getType() == IN || list[fromIndex+i]->getType() == LL || list[fromIndex+i]->getType() == SK ||  list[fromIndex+i]->getType() == PA || list[fromIndex+i]->getType() == QU || list[fromIndex+i]->getType() == HR || list[fromIndex+i]->getType() == IS || list[fromIndex+i]->getType() == SP || list[fromIndex+i]->getType() == PN || list[fromIndex+i]->getType() == QU || list[fromIndex+i]->getType() == RC || list[fromIndex+i]->getType() == MG || list[fromIndex+i]->getType() == GO || list[fromIndex+i]->getType() == SP)
		{
			thenNode = new Node(THEN, "");
			list[fromIndex]->addNode(thenNode);

			thenNode->addNode(list[fromIndex+i]);
			while(list[fromIndex+i]->getType() != NEWLINE){
			{
				int j=i+1;
				while(list[fromIndex+j]->getType() != NEWLINE && list[fromIndex+i]->getType() != IF && list[fromIndex+i]->getType() != ELSE && list[fromIndex+i]->getType() != OR && list[fromIndex+i]->getType() != AND && list[fromIndex+i]->getType() != THEN){
					list[fromIndex+i]->addNode(list[fromIndex + j]);
					j++;
				}
				list[fromIndex+i]->addNode(list[fromIndex+j]);
				i = j-1;
			}
			i++;
			}
		}else if(list[fromIndex+i]->getType() == CT || list[fromIndex+i]->getType() == CE || list[fromIndex+i]->getType() == US){
			pNode = new Node(PARAGRAPH, "");
			parent = fromIndex;
			parents.push(parent);
			list[parent]->addNode(list[fromIndex+i]);
			parent = fromIndex+i;
			parents.push(parent);
			cout<<endl<<endl<<endl<<types[list[parent]->getType()]<<"     "<<types[list[fromIndex+i+1]->getType()]<<endl<<endl<<endl;
			i=connectNextNodestoP(parent, pNode, fromIndex+i+1, ceNr, newLineNr, parents);
			list[parent]->addNode(list[i]);
			parents.pop();
			parent = parents.top();
			list[parent]->addNode(list[i]);
			parents.pop();
			parent = parents.top();	
			return i;	
		}else{
			list[fromIndex]->addNode(list[fromIndex + i]);
			i++;
		}
	}
	list[fromIndex]->addNode(list[fromIndex + i]);
	return fromIndex + i;
}



int connectNextNodesFromLines(int addToIndex, int fromIndex){
	
	list[addToIndex]->addNode(list[fromIndex]);
	int Nr = stoi(list[fromIndex+1]->getData());
	int i=3;
	int j=0;
	while(j != Nr){
		list[fromIndex]->addNode(list[fromIndex + i]);
		i++;
		if(list[fromIndex + i]->getType()==NEWLINE)
			j++;
	}
	return fromIndex + i;
}


int connectThisNode(int addToIndex, int fromIndex)
{
	list[addToIndex]->addNode(list[fromIndex]);
	return fromIndex;
}

void startTreeBuilding(std::vector<Node*> list)
{
	stack<int> parents;
	parents.push(0);
	int index;
	int parent = parents.top();
	int newLineNr = 0;
	int ceNr = -1;
	int liNr = -1;
	int upNr = -1;
	int ucNr = -1;
	int riNr = -1;

	for(int i = 1; i < list.size(); i++){
		switch(list[i]->getType()){
			case KP:				index=i;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									cout<<"KP"<<endl;	
									cout<<types[list[parents.top()]->getType()]<<endl<<endl;								
									if(list[i+1]->getData() == "ON" || list[i+1]->getData() == "on"){
										
										if(list[parents.top()]->getType()==AREA){
											cout<<"kp area off"<<endl;
											parents.pop();
											parent = parents.top();

										}else if(list[parents.top()]->getType()==TA ){
											cout<<"kp ta off"<<endl;
											parents.pop();
											parent = parents.top();
								
										}

										if(list[parents.top()]->getType()==KP){
											cout<<"last kp off"<<endl;
											parents.pop();
											parent = parents.top();
											
										}else{
											cout<<"only kp on"<<endl;
											
										}
										
										parents.push(index);
										cout<<parents.top()<<endl<<endl;

									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==KP ){
										parents.pop();
										
									}
									cout<<" parent is: "<<parent<<endl;
									i = connectNextNodesUntilNewLine(parent, i);
									parent = parents.top();
									cout<<" parent is: "<<parent<<endl;
									break;
			case BOX:				index=i;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									cout<<"BOX"<<endl;									
									if((list[i+1]->getData() != "OFF" && list[i+1]->getData() != "off") && (list[i+1]->getData() != "can" && list[i+1]->getData() != "CAN")){
										if(list[parents.top()]->getType()==BOX && list[i+1]->getType() != NEW && list[i+1]->getType() != SET){
											parents.pop();
											parent = parents.top();

										}
										parents.push(index);
									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==BOX){
										parents.pop();
									}else if((list[i+1]->getData() == "can" || list[i+1]->getData() == "CAN") && list[parents.top()]->getType()==BOX ){
										parents.pop();
									}
									i = connectNextNodesUntilNewLine(parent, i);
									parent = parents.top();
									break;
			case RH:				/*cout<<"RH"<<endl;*/
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(list[i+1]->getData() == "ON" || list[i+1]->getData() == "on"){
										parents.push(i);
									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==RH){
										parents.pop();
									}
									i = connectNextNodesUntilNewLine(parent, i);
									parent = parents.top();	
									break;
			case AREA:				index=i;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									cout<<"AREA"<<endl;	
									cout<<"the area parent is: "<<types[list[parents.top()]->getType()]<<endl<<endl;								
									if(list[i+2]->getData() == "ON" || list[i+2]->getData() == "on"){
										if(list[parents.top()]->getType()==KP ){
											cout<<"area kp off"<<endl;
											parents.pop();
											parent = parents.top();
											
										}else if(list[parents.top()]->getType()==TA ){
											cout<<"area ta off"<<endl;
											parents.pop();
											parent = parents.top();
											
										}

										if(list[parents.top()]->getType()==AREA ){
											cout<<"last ar off"<<endl;
											parents.pop();
											parent = parents.top();
										}else{
											cout<<"only ar on"<<endl;
										}
										
										parents.push(index);
										cout<<parents.top()<<endl<<endl;

									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==AREA ){
										parents.pop();
									}
									cout<<" 	parent is: "<<parent<<endl;
															
									
									i = connectNextNodesUntilNewLine(parent, i);
									parent = parents.top();
									cout<<" 	parent is: "<<parent<<endl;
									break;
			case CB:				cout<<"CB"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(list[parents.top()]->getType()==KP ){
										parents.pop();
										parent = parents.top();

									}else if(list[parents.top()]->getType()==TA ){
										parents.pop();
										parent = parents.top();

									}else if(list[parents.top()]->getType()==AREA){
										parents.pop();
										parent = parents.top();

									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case LL:				cout<<"LL"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(list[parents.top()]->getType()==KP ){
										parents.pop();
										parent = parents.top();

									}else if(list[parents.top()]->getType()==TA ){
										parents.pop();
										parent = parents.top();

									}else if(list[parents.top()]->getType()==AREA){
										parents.pop();
										parent = parents.top();

									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case CE:				index=i;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									cout<<"CE"<<endl;	
									cout<<"the CE parent is: "<<types[list[parents.top()]->getType()]<<endl<<endl;	
									pNode = new Node(PARAGRAPH, "");
									if((list[i+1]->getData() == "ON" || list[i+1]->getData() == "on") && list[i+2]->getType() == NEWLINE){
									
										if(list[parents.top()]->getType()==CE ){
											parents.pop();
											parent = parents.top();
										}
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
										list[parent]->addNode(list[i]);
										parents.push(i);
										parent = parents.top();
										pNode = new Node(PARAGRAPH, "");
										i=connectNextNodestoP(parent, pNode, i+1, ceNr, newLineNr, parents);
										list[parent]->addNode(list[i]);
										parents.pop();
										parent = parents.top();							
										
										parent = parents.top();

									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==CE && list[i+2]->getType()==NEWLINE ){
										parents.pop();
										list[parent]->addNode(list[i]);
										parents.push(i);
										parent = parents.top();
										pNode = new Node(PARAGRAPH, "");
										i=connectNextNodestoP(parent, pNode, i+1, ceNr, newLineNr, parents);
										list[parent]->addNode(list[i]);
										parents.pop();
										parent = parents.top();		
										parent = parents.top();
									}else if(list[i+1]->getType()==NUMBER && list[i+2]->getType() == NEWLINE){
										//i = connectNextNodesFromLines(parent,i);
										ceNr = stoi(list[i+1]->getData());
										newLineNr = 0;
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
										list[parent]->addNode(list[i]);
										parents.push(i);
										parent = parents.top();
										pNode = new Node(PARAGRAPH, "");
										i=connectNextNodestoP(parent, pNode, i+1, ceNr, newLineNr, parents);
										list[parent]->addNode(list[i]);
										parents.pop();
										parent = parents.top();
										parent = parents.top();

									}else{
										list[parent]->addNode(list[i]);
										parents.push(i);
										parent = parents.top();
										pNode = new Node(PARAGRAPH, "");
										i=connectNextNodestoP(parent, pNode, i+1, ceNr, newLineNr, parents);
										list[parent]->addNode(list[i]);
										parents.pop();
										parent = parents.top();

									}
									break;
			case UC:				index=i;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									cout<<"UC"<<endl;	
									cout<<"the UC parent is: "<<types[list[parents.top()]->getType()]<<endl<<endl;								
									if((list[i+1]->getData() == "ON" || list[i+1]->getData() == "on") && list[i+2]->getType() == NEWLINE){
									
										if(list[parents.top()]->getType()==UC ){
											parents.pop();
											parent = parents.top();
										}
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();

									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==UC && list[i+2]->getType()==NEWLINE ){
										parents.pop();
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();
									}else if(list[i+1]->getType()==NUMBER && list[i+2]->getType() == NEWLINE){
										//i = connectNextNodesFromLines(parent,i);
										ucNr = stoi(list[i+1]->getData());
										newLineNr = 0;
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();

									}else
										i = connectNextNodesUntilNewLine(parent, i);
									
									break;
			case LI:				index=i;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									cout<<"LI"<<endl;	
									cout<<"the LI parent is: "<<types[list[parents.top()]->getType()]<<endl<<endl;								
									if((list[i+1]->getData() == "ON" || list[i+1]->getData() == "on") && list[i+2]->getType() == NEWLINE){
									
										if(list[parents.top()]->getType()==LI ){
											parents.pop();
											parent = parents.top();
										}
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();

									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==LI && list[i+2]->getType()==NEWLINE ){
										parents.pop();
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();
									}else if(list[i+1]->getType()==NUMBER && list[i+2]->getType() == NEWLINE){
										//i = connectNextNodesFromLines(parent,i);
										liNr = stoi(list[i+1]->getData());
										newLineNr = 0;
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();

									}else
										i = connectNextNodesUntilNewLine(parent, i);
									
									break;
			case RI:				index=i;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									cout<<"RI"<<endl;	
									cout<<"the RI parent is: "<<types[list[parents.top()]->getType()]<<endl<<endl;								
									if((list[i+1]->getData() == "ON" || list[i+1]->getData() == "on") && list[i+2]->getType() == NEWLINE){
									
										if(list[parents.top()]->getType()==RI ){
											parents.pop();
											parent = parents.top();
										}
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();

									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==RI && list[i+2]->getType()==NEWLINE ){
										parents.pop();
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();
									}else if(list[i+1]->getType()==NUMBER && list[i+2]->getType() == NEWLINE){
										//i = connectNextNodesFromLines(parent,i);
										riNr = stoi(list[i+1]->getData());
										newLineNr = 0;
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();

									}else
										i = connectNextNodesUntilNewLine(parent, i);
									
									break;
			case UP:				index=i;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									cout<<"UP"<<endl;	
									cout<<"the UP parent is: "<<types[list[parents.top()]->getType()]<<endl<<endl;								
									if((list[i+1]->getData() == "ON" || list[i+1]->getData() == "on") && list[i+2]->getType() == NEWLINE){
									
										if(list[parents.top()]->getType()==UP ){
											parents.pop();
											parent = parents.top();
										}
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();

									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==UP && list[i+2]->getType()==NEWLINE ){
										parents.pop();
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();
									}else if(list[i+1]->getType()==NUMBER && list[i+2]->getType() == NEWLINE){
										//i = connectNextNodesFromLines(parent,i);
										upNr = stoi(list[i+1]->getData());
										newLineNr = 0;
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();

									}else
										i = connectNextNodesUntilNewLine(parent, i);
									
									break;
			case SC:				cout<<"SC"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(list[parents.top()]->getType()==KP ){
										parents.pop();
										parent = parents.top();

									}else if(list[parents.top()]->getType()==TA ){
										parents.pop();
										parent = parents.top();

									}else if(list[parents.top()]->getType()==AREA){
										parents.pop();
										parent = parents.top();

									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case MC:				cout<<"MC"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(list[parents.top()]->getType()==KP ){
										parents.pop();
										parent = parents.top();

									}else if(list[parents.top()]->getType()==TA ){
										parents.pop();
										parent = parents.top();

									}else if(list[parents.top()]->getType()==AREA){
										parents.pop();
										parent = parents.top();

									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case PA:				cout<<"PA"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(list[parents.top()]->getType()==KP ){
										parents.pop();
										parent = parents.top();
										
									}else if(list[parents.top()]->getType()==AREA){
										parents.pop();
										parent = parents.top();

									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case PL:				cout<<"PL"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(list[parents.top()]->getType()==KP ){
										parents.pop();
										parent = parents.top();
										
									}else if(list[parents.top()]->getType()==AREA){
										parents.pop();
										parent = parents.top();

									}else if(list[parents.top()]->getType()==TA ){
										parents.pop();
										parent = parents.top();

									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case CC:				cout<<"CC"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(list[parents.top()]->getType()==KP ){
										parents.pop();
										parent = parents.top();
										
									}else if(list[parents.top()]->getType()==AREA){
										parents.pop();
										parent = parents.top();

									}else if(list[parents.top()]->getType()==TA ){
										parents.pop();
										parent = parents.top();

									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case NEWLINE:			cout<<"NEWLINE"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									i = connectThisNode(parent, i);
									break;
			case VS:				cout<<"VS"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									i = connectThisNode(parent, i);
									break;
			case NUMBER:			cout<<"NUMBER "<<list[i]->getData()<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									pNode = new Node(PARAGRAPH, "");
									i=connectNextNodestoP(parent, pNode, i, ceNr, newLineNr, parents);
									break;
			case VARIABLE:			cout<<"VARIABLE "<<list[i]->getData()<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									pNode = new Node(PARAGRAPH, "");
									i=connectNextNodestoP(parent, pNode, i, ceNr, newLineNr, parents);
									break;
			case STRING:			cout<<"STRING "<<list[i]->getData()<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									pNode = new Node(PARAGRAPH, "");
									i=connectNextNodestoP(parent, pNode, i, ceNr, newLineNr, parents);
									break;
			case CT:			cout<<"CT "<<list[i]->getData()<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									list[parent]->addNode(list[i]);
									parents.push(i);
									parent = parents.top();
									pNode = new Node(PARAGRAPH, "");
									i=connectNextNodestoP(parent, pNode, i+1, ceNr, newLineNr, parents);

									parents.pop();
									parent = parents.top();
									break;
			case US:				cout<<"US "<<list[i]->getData()<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									list[parent]->addNode(list[i]);
									parents.push(i);
									parent = parents.top();
									pNode = new Node(PARAGRAPH, "");
									i=connectNextNodestoP(parent, pNode, i+1, ceNr, newLineNr, parents);

									parents.pop();
									parent = parents.top();
									break;
			case THEN:				cout<<"THEN"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									i = connectNextNodesToThenElse(parent, i, ceNr, newLineNr, parents);
									break;
			case ELSE:				cout<<"ELSE"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									i = connectNextNodesToThenElse(parent, i, ceNr, newLineNr, parents);
									break;
			case IF:				cout<<"IF"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									i = connectNextNodesToIf(parent, i, ceNr, newLineNr, parents);
									break;
			case SPACE:				if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									i = connectThisNode(parent, i);
									break;
			case AREADEFINITION:	cout<<"AREADEFINITION"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									i = connectNextNodesWithoutSpace(parent, i);
									break;
			default:				cout<<types[list[i]->getType()]<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == liNr){
										liNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == upNr){
										upNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == ucNr){
										ucNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(newLineNr == riNr){
										riNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if(list[i]->getData() != ""){
										cout<<list[i]->getData()<<endl;
									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
		}
	}
}