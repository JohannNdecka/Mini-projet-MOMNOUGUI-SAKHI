#include "Basic_Window.hh"
#include <iostream>

Basic_Window::Basic_Window(): scenario(C)
{
	// SDéfinit les bordures de la fenêtre
	set_border_width(10);
	// Définit la taille par défaut de la fenêtre
	this->set_default_size (600, 400);
	//Définit le titre de la fenêtre
    this->set_title ("Elections Trump ;)");
    this->set_position(Gtk::WIN_POS_CENTER);
    this->set_icon_from_file("icone-elections-1.png");		//Définit l'icone de la fenetre
    //Il assigne l'évènement de fermeture de la fenêtre à une fonction
    this->signal_delete_event().connect(sigc::mem_fun(this, &Basic_Window::close_button_clicked));
}

Basic_Window::~Basic_Window()
{
}



void Basic_Window::message_quit()
{
	//Ouvre une boite de dialogue pour la confirmation de fremeture
	Gtk::MessageDialog dialogue(*this, "Voulez-vous fermer le programme ?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
    dialogue.set_title("Confirmation");
    dialogue.set_secondary_text("Si vous répondez Oui, vous perdrez le cours de la partie");
    int resultat = dialogue.run(); //Cette méthode retourne le bouton sur lequel l'utilisateur a cliqué.
    if(resultat == Gtk::RESPONSE_YES) { //S'il a cliqué sur Oui.
        Gtk::Main::quit();
    }
    else if(resultat == Gtk::RESPONSE_NO) { //S'il a cliqué sur Non.
        dialogue.hide(); //Cacher l'autre boîte de dialogue
    }
}


bool Basic_Window::close_button_clicked(GdkEventAny* event)		//Fonction appelée lorsqu'on veut fermer une fenêtre
{
	Basic_Window::message_quit();
	return true;
}



