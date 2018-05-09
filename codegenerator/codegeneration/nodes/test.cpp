#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;

int getposition(const char *array, size_t size, char c)
{
     const char* end = array + size;
     const char* match = std::find(array, end, c);
     return (end == match)? -1 : (match-array);
}

void genetareGuid(string last){

    char array[1000] = {'a', 'b', 'c', 'd', 'e', 'f','g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    if(last == "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"){
        cout<<"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"<<endl;
    }else{
        string guid = "";
        char flag[1000];
        char newGuid[1000];
        // int j=-5;
	    strcpy(flag, last.c_str() );

        // for(int i=strlen(flag)-1; i>=0; i--){
        //     if(flag[i]!=array[strlen(array)-1]){
        //         newGuid[i] = array[getposition(array, strlen(array), flag[i])+1];
        //         break;
        //     }else{
        //         j=i;
        //         newGuid[i-1] = array[getposition(array, strlen(array), flag[i-1])+1];
        //     }
        //     newGuid[i]=flag[i];
        // }

        // if(j<strlen(flag)-1){
        //     for(int i=strlen(flag)-1; i>=j; i--){
        //         newGuid[i] = 'a';
        //     }
        // }

        guid = newGuid;
        cout<<guid<<endl;
    }
}

int main(){

    genetareGuid("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaba");

}