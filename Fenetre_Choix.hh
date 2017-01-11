#pragma once
#include "Basic_Window.hh"
#include "Fenetre_Debat.hh"
#include "Fenetre_Entry.hh"
#include <gtkmm/image.h>
#include <gtkmm/label.h>
#include <gtkmm/box.h>
#include <gtkmm/button.h>

class Fenetre_Choix : public Basic_Window
{
	public:
		Fenetre_Choix();
		Fenetre_Choix(Glib::ustring titre, Glib::ustring nom);
		Fenetre_Choix(Glib::ustring titre, Glib::ustring nom, Glib::ustring fichier);
		~Fenetre_Choix();
	protected:
		//Signal handlers
		virtual void menu_meeting();
		virtual void menu_debat();
		virtual void start_elections();
		virtual void affichage_resultats();
		virtual void choix_c();
		virtual void choix_d();
		virtual void choix_g();
		virtual void choix_eg();
		virtual void choix_ed();
		//Member widgets
		Gtk::Label choix;
		Gtk::Image eg_img;
		Gtk::Image g_img;
		Gtk::Image c_img;
		Gtk::Image d_img;
		Gtk::Image ed_img;
		Gtk::Button eg_button;
		Gtk::Button g_button;
		Gtk::Button c_button;
		Gtk::Button d_button;
		Gtk::Button ed_button;
		Gtk::VBox pBox;
		Gtk::VBox eg_Box;
		Gtk::VBox g_Box;
		Gtk::VBox c_Box;
		Gtk::VBox d_Box;
		Gtk::VBox ed_Box;
		Gtk::HBox box1;
		Gtk::HBox box2;
		Gtk::Image gif;
};

