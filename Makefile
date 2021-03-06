all: main

main: Basic_Window.o Fenetre.o Fenetre_Choix.o Fenetre_Reponse.o Fenetre_Entry.o Fenetre_Debat.o Personnage.o Electeur_non_politique.o Politique.o Evenement.o Election.o Meeting.o Debat.o utility.o Scenario.o monProg.o
	g++ --std=c++11 -Wall Basic_Window.o Fenetre.o Fenetre_Choix.o Fenetre_Reponse.o Fenetre_Entry.o Fenetre_Debat.o Personnage.o Electeur_non_politique.o Politique.o Evenement.o Election.o Meeting.o Debat.o utility.o Scenario.o monProg.o -o monProg `pkg-config gtkmm-2.4 --cflags --libs`
	
monProg.o: main.cc
	g++ --std=c++11 -Wall -c main.cc -o monProg.o `pkg-config gtkmm-2.4 --cflags --libs`

Basic_Window.o: Basic_Window.hh Basic_Window.cc
	g++ --std=c++11 -Wall -c Basic_Window.cc `pkg-config gtkmm-2.4 --cflags --libs`

Fenetre.o: Fenetre.hh Fenetre.cc
	g++ --std=c++11 -Wall -c Fenetre.cc `pkg-config gtkmm-2.4 --cflags --libs`
	
Fenetre_Choix.o: Fenetre_Choix.hh Fenetre_Choix.cc
	g++ --std=c++11 -Wall -c Fenetre_Choix.cc `pkg-config gtkmm-2.4 --cflags --libs`
	
Fenetre_Reponse.o: Fenetre_Reponse.hh Fenetre_Reponse.cc
	g++ --std=c++11 -Wall -c Fenetre_Reponse.cc `pkg-config gtkmm-2.4 --cflags --libs`
	
Fenetre_Entry.o: Fenetre_Entry.hh Fenetre_Entry.cc
	g++ --std=c++11 -Wall -c Fenetre_Entry.cc `pkg-config gtkmm-2.4 --cflags --libs`
	
Fenetre_Debat.o: Fenetre_Debat.hh Fenetre_Debat.cc
	g++ --std=c++11 -Wall -c Fenetre_Debat.cc `pkg-config gtkmm-2.4 --cflags --libs`
	
Electeur_non_politique.o : Electeur_non_politique.cc Electeur_non_politique.hh
	g++ -Wall -c -g Electeur_non_politique.cc

Politique.o : Politique.cc Politique.hh
	g++ -Wall -c -g  Politique.cc

Evenement.o : Evenement.cc Evenement.hh
	g++ -Wall -c -g Evenement.cc

Personnage.o: Personnage.cc Personnage.hh
	g++ -Wall -c -g Personnage.cc 

Election.o : Election.cc Election.hh 
	g++ -Wall -c -g Election.cc

Meeting.o : Meeting.cc Meeting.hh 
	g++ -Wall -c -g Meeting.cc

Debat.o : Debat.cc Debat.hh 
	g++ -Wall -c -g Debat.cc

Scenario.o : Scenario.cc Scenario.hh 
	g++ -Wall -c -g Scenario.cc

clean: 
	rm -f *.o *~monProg.o

