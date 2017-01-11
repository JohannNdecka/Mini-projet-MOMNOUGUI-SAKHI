#pragma once
#include <string>
#include <vector>
#include "Evenement.hh"
#include "Personnage.hh"
#include "Politique.hh"


class Election:public Evenement{
		
		/*		Attributs	*/
		protected: 
			
		  

                /*		Methodes	*/
		public:
			Election(std::vector<Personnage> objet);
			std:: string method() const ;
			~Election();
			
};
