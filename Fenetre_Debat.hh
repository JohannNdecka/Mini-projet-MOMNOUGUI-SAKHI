#pragma once
#include "Basic_Window.hh"
#include <gtkmm/box.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/liststore.h>
#include <gtkmm/button.h>
#include <gtkmm/treeview.h>
#include <gtkmm/scrolledwindow.h>
#include <gtkmm/cellrendererprogress.h>

class Fenetre_Debat : public Basic_Window
{
	public:
		Fenetre_Debat();
		virtual ~Fenetre_Debat();
	protected:
		//Signal handlers:
		virtual void on_button_quit();
		virtual void affich_regles();
	//Tree model columns:
	class ModelColumns : public Gtk::TreeModel::ColumnRecord
	{
		public:
			ModelColumns()
			{ add(m_col_parti) ; add(m_col_name) ; add(m_col_percentage);}
			Gtk::TreeModelColumn<Glib::ustring> m_col_parti;
			Gtk::TreeModelColumn<Glib::ustring> m_col_name;
			Gtk::TreeModelColumn<int> m_col_percentage;
	};
	ModelColumns m_Columns;
	//Child widgets:
	Gtk::VBox m_VBox;
	Gtk::ScrolledWindow m_ScrolledWindow;
	Gtk::TreeView m_TreeView;
	Glib::RefPtr<Gtk::ListStore> m_refTreeModel;
	Gtk::HButtonBox m_ButtonBox;
	Gtk::Button m_Button_Quit;
	Gtk::Button button_rules;
};
