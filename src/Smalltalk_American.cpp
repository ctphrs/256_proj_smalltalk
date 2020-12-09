
#include "../includes/constants.h"
#include "../includes/Smalltalk_American.h"
#include "../includes/Smalltalk.h"

Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(AMERICAN, iPerson){
	Smalltalk_American::populatePhrases();
}

Smalltalk_American::Smalltalk_American(std::string myNationality,int iPerson):Smalltalk(myNationality,iPerson){
	Smalltalk_American::populatePhrases();
}

void Smalltalk_American::populatePhrases(){
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_1);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_2);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_3);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_4);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_5);
}


Smalltalk_American::~Smalltalk_American(){

}
