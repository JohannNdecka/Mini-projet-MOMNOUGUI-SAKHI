#pragma once
#include "Fenetre_Reponse.hh"
#include <gtkmm/entry.h>

class Fenetre_Entry : public Fenetre_Reponse
{
	public:
		Fenetre_Entry();
		~Fenetre_Entry();
		
	protected:
		//Signal handlers
		virtual void entrer_nom();
		//Memeber widgets
		Gtk::Entry zone;
};
