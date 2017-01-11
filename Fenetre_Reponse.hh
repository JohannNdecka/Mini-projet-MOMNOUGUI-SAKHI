#pragma once
#include "Basic_Window.hh"

class Fenetre_Reponse : public Basic_Window
{
	public:
		Fenetre_Reponse();
		Fenetre_Reponse(Glib::ustring titre, Glib::ustring msg, Glib::ustring fichier, Glib::ustring nom1, Glib::ustring nom2);
		virtual ~Fenetre_Reponse();
	protected:
		//Signal handlers
		virtual void continuer();
		virtual void meeting_rules();
		virtual void rejouer();
		//Member widgets
		Gtk::Label message;
		Gtk::Image gif;
		Gtk::Button bouton1;
		Gtk::Button bouton2;
		Gtk::VBox boiteV;
		Gtk::HBox boiteH;
};
