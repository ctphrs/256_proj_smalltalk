#include <vector>
#include "../includes/Functions.h"
#include "../includes/Smalltalk.h"
#include "../includes/Smalltalk_American.h"
#include "../includes/Smalltalk_Brit.h"
#include "../includes/ST_American_DonutEnthusiest.h"
/**
 * create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
 * objects using pointers.
 *
 * \param mv	the vector
 * \param numBrit  number of british smalltalkers
 * \param numAmerican " AMerican "
 * \param numbAmericanDonutEnthusiest " American Donut Enthusiest "
 */
void getPeople(std::vector<Smalltalk*> &mv,int numBrit = 1, int numAmerican = 1, int numbAmericanDonutEnthusiest = 1){
	int identity = 1;
	for(int i = 0; i<numBrit; i++){
		Smalltalk_Brit *brit = new Smalltalk_Brit(identity);
		mv.push_back(brit);
		identity++;
	}
	identity = 1;
	for(int i = 0; i < numAmerican; i++){
		Smalltalk_American *amer = new Smalltalk_American(identity);
		mv.push_back(amer);
		identity++;
	}
	identity = 1;
	for(int i = 0; i < numbAmericanDonutEnthusiest; i++){
		ST_American_DonutEnthusiest *donut = new ST_American_DonutEnthusiest(identity);
		mv.push_back(donut);
		identity++;
	}

}

/**
 * Iterate over the vector full of Smalltalk pointers, If a Smalltalk pointer is not null then
 * delete what it points to.  Once all Smalltalk pointers deleted then use std::vector::clear()
 * to clear the vector of the pointers.
 *
 * \param mv
 */
void clearVector(std::vector<Smalltalk*> &mv){
for(std::vector<Smalltalk*>::iterator it = mv.begin(); it != mv.end();++it){
	delete(*it);
}
mv.clear();
}
