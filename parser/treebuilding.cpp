#include "./printing.cpp"
#include <stack> 
Node* pNode;
int connectNextNodesUntilNewLine(int addToIndex, int fromIndex)
{
	list[addToIndex]->addNode(list[fromIndex]);
	int i=1;
	while(list[fromIndex+i]->getType() != NEWLINE){
		if(list[fromIndex+i]->getType() == TP || list[fromIndex+i]->getType() == IF || list[fromIndex+i]->getType() == SU || list[fromIndex+i]->getType() == BOX || list[fromIndex+i]->getType() == SE || list[fromIndex+i]->getType() == IN || list[fromIndex+i]->getType() == LL || list[fromIndex+i]->getType() == SK ||  list[fromIndex+i]->getType() == PA || list[fromIndex+i]->getType() == QU || list[fromIndex+i]->getType() == US || list[fromIndex+i]->getType() == HR || list[fromIndex+i]->getType() == IS || list[fromIndex+i]->getType() == SP || list[fromIndex+i]->getType() == QQ || list[fromIndex+i]->getType() == PN || list[fromIndex+i]->getType() == QU || list[fromIndex+i]->getType() == RC || list[fromIndex+i]->getType() == MG || list[fromIndex+i]->getType() == GO || list[fromIndex+i]->getType() == SP)
		{
			i=connectNextNodesUntilNewLine(fromIndex, fromIndex+i);
		}
		else{
			list[fromIndex]->addNode(list[fromIndex + i]);
		}
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


int connectNextNodesToThenElse(int addToIndex, int fromIndex)
{
	
	int i=1;
	list[addToIndex]->addNode(list[fromIndex]);

	
	while(list[fromIndex+i]->getType() != NEWLINE){
		// TP, SE, IN, LL, SK, PA, QU, US, HR, IS, SP, QQ, PN, QU, SP, GO, MG, RC, 
		if(list[fromIndex+i]->getType() == TP || list[fromIndex+i]->getType() == IF || list[fromIndex+i]->getType() == SU || list[fromIndex+i]->getType() == BOX || list[fromIndex+i]->getType() == SE || list[fromIndex+i]->getType() == IN || list[fromIndex+i]->getType() == LL || list[fromIndex+i]->getType() == SK ||  list[fromIndex+i]->getType() == PA || list[fromIndex+i]->getType() == QU || list[fromIndex+i]->getType() == US || list[fromIndex+i]->getType() == HR || list[fromIndex+i]->getType() == IS || list[fromIndex+i]->getType() == SP || list[fromIndex+i]->getType() == QQ || list[fromIndex+i]->getType() == PN || list[fromIndex+i]->getType() == QU || list[fromIndex+i]->getType() == RC || list[fromIndex+i]->getType() == MG || list[fromIndex+i]->getType() == GO || list[fromIndex+i]->getType() == SP)
		{
			i=connectNextNodesUntilNewLine(fromIndex, fromIndex+i);
		}
		else{
			list[fromIndex]->addNode(list[fromIndex + i]);
		}
		i++;
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

int connectNextNodestoP(int &parent, Node* p, int fromIndex, int &ceNr, int &newLineNr, stack<int> &parents)
{
	list[parent]->addNode(p);
	int i=0;
	int s=1;
	int space = 0;

	while( fromIndex<list.size() && (list[fromIndex]->getType() == NEWLINE || list[fromIndex]->getType() == SPACE || list[fromIndex]->getType() == NUMBER || list[fromIndex]->getType() == SIZE || list[fromIndex]->getType() == STRING || list[fromIndex]->getType() == VARIABLE || list[fromIndex]->getType() == LINEBREAK)){
		
		
		if(list[fromIndex]->getType() != NEWLINE){
			p->addNode(list[fromIndex]);
		}
		else{
			newLineNr++;
		}
		if(ceNr == newLineNr){
			parents.pop();
			parent = parents.top();
			p->addNode(list[fromIndex]);
			
			fromIndex++;
			if(fromIndex<list.size()) 
				if(list[fromIndex]->getType() == NEWLINE || list[fromIndex]->getType() == NUMBER || list[fromIndex]->getType() == SIZE || list[fromIndex]->getType() == STRING || list[fromIndex]->getType() == VARIABLE || list[fromIndex]->getType() == LINEBREAK)
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
				if(list[fromIndex]->getType() == NEWLINE || list[fromIndex]->getType() == NUMBER || list[fromIndex]->getType() == SIZE || list[fromIndex]->getType() == STRING || list[fromIndex]->getType() == VARIABLE || list[fromIndex]->getType() == LINEBREAK)
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

	for(int i = 1; i < list.size(); i++){
		switch(list[i]->getType()){
			case KP:				index=i;
									if(newLineNr == ceNr){
										ceNr = -1;
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
									if(list[i+1]->getData() == "ON" || list[i+1]->getData() == "on"){
										parents.push(i);
									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==RH){
										parents.pop();
									}
									i = connectNextNodesUntilNewLine(parent, i);
									parent = parents.top();	
									break;
			case TA:				cout<<"TA"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==TA){
										parents.pop();
									}else{
										parents.push(i);
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
									cout<<"CE"<<endl;	
									cout<<"the CE parent is: "<<types[list[parents.top()]->getType()]<<endl<<endl;								
									if((list[i+1]->getData() == "ON" || list[i+1]->getData() == "on") && list[i+2]->getType() == NEWLINE){
									
										if(list[parents.top()]->getType()==CE ){
											parents.pop();
											parent = parents.top();
										}
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();

									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==CE && list[i+2]->getType()==NEWLINE ){
										parents.pop();
										i = connectNextNodesUntilNewLine(parent, i);
										parent = parents.top();
									}else if(list[i+1]->getType()==NUMBER && list[i+2]->getType() == NEWLINE){
										//i = connectNextNodesFromLines(parent,i);
										ceNr = stoi(list[i+1]->getData());
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
									i = connectThisNode(parent, i);
									break;
			case NUMBER:			cout<<"NUMBER "<<list[i]->getData()<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
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
									pNode = new Node(PARAGRAPH, "");
									i=connectNextNodestoP(parent, pNode, i, ceNr, newLineNr, parents);
									break;
			case STRING:			cout<<"STRING "<<list[i]->getData()<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									pNode = new Node(PARAGRAPH, "");
									i=connectNextNodestoP(parent, pNode, i, ceNr, newLineNr, parents);
									break;
			case THEN:				cout<<"THEN"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									i = connectNextNodesToThenElse(parent, i);
									break;
			case ELSE:				cout<<"ELSE"<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
										parents.pop();
										parent = parents.top();
									}
									i = connectNextNodesToThenElse(parent, i);
									break;
			case SPACE:				if(newLineNr == ceNr){
										ceNr = -1;
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
									i = connectNextNodesWithoutSpace(parent, i);
									break;
			default:				cout<<types[list[i]->getType()]<<endl;
									if(newLineNr == ceNr){
										ceNr = -1;
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