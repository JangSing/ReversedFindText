#include "ReversedFindText.h"
#include <stdio.h>

/**
 * Find First (partial) word in the text starting from the end 
 * of the text and return the position of the first letter
 *Eg.,
 *	text = Hello, my name is Alladin
 *	WordToFind = lad
 *  The return value is 20
 *
 * Input:
 *	text 	contains a bunch of words
 *	word 	is the (partial) word to find in the text
 * return:
 *	the position of the first letter found in text. if the word 
 * 	cannot be found in the text, -1 is returned.
 */


int ReversedFindText(char *text , char *word){
	
	int LengthofText=0;
	int i;		//index of text
	int j=0;	//index of word
	int firstIndex;		//the first possition that Text = word
	int count=0;
	int NextCharMatch;
	
	// to determine the length of the text
	while (text[LengthofText]!=NULL){
		LengthofText++;
	}
	i = LengthofText - 1;
  
	//keep looping until the it reads the whole text
	while (i != -1 )
	{ 
		NextCharMatch = 0;
		
		
		// comparing char by char
		if(word[j]==text[i])
		{
			if(count == 0){
				firstIndex = i;
			}
			
			//cond1: special condition if word and text are a char
			//cond2: end of the word
			if((word[j+1]==NULL && i == 0) || word[j+1]==NULL ){
				return firstIndex;
			}
			
			//continue checking if next char match 
			else if(word[j+1]==text[i+1]){
				j++;
				NextCharMatch = 1;
			}
			
			//it served as a reset if next char not match 
			else if(word[j+1]!=text[i+1]){
				count = -1, j = 0, i = firstIndex;
			}
			
			else 
				break;

			count++;  //counter that counts how many time of matches
		}	
		
		if(NextCharMatch){
			i++;
		}
		else{
			i--;
		}
		
	}	 
	return -1; 
	
	}


