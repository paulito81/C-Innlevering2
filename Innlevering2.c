// Innlevering 2 by Paul Hasfjord
#include <stdio.h>
#include "secretCoder.h"
#include "fileList.h"

int readFromFile(const char *fileName, const char *mode);


int main(){

		const char *fileName= "/home/ubuntu/Documents/Innlevering2/C-Innlevering2/songLibrary/allThatSheWants.txt";
		readFromFile(fileName, "rw");
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
int readFromFile(const char *fileName, const char *mode) {
		//const char a[1000];
		FILE *fp;
	    char numbersOfFile[10000];
		
		int scanNumber =0;
		int index =0;
		fp = fopen(fileName, mode);
	        
	   
	     while (!feof (fp)){
            
            fscanf (fp, "%d", &scanNumber);
            
            numbersOfFile[index] += scanNumber;
            index++;
        }
	    fclose (fp);
	    return 0;
}
/*

char *encode(const char *inputMessageFile, const char *keyFile, int *status){

}

int encode(const char *inputMessageFile, const char *keyFile, char *encodedStream){

}

char *decode(const char *inputCodeFile, const char *keyFile, int status){

}

int decode(const char *inputCodeFile, const char *keyFile, char *decodedMessage){

}
*/


