#include <iostream>
#include "Meeting.hh"

using namespace std;


 


/*		Contructeurs		*/
Meeting::Meeting(std::vector<Personnage> objet,Politique objet2)
{
        int  compteur = 0;
	
	int  limite = rand_a_b(0, 10);
        cout<<limite<<" electeurs en plus sont susceptibles de voter pour vous!!"<<endl;
	for(int i(5);i<Personnage::nbPerso;i++)
		{
			
		
			if (objet[i].getval() != objet2.getval() && compteur < limite)
			{
				cout<<i<<endl;
				cout<<"avant"<<objet[i].getval()<<endl;
				objet[i].setval(objet2.getval());
				cout<<"apres"<<objet[i].getval()<<endl;
				compteur += 1;
			}
			
		}
		
	
}

std:: string Meeting:: method()const
{
return "ok";
}




/*	Destructeur	*/
Meeting::~Meeting()
{
	// 
}





