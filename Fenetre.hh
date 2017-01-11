#pragma once
#include <gtkmm/button.h>
#include <gtkmm/alignment.h>
#include <gtkmm/label.h>
#include <gtkmm/box.h>
#include "Basic_Window.hh"

class Fenetre : public Basic_Window
{
	public:
		Fenetre();
		virtual ~Fenetre();
	protected:
	//Signal handlers:
	virtual void message_regles();
	virtual void message_depart();
	//Member widgets:
	Gtk::Button m_button;
	Gtk::Button quit_button;
	Gtk::Button rules_button;
	Gtk::VBox boiteV;
	Gtk::HBox boiteH;
	Gtk::Label etiquette;
	Gtk::Image accueil;
};
