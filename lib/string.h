#ifndef STRING_H
#define STRING_H
#include <stdio.h>

int mstrlen(const char* str){
	
		int len=0,i=0;
	for(; str[i]!='\0'; i++)
	{	
		len++;
		
	}
	
	return len;	
};

int strcmp(const char* str1,const char* str2){
	
		int size = mstrlen(str1);

	int count=0;
	
	while(*str1++ !='\0' && *str2++ !='\0')
	{
		
	if(*str1 == *str2)
		count++;
			
	}


return (count==size) ? 0 : 1 ;

};

char* strcpy(char* target, char* source){
	
	while(*source != '\0'){
			
		*target++ = *source++;
		
	}
	
	return target;
	
}

char* strchr(char* str, int c){
	
	 char *address =NULL;
	if(c=='\0') return NULL;
	
	while(*str++ != '\0'){
		
		if(*str == c){
			address = str;
			break;
		}
	}
	
	return address;
	

	
}

char* strcat(char* target, char* insertion){
	
	
	int i=0,count=0;

	while(target[i++] != '\0'){
		count++;
	}

	while(*insertion != '\0'){
			
	    target[count++] = *insertion++;
			
	}
	
	return target;

}

char* strrchr(char* str, int c){
	
	char *address = NULL;
	
	if(c == '\0') return NULL;
	
	while( *str++ != '\0'){
		
		if(*str == c){
		address = str;
		}
	}
	
	return address;

}

char* strncat(char* target, char* insertion, size_t n){
	
	int i = 0;
	int count =0;
	while(target[i++] != '\0'){
 		count++;		
	}
	
	i=0;
	while(i++ < n){
		
		target[count++] = *insertion++;
		
	}
	
	return target;

}

char* strncpy(char* target,char* source, size_t n){
	
	          int i, count=0;
	          
	    for(i=0; target[i] != '\0'; i++){
	    	
	    	count++;
		}
	          			  	
		for(i=0; i < n; i++){
			
			target[count++] = *source++;
		}
	return target;
}

int strncmp(const char* str1,const char* str2, size_t n ){
	
int val=0;
	
	if (*str1+n > *str2+n) {
		
		val = 1;


	}

	else if (*str1+n < *str2+n) {

		val = -1;
	
	}
	else {
	
		val = 0;
		
	}

	return val;
}


#endif

















