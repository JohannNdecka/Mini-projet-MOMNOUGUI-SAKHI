#include "Fenetre_Debat.hh"
#include "Fenetre_Choix.hh"

Fenetre_Debat::Fenetre_Debat():
m_Button_Quit("Retour"), button_rules("Règles")
{
	set_title("Elections Trump ;) - Menu Débat");
	set_border_width(5);
	//set_default_size(400, 200);
	add(m_VBox);
	//Add the TreeView, inside a ScrolledWindow, with the button underneath:
	m_ScrolledWindow.add(m_TreeView);
	//Only show the scrollbars when they are necessary:
	m_ScrolledWindow.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
	m_VBox.pack_start(m_ScrolledWindow);
	m_VBox.pack_start(m_ButtonBox, Gtk::PACK_SHRINK);
	m_ButtonBox.pack_start(m_Button_Quit, Gtk::PACK_SHRINK);
	m_ButtonBox.pack_start(button_rules, Gtk::PACK_SHRINK);
	m_ButtonBox.set_border_width(5);
	m_ButtonBox.set_layout(Gtk::BUTTONBOX_END);
	m_Button_Quit.signal_clicked().connect( sigc::mem_fun(*this,
	&Fenetre_Debat::on_button_quit) );
	//Create the Tree model:
	m_refTreeModel = Gtk::ListStore::create(m_Columns);
	m_TreeView.set_model(m_refTreeModel);
	//Fill the TreeView’s model
	Gtk::TreeModel::Row row = *(m_refTreeModel->append());
	row[m_Columns.m_col_parti] = "EG";
	row[m_Columns.m_col_name] = "CPU";
	row[m_Columns.m_col_percentage] = 15;
	row = *(m_refTreeModel->append());
	row[m_Columns.m_col_parti] = "G";
	row[m_Columns.m_col_name] = "CPU";
	row[m_Columns.m_col_percentage] = 40;
	row = *(m_refTreeModel->append());
	row[m_Columns.m_col_parti] = "C";
	row[m_Columns.m_col_name] = "CPU";
	row[m_Columns.m_col_percentage] = 70;
	row = *(m_refTreeModel->append());
	row[m_Columns.m_col_parti] = "D";
	row[m_Columns.m_col_name] = "CPU";
	row[m_Columns.m_col_percentage] = 50;
	row = *(m_refTreeModel->append());
	row[m_Columns.m_col_parti] = "ED";
	row[m_Columns.m_col_name] = "CPU";
	row[m_Columns.m_col_percentage] = 80;
	//Add the TreeView’s view columns:
	//This number will be shown with the default numeric formatting.
	m_TreeView.append_column("Parti", m_Columns.m_col_parti);
	m_TreeView.append_column("Nom", m_Columns.m_col_name);
	//Display a progress bar instead of a decimal number:
	Gtk::CellRendererProgress* cell = Gtk::manage(new Gtk::CellRendererProgress);
	int cols_count = m_TreeView.append_column("Pourcentage de voix", *cell);
	Gtk::TreeViewColumn* pColumn = m_TreeView.get_column(cols_count - 1);
	if(pColumn)
	{
		#ifdef GLIBMM_PROPERTIES_ENABLED
			pColumn->add_attribute(cell->property_value(), m_Columns.m_col_percentage);
		#else
			pColumn->add_attribute(*cell, "value", m_Columns.m_col_percentage);
		#endif
	}
	//Make all the columns reorderable:
	//This is not necessary, but it’s nice to show the feature.
	//You can use TreeView::set_column_drag_function() to more
	//finely control column drag and drop.
	/*
	for(guint i = 0; i < 2; i++)
	{
		Gtk::TreeView::Column* pColumn = m_TreeView.get_column(i);
		pColumn->set_reorderable();
	}
	* */
	show_all_children();
}

Fenetre_Debat::~Fenetre_Debat()
{
}

void Fenetre_Debat::on_button_quit()
{
	this->hide();
	Fenetre_Choix choix_candidat("Elections Trump ;) - Menu joueur", nom);
	Gtk::Main::run(choix_candidat);
}

void Fenetre_Debat::affich_regles()
{
	Gtk::MessageDialog dialogue(*this, "<big>Voici les règles ! !  !</big>", true);
	dialogue.set_title("Règles du meeting");
	dialogue.set_secondary_text("Lors d'un débat, un canidat peut réussir à convaincre\n entre 0 et 10 personnes selon sa prestation", true);
	dialogue.run();
}



