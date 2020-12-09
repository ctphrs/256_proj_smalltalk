#include <string>
#include <vector>

#include "../includes/constants.h"
#include "../includes/Smalltalk.h"

using namespace std;

Smalltalk::Smalltalk(string myNationality,int iPerson): nationality(myNationality), iPerson(iPerson), current_phrase(0){

}
Smalltalk::~Smalltalk(){

}
void populatePhrases(){

}
//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending
	//with the last and then it starts over
	//takes the form Nationality iPerson: phrase
	//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
	//AMERICAN 10:Why yes, I would like to supersize that
string Smalltalk::saySomething(){
string message = nationality+" "+to_string(iPerson)+": "+Smalltalk::mySmallTalk[current_phrase];
current_phrase = (current_phrase+1)%Smalltalk::mySmallTalk.size();
return message;
}
