#pragma once
#include <string>
#include "Personnage.hh"


class Electeur_non_politique:public Personnage{
		
		/*		Attributs	*/
		protected: 
			
		  

                /*		Methodes	*/
		public:
		        std:: string method()const  ;
			Electeur_non_politique();
			Electeur_non_politique(Parti _val);
			~Electeur_non_politique();
			
};
