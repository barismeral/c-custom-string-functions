#include <stdio.h>
#include "string.h"

int main(){
	///////////////////////
	
	/*
	// return string size 
	char array[] = "Baris Meral";	
	printf("%d",strlen(array));
	//output 11
	*/
	
	////////////////////////////////////////
	
	/*	
	//strcmp if equals two string return 0 else return 1
	char arr1[] = "Baris";
	char arr2[] = "Baris ";	//2 null charecter
     printf("%d",strcmp(arr1,arr2));
	 // output 1  
 	*/
 	
	//////////////////////////////////////
	
	/*
	// strchr() function find a first charecter address
	char array[] = "Hello World";	
	printf("%s",strchr(array,'l'));
	// output llo World
	*/
	
	/////////////////////////////////////////
	
	/*
	//strrchr() function find a last charecter address
	char string[] = "Hello World";	
	printf("%s",strrchr(string,'l'));
	//output ld
	*/
	
	///////////////////////////////////////
	
	/*
	// strcpy() function copy of array
	char source[] = "Baris"; // source 
	char target[20]; // empty char array
	printf("%s\n",target); // output null
	strcpy(target,source); // call metod
	printf("%s",target);  // output Baris
	*/
	
	//////////////////////////////////////////////
	
	/*
	// strcat() fuction combines two array 
	char target[] = "baris ";
	char insertion[] = "meral";
	strcat(target,insertion);	
	printf("%s",target); //output baris meral
	*/
	
	///////////////////////////////////////////
	
	/*
	// strncat() function appends a n size insertion array to target array
	char target[] = "baris ";
	char insert[] = "meral";	
	strncat(target,insert,3); 	
	printf("%s",target); // output baris mer
	*/
	
	/////////////////////////////////////////
		
	/*
	// strncpy() function copy string source to target array n count until
	char target[10];
	char src[]="baris";
	printf("%s\n",target); // output empty
	strncpy(target,src,5);
	printf("%s",target); //output baris
	*/
	
	/////////////////////////////////////////////
	
	/*
	// strncmp() function compare n charecter
	char str1[] = "abcd";
	char str2[] = "abcd";
    strncmp(str1,str2,1); // output 0
	*/

	
	
	
}
