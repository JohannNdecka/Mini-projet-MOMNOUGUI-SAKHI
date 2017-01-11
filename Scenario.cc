#include <iostream>
#include "Scenario.hh"

Scenario::Scenario()
	{
	
     		Parti deuxieme_parti,troisieme_parti,quatrieme_parti,cinquieme_parti;
	    	
	    	joueur = choisir();
	  
       		deuxieme_parti = deuxiemeparti(joueur);
		troisieme_parti = troisiemeparti(joueur);
		quatrieme_parti = quatriemeparti(joueur);
		cinquieme_parti = cinquiemeparti(joueur);
		cout<<"deuxieme parti"<<endl;
		cout<< deuxieme_parti << endl;
		cout<<"troisieme parti"<<endl;
		cout<< troisieme_parti << endl;

		
	        Politique Kevin(joueur);
   
		Politique Aminata(deuxieme_parti);
                cout<<"deuxieme parti"<<endl;
		cout<< Aminata.getval()<<endl;
		//cout<<"deuxieme parti"<<endl;
		//cout<< .getval()<<endl;
		Politique Olivier(troisieme_parti);
		Politique Johan(quatrieme_parti );
		Politique Cedric(cinquieme_parti ); 
	
		
		
		tableau.push_back(Kevin); 
		tableau.push_back(Aminata);
   		tableau.push_back(Olivier);
		tableau.push_back(Johan);
		tableau.push_back(Cedric);
		for(int i(0);i < Personnage::nbPerso ;i++)
		 {
                        Electeur_non_politique Melaine;
                        cout<<"ici"<<endl;
		        cout<<Melaine.getval()<<endl; 
			tableau.push_back(Melaine);
		}

		//Notre but est toujours de mettre notre personnage dans la case 0
		//tableau = new Politique(deuxieme_parti);
		//tableau = new Politique(troisieme_parti);
		//tableau = new Politique(quatrieme_parti);
		//tableau = new Politique(cinquieme_parti);
                

		//tableau = new Electeur_non_politique[Personnage::nbPerso- 5];

		for(int i(0);i < Personnage::nbPerso ;i++)
		 {
		        cout<<i<<endl;
			cout<<tableau[i].getval()<<endl;
		}

		partis[ED]=0;
		partis[EG]=0;
		partis[D]=0;
		partis[G]=0;
		partis[C]=0;
	
	}




Parti Scenario::choisir()
	{
		
              	string _val;
		
	  	
		
		do{
				cout<<"Quel est le parti de votre Personnage"<<endl;
				cout<<"Etes vous d'extreme droite ED , d'extreme gauche EG ,de droite D, de gauche G ou du centre C"<<endl;
				cout<<"Tapez ED ou EG ou D ou G ou C"<<endl;
				cin>> _val ;
			
		}while(_val != "ED" &&  _val != "EG" &&  _val != "G" &&  _val != "D" &&  _val != "C");
	
		

			if ( _val == "ED")
			return ED;
				
			else if ( _val == "EG" )
			return EG;
			
	                else if (_val == "D")
			return D;
			
			
			else if (_val == "G")
			return G;
				
			else 
			return C;

			
		
		
			

	}






Parti Scenario::deuxiemeparti(Parti _val)
	{
		
		    if ( _val == ED)
					
				    return EG; 
				   
			
			
                        else if ( _val == EG )

				    return ED; 
				  
			
			
	                else if (_val == D)
						
				   return EG; 
				  
			
				   

		      
			else if (_val == G)
				   
				    return EG;

			
			
		        else 		
				
				   return EG;
			

	}

Parti Scenario::troisiemeparti(Parti _val)
	{

		      if ( _val == ED)
					
				    return D; 
				   
			
			
                        else if ( _val == EG )

				    return D; 
				  
			
			
	                else if (_val == D)
						
				   return ED; 
				  
			
				   

		      
			else if (_val == G)
				   
				    return D;

			
			
		        else 		
				
				   return D;




	}

Parti Scenario::quatriemeparti(Parti _val)
	{

		      if ( _val == ED)
					
				    return G; 
				   
			
			
                        else if ( _val == EG )

				    return G; 
				  
			
			
	                else if (_val == D)
						
				   return G; 
				  
			
				   

		      
			else if (_val == G)
				   
				    return ED;

			
			
		        else 		
				
				   return G;




	}


Parti Scenario::cinquiemeparti(Parti _val)
	{

		      if ( _val == ED)
					
				    return C;
				   
			
			
                        else if ( _val == EG )

				    return C; 
				  
			
			
	                else if (_val == D)
						
				   return C; 
				  
			
				   

		      
			else if (_val == G)
				   
				    return C;

			
			
		        else 		
				
				   return ED;




	}



void Scenario::faire_un_meeting()
	{
		Meeting meeting(tableau,joueur);


	}


void Scenario::faire_un_debat()
	{
		Debat debat(tableau);


	}

void Scenario::faire_une_election()
	{
		
		
		//Personnage* perso= new Electeur_non_politique[500];
		//Election elec(perso);
		//cout<<"entrer"<<endl;
		Parti _val;
		int maxi;
		
		Election election(tableau);
                
		
		
		for(int i(0);i < Personnage::nbPerso ;i++)
			{
				
				_val = tableau[i].getvote();
				     
				if ( _val == ED)
					
					{partis[ED]= partis[ED] + 1;
					//cout<<"1____"<<partis[ED]<<endl;
				}
					
			
			
                        	else if ( _val == EG )

				    	 partis[EG] = partis[EG] + 1;
					
				  
			
			
	                	else if (_val == D)
						
				   	partis[D]= partis[D] + 1;
					 
				     
				  
				else if (_val == G)
				   
				    	partis[G] = partis[G] + 1;
					

			
				else 		
				
				   	partis[C] = partis[C] + 1;}


				 /*cout<<"1____"<<partis[ED]<<endl;
				 cout<<"2____"<<partis[EG]<<endl;
				 cout<<"3____"<<partis[D]<<endl;
				 cout<<"4____"<<partis[G]<<endl;
				 cout<<"5____"<<partis[C]<<endl;*/

				maxi = max(partis[C],partis[G]);
		                maxi = max(maxi,partis[D]);
		                maxi = max(maxi,partis[EG]);
		                maxi = max(maxi,partis[ED]);
		
		if (maxi == partis[ED] )
		      cout<<"extreme-droite a gagné"<<endl;
		else if(maxi == partis[EG] )
		       cout<<"extreme-gauche a gagné"<<endl;
		else if(maxi == partis[D])
		       cout<<"droite a gagné"<<endl;
		else if(maxi == partis[G])
		       cout<<"gauche a gagné"<<endl;
		else
		     cout<<"centre  a gagné"<<endl;

                


			
      
		
		


	}


	
