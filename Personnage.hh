#pragma once
#include<string>
#include "utility.hh"




std::ostream& operator<<(std::ostream & out, Parti val);

class Personnage{
protected:
	Parti val;
	Parti vote;

	
public:
  Personnage();
  Personnage(Parti _val);
  Parti getvote();
   static int nbPerso;
   void voter();
   
   
   void afficher();
   Parti getval();
   void setval(Parti choix);
   void setvote(Parti choix);

  
};



