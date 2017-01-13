#pragma once
#include <string>
#include <vector>
#include "Evenement.hh"
#include "Personnage.hh"
#include "Politique.hh"

class Meeting:public Evenement{
		
		/*		Attributs	*/
		protected: 
			
		  

                /*		Methodes	*/
		public:
			
			std:: string method() const ;		
			Meeting(std::vector<Personnage> objet,Politique objet2);
			~Meeting();
			int popularite;
			
};
