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
	int last_kp_off = 1, kp_off = 1;
	int last_ar_off = 1, ar_off = 1;
	int last_ta_off = 1, ta_off = 1;
	int last_bx_off = 1, bx_off = 1;
	for(int i = 1; i < list.size(); i++){
		switch(list[i]->getType()){
			case KP:				index=i;
									cout<<"KP"<<endl;	
									cout<<types[list[parents.top()]->getType()]<<endl<<endl;								
									if(list[i+1]->getType() == ON){
										
										if(last_ar_off == 0 ){
											cout<<"kp area off"<<endl;
											parents.pop();
											parent = parents.top();
											last_ar_off = 1;
										}else if(last_ta_off == 0 ){
											cout<<"kp ta off"<<endl;
											parents.pop();
											parent = parents.top();
											last_ta_off = 1;
										}

										if(last_kp_off == 0 ){
											cout<<"last kp off"<<endl;
											parents.pop();
											parent = parents.top();
											last_kp_off=1;
											kp_off = 0;
										}else{
											cout<<"only kp on"<<endl;
											kp_off = 0;
											last_kp_off = 0;
										}
										
										parents.push(index);
										cout<<parents.top()<<endl<<endl;

									}else if(list[i+1]->getType() == OFF && kp_off == 0 ){
										parents.pop();
										last_kp_off = 1;
										kp_off = 1;
									}
									cout<<" parent is: "<<parent<<endl;
									i = connectNextNodesUntilNewLine(parent, i);
									parent = parents.top();
									cout<<" parent is: "<<parent<<endl;
									break;
			case BOX:				index=i;
									cout<<"BOX"<<endl;									
									if(list[i+1]->getType() != OFF && (list[i+1]->getData() != "can" && list[i+1]->getData() != "CAN")){
										if(last_bx_off == 0 && list[i+1]->getType() != NEW && list[i+1]->getType() != SET){
											parents.pop();
											parent = parents.top();
											bx_off = 1;
										}else{
											bx_off = 0;
										}
										parents.push(index);
									}else if(list[i+1]->getType() == OFF  && bx_off==0){
										parents.pop();
										bx_off = 1;
									}else if(list[i+1]->getData() == "can" || list[i+1]->getData() == "CAN"){
										parents.pop();
										bx_off = 1;
									}
									i = connectNextNodesUntilNewLine(parent, i);
									last_bx_off = bx_off;
									parent = parents.top();
									break;
			case RH:				/*cout<<"RH"<<endl;*/
									if(list[i+1]->getType() == ON){
										parents.push(i);
									}else if(list[i+1]->getType() == OFF){
										parents.pop();
									}else if(list[i+1]->getType() == CANCEL || list[i+1]->getType() == EXECUTE){
										parent = parents.top();
										i = connectNextNodesUntilNewLine(parent, i);
										break;
									}
									i = connectNextNodesUntilNewLine(parent, i);
									parent = parents.top();	
									break;
			case TA:				/*cout<<"TA"<<endl;*/
									if(list[i+1]->getType() != OFF){
										parents.push(i);
									}else if(list[i+1]->getType() == OFF){
										parents.pop();
									}
									i = connectNextNodesUntilNewLine(parent, i);
									parent = parents.top();	
									break;
			case AREA:				index=i;
									// cout<<"AREA"<<endl;	
									cout<<types[list[parents.top()]->getType()]<<endl<<endl;								
									if(list[i+2]->getType() == ON){
										if(last_kp_off == 0 ){
											cout<<"area kp off"<<endl;
											parents.pop();
											parent = parents.top();
											last_kp_off = 1;
										}else if(last_ta_off == 0 ){
											cout<<"area ta off"<<endl;
											parents.pop();
											parent = parents.top();
											last_ta_off = 1;
										}

										if(last_ar_off == 0 ){
											cout<<"last ar off"<<endl;
											parents.pop();
											parent = parents.top();
											last_ar_off=1;
											ar_off = 0;
										}else{
											cout<<"only ar on"<<endl;
											ar_off = 0;
											last_ar_off = 0;
										}
										
										parents.push(index);
										cout<<parents.top()<<endl<<endl;

									}else if(list[i+1]->getType() == OFF && ar_off == 0 ){
										parents.pop();
										last_ar_off = 1;
										ar_off = 1;
									}
									cout<<" parent is: "<<parent<<endl;
									i = connectNextNodesUntilNewLine(parent, i);
									parent = parents.top();
									cout<<" parent is: "<<parent<<endl;
									break;
			case CB:				cout<<"CB"<<endl;
									if(last_kp_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_kp_off = 1;
									}else if(last_ta_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_ta_off = 1;
									}else if(last_ar_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_ar_off = 1;
									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case LL:				cout<<"LL"<<endl;
									if(last_kp_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_kp_off = 1;
									}else if(last_ta_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_ta_off = 1;
									}else if(last_ar_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_ar_off = 1;
									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case SC:				cout<<"SC"<<endl;
									if(last_kp_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_kp_off = 1;
									}else if(last_ta_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_ta_off = 1;
									}else if(last_ar_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_ar_off = 1;
									}
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case MC:				cout<<"MC"<<endl;
									if(last_kp_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_kp_off = 1;
									}else if(last_ta_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_ta_off = 1;
									}else if(last_ar_off == 0 ){
										parents.pop();
										parent = parents.top();
										last_ar_off = 1;
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