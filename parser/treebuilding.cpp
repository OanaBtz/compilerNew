#include "./printing.cpp"
#include <stack> 

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
	int parent = parents.top();;

	for(int i = 1; i < list.size(); i++){
		switch(list[i]->getType()){
			case KP:				index=i;
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
									if(list[i+1]->getData() == "ON" || list[i+1]->getData() == "on"){
										parents.push(i);
									}else if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==RH){
										parents.pop();
									}
									i = connectNextNodesUntilNewLine(parent, i);
									parent = parents.top();	
									break;
			case TA:				cout<<"TA"<<endl;
									if((list[i+1]->getData() == "OFF" || list[i+1]->getData() == "off") && list[parents.top()]->getType()==TA){
										parents.pop();
									}else{
										parents.push(i);
									}
									i = connectNextNodesUntilNewLine(parent, i);
									parent = parents.top();	
									break;
			case AREA:				index=i;
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
			case SC:				cout<<"SC"<<endl;
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
			case NEWLINE:			cout<<"NEWLINE"<<endl;
									i = connectThisNode(parent, i);
									break;
			case STRING:			cout<<"STRING "<<list[i]->getData()<<endl;
									i = connectThisNode(parent, i);
									break;
			case NUMBER:			cout<<"NUMBER "<<list[i]->getData()<<endl;
									i = connectThisNode(parent, i);
									break;
			case VARIABLE:			cout<<"VARIABLE "<<list[i]->getData()<<endl<<parent<<endl;
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			default:				cout<<types[list[i]->getType()]<<endl;
									if(list[i]->getData() != ""){
										cout<<list[i]->getData()<<endl;
									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
		}
	}
}