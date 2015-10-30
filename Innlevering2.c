// Innlevering 2 by Paul Hasfjord
#include <stdio.h>
#include <string.h>
#include "secretCoder.h"
#include "fileList.h"




int readFromFile(const char fileName[], const char *mode );
// ENCODE AND DECODE
char *encode(const char *inputMessageFile, const char *keyFile, int *status);
int encode2(const char *inputMessageFile, const char *keyFile, char *encodedStream);
char *decode(const char *inputCodeFile, const char *keyFile, int status);
int decode2(const char *inputCodeFile, const char *keyFile, char *decodedMessage);
/*
void mallocBuffer(char *ptr);
void free(void *pointer);
*/
int main(){

		char fileName[1000] = "";
		strcat(fileName, FILENAME4);
		readFromFile(fileName, "r");
		
	/*
		TODO Encoding and Decoding reverse process 
		-> convert code symbols back into understable form.

		The message can be decode only with the help of a key 
		which is assumed to be known at both ends.
		Only the holder of the key is able to decode the true message.
	
		The idea is to use your code to create a library and distribute
		the library to your friends.

		Your friends can try to use your library against their code to verify the standard functionality
		In the final edition , include the names of the library creators you tested your code against.

		Develop interface that is linked with the library

		// example usage :
		//[1] decodedMessage = decode("myCode.txt", "hotelCalifornia.txt", &status);
		//[2] status = decode("myCode.txt", "hotelCalifornia.txt", decodedMessage);

	*/
		return 0;
	
		
}
int readFromFile(const char fileName[], const char *mode) {
		FILE *fp;
		int c ;

		fp = fopen(fileName, mode);
		if( fp == NULL){
			perror("Error in opening file");
			return(-1);
		}
		printf("\n");

		while(1){
			//keyFile = fgetc(fp);

			c = fgetc(fp);
			if( feof(fp) ){
				break;
			}
				printf("%c", c);
				// printf("[%3i] ", c);
		
			// printf("[%3c] ", c);
		}
		
		//printf("%d\n", keyFile);

		printf("\n");
		//printf("%d\n", sizeOf(keyFile));

	  /*
		char mystring [10000];
	
	   	fp = fopen(fileName, mode);
		if (fp == NULL) perror ("Error opening file");
		else {
		if ( fgets (mystring , 10000 , fp) != NULL )
		puts (mystring);
	}	
	*/
		fclose(fp);
	
	return 0;

}
/*
void mallocBuffer(char *ptr){
	(int)ptr = malloc(10* sizeOf(*ptr));	
}
void free(void *pointer){
	pointer.free();
}
*/



