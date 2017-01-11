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
//  virtual std:: string method() const  =0; // J'ai mis cette méthode ici juste pour que ce soit une classe abstraite pour le moment 
   static int nbPerso;
   void voter();
   
   
   void afficher();
   Parti getval();
   void setval(Parti choix);
   void setvote(Parti choix);

  
};



