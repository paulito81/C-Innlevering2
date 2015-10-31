// Innlevering 2 by Paul Hasfjord
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "secretCoder.h"
#include "fileList.h"

#define MAXFILE_SIZE 20000



int readFromFile(const char fileName[], const char *mode );
// ENCODE AND DECODE
char *encode(const char *inputMessageFile, const char *keyFile, int *status);
int encode2(const char *inputMessageFile, const char *keyFile, char *encodedStream);
char *decode(const char *inputCodeFile, const char *keyFile, int status);
int decode2(const char *inputCodeFile, const char *keyFile, char *decodedMessage);

bool alphabetic( const char a);
int countWords( const char string[]);


//void *malloc(size_t size);
//void free(void *pointer);

int main(){
	//	char FileName[100] = "";
	//	printf("Welcome to Encoder/decoder!\tChoose a file '1-121' to decode\n(Exp: FILENAME1 = (filename1), FILENAME2 = fileName2 .. )\n");
//		scanf("%s", FileName);
		readFromFile(FILENAME50 , "r");
//		readFromFile( FILENAME1, "r");
		
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

void readLine(char buffer[] ){
	char character;
	int i = 0;

	do{
		character = getchar ();
		buffer[i] = character;
		++i;
	}

	while( character != '\n' );

	buffer[i-1] = '\0';
}
bool alphabetic( const char a){
	if( (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') )
		return true;
	else
		return false;	
}
int countWords( const char string[]){
	int countWords = 0;
	bool lookingForward = true, alphabetic( const char a);

	for(int i = 0; string[i] != '\0'; ++i)
		if( alphabetic( string[i]) )
		{
		  if( lookingForward){
		  	++countWords;
		  	lookingForward = false;
		  }	
		}
		else
			lookingForward = true;
		return countWords;
}
int readFromFile(const char fileName[], const char *mode) {
		FILE *fp;
		int index;
		int i = 0;
	
		char c[MAXFILE_SIZE] ;
	
		fp = fopen(fileName, mode);
		if( fp == NULL){
			perror("Unable to open the file.\n(Hint: try open an another file..)");
			return(-1);
		}
		printf("\n");

		do{
			//keyFile = fgetc(fp);

			index = fgetc(fp);
			c[i] = index;
			++i;
			
		/*	if( index == '\0'){
				break;
			}
		
		*/	if( feof(fp) ){
				c[i-1] = index;
				break;
			}
		//	printf("%c", c[i]);
				// printf("[%3i] ", c);
				// printf("[%3c] ", c);
		}while( 1);
		printf("\n");
		for( int j = 0; j < 840; j++){
			printf("%c", c[j] );
		}
		printf("\n");
			printf("%d words\n", countWords(c));
	
		fclose(fp);
	
	return 0;

}
/*
void *malloc(size_t size){
	 size = (int *) malloc(100* sizeof (int) );
}
void free(void *pointer){
	free(pointer);
}

*/