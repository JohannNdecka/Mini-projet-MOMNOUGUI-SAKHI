#include <iostream>
#include "Electeur_non_politique.hh"

using namespace std;


 

/*		Contructeurs		*/
Electeur_non_politique::Electeur_non_politique():Personnage()
{
        

}


Electeur_non_politique::Electeur_non_politique(Parti _val):Personnage( _val)
{
	
}


std::string Electeur_non_politique::method()const
{
	return "ok";
}


/*	Destructeur	*/
Electeur_non_politique::~Electeur_non_politique()
{
	// 
}



/*		affichage chaîne de daractère		*/

