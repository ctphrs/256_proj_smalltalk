#include <string>
#include <vector>
#include <memory>

#include "../includes/constants.h"
#include "../includes/Smalltalk.h"

using namespace std;

Smalltalk::Smalltalk(std::string myNationality,int iPerson=1): nationality(myNationality), iPerson(iPerson), current_phrase(0){

}
void populatePhrases(){

}
//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending
	//with the last and then it starts over
	//takes the form Nationality iPerson: phrase
	//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
	//AMERICAN 10:Why yes, I would like to supersize that
string Smalltalk::saySomething(){
for(int i; i<mySmallTalk.size();i++){

}
}
