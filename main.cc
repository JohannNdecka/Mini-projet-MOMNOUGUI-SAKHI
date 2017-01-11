#include <gtkmm/main.h>
#include "Fenetre.hh"
#include "Fenetre_Choix.hh"
#include "Fenetre_Entry.hh"
#include "Fenetre_Debat.hh"

int main (int argc, char *argv[])
{
Gtk::Main kit(argc, argv);
Fenetre fenetre;
/*
Fenetre_Choix fenetre2;
Fenetre_Choix fenetre3("Elections Trump ;) - Menu joueur", "Johann");
Fenetre_Choix fenetre4("Elections Trump ;) - Menu joueur", "Johann", "win_loss.gif");
Fenetre_Reponse fenetre5("Elections Trump ;) - Résultats", "Bravo ! ! ! \nVous avez gagné", "victory_bush.gif", "Rejouer", "Quitter");
Fenetre_Entry fenetre6;
Fenetre_Debat fenetre7;
//Shows the window and returns when it is closed.
*/
Gtk::Main::run(fenetre);
/*
Gtk::Main::run(fenetre2);
Gtk::Main::run(fenetre3);
Gtk::Main::run(fenetre4);
Gtk::Main::run(fenetre5);
Gtk::Main::run(fenetre6);
Gtk::Main::run(fenetre7);
*/
return 0;
}
