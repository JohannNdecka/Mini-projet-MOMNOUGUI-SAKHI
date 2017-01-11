#include <iostream>
#include "Debat.hh"


using namespace std;


/*		Contructeurs		*/
Debat::Debat(std::vector<Personnage> objet)
	{
        
		int  _ED = rand_a_b(0, 100);
        	int  _EG = rand_a_b(0,100);
		int  _G = rand_a_b(0,100);
		int  _D = rand_a_b(0,100);
		int  _C = rand_a_b(0,100);
		int maxi;
          //C'est ici qu'il faudra mettre la fenetre pour le debat
        
		maxi = max(_ED,_EG);
		maxi = max(maxi,_G);
		maxi = max(maxi,_D);
		maxi = max(maxi,_C);
                cout<<_ED<<endl;
		cout<<_EG<<endl;
		cout<<_G<<endl;
		cout<<_D<<endl;
		cout<<_C<<endl;
		
		if (maxi == _ED)
		augmenter(objet,ED);
		else if(maxi == _EG )
		augmenter(objet,EG);
		else if(maxi == _G)
		augmenter(objet,G);
		else if(maxi == _D)
		augmenter(objet,D);
		else
		augmenter(objet,C);
 	}


void Debat::augmenter(std::vector<Personnage> objet,Parti _val)
{

	int  compteur = 0;
	
         cout<< "50 electeurs en plus sont susceptibles de voter pour !!"<<_val<<endl;
	 for(int i(5);i<Personnage::nbPerso;i++)
		{
			if (objet[i].getval() != _val && compteur < 50)
			{
				cout<<i<<endl;
				cout<<"avant"<<objet[i].getval()<<endl;
				objet[i].setval(_val);
				cout<<"apres"<<objet[i].getval()<<endl;
				compteur += 1;
			}
			
		}


}


int Debat::max(int nb1,int nb2)
	{
		if (nb1 > nb2)
			return nb1;
		return nb2;
	

	}

std:: string Debat:: method()const
{
return "ok";
}




/*	Destructeur	*/
Debat::~Debat()
{
	// 
}






 


