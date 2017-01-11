#pragma once
#include <string>
#include "Personnage.hh"


class Politique:public Personnage{
		
		/*		Attributs	*/
		protected: 
			
		  

                /*		Methodes	*/
		public:
		
			Politique();
			Politique(Parti val);
		        std:: string method() const ;
			~Politique();
			
};
