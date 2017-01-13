#pragma once
#include <string>
#include <map>
#include "utility.hh"
#include "Personnage.hh"
#include "Politique.hh"
#include "Electeur_non_politique.hh"
#include "Meeting.hh"
#include "Debat.hh"
#include "Election.hh"
#include <vector>


using namespace std;

class Scenario{
public :
	
		Scenario(Parti choix_parti);
		
		int faire_un_meeting();
		Parti faire_un_debat(int* voix);
		void faire_une_election();
		Parti deuxiemeparti(Parti _val);
		Parti troisiemeparti(Parti _val);
		Parti quatriemeparti(Parti _val);
		Parti cinquiemeparti(Parti _val);
		//Parti choisir();	
		Parti joueur;
		Parti gagnant;

private :   
		      	
		      std::vector<Personnage> tableau ;
                      //Personnage* tableau ;
		      std::map<Parti,int> partis;
		      

      
	
			};

