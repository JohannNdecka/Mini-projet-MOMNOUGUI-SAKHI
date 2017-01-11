#include "Personnage.hh"
#include "Electeur_non_politique.hh"
#include "Politique.hh"
#include "Evenement.hh"
#include "Election.hh"
#include "Meeting.hh"
#include "Debat.hh"
#include "Scenario.hh"
#include "utility.hh"


#include <iostream>
using namespace std;

int Personnage::nbPerso = 500;

/*		Affichage des valeurs ternaires		*/
std::ostream& operator<<(std::ostream & out, Parti val)
{
	switch(val)
	{
		case G : cout << " Gauche"; 
			break;
		case EG: cout << "Extreme gauche "; 
			break;
		case ED: cout << "Extreme droite"; 
			break;
		case D: cout << "Droite"; 
			break;
		
		default : cout << "Centriste ";
			break;
	}
	return out;}


Personnage::Personnage():vote(_)
	{
		
		int alea = rand_a_b(0,5);
		//cout<<alea<<endl;
		switch(alea)
	{
		case 0 : val = G; 
			break;
		case 1: val = D; 
			break;
		case 2: val = ED; 
			break;
		case 3: val = EG; 
			break;
		
		default : val = C;
			break;
	}
		

	}

Personnage::Personnage(Parti _val):val(_val),vote(_)
{

    	
}

void Personnage::voter()
{
  	
        
	//int alea = rand_a_b(0,11);
	int alea = 0;
	if(alea<6)
		{      
			vote = val;
			
				
		}
		else
		{
			switch(alea)
			{	
				case 6: vote = G; 
				break;
				case 7: vote = D;
				break;
				case 8:vote = ED;
      				break;
				case 9:vote = EG;
      				break;
				default:vote = C;
				break;
			}




		}
	

}



				
			

void Personnage::afficher()
	{
		std::cout<<"hello"<<std::endl ;
	}

Parti Personnage::getval()
	{
                
		return val ;
	}

Parti Personnage::getvote()
	{

		return vote ;
	}

void Personnage::setvote(Parti choix)
	{
		vote = choix;

	}

void Personnage::setval(Parti choix)
	{
		val = choix;

	}
/*
int main()
	{
		srand(time(NULL));
		
		//Politique kevin(G);
		//Electeur_non_politique Melaine;
		//cout<<Melaine.getval()<<endl; 
                
		//Electeur_non_politique Amine;
		//cout<<Amine.getval()<<endl;
		//cout<<kevin.getval()<<endl;
                 Scenario nouveau;
		 // nouveau.faire_un_meeting();
		//nouveau.faire_un_debat();
		nouveau.faire_une_election();
                 //Debat Johann;
		

		 //Personnage* perso= new Politique[200];
		//Election elec(perso);
		//perso[0].afficher();//test
                //Debat Johann(perso);
		
		//Politique A;
		//A.voter();
		//Electeur_non_politique B(G);
		//Election C();
		//Meeting D();
		
		
	}
*/
