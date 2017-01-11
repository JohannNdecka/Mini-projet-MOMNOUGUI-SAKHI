#include "Fenetre.hh"
#include "Fenetre_Choix.hh"
#include <iostream>
Fenetre::Fenetre()
: Basic_Window::Basic_Window(), m_button("Démarrer"), quit_button("Quitter"), rules_button("Règles"),
 boiteV(false, 10), boiteH(false, 10), etiquette("Jeu des élections"), accueil("vote2.jpeg")
// creates new buttons with labels.
{
    boiteV.pack_start(accueil, Gtk::PACK_SHRINK);
    boiteV.pack_start(etiquette, Gtk::PACK_SHRINK);
    boiteV.pack_start(boiteH, Gtk::PACK_SHRINK);
    boiteV.pack_end(rules_button, Gtk::PACK_SHRINK);
    boiteH.pack_start(m_button, Gtk::PACK_SHRINK);
    boiteH.pack_start(quit_button, Gtk::PACK_SHRINK);
	
	m_button.signal_clicked().connect(sigc::mem_fun(*this,
	&Fenetre::message_depart));
	rules_button.signal_clicked().connect(sigc::mem_fun(*this,
	&Fenetre::message_regles));
	quit_button.signal_clicked().connect(sigc::mem_fun(*this,
	&Fenetre::message_quit));
	add(boiteV);
	// The final step is to display this newly created widget...
	this->show_all();
}

Fenetre::~Fenetre()
{
}

void Fenetre::message_depart()
{
	this->hide();
	Gtk::MessageDialog dialogue(*this, "<big>C'est parti ! !  !</big>", true);
	dialogue.set_title("Information");
	dialogue.set_secondary_text("Début du jeu", true);
	dialogue.run();
	Fenetre_Choix choix;
	Gtk::Main::run(choix);
}

void Fenetre::message_regles()
{
	Gtk::MessageDialog dialogue(*this, "<big>C'est parti ! !  !</big>", true);
	dialogue.set_title("Information");
	dialogue.set_secondary_text("Début du jeu", true);
	dialogue.run();
}


