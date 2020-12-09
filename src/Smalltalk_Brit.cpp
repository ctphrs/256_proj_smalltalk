#include "../includes/constants.h"
#include "../includes/Smalltalk.h"
#include "../includes/Smalltalk_Brit.h"


Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk(BRIT,iPerson){
Smalltalk_Brit::populatePhrases();
}

void Smalltalk_Brit::populatePhrases(){
	Smalltalk::mySmallTalk.push_back(BRIT_1);
	Smalltalk::mySmallTalk.push_back(BRIT_2);
	Smalltalk::mySmallTalk.push_back(BRIT_3);
	Smalltalk::mySmallTalk.push_back(BRIT_4);
	Smalltalk::mySmallTalk.push_back(BRIT_5);
	Smalltalk::mySmallTalk.push_back(BRIT_6);
	Smalltalk::mySmallTalk.push_back(BRIT_7);
}

Smalltalk_Brit::~Smalltalk_Brit(){

}
