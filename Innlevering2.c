// Innlevering 2 by Paul Hasfjord
#include <stdio.h>
#include "secretCoder.h"
#include "fileList.h"

int readFromFile(char path [], long unsigned char *fileSize, File* f, char filename[] );


int main(){

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
int readFromFile(char path [], long unsigned char *fileSize, File* f, char filename[] ){

	if(filename == null){
		printf("Error file does not exist, and could not be open..\n" );
	    return 1;
	}
		FILE* f = fopen(filename, "r");

	    int scanNumber = 0;
	    fscanf ( f, "%d", &scanNumber);
	    int index = 0;

	    while (!feof (f)){
	            
	        fscanf (f, "%d", &scanNumber);
	            
	        numbersOfFile[index] = scanNumber;
	        totalSum += scanNumber;
	        index++;
	    }
	        
	    fclose (f);
	    return 0;
}



