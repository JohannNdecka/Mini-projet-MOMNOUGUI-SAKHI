#include <iostream>
#include "Politique.hh"

using namespace std;


 


/*		Contructeurs		*/
Politique::Politique():Personnage()
{
        
	
}

Politique::Politique(Parti val):Personnage(val)
{



}


std:: string Politique:: method()const
{
	return "ok";
}




/*	Destructeur	*/
Politique::~Politique()
{
	// 
}



/*		affichage chaîne de daractère		*/

