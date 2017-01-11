#include "Fenetre_Choix.hh"

Fenetre_Choix::Fenetre_Choix():
choix("Choisissez votre candidat"), eg_img("extreme_gauche.jpeg"), g_img("gauche.jpeg"), c_img("centre.jpeg"), d_img("droite.jpeg"), ed_img("extreme_droite.jpeg"),
eg_button("Valider"), g_button("Valider"), c_button("Valider"), d_button("Valider"), ed_button("Valider"),  
pBox(false, 10), eg_Box(false, 10), g_Box(false, 10), c_Box(false, 10), d_Box(false, 10), ed_Box(false, 10), box1(false, 10), box2(false, 10), gif("win_loss.gif")
{
	set_title("Elections Trump ;) - Choix du candidat");
	pBox.pack_start(choix, Gtk::PACK_SHRINK);
	pBox.pack_start(box1, Gtk::PACK_SHRINK);
	pBox.pack_start(box2, Gtk::PACK_SHRINK);
	box1.pack_start(eg_Box, Gtk::PACK_SHRINK);
	eg_Box.pack_start(eg_img, Gtk::PACK_SHRINK);
	eg_Box.pack_end(eg_button, Gtk::PACK_SHRINK);
	box1.pack_start(c_Box, Gtk::PACK_SHRINK);
	c_Box.pack_start(c_img, Gtk::PACK_SHRINK);
	c_Box.pack_end(c_button, Gtk::PACK_SHRINK);
	box1.pack_start(g_Box, Gtk::PACK_SHRINK);
	g_Box.pack_start(g_img, Gtk::PACK_SHRINK);
	g_Box.pack_end(g_button, Gtk::PACK_SHRINK);
	box2.pack_start(d_Box, Gtk::PACK_SHRINK);
	d_Box.pack_start(d_img, Gtk::PACK_SHRINK);
	d_Box.pack_end(d_button, Gtk::PACK_SHRINK);
	box2.pack_start(ed_Box, Gtk::PACK_SHRINK);
	ed_Box.pack_start(ed_img, Gtk::PACK_SHRINK);
	ed_Box.pack_end(ed_button, Gtk::PACK_SHRINK);
	
	eg_button.signal_clicked().connect(sigc::mem_fun(*this,
	&Fenetre_Choix::choix_eg));
	g_button.signal_clicked().connect(sigc::mem_fun(*this,
	&Fenetre_Choix::choix_g));
	c_button.signal_clicked().connect(sigc::mem_fun(*this,
	&Fenetre_Choix::choix_c));
	d_button.signal_clicked().connect(sigc::mem_fun(*this,
	&Fenetre_Choix::choix_d));
	ed_button.signal_clicked().connect(sigc::mem_fun(*this,
	&Fenetre_Choix::choix_ed));
	
	add(pBox);
	// The final step is to display this newly created widget...
	this->show_all();
}

Fenetre_Choix::Fenetre_Choix(Glib::ustring titre, Glib::ustring nom):
choix("Déroulement des élections"), eg_img("extreme_gauche.jpeg"), g_img("gauche.jpeg"), c_img("centre.jpeg"), d_img("droite.jpeg"), ed_img("extreme_droite.jpeg"),
eg_button("Valider"), g_button("Organiser\nmeeting"), c_button("Démarrer les\nélections"), d_button("Faire un\ndébat"), ed_button("Valider"),  
pBox(false, 10), eg_Box(false, 10), g_Box(false, 10), c_Box(false, 10), d_Box(false, 10), ed_Box(false, 10), box1(false, 10), box2(false, 10), gif("win_loss.gif")
{
	set_title(titre);
	choix.set_text(nom+"\nDéroulement des élections");
	pBox.pack_start(choix, Gtk::PACK_SHRINK);
	pBox.pack_start(box1, Gtk::PACK_SHRINK);
	box1.pack_start(g_button, Gtk::PACK_SHRINK);
	box1.pack_end(d_button, Gtk::PACK_SHRINK);
	pBox.pack_end(c_button, Gtk::PACK_SHRINK);
	
	g_button.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_Choix::menu_meeting));
	d_button.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_Choix::menu_debat));
	c_button.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_Choix::start_elections));
	
	add(pBox);
	// The final step is to display this newly created widget...
	this->show_all();
}

Fenetre_Choix::Fenetre_Choix(Glib::ustring titre, Glib::ustring nom, Glib::ustring fichier):
choix("Les élections sont terminées"), eg_img("extreme_gauche.jpeg"), g_img("gauche.jpeg"), c_img("centre.jpeg"), d_img("droite.jpeg"), ed_img("extreme_droite.jpeg"),
eg_button("Valider"), g_button("Valider"), c_button("Afficher\nles résultats"), d_button("Valider"), ed_button("Valider"),  
pBox(false, 10), eg_Box(false, 10), g_Box(false, 10), c_Box(false, 10), d_Box(false, 10), ed_Box(false, 10), box1(false, 10), box2(false, 10), gif(fichier)
{
	choix.set_text("\nLes élections sont terminées");
	set_title(titre);
	pBox.pack_start(gif, Gtk::PACK_SHRINK);
	pBox.pack_end(c_button, Gtk::PACK_SHRINK);
	c_button.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_Choix::affichage_resultats));
	add(pBox);
	// The final step is to display this newly created widget...
	this->show_all();
}

Fenetre_Choix::~Fenetre_Choix()
{
}

void Fenetre_Choix::menu_meeting()
{
	this->hide();
	Glib::ustring mess = "\nVous avez pu convaincre \n?n personnes";
	Fenetre_Reponse meeting("Elections Trump ;) - Menu Meeting", mess, "debat.gif", "Continuer", "Règles");
	Gtk::Main::run(meeting);
}

void Fenetre_Choix::menu_debat()
{
	this->hide();
	Fenetre_Debat debat;
	Gtk::Main::run(debat);
}

void Fenetre_Choix::start_elections()
{
		this->hide();
		Fenetre_Choix elections("Elections Trump ;) - Elections", "Johann", "win_loss.gif");
		Gtk::Main::run(elections);
}

void Fenetre_Choix::affichage_resultats()
{
	this->hide();
	Fenetre_Reponse resultats("Elections Trump ;) - Résultats", "Bravo ! ! ! \nVous avez gagné", "victory_bush.gif", "Rejouer", "Quitter");
	Gtk::Main::run(resultats);
}

void Fenetre_Choix::choix_eg()
{
		this->hide();
		Fenetre_Entry entry;
		Gtk::Main::run(entry);
}

void Fenetre_Choix::choix_g()
{
		this->hide();
		Fenetre_Entry entry;
		Gtk::Main::run(entry);
}

void Fenetre_Choix::choix_c()
{
		this->hide();
		Fenetre_Entry entry;
		Gtk::Main::run(entry);
}

void Fenetre_Choix::choix_d()
{
		this->hide();
		Fenetre_Entry entry;
		Gtk::Main::run(entry);
}

void Fenetre_Choix::choix_ed()
{
		this->hide();
		Fenetre_Entry entry;
		Gtk::Main::run(entry);
}





