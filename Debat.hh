#pragma once
#include <string>
#include <vector>
#include "Evenement.hh"
#include "Personnage.hh"
#include "Politique.hh"
#include "utility.hh"

class Debat:public Evenement{
		
		/*		Attributs	*/
		protected: 
			  

                /*		Methodes	*/
		public:
			Parti gain;
			int tableau[5];		
			std:: string method() const ;		
			Debat(std::vector<Personnage> objet);
			int max(int nb1,int nb2);
			void augmenter(std::vector<Personnage> objet,Parti _val);
			~Debat();
			
};
