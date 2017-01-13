#include "Fenetre_Entry.hh"
#include "Fenetre_Choix.hh"

Fenetre_Entry::Fenetre_Entry():
Fenetre_Reponse::Fenetre_Reponse(), zone()
{
	set_title("Elections Trump ;) - Enregistrement");
	boiteV.pack_start(message, Gtk::PACK_SHRINK);
	boiteV.pack_start(zone, Gtk::PACK_SHRINK);
	boiteV.pack_start(bouton1, Gtk::PACK_SHRINK);
	//Connexion de l'évènement de clic du bouton à la fonction 
	bouton1.signal_clicked().connect(sigc::mem_fun(*this,
	&Fenetre_Entry::entrer_nom));
	
	add(boiteV);
	// The final step is to display this newly created widget...
	this->show_all();
}

Fenetre_Entry::~Fenetre_Entry()
{
}

void Fenetre_Entry::entrer_nom()
{
	this->hide();
	nom = zone.get_text();
	Fenetre_Choix choix_candidat("Elections Trump ;) - Menu joueur", nom);
	Gtk::Main::run(choix_candidat);
}
