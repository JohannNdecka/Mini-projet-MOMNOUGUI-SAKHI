#pragma once
#include <gtkmm/window.h>
#include <gtkmm/image.h>
#include <gtkmm/label.h>
#include <gtkmm/main.h>
#include <gtkmm/messagedialog.h>
#include "Personnage.hh"
#include "Electeur_non_politique.hh"
#include "Politique.hh"
#include "Evenement.hh"
#include "Election.hh"
#include "Meeting.hh"
#include "Debat.hh"
#include "Scenario.hh"
#include "utility.hh"

class Basic_Window : public Gtk::Window
{
	public:
		Basic_Window();
		virtual ~Basic_Window();
		Glib::ustring nom;
	protected:
		//Signal handlers:
		virtual bool close_button_clicked(GdkEventAny* event);
		virtual void message_quit();
		//Member widgets:
};
