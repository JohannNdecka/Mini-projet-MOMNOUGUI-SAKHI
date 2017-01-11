#include "Fenetre_Reponse.hh"
#include "Fenetre_Choix.hh"
#include "Fenetre.hh"

Fenetre_Reponse::Fenetre_Reponse() :
message("Entrez votre nom"), gif("win_loss.gif"), bouton1("Continuer"), bouton2("test"), boiteV(false, 10), boiteH(false, 10)
{
	
}

Fenetre_Reponse::Fenetre_Reponse(Glib::ustring titre, Glib::ustring msg, Glib::ustring fichier, Glib::ustring nom1, Glib::ustring nom2):
message(msg), gif(fichier), bouton1(nom1), bouton2(nom2), boiteV(false, 10), boiteH(false, 10)
{
	set_title(titre);
	boiteV.pack_start(gif);
	boiteV.pack_start(message, Gtk::PACK_SHRINK);
	boiteV.pack_start(boiteH, Gtk::PACK_SHRINK);
	boiteH.pack_start(bouton1, Gtk::PACK_SHRINK);
	boiteH.pack_start(bouton2, Gtk::PACK_SHRINK);
	
	if(nom1=="Continuer")
		bouton1.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_Reponse::continuer));
	else
		bouton1.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_Reponse::rejouer));
	if(nom2=="Règles")
		bouton2.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_Reponse::meeting_rules));
	else
		bouton2.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_Reponse::message_quit));
	
	add(boiteV);
	// The final step is to display this newly created widget...
	this->show_all();
}

Fenetre_Reponse::~Fenetre_Reponse()
{
}

void Fenetre_Reponse::meeting_rules()
{
	Gtk::MessageDialog dialogue(*this, "<big>Voici les règles ! !  !</big>", true);
	dialogue.set_title("Règles du meeting");
	dialogue.set_secondary_text("lors d'un meeting, un canidat peut réussir à convaincre\n entre 0 et 10 personnes selon sa prestation", true);
	dialogue.run();
}

void Fenetre_Reponse::continuer()
{
	this->hide();
	Fenetre_Choix choix_candidat("Elections Trump ;) - Menu joueur", nom);
	Gtk::Main::run(choix_candidat);
}

void Fenetre_Reponse::rejouer()
{
	this->hide();
	Fenetre fenetre;
	Gtk::Main::run(fenetre);
}





