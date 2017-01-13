#include <iostream>
#include "Election.hh"


using namespace std;


 


/*		Contructeurs		*/
Election::Election(std::vector<Personnage>& objet)
{
        for(int i(0);i<Personnage::nbPerso ;i++)
		{
			objet[i].voter();
			
			
		}
	
}

std:: string Election:: method()const
{
 return "ok";
}

/*	Destructeur	*/
Election::~Election()
{
	// 
}



/*		affichage chaîne de daractère		*/

