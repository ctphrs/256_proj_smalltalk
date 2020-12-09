#include <string>
#include "../includes/Smalltalk.h"
#include "../includes/ST_American_DonutEnthusiest.h"
#include "../includes/Smalltalk_American.h"
#include "../includes/constants.h"


ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int iPerson):Smalltalk_American(AMERICAN_DE,iPerson){
	ST_American_DonutEnthusiest::populatePhrases();
}
//create with appropriate phrases
void ST_American_DonutEnthusiest::populatePhrases(){
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(){

}
