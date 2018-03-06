char name[1000] = "";
char size[1000] = "";
char var[1000] = "";
char number[1000] = "";

void styleName(char style[1000]){
	strcpy(name, "");
	int j=0;
	char returned[1000];
	for(int i=1;style[i]>='A'&&style[i]<='Z';i++){
		returned[j]=style[i];
		j++;
	}
	returned[j]='\0';

	strcpy(name, returned);
	// printf("%s\n", name);
}
void styleSize(char style[1000]){
	strcpy(size, "");
	int j=0;
	char returned[1000];
	for(int i=0; i<strlen(style); i++){
		if(style[i]>='0' && style[i]<='9'){
			returned[j]=style[i];
			j++;
		}
	}
	returned[j]='\0';

	strcpy(size, returned);
	// printf("%s\n", size);
}

void numberFct(char nr[1000]){
	strcpy(size, "");
	int j=0;
	char returned[1000];
	for(int i=0; i<strlen(nr); i++){
		if((nr[i]>='0' && nr[i]<='9')|| nr[i]=='-'|| nr[i]=='.'){
			returned[j]=nr[i];
			j++;
		}
	}
	returned[j]='\0';

	strcpy(number, returned);
	// printf("%s\n", number);
}

void varName(char variable[1000]){
	strcpy(var, "");
	int j=0;
	char returned[1000];
	for(int i=1; i< strlen(variable);i++){
		returned[j]=variable[i];
		j++;
	}
	returned[j]='\0';

	strcpy(var, returned);
	// printf("%s\n", name);
}