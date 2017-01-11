#pragma once
#include <gtkmm/window.h>
#include <gtkmm/image.h>
#include <gtkmm/label.h>
#include <gtkmm/main.h>
#include <gtkmm/messagedialog.h>

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
