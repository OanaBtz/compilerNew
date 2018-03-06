#include "./printing.cpp"
#include <stack> 

int connectNextNodesUntilNewLine(int addToIndex, int fromIndex)
{
	list[addToIndex].addNode(&list[fromIndex]);
	int i=1;
	while(list[fromIndex+i].getType() != NEWLINE){
		list[fromIndex].addNode(&list[fromIndex + i]);
		i++;
	}
	list[fromIndex].addNode(&list[fromIndex + i]);
	return fromIndex + i;
}

int connectThisNode(int addToIndex, int fromIndex)
{
	list[addToIndex].addNode(&list[fromIndex]);
	return fromIndex;
}

void startTreeBuilding(std::vector<Node> list)
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
		switch(list[i].getType()){
			case KP:				index=i;									
									if(list[i+1].getType() != OFF){
										if(last_ar_off == 0 ){
											parents.pop();
											parent = parents.top();
											last_ar_off = 1;
										}else if(last_ta_off == 0 ){
											parents.pop();
											parent = parents.top();
											last_ta_off = 1;
										}

										if(last_kp_off == 0 ){
											parents.pop();
											parent = parents.top();
											kp_off = 1;
										}else{
											kp_off = 0;
										}
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
									}else if(list[i+1].getType() == OFF){
										parents.pop();
										kp_off = 1;
									}
									i = connectNextNodesUntilNewLine(parent, i);
									last_kp_off = kp_off;
									parent = parents.top();
									break;
			case BOX:				index=i;									
									if(list[i+1].getType() != OFF){
										if(last_bx_off == 0 ){
											parents.pop();
											parent = parents.top();
											bx_off = 1;
										}else{
											bx_off = 0;
										}
										parents.push(index);
									}else if(list[i+1].getType() == OFF){
										parents.pop();
										bx_off = 1;
									}
									i = connectNextNodesUntilNewLine(parent, i);
									last_bx_off = bx_off;
									parent = parents.top();
									break;
			case RH:				if(list[i+1].getType() != OFF){
										parents.push(i);
									}else if(list[i+1].getType() == OFF){
										parents.pop();
									}
									parent = parents.top();	
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case US:				if(list[i+1].getType() != OFF){
										parents.push(i);
									}else if(list[i+1].getType() == OFF){
										parents.pop();
									}
									parent = parents.top();	
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case CE:				if(list[i+1].getType() != OFF){
										parents.push(i);
									}else if(list[i+1].getType() == OFF){
										parents.pop();
									}
									parent = parents.top();
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case TA:				if(list[i+1].getType() != OFF){
										parents.push(i);
									}else if(list[i+1].getType() == OFF){
										parents.pop();
									}
									parent = parents.top();	
									i = connectNextNodesUntilNewLine(parent, i);
									break;
			case AREA:				index=i;									
									if(list[i+1].getType() != OFF){
										if(last_kp_off == 0 ){
											parents.pop();
											parent = parents.top();
											last_kp_off = 1;
										}else if(last_ta_off == 0 ){
											parents.pop();
											parent = parents.top();
											last_ta_off = 1;
										}

										if(last_ar_off == 0 ){
											parents.pop();
											parent = parents.top();
											ar_off = 1;
										}else{
											ar_off = 0;
										}
										parents.push(index);
										cout<<parents.top()<<endl<<endl;
									}else if(list[i+1].getType() == OFF){
										parents.pop();
										ar_off = 1;
									}
									i = connectNextNodesUntilNewLine(parent, i);
									last_ar_off = ar_off;
									parent = parents.top();
									break;
			case CB:				if(last_kp_off == 0 ){
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
			case LL:				if(last_kp_off == 0 ){
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
			case SC:				if(last_kp_off == 0 ){
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
			case MC:				if(last_kp_off == 0 ){
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
			case NEWLINE:			i = connectThisNode(parent, i);
									break;
			case STRING:			i = connectThisNode(parent, i);
									break;
			case NUMBER:			i = connectThisNode(parent, i);
									break;
			default:				i = connectNextNodesUntilNewLine(parent, i);
									break;
		}
	}
}