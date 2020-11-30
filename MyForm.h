#pragma once


#include "CL_CAD.h"
#include "CL_TBCLIENT.h"
#include "CL_svc_gestionClient.h"
#include "CL_svc_gestionPersonnel.h"
#include "CL_svc_gestionAdresse.h"

namespace ProjetPOOG8A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tbPage_Informations;
	private: System::Windows::Forms::TabPage^ tbPage_GestionClient;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::TabControl^ tbC_MenuPrincipal;
	private: System::Windows::Forms::TabPage^ tbPage_GestionPersonnel;
	private: System::Windows::Forms::TabPage^ tbPage_GestionCommande;
	private: System::Windows::Forms::TabPage^ tbPage_GestionStock;
	private: System::Windows::Forms::TabPage^ tbPage_GestionStatistiques;





	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;






















	private: System::Windows::Forms::TabControl^ tbC_GestionStatistiques;

	private: System::Windows::Forms::TabPage^ tabPage22;
	private: System::Windows::Forms::TabPage^ tabPage23;
	private: System::Windows::Forms::TabPage^ tabPage24;
	private: System::Windows::Forms::TabPage^ tabPage25;
	private: System::Windows::Forms::TabPage^ tabPage26;
	private: System::Windows::Forms::TabPage^ tabPage27;
	private: System::Windows::Forms::TabPage^ tabPage28;
	private: System::Windows::Forms::TabPage^ tabPage29;
	private: System::Windows::Forms::TabPage^ tabPage30;


















	private: System::Windows::Forms::Button^ btn_GestionStatistiques;

	private: System::Windows::Forms::Button^ btn_GestionStock;

	private: System::Windows::Forms::Button^ btn_GestionCommande;

	private: System::Windows::Forms::Button^ btn_GestionPersonnel;

	private: System::Windows::Forms::Button^ btn_GestionClient;


	private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ txtBx_message_client;

private: System::Windows::Forms::GroupBox^ groupBox5;
private: System::Windows::Forms::Button^ btn_Modifier_client;
private: System::Windows::Forms::Button^ btn_first_client;



private: System::Windows::Forms::Button^ btn_Supprimer_client;
private: System::Windows::Forms::Button^ btn_left_client;


private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::Button^ btn_Nouveau_client;
private: System::Windows::Forms::Button^ btn_enregistrer_client;
private: System::Windows::Forms::Button^ btn_right_client;
private: System::Windows::Forms::Button^ btn_last_client;




private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ txtBx_ID_client;
private: System::Windows::Forms::TextBox^ txtBx_D1A_client;


private: System::Windows::Forms::TextBox^ txtBx_DDN_client;

private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::DataGridView^ dataGrid_adresse_livraison;

private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::TextBox^ txtBx_Nom_client_information;


private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::TextBox^ txtBx_Prenom_client_information;
private: System::Windows::Forms::TextBox^ txtBx_pays_client;



private: System::Windows::Forms::TextBox^ txtBx_email_client;


private: System::Windows::Forms::Label^ label85;

private: System::Windows::Forms::TextBox^ txtBx_code_postal_client;


private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Label^ label91;
private: System::Windows::Forms::TextBox^ txtBx_ville_client;

private: System::Windows::Forms::Label^ label90;


private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::Label^ label88;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::Button^ btn_selectionner_client;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::DataGridView^ dataGrid_DDN_client;

private: System::Windows::Forms::Button^ btn_rechercher_client;

private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ txtBx_nom_client_affichage;



private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ txtBx_Prenom_client_affichage;


private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ txtBx_message_personnel;

private: System::Windows::Forms::GroupBox^ groupBox6;
private: System::Windows::Forms::Button^ btn_Modifier_personnel;
private: System::Windows::Forms::Button^ btn_first_personnel;



private: System::Windows::Forms::Button^ btn_Supprimer_personnel;
private: System::Windows::Forms::Button^ btn_left_personnel;


private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::Button^ btn_Nouveau_personnel;
private: System::Windows::Forms::Button^ btn_enregistrer_personnel;
private: System::Windows::Forms::Button^ btn_right_personnel;
private: System::Windows::Forms::Button^ btn_last_personnel;




private: System::Windows::Forms::GroupBox^ groupBox8;
private: System::Windows::Forms::GroupBox^ groupBox10;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ txtBx_ID_SH;

private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ txtBx_prenom_SH;

private: System::Windows::Forms::TextBox^ txtBx_nom_SH;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ txtBx_ID_personnel;
private: System::Windows::Forms::TextBox^ txtBx_DE_personnel;


private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ txtBx_Nom_personnel_information;

private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ txtBx_Prenom_personnel_information;
private: System::Windows::Forms::TextBox^ txtBx_pays_personnel;



private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ txtBx_rue_personnel;
private: System::Windows::Forms::TextBox^ txtBx_code_postal_personnel;


private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ txtBx_ville_personnel;

private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::GroupBox^ groupBox9;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ txtBx_Nom_personnel_affichage;


private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ txtBx_Prenom_personnel_affichage;

private: System::Windows::Forms::GroupBox^ groupBox18;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::GroupBox^ groupBox15;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::GroupBox^ groupBox16;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::GroupBox^ groupBox17;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::TextBox^ textBox40;
private: System::Windows::Forms::TextBox^ textBox42;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::GroupBox^ groupBox11;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::GroupBox^ groupBox12;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::GroupBox^ groupBox13;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::GroupBox^ groupBox14;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::Label^ label42;















































































































































































































































	protected:

	protected:















	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;
		int index_client;
		int index_personnel;
		NS_Svc::CL_svc_gestionClient^ Client = gcnew NS_Svc::CL_svc_gestionClient();
		NS_Svc::CL_svc_gestionPersonnel^ Personnel = gcnew NS_Svc::CL_svc_gestionPersonnel();

private: System::Windows::Forms::TextBox^ txtBx_rue_client;

private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ txtBx_ID_adresse_client;


private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ txtBx_num_rue_client;

private: System::Windows::Forms::Label^ lbl1;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::DataGridView^ dataGridView3;




	   NS_Svc::CL_svc_gestionAdresse^ Adresse = gcnew NS_Svc::CL_svc_gestionAdresse();
private: System::Windows::Forms::TextBox^ txtBx_num_rue_personnel;

private: System::Windows::Forms::Label^ label21;
	   NS_Svc::CL_svc_gestionAdresse^ Adr = gcnew NS_Svc::CL_svc_gestionAdresse();

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbC_MenuPrincipal = (gcnew System::Windows::Forms::TabControl());
			this->tbPage_Informations = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_GestionStatistiques = (gcnew System::Windows::Forms::Button());
			this->btn_GestionStock = (gcnew System::Windows::Forms::Button());
			this->btn_GestionCommande = (gcnew System::Windows::Forms::Button());
			this->btn_GestionPersonnel = (gcnew System::Windows::Forms::Button());
			this->btn_GestionClient = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbPage_GestionClient = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtBx_message_client = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Modifier_client = (gcnew System::Windows::Forms::Button());
			this->btn_first_client = (gcnew System::Windows::Forms::Button());
			this->btn_Supprimer_client = (gcnew System::Windows::Forms::Button());
			this->btn_left_client = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Nouveau_client = (gcnew System::Windows::Forms::Button());
			this->btn_enregistrer_client = (gcnew System::Windows::Forms::Button());
			this->btn_right_client = (gcnew System::Windows::Forms::Button());
			this->btn_last_client = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->txtBx_ID_adresse_client = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->txtBx_rue_client = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtBx_ID_client = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_D1A_client = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_DDN_client = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGrid_adresse_livraison = (gcnew System::Windows::Forms::DataGridView());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->txtBx_Nom_client_information = (gcnew System::Windows::Forms::TextBox());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->txtBx_Prenom_client_information = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_pays_client = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_email_client = (gcnew System::Windows::Forms::TextBox());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->txtBx_num_rue_client = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_code_postal_client = (gcnew System::Windows::Forms::TextBox());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->txtBx_ville_client = (gcnew System::Windows::Forms::TextBox());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_selectionner_client = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGrid_DDN_client = (gcnew System::Windows::Forms::DataGridView());
			this->btn_rechercher_client = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBx_nom_client_affichage = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtBx_Prenom_client_affichage = (gcnew System::Windows::Forms::TextBox());
			this->tbPage_GestionPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtBx_message_personnel = (gcnew System::Windows::Forms::TextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Modifier_personnel = (gcnew System::Windows::Forms::Button());
			this->btn_first_personnel = (gcnew System::Windows::Forms::Button());
			this->btn_Supprimer_personnel = (gcnew System::Windows::Forms::Button());
			this->btn_left_personnel = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Nouveau_personnel = (gcnew System::Windows::Forms::Button());
			this->btn_enregistrer_personnel = (gcnew System::Windows::Forms::Button());
			this->btn_right_personnel = (gcnew System::Windows::Forms::Button());
			this->btn_last_personnel = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBx_num_rue_personnel = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtBx_ID_SH = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtBx_prenom_SH = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_nom_SH = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtBx_ID_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_DE_personnel = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtBx_Nom_personnel_information = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtBx_Prenom_personnel_information = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_pays_personnel = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtBx_rue_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_code_postal_personnel = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtBx_ville_personnel = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtBx_Nom_personnel_affichage = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtBx_Prenom_personnel_affichage = (gcnew System::Windows::Forms::TextBox());
			this->tbPage_GestionCommande = (gcnew System::Windows::Forms::TabPage());
			this->groupBox18 = (gcnew System::Windows::Forms::GroupBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->tbPage_GestionStock = (gcnew System::Windows::Forms::TabPage());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->tbPage_GestionStatistiques = (gcnew System::Windows::Forms::TabPage());
			this->tbC_GestionStatistiques = (gcnew System::Windows::Forms::TabControl());
			this->tabPage22 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage23 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage24 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage25 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage26 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage27 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage28 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage29 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage30 = (gcnew System::Windows::Forms::TabPage());
			this->tbC_MenuPrincipal->SuspendLayout();
			this->tbPage_Informations->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tbPage_GestionClient->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_adresse_livraison))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_DDN_client))->BeginInit();
			this->tbPage_GestionPersonnel->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tbPage_GestionCommande->SuspendLayout();
			this->groupBox18->SuspendLayout();
			this->groupBox15->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->groupBox17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->tbPage_GestionStock->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->tbPage_GestionStatistiques->SuspendLayout();
			this->tbC_GestionStatistiques->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbC_MenuPrincipal
			// 
			this->tbC_MenuPrincipal->Controls->Add(this->tbPage_Informations);
			this->tbC_MenuPrincipal->Controls->Add(this->tbPage_GestionClient);
			this->tbC_MenuPrincipal->Controls->Add(this->tbPage_GestionPersonnel);
			this->tbC_MenuPrincipal->Controls->Add(this->tbPage_GestionCommande);
			this->tbC_MenuPrincipal->Controls->Add(this->tbPage_GestionStock);
			this->tbC_MenuPrincipal->Controls->Add(this->tbPage_GestionStatistiques);
			this->tbC_MenuPrincipal->Location = System::Drawing::Point(-1, 2);
			this->tbC_MenuPrincipal->Multiline = true;
			this->tbC_MenuPrincipal->Name = L"tbC_MenuPrincipal";
			this->tbC_MenuPrincipal->SelectedIndex = 0;
			this->tbC_MenuPrincipal->Size = System::Drawing::Size(1015, 575);
			this->tbC_MenuPrincipal->TabIndex = 0;
			// 
			// tbPage_Informations
			// 
			this->tbPage_Informations->Controls->Add(this->groupBox1);
			this->tbPage_Informations->Location = System::Drawing::Point(4, 22);
			this->tbPage_Informations->Name = L"tbPage_Informations";
			this->tbPage_Informations->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_Informations->Size = System::Drawing::Size(1007, 549);
			this->tbPage_Informations->TabIndex = 0;
			this->tbPage_Informations->Text = L"Informations";
			this->tbPage_Informations->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_GestionStatistiques);
			this->groupBox1->Controls->Add(this->btn_GestionStock);
			this->groupBox1->Controls->Add(this->btn_GestionCommande);
			this->groupBox1->Controls->Add(this->btn_GestionPersonnel);
			this->groupBox1->Controls->Add(this->btn_GestionClient);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(191, 108);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(593, 325);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// btn_GestionStatistiques
			// 
			this->btn_GestionStatistiques->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_GestionStatistiques->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_GestionStatistiques->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_GestionStatistiques->FlatAppearance->BorderSize = 0;
			this->btn_GestionStatistiques->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_GestionStatistiques->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_GestionStatistiques->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_GestionStatistiques->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_GestionStatistiques->Location = System::Drawing::Point(468, 93);
			this->btn_GestionStatistiques->Name = L"btn_GestionStatistiques";
			this->btn_GestionStatistiques->Size = System::Drawing::Size(107, 42);
			this->btn_GestionStatistiques->TabIndex = 6;
			this->btn_GestionStatistiques->Text = L"Gestion statistiques";
			this->btn_GestionStatistiques->UseVisualStyleBackColor = false;
			this->btn_GestionStatistiques->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionStatistiques_Click);
			// 
			// btn_GestionStock
			// 
			this->btn_GestionStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_GestionStock->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_GestionStock->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_GestionStock->FlatAppearance->BorderSize = 0;
			this->btn_GestionStock->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_GestionStock->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_GestionStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_GestionStock->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_GestionStock->Location = System::Drawing::Point(355, 93);
			this->btn_GestionStock->Name = L"btn_GestionStock";
			this->btn_GestionStock->Size = System::Drawing::Size(107, 42);
			this->btn_GestionStock->TabIndex = 5;
			this->btn_GestionStock->Text = L"Gestion stock";
			this->btn_GestionStock->UseVisualStyleBackColor = false;
			this->btn_GestionStock->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionStock_Click);
			// 
			// btn_GestionCommande
			// 
			this->btn_GestionCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_GestionCommande->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_GestionCommande->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_GestionCommande->FlatAppearance->BorderSize = 0;
			this->btn_GestionCommande->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_GestionCommande->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_GestionCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_GestionCommande->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_GestionCommande->Location = System::Drawing::Point(242, 93);
			this->btn_GestionCommande->Name = L"btn_GestionCommande";
			this->btn_GestionCommande->Size = System::Drawing::Size(107, 42);
			this->btn_GestionCommande->TabIndex = 4;
			this->btn_GestionCommande->Text = L"Gestion commande";
			this->btn_GestionCommande->UseVisualStyleBackColor = false;
			this->btn_GestionCommande->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionCommande_Click);
			// 
			// btn_GestionPersonnel
			// 
			this->btn_GestionPersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_GestionPersonnel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_GestionPersonnel->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_GestionPersonnel->FlatAppearance->BorderSize = 0;
			this->btn_GestionPersonnel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_GestionPersonnel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_GestionPersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_GestionPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_GestionPersonnel->Location = System::Drawing::Point(129, 93);
			this->btn_GestionPersonnel->Name = L"btn_GestionPersonnel";
			this->btn_GestionPersonnel->Size = System::Drawing::Size(107, 42);
			this->btn_GestionPersonnel->TabIndex = 3;
			this->btn_GestionPersonnel->Text = L"Gestion personnel";
			this->btn_GestionPersonnel->UseVisualStyleBackColor = false;
			this->btn_GestionPersonnel->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionPersonnel_Click);
			// 
			// btn_GestionClient
			// 
			this->btn_GestionClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_GestionClient->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_GestionClient->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_GestionClient->FlatAppearance->BorderSize = 0;
			this->btn_GestionClient->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_GestionClient->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_GestionClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_GestionClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_GestionClient->Location = System::Drawing::Point(16, 93);
			this->btn_GestionClient->Name = L"btn_GestionClient";
			this->btn_GestionClient->Size = System::Drawing::Size(107, 42);
			this->btn_GestionClient->TabIndex = 2;
			this->btn_GestionClient->Text = L"Gestion client";
			this->btn_GestionClient->UseVisualStyleBackColor = false;
			this->btn_GestionClient->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionClient_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(154, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 133);
			this->label2->TabIndex = 1;
			this->label2->Text = L"| - Projet programmation orienté objet - |\r\n\r\nCréé par : \r\nAlexandre MOREAU\r\nAnto"
				L"nio ROSEMARY\r\nMaxime GERBER\r\nLudovic WITTMANN\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(153, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Selectionner l\'onglet voulu\r\n";
			// 
			// tbPage_GestionClient
			// 
			this->tbPage_GestionClient->Controls->Add(this->label7);
			this->tbPage_GestionClient->Controls->Add(this->txtBx_message_client);
			this->tbPage_GestionClient->Controls->Add(this->groupBox5);
			this->tbPage_GestionClient->Controls->Add(this->groupBox3);
			this->tbPage_GestionClient->Controls->Add(this->groupBox2);
			this->tbPage_GestionClient->Location = System::Drawing::Point(4, 22);
			this->tbPage_GestionClient->Name = L"tbPage_GestionClient";
			this->tbPage_GestionClient->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionClient->Size = System::Drawing::Size(1007, 549);
			this->tbPage_GestionClient->TabIndex = 1;
			this->tbPage_GestionClient->Text = L"Gestion Client";
			this->tbPage_GestionClient->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(313, 459);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 16);
			this->label7->TabIndex = 46;
			this->label7->Text = L"Message";
			// 
			// txtBx_message_client
			// 
			this->txtBx_message_client->Location = System::Drawing::Point(316, 478);
			this->txtBx_message_client->Multiline = true;
			this->txtBx_message_client->Name = L"txtBx_message_client";
			this->txtBx_message_client->Size = System::Drawing::Size(683, 53);
			this->txtBx_message_client->TabIndex = 50;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->btn_Modifier_client);
			this->groupBox5->Controls->Add(this->btn_first_client);
			this->groupBox5->Controls->Add(this->btn_Supprimer_client);
			this->groupBox5->Controls->Add(this->btn_left_client);
			this->groupBox5->Controls->Add(this->groupBox4);
			this->groupBox5->Controls->Add(this->btn_right_client);
			this->groupBox5->Controls->Add(this->btn_last_client);
			this->groupBox5->Location = System::Drawing::Point(52, 200);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(182, 308);
			this->groupBox5->TabIndex = 49;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Menu";
			// 
			// btn_Modifier_client
			// 
			this->btn_Modifier_client->Location = System::Drawing::Point(12, 21);
			this->btn_Modifier_client->Name = L"btn_Modifier_client";
			this->btn_Modifier_client->Size = System::Drawing::Size(157, 38);
			this->btn_Modifier_client->TabIndex = 48;
			this->btn_Modifier_client->Text = L"Modifier";
			this->btn_Modifier_client->UseVisualStyleBackColor = true;
			this->btn_Modifier_client->Click += gcnew System::EventHandler(this, &MyForm::btn_Modifier_client_Click);
			// 
			// btn_first_client
			// 
			this->btn_first_client->Location = System::Drawing::Point(6, 247);
			this->btn_first_client->Name = L"btn_first_client";
			this->btn_first_client->Size = System::Drawing::Size(38, 38);
			this->btn_first_client->TabIndex = 39;
			this->btn_first_client->Text = L"<<";
			this->btn_first_client->UseVisualStyleBackColor = true;
			this->btn_first_client->Click += gcnew System::EventHandler(this, &MyForm::btn_first_client_Click);
			// 
			// btn_Supprimer_client
			// 
			this->btn_Supprimer_client->Location = System::Drawing::Point(12, 65);
			this->btn_Supprimer_client->Name = L"btn_Supprimer_client";
			this->btn_Supprimer_client->Size = System::Drawing::Size(157, 38);
			this->btn_Supprimer_client->TabIndex = 45;
			this->btn_Supprimer_client->Text = L"Supprimer";
			this->btn_Supprimer_client->UseVisualStyleBackColor = true;
			this->btn_Supprimer_client->Click += gcnew System::EventHandler(this, &MyForm::btn_Supprimer_client_Click);
			// 
			// btn_left_client
			// 
			this->btn_left_client->Location = System::Drawing::Point(49, 247);
			this->btn_left_client->Name = L"btn_left_client";
			this->btn_left_client->Size = System::Drawing::Size(38, 38);
			this->btn_left_client->TabIndex = 40;
			this->btn_left_client->Text = L"<";
			this->btn_left_client->UseVisualStyleBackColor = true;
			this->btn_left_client->Click += gcnew System::EventHandler(this, &MyForm::btn_left_client_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btn_Nouveau_client);
			this->groupBox4->Controls->Add(this->btn_enregistrer_client);
			this->groupBox4->Location = System::Drawing::Point(6, 115);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(169, 117);
			this->groupBox4->TabIndex = 47;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Creer un nouveau client";
			// 
			// btn_Nouveau_client
			// 
			this->btn_Nouveau_client->Location = System::Drawing::Point(6, 19);
			this->btn_Nouveau_client->Name = L"btn_Nouveau_client";
			this->btn_Nouveau_client->Size = System::Drawing::Size(157, 38);
			this->btn_Nouveau_client->TabIndex = 44;
			this->btn_Nouveau_client->Text = L"Nouveau";
			this->btn_Nouveau_client->UseVisualStyleBackColor = true;
			this->btn_Nouveau_client->Click += gcnew System::EventHandler(this, &MyForm::btn_Nouveau_client_Click);
			// 
			// btn_enregistrer_client
			// 
			this->btn_enregistrer_client->Location = System::Drawing::Point(6, 63);
			this->btn_enregistrer_client->Name = L"btn_enregistrer_client";
			this->btn_enregistrer_client->Size = System::Drawing::Size(157, 38);
			this->btn_enregistrer_client->TabIndex = 43;
			this->btn_enregistrer_client->Text = L"Enregistrer";
			this->btn_enregistrer_client->UseVisualStyleBackColor = true;
			this->btn_enregistrer_client->Click += gcnew System::EventHandler(this, &MyForm::btn_enregistrer_client_Click);
			// 
			// btn_right_client
			// 
			this->btn_right_client->Location = System::Drawing::Point(93, 247);
			this->btn_right_client->Name = L"btn_right_client";
			this->btn_right_client->Size = System::Drawing::Size(38, 38);
			this->btn_right_client->TabIndex = 41;
			this->btn_right_client->Text = L">";
			this->btn_right_client->UseVisualStyleBackColor = true;
			this->btn_right_client->Click += gcnew System::EventHandler(this, &MyForm::btn_right_client_Click);
			// 
			// btn_last_client
			// 
			this->btn_last_client->Location = System::Drawing::Point(137, 247);
			this->btn_last_client->Name = L"btn_last_client";
			this->btn_last_client->Size = System::Drawing::Size(38, 38);
			this->btn_last_client->TabIndex = 42;
			this->btn_last_client->Text = L">>";
			this->btn_last_client->UseVisualStyleBackColor = true;
			this->btn_last_client->Click += gcnew System::EventHandler(this, &MyForm::btn_last_client_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label36);
			this->groupBox3->Controls->Add(this->dataGridView3);
			this->groupBox3->Controls->Add(this->txtBx_ID_adresse_client);
			this->groupBox3->Controls->Add(this->label35);
			this->groupBox3->Controls->Add(this->txtBx_rue_client);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->txtBx_ID_client);
			this->groupBox3->Controls->Add(this->txtBx_D1A_client);
			this->groupBox3->Controls->Add(this->txtBx_DDN_client);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->dataGrid_adresse_livraison);
			this->groupBox3->Controls->Add(this->label92);
			this->groupBox3->Controls->Add(this->txtBx_Nom_client_information);
			this->groupBox3->Controls->Add(this->label84);
			this->groupBox3->Controls->Add(this->txtBx_Prenom_client_information);
			this->groupBox3->Controls->Add(this->txtBx_pays_client);
			this->groupBox3->Controls->Add(this->txtBx_email_client);
			this->groupBox3->Controls->Add(this->label85);
			this->groupBox3->Controls->Add(this->txtBx_num_rue_client);
			this->groupBox3->Controls->Add(this->txtBx_code_postal_client);
			this->groupBox3->Controls->Add(this->label86);
			this->groupBox3->Controls->Add(this->label91);
			this->groupBox3->Controls->Add(this->txtBx_ville_client);
			this->groupBox3->Controls->Add(this->label90);
			this->groupBox3->Controls->Add(this->lbl1);
			this->groupBox3->Controls->Add(this->label89);
			this->groupBox3->Controls->Add(this->label88);
			this->groupBox3->Location = System::Drawing::Point(316, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(683, 450);
			this->groupBox3->TabIndex = 38;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Information";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(220, 192);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(133, 16);
			this->label36->TabIndex = 49;
			this->label36->Text = L"Commande(s) du client";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(213, 211);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(462, 232);
			this->dataGridView3->TabIndex = 48;
			// 
			// txtBx_ID_adresse_client
			// 
			this->txtBx_ID_adresse_client->Enabled = false;
			this->txtBx_ID_adresse_client->Location = System::Drawing::Point(149, 269);
			this->txtBx_ID_adresse_client->Name = L"txtBx_ID_adresse_client";
			this->txtBx_ID_adresse_client->Size = System::Drawing::Size(58, 20);
			this->txtBx_ID_adresse_client->TabIndex = 46;
			this->txtBx_ID_adresse_client->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(85, 272);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(58, 13);
			this->label35->TabIndex = 47;
			this->label35->Text = L"ID adresse";
			this->label35->Click += gcnew System::EventHandler(this, &MyForm::label35_Click);
			// 
			// txtBx_rue_client
			// 
			this->txtBx_rue_client->Location = System::Drawing::Point(37, 294);
			this->txtBx_rue_client->Name = L"txtBx_rue_client";
			this->txtBx_rue_client->Size = System::Drawing::Size(170, 20);
			this->txtBx_rue_client->TabIndex = 44;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(6, 297);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(27, 13);
			this->label32->TabIndex = 45;
			this->label32->Text = L"Rue";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(6, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 16);
			this->label9->TabIndex = 43;
			this->label9->Text = L"ID Client";
			// 
			// txtBx_ID_client
			// 
			this->txtBx_ID_client->Enabled = false;
			this->txtBx_ID_client->Location = System::Drawing::Point(9, 32);
			this->txtBx_ID_client->Name = L"txtBx_ID_client";
			this->txtBx_ID_client->Size = System::Drawing::Size(200, 20);
			this->txtBx_ID_client->TabIndex = 42;
			// 
			// txtBx_D1A_client
			// 
			this->txtBx_D1A_client->Location = System::Drawing::Point(9, 420);
			this->txtBx_D1A_client->Name = L"txtBx_D1A_client";
			this->txtBx_D1A_client->Size = System::Drawing::Size(200, 20);
			this->txtBx_D1A_client->TabIndex = 41;
			// 
			// txtBx_DDN_client
			// 
			this->txtBx_DDN_client->Location = System::Drawing::Point(9, 216);
			this->txtBx_DDN_client->Name = L"txtBx_DDN_client";
			this->txtBx_DDN_client->Size = System::Drawing::Size(200, 20);
			this->txtBx_DDN_client->TabIndex = 40;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 401);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 16);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Date de premier achat";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(222, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 16);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Adresse(s) de livraison";
			// 
			// dataGrid_adresse_livraison
			// 
			this->dataGrid_adresse_livraison->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_adresse_livraison->Location = System::Drawing::Point(215, 27);
			this->dataGrid_adresse_livraison->Name = L"dataGrid_adresse_livraison";
			this->dataGrid_adresse_livraison->Size = System::Drawing::Size(462, 156);
			this->dataGrid_adresse_livraison->TabIndex = 37;
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->Location = System::Drawing::Point(6, 55);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(35, 16);
			this->label92->TabIndex = 25;
			this->label92->Text = L"Nom";
			// 
			// txtBx_Nom_client_information
			// 
			this->txtBx_Nom_client_information->Location = System::Drawing::Point(9, 71);
			this->txtBx_Nom_client_information->Name = L"txtBx_Nom_client_information";
			this->txtBx_Nom_client_information->Size = System::Drawing::Size(200, 20);
			this->txtBx_Nom_client_information->TabIndex = 20;
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(6, 375);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(30, 13);
			this->label84->TabIndex = 36;
			this->label84->Text = L"Pays";
			// 
			// txtBx_Prenom_client_information
			// 
			this->txtBx_Prenom_client_information->Location = System::Drawing::Point(9, 114);
			this->txtBx_Prenom_client_information->Name = L"txtBx_Prenom_client_information";
			this->txtBx_Prenom_client_information->Size = System::Drawing::Size(200, 20);
			this->txtBx_Prenom_client_information->TabIndex = 21;
			// 
			// txtBx_pays_client
			// 
			this->txtBx_pays_client->Location = System::Drawing::Point(37, 372);
			this->txtBx_pays_client->Name = L"txtBx_pays_client";
			this->txtBx_pays_client->Size = System::Drawing::Size(170, 20);
			this->txtBx_pays_client->TabIndex = 35;
			// 
			// txtBx_email_client
			// 
			this->txtBx_email_client->Location = System::Drawing::Point(9, 163);
			this->txtBx_email_client->Name = L"txtBx_email_client";
			this->txtBx_email_client->Size = System::Drawing::Size(200, 20);
			this->txtBx_email_client->TabIndex = 22;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(6, 349);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(63, 13);
			this->label85->TabIndex = 34;
			this->label85->Text = L"Code postal";
			// 
			// txtBx_num_rue_client
			// 
			this->txtBx_num_rue_client->Location = System::Drawing::Point(37, 269);
			this->txtBx_num_rue_client->Name = L"txtBx_num_rue_client";
			this->txtBx_num_rue_client->Size = System::Drawing::Size(42, 20);
			this->txtBx_num_rue_client->TabIndex = 23;
			// 
			// txtBx_code_postal_client
			// 
			this->txtBx_code_postal_client->Location = System::Drawing::Point(75, 346);
			this->txtBx_code_postal_client->Name = L"txtBx_code_postal_client";
			this->txtBx_code_postal_client->Size = System::Drawing::Size(132, 20);
			this->txtBx_code_postal_client->TabIndex = 33;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(6, 323);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(26, 13);
			this->label86->TabIndex = 32;
			this->label86->Text = L"Ville";
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label91->Location = System::Drawing::Point(6, 98);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(51, 16);
			this->label91->TabIndex = 26;
			this->label91->Text = L"Prenom";
			// 
			// txtBx_ville_client
			// 
			this->txtBx_ville_client->Location = System::Drawing::Point(37, 320);
			this->txtBx_ville_client->Name = L"txtBx_ville_client";
			this->txtBx_ville_client->Size = System::Drawing::Size(170, 20);
			this->txtBx_ville_client->TabIndex = 31;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label90->Location = System::Drawing::Point(6, 197);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(104, 16);
			this->label90->TabIndex = 27;
			this->label90->Text = L"Date de naissance";
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(6, 272);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(29, 13);
			this->lbl1->TabIndex = 30;
			this->lbl1->Text = L"Num";
			this->lbl1->Click += gcnew System::EventHandler(this, &MyForm::label87_Click);
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label89->Location = System::Drawing::Point(6, 147);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(37, 16);
			this->label89->TabIndex = 28;
			this->label89->Text = L"Email";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label88->Location = System::Drawing::Point(6, 248);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(130, 16);
			this->label88->TabIndex = 29;
			this->label88->Text = L"Adresse de facturation";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btn_selectionner_client);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->dataGrid_DDN_client);
			this->groupBox2->Controls->Add(this->btn_rechercher_client);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txtBx_nom_client_affichage);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->txtBx_Prenom_client_affichage);
			this->groupBox2->Location = System::Drawing::Point(9, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(301, 164);
			this->groupBox2->TabIndex = 37;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Affichage";
			// 
			// btn_selectionner_client
			// 
			this->btn_selectionner_client->Location = System::Drawing::Point(33, 130);
			this->btn_selectionner_client->Name = L"btn_selectionner_client";
			this->btn_selectionner_client->Size = System::Drawing::Size(75, 23);
			this->btn_selectionner_client->TabIndex = 45;
			this->btn_selectionner_client->Text = L"Selectionner";
			this->btn_selectionner_client->UseVisualStyleBackColor = true;
			this->btn_selectionner_client->Click += gcnew System::EventHandler(this, &MyForm::btn_selectionner_client_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(134, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 16);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Date de naissance";
			// 
			// dataGrid_DDN_client
			// 
			this->dataGrid_DDN_client->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGrid_DDN_client->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_DDN_client->Location = System::Drawing::Point(137, 32);
			this->dataGrid_DDN_client->Name = L"dataGrid_DDN_client";
			this->dataGrid_DDN_client->Size = System::Drawing::Size(158, 121);
			this->dataGrid_DDN_client->TabIndex = 43;
			// 
			// btn_rechercher_client
			// 
			this->btn_rechercher_client->Location = System::Drawing::Point(33, 101);
			this->btn_rechercher_client->Name = L"btn_rechercher_client";
			this->btn_rechercher_client->Size = System::Drawing::Size(75, 23);
			this->btn_rechercher_client->TabIndex = 42;
			this->btn_rechercher_client->Text = L"Rechercher";
			this->btn_rechercher_client->UseVisualStyleBackColor = true;
			this->btn_rechercher_client->Click += gcnew System::EventHandler(this, &MyForm::btn_rechercher_client_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 16);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Prenom";
			// 
			// txtBx_nom_client_affichage
			// 
			this->txtBx_nom_client_affichage->Location = System::Drawing::Point(14, 32);
			this->txtBx_nom_client_affichage->Name = L"txtBx_nom_client_affichage";
			this->txtBx_nom_client_affichage->Size = System::Drawing::Size(117, 20);
			this->txtBx_nom_client_affichage->TabIndex = 38;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 16);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Nom";
			// 
			// txtBx_Prenom_client_affichage
			// 
			this->txtBx_Prenom_client_affichage->Location = System::Drawing::Point(14, 75);
			this->txtBx_Prenom_client_affichage->Name = L"txtBx_Prenom_client_affichage";
			this->txtBx_Prenom_client_affichage->Size = System::Drawing::Size(117, 20);
			this->txtBx_Prenom_client_affichage->TabIndex = 39;
			this->txtBx_Prenom_client_affichage->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// tbPage_GestionPersonnel
			// 
			this->tbPage_GestionPersonnel->Controls->Add(this->label10);
			this->tbPage_GestionPersonnel->Controls->Add(this->txtBx_message_personnel);
			this->tbPage_GestionPersonnel->Controls->Add(this->groupBox6);
			this->tbPage_GestionPersonnel->Controls->Add(this->groupBox8);
			this->tbPage_GestionPersonnel->Controls->Add(this->groupBox9);
			this->tbPage_GestionPersonnel->Location = System::Drawing::Point(4, 22);
			this->tbPage_GestionPersonnel->Name = L"tbPage_GestionPersonnel";
			this->tbPage_GestionPersonnel->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionPersonnel->Size = System::Drawing::Size(1007, 549);
			this->tbPage_GestionPersonnel->TabIndex = 2;
			this->tbPage_GestionPersonnel->Text = L"Gestion Personnel";
			this->tbPage_GestionPersonnel->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(313, 435);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 16);
			this->label10->TabIndex = 53;
			this->label10->Text = L"Message";
			// 
			// txtBx_message_personnel
			// 
			this->txtBx_message_personnel->Location = System::Drawing::Point(316, 454);
			this->txtBx_message_personnel->Multiline = true;
			this->txtBx_message_personnel->Name = L"txtBx_message_personnel";
			this->txtBx_message_personnel->Size = System::Drawing::Size(683, 77);
			this->txtBx_message_personnel->TabIndex = 55;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->btn_Modifier_personnel);
			this->groupBox6->Controls->Add(this->btn_first_personnel);
			this->groupBox6->Controls->Add(this->btn_Supprimer_personnel);
			this->groupBox6->Controls->Add(this->btn_left_personnel);
			this->groupBox6->Controls->Add(this->groupBox7);
			this->groupBox6->Controls->Add(this->btn_right_personnel);
			this->groupBox6->Controls->Add(this->btn_last_personnel);
			this->groupBox6->Location = System::Drawing::Point(52, 200);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(182, 308);
			this->groupBox6->TabIndex = 54;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Menu";
			// 
			// btn_Modifier_personnel
			// 
			this->btn_Modifier_personnel->Location = System::Drawing::Point(12, 21);
			this->btn_Modifier_personnel->Name = L"btn_Modifier_personnel";
			this->btn_Modifier_personnel->Size = System::Drawing::Size(157, 38);
			this->btn_Modifier_personnel->TabIndex = 48;
			this->btn_Modifier_personnel->Text = L"Modifier";
			this->btn_Modifier_personnel->UseVisualStyleBackColor = true;
			this->btn_Modifier_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_Modifier_personnel_Click);
			// 
			// btn_first_personnel
			// 
			this->btn_first_personnel->Location = System::Drawing::Point(6, 247);
			this->btn_first_personnel->Name = L"btn_first_personnel";
			this->btn_first_personnel->Size = System::Drawing::Size(38, 38);
			this->btn_first_personnel->TabIndex = 39;
			this->btn_first_personnel->Text = L"<<";
			this->btn_first_personnel->UseVisualStyleBackColor = true;
			this->btn_first_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_first_personnel_Click);
			// 
			// btn_Supprimer_personnel
			// 
			this->btn_Supprimer_personnel->Location = System::Drawing::Point(12, 65);
			this->btn_Supprimer_personnel->Name = L"btn_Supprimer_personnel";
			this->btn_Supprimer_personnel->Size = System::Drawing::Size(157, 38);
			this->btn_Supprimer_personnel->TabIndex = 45;
			this->btn_Supprimer_personnel->Text = L"Supprimer";
			this->btn_Supprimer_personnel->UseVisualStyleBackColor = true;
			this->btn_Supprimer_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_Supprimer_personnel_Click);
			// 
			// btn_left_personnel
			// 
			this->btn_left_personnel->Location = System::Drawing::Point(49, 247);
			this->btn_left_personnel->Name = L"btn_left_personnel";
			this->btn_left_personnel->Size = System::Drawing::Size(38, 38);
			this->btn_left_personnel->TabIndex = 40;
			this->btn_left_personnel->Text = L"<";
			this->btn_left_personnel->UseVisualStyleBackColor = true;
			this->btn_left_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_left_personnel_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->btn_Nouveau_personnel);
			this->groupBox7->Controls->Add(this->btn_enregistrer_personnel);
			this->groupBox7->Location = System::Drawing::Point(6, 115);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(169, 117);
			this->groupBox7->TabIndex = 47;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Creer un nouveau client";
			// 
			// btn_Nouveau_personnel
			// 
			this->btn_Nouveau_personnel->Location = System::Drawing::Point(6, 19);
			this->btn_Nouveau_personnel->Name = L"btn_Nouveau_personnel";
			this->btn_Nouveau_personnel->Size = System::Drawing::Size(157, 38);
			this->btn_Nouveau_personnel->TabIndex = 44;
			this->btn_Nouveau_personnel->Text = L"Nouveau";
			this->btn_Nouveau_personnel->UseVisualStyleBackColor = true;
			this->btn_Nouveau_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_Nouveau_personnel_Click);
			// 
			// btn_enregistrer_personnel
			// 
			this->btn_enregistrer_personnel->Location = System::Drawing::Point(6, 63);
			this->btn_enregistrer_personnel->Name = L"btn_enregistrer_personnel";
			this->btn_enregistrer_personnel->Size = System::Drawing::Size(157, 38);
			this->btn_enregistrer_personnel->TabIndex = 43;
			this->btn_enregistrer_personnel->Text = L"Enregistrer";
			this->btn_enregistrer_personnel->UseVisualStyleBackColor = true;
			this->btn_enregistrer_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_enregistrer_personnel_Click);
			// 
			// btn_right_personnel
			// 
			this->btn_right_personnel->Location = System::Drawing::Point(93, 247);
			this->btn_right_personnel->Name = L"btn_right_personnel";
			this->btn_right_personnel->Size = System::Drawing::Size(38, 38);
			this->btn_right_personnel->TabIndex = 41;
			this->btn_right_personnel->Text = L">";
			this->btn_right_personnel->UseVisualStyleBackColor = true;
			this->btn_right_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_right_personnel_Click);
			// 
			// btn_last_personnel
			// 
			this->btn_last_personnel->Location = System::Drawing::Point(137, 247);
			this->btn_last_personnel->Name = L"btn_last_personnel";
			this->btn_last_personnel->Size = System::Drawing::Size(38, 38);
			this->btn_last_personnel->TabIndex = 42;
			this->btn_last_personnel->Text = L">>";
			this->btn_last_personnel->UseVisualStyleBackColor = true;
			this->btn_last_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_last_personnel_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->txtBx_num_rue_personnel);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->groupBox10);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->txtBx_ID_personnel);
			this->groupBox8->Controls->Add(this->txtBx_DE_personnel);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->txtBx_Nom_personnel_information);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->txtBx_Prenom_personnel_information);
			this->groupBox8->Controls->Add(this->txtBx_pays_personnel);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->txtBx_rue_personnel);
			this->groupBox8->Controls->Add(this->txtBx_code_postal_personnel);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->txtBx_ville_personnel);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Location = System::Drawing::Point(316, 6);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(683, 426);
			this->groupBox8->TabIndex = 52;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Information";
			// 
			// txtBx_num_rue_personnel
			// 
			this->txtBx_num_rue_personnel->Location = System::Drawing::Point(39, 238);
			this->txtBx_num_rue_personnel->Name = L"txtBx_num_rue_personnel";
			this->txtBx_num_rue_personnel->Size = System::Drawing::Size(170, 20);
			this->txtBx_num_rue_personnel->TabIndex = 45;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(8, 241);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(29, 13);
			this->label21->TabIndex = 46;
			this->label21->Text = L"Num";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->label12);
			this->groupBox10->Controls->Add(this->txtBx_ID_SH);
			this->groupBox10->Controls->Add(this->label26);
			this->groupBox10->Controls->Add(this->label13);
			this->groupBox10->Controls->Add(this->txtBx_prenom_SH);
			this->groupBox10->Controls->Add(this->txtBx_nom_SH);
			this->groupBox10->Location = System::Drawing::Point(305, 98);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(319, 155);
			this->groupBox10->TabIndex = 44;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Superieur hierarchique";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(17, 17);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(146, 16);
			this->label12->TabIndex = 50;
			this->label12->Text = L"ID superieur hierarchique";
			// 
			// txtBx_ID_SH
			// 
			this->txtBx_ID_SH->Location = System::Drawing::Point(20, 33);
			this->txtBx_ID_SH->Name = L"txtBx_ID_SH";
			this->txtBx_ID_SH->Size = System::Drawing::Size(200, 20);
			this->txtBx_ID_SH->TabIndex = 49;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(17, 99);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(193, 16);
			this->label26->TabIndex = 48;
			this->label26->Text = L"Prenom du superieur hierarchique";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(17, 56);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(177, 16);
			this->label13->TabIndex = 47;
			this->label13->Text = L"Nom du superieur hierarchique";
			// 
			// txtBx_prenom_SH
			// 
			this->txtBx_prenom_SH->Location = System::Drawing::Point(20, 115);
			this->txtBx_prenom_SH->Name = L"txtBx_prenom_SH";
			this->txtBx_prenom_SH->Size = System::Drawing::Size(200, 20);
			this->txtBx_prenom_SH->TabIndex = 46;
			// 
			// txtBx_nom_SH
			// 
			this->txtBx_nom_SH->Location = System::Drawing::Point(20, 72);
			this->txtBx_nom_SH->Name = L"txtBx_nom_SH";
			this->txtBx_nom_SH->Size = System::Drawing::Size(200, 20);
			this->txtBx_nom_SH->TabIndex = 45;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(6, 16);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(77, 16);
			this->label11->TabIndex = 43;
			this->label11->Text = L"ID Personnel";
			// 
			// txtBx_ID_personnel
			// 
			this->txtBx_ID_personnel->Enabled = false;
			this->txtBx_ID_personnel->Location = System::Drawing::Point(9, 32);
			this->txtBx_ID_personnel->Name = L"txtBx_ID_personnel";
			this->txtBx_ID_personnel->Size = System::Drawing::Size(200, 20);
			this->txtBx_ID_personnel->TabIndex = 42;
			// 
			// txtBx_DE_personnel
			// 
			this->txtBx_DE_personnel->Location = System::Drawing::Point(9, 170);
			this->txtBx_DE_personnel->Name = L"txtBx_DE_personnel";
			this->txtBx_DE_personnel->Size = System::Drawing::Size(200, 20);
			this->txtBx_DE_personnel->TabIndex = 40;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(6, 55);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 16);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Nom";
			// 
			// txtBx_Nom_personnel_information
			// 
			this->txtBx_Nom_personnel_information->Location = System::Drawing::Point(9, 71);
			this->txtBx_Nom_personnel_information->Name = L"txtBx_Nom_personnel_information";
			this->txtBx_Nom_personnel_information->Size = System::Drawing::Size(200, 20);
			this->txtBx_Nom_personnel_information->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(8, 345);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(30, 13);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Pays";
			// 
			// txtBx_Prenom_personnel_information
			// 
			this->txtBx_Prenom_personnel_information->Location = System::Drawing::Point(9, 114);
			this->txtBx_Prenom_personnel_information->Name = L"txtBx_Prenom_personnel_information";
			this->txtBx_Prenom_personnel_information->Size = System::Drawing::Size(200, 20);
			this->txtBx_Prenom_personnel_information->TabIndex = 21;
			// 
			// txtBx_pays_personnel
			// 
			this->txtBx_pays_personnel->Location = System::Drawing::Point(39, 342);
			this->txtBx_pays_personnel->Name = L"txtBx_pays_personnel";
			this->txtBx_pays_personnel->Size = System::Drawing::Size(170, 20);
			this->txtBx_pays_personnel->TabIndex = 35;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(8, 319);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 13);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Code postal";
			// 
			// txtBx_rue_personnel
			// 
			this->txtBx_rue_personnel->Location = System::Drawing::Point(39, 264);
			this->txtBx_rue_personnel->Name = L"txtBx_rue_personnel";
			this->txtBx_rue_personnel->Size = System::Drawing::Size(170, 20);
			this->txtBx_rue_personnel->TabIndex = 23;
			// 
			// txtBx_code_postal_personnel
			// 
			this->txtBx_code_postal_personnel->Location = System::Drawing::Point(77, 316);
			this->txtBx_code_postal_personnel->Name = L"txtBx_code_postal_personnel";
			this->txtBx_code_postal_personnel->Size = System::Drawing::Size(132, 20);
			this->txtBx_code_postal_personnel->TabIndex = 33;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(8, 293);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(26, 13);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Ville";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(6, 98);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 16);
			this->label18->TabIndex = 26;
			this->label18->Text = L"Prenom";
			// 
			// txtBx_ville_personnel
			// 
			this->txtBx_ville_personnel->Location = System::Drawing::Point(39, 290);
			this->txtBx_ville_personnel->Name = L"txtBx_ville_personnel";
			this->txtBx_ville_personnel->Size = System::Drawing::Size(170, 20);
			this->txtBx_ville_personnel->TabIndex = 31;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(6, 151);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(103, 16);
			this->label19->TabIndex = 27;
			this->label19->Text = L"Date d\'embauche";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(8, 267);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(27, 13);
			this->label20->TabIndex = 30;
			this->label20->Text = L"Rue";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(6, 215);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(119, 16);
			this->label22->TabIndex = 29;
			this->label22->Text = L"Adresse d\'habitation";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->button19);
			this->groupBox9->Controls->Add(this->label23);
			this->groupBox9->Controls->Add(this->dataGridView4);
			this->groupBox9->Controls->Add(this->button20);
			this->groupBox9->Controls->Add(this->label24);
			this->groupBox9->Controls->Add(this->txtBx_Nom_personnel_affichage);
			this->groupBox9->Controls->Add(this->label25);
			this->groupBox9->Controls->Add(this->txtBx_Prenom_personnel_affichage);
			this->groupBox9->Location = System::Drawing::Point(9, 6);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(301, 164);
			this->groupBox9->TabIndex = 51;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Affichage";
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(33, 130);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 45;
			this->button19->Text = L"Selectionner";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(134, 16);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(103, 16);
			this->label23->TabIndex = 44;
			this->label23->Text = L"Date d\'embauche";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(137, 32);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(158, 121);
			this->dataGridView4->TabIndex = 43;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(33, 101);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 42;
			this->button20->Text = L"Rechercher";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(11, 59);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(51, 16);
			this->label24->TabIndex = 41;
			this->label24->Text = L"Prenom";
			// 
			// txtBx_Nom_personnel_affichage
			// 
			this->txtBx_Nom_personnel_affichage->Location = System::Drawing::Point(14, 32);
			this->txtBx_Nom_personnel_affichage->Name = L"txtBx_Nom_personnel_affichage";
			this->txtBx_Nom_personnel_affichage->Size = System::Drawing::Size(117, 20);
			this->txtBx_Nom_personnel_affichage->TabIndex = 38;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(11, 16);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(35, 16);
			this->label25->TabIndex = 40;
			this->label25->Text = L"Nom";
			// 
			// txtBx_Prenom_personnel_affichage
			// 
			this->txtBx_Prenom_personnel_affichage->Location = System::Drawing::Point(14, 75);
			this->txtBx_Prenom_personnel_affichage->Name = L"txtBx_Prenom_personnel_affichage";
			this->txtBx_Prenom_personnel_affichage->Size = System::Drawing::Size(117, 20);
			this->txtBx_Prenom_personnel_affichage->TabIndex = 39;
			// 
			// tbPage_GestionCommande
			// 
			this->tbPage_GestionCommande->Controls->Add(this->groupBox18);
			this->tbPage_GestionCommande->Controls->Add(this->label43);
			this->tbPage_GestionCommande->Controls->Add(this->textBox35);
			this->tbPage_GestionCommande->Controls->Add(this->groupBox15);
			this->tbPage_GestionCommande->Controls->Add(this->groupBox17);
			this->tbPage_GestionCommande->Location = System::Drawing::Point(4, 22);
			this->tbPage_GestionCommande->Name = L"tbPage_GestionCommande";
			this->tbPage_GestionCommande->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionCommande->Size = System::Drawing::Size(1007, 549);
			this->tbPage_GestionCommande->TabIndex = 3;
			this->tbPage_GestionCommande->Text = L"Gestion Commande";
			this->tbPage_GestionCommande->UseVisualStyleBackColor = true;
			this->tbPage_GestionCommande->Click += gcnew System::EventHandler(this, &MyForm::tbPage_GestionCommande_Click);
			// 
			// groupBox18
			// 
			this->groupBox18->Controls->Add(this->button29);
			this->groupBox18->Controls->Add(this->textBox26);
			this->groupBox18->Controls->Add(this->label31);
			this->groupBox18->Location = System::Drawing::Point(64, 38);
			this->groupBox18->Name = L"groupBox18";
			this->groupBox18->Size = System::Drawing::Size(157, 103);
			this->groupBox18->TabIndex = 56;
			this->groupBox18->TabStop = false;
			this->groupBox18->Text = L"Affichage";
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(37, 71);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(82, 23);
			this->button29->TabIndex = 42;
			this->button29->Text = L"Rechercher";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(20, 45);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(117, 20);
			this->textBox26->TabIndex = 38;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(17, 29);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(113, 16);
			this->label31->TabIndex = 40;
			this->label31->Text = L"ID de la commande";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(313, 435);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(54, 16);
			this->label43->TabIndex = 53;
			this->label43->Text = L"Message";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(316, 454);
			this->textBox35->Multiline = true;
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(683, 77);
			this->textBox35->TabIndex = 55;
			// 
			// groupBox15
			// 
			this->groupBox15->Controls->Add(this->button31);
			this->groupBox15->Controls->Add(this->button32);
			this->groupBox15->Controls->Add(this->button33);
			this->groupBox15->Controls->Add(this->button34);
			this->groupBox15->Controls->Add(this->groupBox16);
			this->groupBox15->Controls->Add(this->button37);
			this->groupBox15->Controls->Add(this->button38);
			this->groupBox15->Location = System::Drawing::Point(52, 200);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(182, 308);
			this->groupBox15->TabIndex = 54;
			this->groupBox15->TabStop = false;
			this->groupBox15->Text = L"Menu";
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(12, 21);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(157, 38);
			this->button31->TabIndex = 48;
			this->button31->Text = L"Modifier";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(6, 247);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(38, 38);
			this->button32->TabIndex = 39;
			this->button32->Text = L"<<";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(12, 65);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(157, 38);
			this->button33->TabIndex = 45;
			this->button33->Text = L"Supprimer";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(49, 247);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(38, 38);
			this->button34->TabIndex = 40;
			this->button34->Text = L"<";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// groupBox16
			// 
			this->groupBox16->Controls->Add(this->button35);
			this->groupBox16->Controls->Add(this->button36);
			this->groupBox16->Location = System::Drawing::Point(6, 115);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(169, 117);
			this->groupBox16->TabIndex = 47;
			this->groupBox16->TabStop = false;
			this->groupBox16->Text = L"Creer un nouveau client";
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(6, 19);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(157, 38);
			this->button35->TabIndex = 44;
			this->button35->Text = L"Nouveau";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(6, 63);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(157, 38);
			this->button36->TabIndex = 43;
			this->button36->Text = L"Enregistrer";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(93, 247);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(38, 38);
			this->button37->TabIndex = 41;
			this->button37->Text = L">";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(137, 247);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(38, 38);
			this->button38->TabIndex = 42;
			this->button38->Text = L">>";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// groupBox17
			// 
			this->groupBox17->Controls->Add(this->textBox27);
			this->groupBox17->Controls->Add(this->textBox29);
			this->groupBox17->Controls->Add(this->label33);
			this->groupBox17->Controls->Add(this->label34);
			this->groupBox17->Controls->Add(this->label44);
			this->groupBox17->Controls->Add(this->textBox36);
			this->groupBox17->Controls->Add(this->textBox38);
			this->groupBox17->Controls->Add(this->label46);
			this->groupBox17->Controls->Add(this->dataGridView6);
			this->groupBox17->Controls->Add(this->label47);
			this->groupBox17->Controls->Add(this->textBox39);
			this->groupBox17->Controls->Add(this->textBox40);
			this->groupBox17->Controls->Add(this->textBox42);
			this->groupBox17->Controls->Add(this->label51);
			this->groupBox17->Controls->Add(this->label52);
			this->groupBox17->Controls->Add(this->label54);
			this->groupBox17->Location = System::Drawing::Point(316, 6);
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->Size = System::Drawing::Size(683, 426);
			this->groupBox17->TabIndex = 52;
			this->groupBox17->TabStop = false;
			this->groupBox17->Text = L"Information";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(9, 315);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(200, 20);
			this->textBox27->TabIndex = 49;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(9, 262);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(200, 20);
			this->textBox29->TabIndex = 45;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(6, 296);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(47, 16);
			this->label33->TabIndex = 47;
			this->label33->Text = L"Remise";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(6, 246);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(94, 16);
			this->label34->TabIndex = 48;
			this->label34->Text = L"Date d\'émission";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(6, 16);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(113, 16);
			this->label44->TabIndex = 43;
			this->label44->Text = L"ID de la commande";
			// 
			// textBox36
			// 
			this->textBox36->Enabled = false;
			this->textBox36->Location = System::Drawing::Point(9, 32);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(200, 20);
			this->textBox36->TabIndex = 42;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(9, 216);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(200, 20);
			this->textBox38->TabIndex = 40;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(222, 11);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(117, 16);
			this->label46->TabIndex = 38;
			this->label46->Text = L"Ligne de commande";
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(215, 27);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(462, 383);
			this->dataGridView6->TabIndex = 37;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(6, 55);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(54, 16);
			this->label47->TabIndex = 25;
			this->label47->Text = L"ID client";
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(9, 71);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(200, 20);
			this->textBox39->TabIndex = 20;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(9, 114);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(200, 20);
			this->textBox40->TabIndex = 21;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(9, 163);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(200, 20);
			this->textBox42->TabIndex = 22;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(6, 98);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(76, 16);
			this->label51->TabIndex = 26;
			this->label51->Text = L"Nom société";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(6, 197);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(107, 16);
			this->label52->TabIndex = 27;
			this->label52->Text = L"Date de payement";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(6, 147);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(109, 16);
			this->label54->TabIndex = 28;
			this->label54->Text = L"Mode de paiement";
			// 
			// tbPage_GestionStock
			// 
			this->tbPage_GestionStock->Controls->Add(this->label27);
			this->tbPage_GestionStock->Controls->Add(this->textBox22);
			this->tbPage_GestionStock->Controls->Add(this->groupBox11);
			this->tbPage_GestionStock->Controls->Add(this->groupBox13);
			this->tbPage_GestionStock->Controls->Add(this->groupBox14);
			this->tbPage_GestionStock->Location = System::Drawing::Point(4, 22);
			this->tbPage_GestionStock->Name = L"tbPage_GestionStock";
			this->tbPage_GestionStock->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionStock->Size = System::Drawing::Size(1007, 549);
			this->tbPage_GestionStock->TabIndex = 4;
			this->tbPage_GestionStock->Text = L"Gestion Stock";
			this->tbPage_GestionStock->UseVisualStyleBackColor = true;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(313, 435);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(54, 16);
			this->label27->TabIndex = 53;
			this->label27->Text = L"Message";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(316, 454);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(683, 77);
			this->textBox22->TabIndex = 55;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->button21);
			this->groupBox11->Controls->Add(this->button22);
			this->groupBox11->Controls->Add(this->button23);
			this->groupBox11->Controls->Add(this->button24);
			this->groupBox11->Controls->Add(this->groupBox12);
			this->groupBox11->Controls->Add(this->button27);
			this->groupBox11->Controls->Add(this->button28);
			this->groupBox11->Location = System::Drawing::Point(52, 200);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(182, 308);
			this->groupBox11->TabIndex = 54;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Menu";
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(12, 21);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(157, 38);
			this->button21->TabIndex = 48;
			this->button21->Text = L"Modifier";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(6, 247);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(38, 38);
			this->button22->TabIndex = 39;
			this->button22->Text = L"<<";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(12, 65);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(157, 38);
			this->button23->TabIndex = 45;
			this->button23->Text = L"Supprimer";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(49, 247);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(38, 38);
			this->button24->TabIndex = 40;
			this->button24->Text = L"<";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->button25);
			this->groupBox12->Controls->Add(this->button26);
			this->groupBox12->Location = System::Drawing::Point(6, 115);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(169, 117);
			this->groupBox12->TabIndex = 47;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Creer un nouveau client";
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(6, 19);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(157, 38);
			this->button25->TabIndex = 44;
			this->button25->Text = L"Nouveau";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(6, 63);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(157, 38);
			this->button26->TabIndex = 43;
			this->button26->Text = L"Enregistrer";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(93, 247);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(38, 38);
			this->button27->TabIndex = 41;
			this->button27->Text = L">";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(137, 247);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(38, 38);
			this->button28->TabIndex = 42;
			this->button28->Text = L">>";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->textBox25);
			this->groupBox13->Controls->Add(this->label30);
			this->groupBox13->Controls->Add(this->textBox24);
			this->groupBox13->Controls->Add(this->label29);
			this->groupBox13->Controls->Add(this->textBox23);
			this->groupBox13->Controls->Add(this->label28);
			this->groupBox13->Location = System::Drawing::Point(316, 6);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(683, 426);
			this->groupBox13->TabIndex = 52;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Information";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(268, 243);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(117, 20);
			this->textBox25->TabIndex = 45;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(265, 227);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(105, 16);
			this->label30->TabIndex = 46;
			this->label30->Text = L"Quantité en stock";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(268, 194);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(117, 20);
			this->textBox24->TabIndex = 43;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(265, 178);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(109, 16);
			this->label29->TabIndex = 44;
			this->label29->Text = L"Couleur de l\'article";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(269, 145);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(117, 20);
			this->textBox23->TabIndex = 41;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(266, 129);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(121, 16);
			this->label28->TabIndex = 42;
			this->label28->Text = L"Reference de l\'article";
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->button30);
			this->groupBox14->Controls->Add(this->textBox33);
			this->groupBox14->Controls->Add(this->label42);
			this->groupBox14->Location = System::Drawing::Point(64, 38);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(157, 103);
			this->groupBox14->TabIndex = 51;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Affichage";
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(37, 71);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(82, 23);
			this->button30->TabIndex = 42;
			this->button30->Text = L"Rechercher";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(20, 45);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(117, 20);
			this->textBox33->TabIndex = 38;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(17, 29);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(121, 16);
			this->label42->TabIndex = 40;
			this->label42->Text = L"Reference de l\'article";
			// 
			// tbPage_GestionStatistiques
			// 
			this->tbPage_GestionStatistiques->Controls->Add(this->tbC_GestionStatistiques);
			this->tbPage_GestionStatistiques->Location = System::Drawing::Point(4, 22);
			this->tbPage_GestionStatistiques->Name = L"tbPage_GestionStatistiques";
			this->tbPage_GestionStatistiques->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionStatistiques->Size = System::Drawing::Size(1007, 549);
			this->tbPage_GestionStatistiques->TabIndex = 5;
			this->tbPage_GestionStatistiques->Text = L"Gestion Statistiques";
			this->tbPage_GestionStatistiques->UseVisualStyleBackColor = true;
			// 
			// tbC_GestionStatistiques
			// 
			this->tbC_GestionStatistiques->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tbC_GestionStatistiques->Controls->Add(this->tabPage22);
			this->tbC_GestionStatistiques->Controls->Add(this->tabPage23);
			this->tbC_GestionStatistiques->Controls->Add(this->tabPage24);
			this->tbC_GestionStatistiques->Controls->Add(this->tabPage25);
			this->tbC_GestionStatistiques->Controls->Add(this->tabPage26);
			this->tbC_GestionStatistiques->Controls->Add(this->tabPage27);
			this->tbC_GestionStatistiques->Controls->Add(this->tabPage28);
			this->tbC_GestionStatistiques->Controls->Add(this->tabPage29);
			this->tbC_GestionStatistiques->Controls->Add(this->tabPage30);
			this->tbC_GestionStatistiques->Location = System::Drawing::Point(-2, 0);
			this->tbC_GestionStatistiques->Name = L"tbC_GestionStatistiques";
			this->tbC_GestionStatistiques->SelectedIndex = 0;
			this->tbC_GestionStatistiques->Size = System::Drawing::Size(1011, 546);
			this->tbC_GestionStatistiques->TabIndex = 1;
			// 
			// tabPage22
			// 
			this->tabPage22->Location = System::Drawing::Point(4, 4);
			this->tabPage22->Name = L"tabPage22";
			this->tabPage22->Padding = System::Windows::Forms::Padding(3);
			this->tabPage22->Size = System::Drawing::Size(1003, 520);
			this->tabPage22->TabIndex = 0;
			this->tabPage22->Text = L"Calcul panier moyen";
			this->tabPage22->UseVisualStyleBackColor = true;
			// 
			// tabPage23
			// 
			this->tabPage23->Location = System::Drawing::Point(4, 4);
			this->tabPage23->Name = L"tabPage23";
			this->tabPage23->Padding = System::Windows::Forms::Padding(3);
			this->tabPage23->Size = System::Drawing::Size(1003, 520);
			this->tabPage23->TabIndex = 1;
			this->tabPage23->Text = L"Calcul chiffre affaire";
			this->tabPage23->UseVisualStyleBackColor = true;
			// 
			// tabPage24
			// 
			this->tabPage24->Location = System::Drawing::Point(4, 4);
			this->tabPage24->Name = L"tabPage24";
			this->tabPage24->Padding = System::Windows::Forms::Padding(3);
			this->tabPage24->Size = System::Drawing::Size(1003, 520);
			this->tabPage24->TabIndex = 2;
			this->tabPage24->Text = L"Réaprovisionnement";
			this->tabPage24->UseVisualStyleBackColor = true;
			this->tabPage24->Click += gcnew System::EventHandler(this, &MyForm::tabPage24_Click);
			// 
			// tabPage25
			// 
			this->tabPage25->Location = System::Drawing::Point(4, 4);
			this->tabPage25->Name = L"tabPage25";
			this->tabPage25->Padding = System::Windows::Forms::Padding(3);
			this->tabPage25->Size = System::Drawing::Size(1003, 520);
			this->tabPage25->TabIndex = 3;
			this->tabPage25->Text = L"Montant total client";
			this->tabPage25->UseVisualStyleBackColor = true;
			// 
			// tabPage26
			// 
			this->tabPage26->Location = System::Drawing::Point(4, 4);
			this->tabPage26->Name = L"tabPage26";
			this->tabPage26->Padding = System::Windows::Forms::Padding(3);
			this->tabPage26->Size = System::Drawing::Size(1003, 520);
			this->tabPage26->TabIndex = 4;
			this->tabPage26->Text = L"10 articles + vendus";
			this->tabPage26->UseVisualStyleBackColor = true;
			// 
			// tabPage27
			// 
			this->tabPage27->Location = System::Drawing::Point(4, 4);
			this->tabPage27->Name = L"tabPage27";
			this->tabPage27->Padding = System::Windows::Forms::Padding(3);
			this->tabPage27->Size = System::Drawing::Size(1003, 520);
			this->tabPage27->TabIndex = 5;
			this->tabPage27->Text = L"10 articles - vendus";
			this->tabPage27->UseVisualStyleBackColor = true;
			// 
			// tabPage28
			// 
			this->tabPage28->Location = System::Drawing::Point(4, 4);
			this->tabPage28->Name = L"tabPage28";
			this->tabPage28->Padding = System::Windows::Forms::Padding(3);
			this->tabPage28->Size = System::Drawing::Size(1003, 520);
			this->tabPage28->TabIndex = 6;
			this->tabPage28->Text = L"Calcul va commerciale stock";
			this->tabPage28->UseVisualStyleBackColor = true;
			// 
			// tabPage29
			// 
			this->tabPage29->Location = System::Drawing::Point(4, 4);
			this->tabPage29->Name = L"tabPage29";
			this->tabPage29->Padding = System::Windows::Forms::Padding(3);
			this->tabPage29->Size = System::Drawing::Size(1003, 520);
			this->tabPage29->TabIndex = 7;
			this->tabPage29->Text = L"Calcul va achat stock";
			this->tabPage29->UseVisualStyleBackColor = true;
			// 
			// tabPage30
			// 
			this->tabPage30->Location = System::Drawing::Point(4, 4);
			this->tabPage30->Name = L"tabPage30";
			this->tabPage30->Padding = System::Windows::Forms::Padding(3);
			this->tabPage30->Size = System::Drawing::Size(1003, 520);
			this->tabPage30->TabIndex = 8;
			this->tabPage30->Text = L"Simulation variation";
			this->tabPage30->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1014, 578);
			this->Controls->Add(this->tbC_MenuPrincipal);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Projet_POO_groupe8";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tbC_MenuPrincipal->ResumeLayout(false);
			this->tbPage_Informations->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tbPage_GestionClient->ResumeLayout(false);
			this->tbPage_GestionClient->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_adresse_livraison))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_DDN_client))->EndInit();
			this->tbPage_GestionPersonnel->ResumeLayout(false);
			this->tbPage_GestionPersonnel->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tbPage_GestionCommande->ResumeLayout(false);
			this->tbPage_GestionCommande->PerformLayout();
			this->groupBox18->ResumeLayout(false);
			this->groupBox18->PerformLayout();
			this->groupBox15->ResumeLayout(false);
			this->groupBox16->ResumeLayout(false);
			this->groupBox17->ResumeLayout(false);
			this->groupBox17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->tbPage_GestionStock->ResumeLayout(false);
			this->tbPage_GestionStock->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->tbPage_GestionStatistiques->ResumeLayout(false);
			this->tbC_GestionStatistiques->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		// CHARGEMENT CLIENT
		index_client = 0;

		txtBx_ID_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[0]->ToString();
		txtBx_D1A_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[1]->ToString();
		txtBx_DDN_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[2]->ToString();
		txtBx_email_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[3]->ToString();
		txtBx_Nom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[4]->ToString();
		txtBx_Prenom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[5]->ToString();

		txtBx_ID_adresse_client->Text = (Adresse->listeAdresse("dbo.Adresse",1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
		txtBx_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
		txtBx_num_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_code_postal_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
		txtBx_pays_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_ville_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();

		dataGrid_adresse_livraison->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"];

		// CHARGEMENT PERSONNEL 

		index_personnel = 0;

		txtBx_ID_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[0]->ToString();
		txtBx_DE_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[1]->ToString();
		txtBx_Nom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[2]->ToString();
		txtBx_ID_SH->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[4]->ToString();
		txtBx_Prenom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[3]->ToString();

		txtBx_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
		txtBx_num_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_code_postal_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
		txtBx_pays_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_ville_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();


		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage24_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btn_GestionClient_Click(System::Object^ sender, System::EventArgs^ e) {
		tbC_MenuPrincipal->SelectedTab = tbPage_GestionClient;
	}
	private: System::Void btn_GestionPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		tbC_MenuPrincipal->SelectedTab = tbPage_GestionPersonnel;
	}
	private: System::Void btn_GestionCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		tbC_MenuPrincipal->SelectedTab = tbPage_GestionCommande;
	}
	private: System::Void btn_GestionStock_Click(System::Object^ sender, System::EventArgs^ e) {
		tbC_MenuPrincipal->SelectedTab = tbPage_GestionStock;
	}
	private: System::Void btn_GestionStatistiques_Click(System::Object^ sender, System::EventArgs^ e) {
		tbC_MenuPrincipal->SelectedTab = tbPage_GestionStatistiques;

	}

private: System::Void tbPage_GestionClient_Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void tabPage10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbPage_GestionCommande_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label87_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

// EVENEMENT CLIENT
private: System::Void btn_Supprimer_client_Click(System::Object^ sender, System::EventArgs^ e) {
	Adresse->supprimer(Convert::ToInt32(txtBx_ID_client->Text), 1);
	Client->supprimer(Convert::ToInt32(txtBx_ID_client->Text));
	txtBx_message_client->Text = "Client supprimé";

	if (index_client > 0)index_client--;
	txtBx_ID_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[0]->ToString();
	txtBx_D1A_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[1]->ToString();
	txtBx_DDN_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[2]->ToString();
	txtBx_email_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[3]->ToString();
	txtBx_Nom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[4]->ToString();
	txtBx_Prenom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[5]->ToString();

	txtBx_ID_adresse_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
	txtBx_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBx_num_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBx_code_postal_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBx_pays_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_ville_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();

	dataGrid_adresse_livraison->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"];

}
private: System::Void btn_Nouveau_client_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBx_ID_client->Text = "";
	txtBx_D1A_client->Clear();
	txtBx_DDN_client->Clear();
	txtBx_email_client->Clear();
	txtBx_Nom_client_information->Clear();
	txtBx_Prenom_client_information->Clear();

	txtBx_ID_adresse_client->Clear();
	txtBx_rue_client->Clear();
	txtBx_num_rue_client->Clear();
	txtBx_code_postal_client->Clear();
	txtBx_pays_client->Clear();
	txtBx_ville_client->Clear();

	dataGrid_adresse_livraison->DataSource = (Adr->listeAdresse("dbo.Adresse", 3,0))->Tables["dbo.Adresse"];

	txtBx_message_client->Clear();
	txtBx_message_client->Text = "Rentrez les données pour le nouveau client, puis cliquez sur enregistrer";
}
private: System::Void btn_first_client_Click(System::Object^ sender, System::EventArgs^ e) {
	index_client = 0;

	txtBx_ID_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[0]->ToString();
	txtBx_D1A_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[1]->ToString();
	txtBx_DDN_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[2]->ToString();
	txtBx_email_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[3]->ToString();
	txtBx_Nom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[4]->ToString();
	txtBx_Prenom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[5]->ToString();

 	txtBx_ID_adresse_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
	txtBx_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBx_num_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBx_code_postal_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBx_pays_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_ville_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
	
	dataGrid_adresse_livraison->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"];


}
private: System::Void btn_left_client_Click(System::Object^ sender, System::EventArgs^ e) {

	if (index_client > 0)index_client--;
	txtBx_ID_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[0]->ToString();
	txtBx_D1A_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[1]->ToString();
	txtBx_DDN_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[2]->ToString();
	txtBx_email_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[3]->ToString();
	txtBx_Nom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[4]->ToString();
	txtBx_Prenom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[5]->ToString();

    txtBx_ID_adresse_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
	txtBx_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBx_num_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBx_code_postal_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBx_pays_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_ville_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
	
	dataGrid_adresse_livraison->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"];


}
private: System::Void btn_right_client_Click(System::Object^ sender, System::EventArgs^ e) {

	int nbRows = Convert::ToInt32((Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows->Count);
	if (index_client < nbRows - 1)index_client++;

	txtBx_ID_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[0]->ToString();
	txtBx_D1A_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[1]->ToString();
	txtBx_DDN_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[2]->ToString();
	txtBx_email_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[3]->ToString();
	txtBx_Nom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[4]->ToString();
	txtBx_Prenom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[5]->ToString();

	txtBx_ID_adresse_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
	txtBx_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBx_num_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBx_code_postal_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBx_pays_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_ville_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
	
	dataGrid_adresse_livraison->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"];

}
private: System::Void btn_last_client_Click(System::Object^ sender, System::EventArgs^ e) {
	index_client = Convert::ToInt32((Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows->Count)- 1;

	txtBx_ID_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[0]->ToString();
	txtBx_D1A_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[1]->ToString();
	txtBx_DDN_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[2]->ToString();
	txtBx_email_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[3]->ToString();
	txtBx_Nom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[4]->ToString();
	txtBx_Prenom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[5]->ToString();

	txtBx_ID_adresse_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
	txtBx_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBx_num_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBx_code_postal_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBx_pays_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_ville_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();

	dataGrid_adresse_livraison->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"];

}
private: System::Void btn_enregistrer_client_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBx_ID_client->Text == "") {
		Client->ajouter(txtBx_Nom_client_information->Text, txtBx_Prenom_client_information->Text, txtBx_DDN_client->Text, txtBx_D1A_client->Text, txtBx_email_client->Text);
		index_client = Convert::ToInt32((Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows->Count) - 1;

		txtBx_ID_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[0]->ToString();
		txtBx_D1A_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[1]->ToString();
		txtBx_DDN_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[2]->ToString();
		txtBx_email_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[3]->ToString();
		txtBx_Nom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[4]->ToString();
		txtBx_Prenom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[5]->ToString();

		Adresse->ajouter(txtBx_rue_client->Text, Convert::ToInt32(txtBx_num_rue_client->Text), Convert::ToInt32(txtBx_code_postal_client->Text), txtBx_pays_client->Text, txtBx_ville_client->Text, 1, Convert::ToInt32(txtBx_ID_client->Text), 0);
		for (int i = 0; i < dataGrid_adresse_livraison->SelectedRows->Count;i++)
		{
		Adresse->ajouter(dataGrid_adresse_livraison->Rows[i]->Cells["Nom_rue"]->Value->ToString(), Convert::ToInt32(dataGrid_adresse_livraison->Rows[i]->Cells["Num_rue"]->Value->ToString()), Convert::ToInt32(dataGrid_adresse_livraison->Rows[i]->Cells["Code_postal"]->Value->ToString()), dataGrid_adresse_livraison->Rows[i]->Cells["Pays"]->Value->ToString(), dataGrid_adresse_livraison->Rows[i]->Cells["Ville"]->Value->ToString(),3,Convert::ToInt32(txtBx_ID_client->Text),0);
		}

		txtBx_ID_adresse_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
		txtBx_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
		txtBx_num_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_code_postal_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
		txtBx_pays_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_ville_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();

		dataGrid_adresse_livraison->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"];

	}
	else {
	txtBx_message_client->Clear();
	txtBx_message_client->Text = "Cliquez sur nouveau pour ajouter une personne";
	}
}
private: System::Void btn_Modifier_client_Click(System::Object^ sender, System::EventArgs^ e) {
	Client->modifier(Convert::ToInt32(txtBx_ID_client->Text), txtBx_Nom_client_information->Text, txtBx_Prenom_client_information->Text, txtBx_DDN_client->Text, txtBx_D1A_client->Text, txtBx_email_client->Text);
	Adresse->modifier(txtBx_rue_client->Text, Convert::ToInt32(txtBx_num_rue_client->Text), Convert::ToInt32(txtBx_code_postal_client->Text), txtBx_pays_client->Text, txtBx_ville_client->Text, 1, Convert::ToInt32(txtBx_ID_client->Text), 0);

}
	   
// EVENEMENT PERSONNEL
private: System::Void btn_Supprimer_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	Adresse->supprimer(Convert::ToInt32(txtBx_ID_personnel->Text), 1);
	Personnel->supprimer(Convert::ToInt32(txtBx_ID_personnel->Text));
	txtBx_message_personnel->Text = "Personnel supprimé";

	if (index_personnel > 0)index_personnel--;
	txtBx_ID_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[0]->ToString();
	txtBx_DE_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[1]->ToString();
	txtBx_Nom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[2]->ToString();
	txtBx_Prenom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[3]->ToString();
	txtBx_ID_SH->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[4]->ToString();

	txtBx_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBx_num_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBx_code_postal_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBx_pays_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_ville_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();

	
}
private: System::Void btn_Nouveau_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBx_ID_personnel->Text = "";
	txtBx_ID_SH->Clear();
	txtBx_prenom_SH->Clear();
	txtBx_nom_SH->Clear();
	txtBx_DE_personnel->Clear();
	txtBx_Nom_personnel_information->Clear();
	txtBx_Prenom_personnel_information->Clear();
	
	txtBx_rue_personnel->Clear();
	txtBx_num_rue_personnel->Clear();
	txtBx_code_postal_personnel->Clear();
	txtBx_pays_personnel->Clear();
	txtBx_ville_personnel->Clear();

	txtBx_message_personnel->Clear();
	txtBx_message_personnel->Text = "Rentrez les données pour le nouveau personnel, puis cliquez sur enregistrer";
}
private: System::Void btn_first_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	index_personnel = 0;

	txtBx_ID_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[0]->ToString();
	txtBx_DE_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[1]->ToString();
	txtBx_Nom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[2]->ToString();
	txtBx_Prenom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[3]->ToString();
	txtBx_ID_SH->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[4]->ToString();

	txtBx_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBx_num_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBx_code_postal_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBx_pays_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_ville_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();




}
private: System::Void btn_left_personnel_Click(System::Object^ sender, System::EventArgs^ e) {

	if (index_personnel > 0)index_personnel--;
	txtBx_ID_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[0]->ToString();
	txtBx_DE_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[1]->ToString();
	txtBx_Nom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[2]->ToString();
	txtBx_Prenom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[3]->ToString();
	txtBx_ID_SH->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[4]->ToString();

	txtBx_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBx_num_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBx_code_postal_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBx_pays_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_ville_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();



}
private: System::Void btn_right_personnel_Click(System::Object^ sender, System::EventArgs^ e) {

	int nbRows = Convert::ToInt32((Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows->Count);
	if (index_personnel < nbRows - 1)index_personnel++;

	txtBx_ID_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[0]->ToString();
	txtBx_DE_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[1]->ToString();
	txtBx_Nom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[2]->ToString();
	txtBx_Prenom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[3]->ToString();
	txtBx_ID_SH->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[4]->ToString();

	txtBx_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBx_num_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBx_code_postal_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBx_pays_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_ville_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();


}
private: System::Void btn_last_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	index_personnel = Convert::ToInt32((Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows->Count) - 1;

	txtBx_ID_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[0]->ToString();
	txtBx_DE_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[1]->ToString();
	txtBx_Nom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[2]->ToString();
	txtBx_Prenom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[3]->ToString();
	txtBx_ID_SH->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[4]->ToString();

	txtBx_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBx_num_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBx_code_postal_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBx_pays_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_ville_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();

}
private: System::Void btn_enregistrer_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBx_ID_personnel->Text == "") {
		Personnel->ajouter(txtBx_Nom_personnel_information->Text, txtBx_Prenom_personnel_information->Text, txtBx_DE_personnel->Text, Convert::ToInt32(txtBx_ID_SH->Text));
		index_personnel = Convert::ToInt32((Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows->Count) - 1;

		txtBx_ID_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[0]->ToString();
		txtBx_DE_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[1]->ToString();
		txtBx_Nom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[2]->ToString();
		txtBx_Prenom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[3]->ToString();
		txtBx_ID_SH->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[4]->ToString();

		Adresse->ajouter(txtBx_rue_personnel->Text, Convert::ToInt32(txtBx_num_rue_personnel->Text), Convert::ToInt32(txtBx_code_postal_personnel->Text), txtBx_pays_personnel->Text, txtBx_ville_personnel->Text, 2, 0, Convert::ToInt32(txtBx_ID_personnel->Text));

		txtBx_num_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_code_postal_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
		txtBx_pays_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_ville_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
		txtBx_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
		
	}
	else {
		txtBx_message_personnel->Clear();
		txtBx_message_personnel->Text = "Cliquez sur nouveau pour ajouter une personne";
	}
}
private: System::Void btn_Modifier_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	Personnel->modifier(Convert::ToInt32(txtBx_ID_personnel->Text), txtBx_Prenom_personnel_information->Text, txtBx_Nom_personnel_information->Text, txtBx_DE_personnel->Text, Convert::ToInt32(txtBx_ID_SH->Text));
	Adresse->modifier(txtBx_rue_personnel->Text, Convert::ToInt32(txtBx_num_rue_personnel->Text), Convert::ToInt32(txtBx_code_postal_personnel->Text), txtBx_pays_personnel->Text, txtBx_ville_personnel->Text, 2, 0, Convert::ToInt32(txtBx_ID_personnel->Text));

}


private: System::Void btn_rechercher_client_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBx_nom_client_affichage->Text;
	txtBx_Prenom_client_affichage->Text;
	dataGrid_DDN_client->DataSource = Client->rechercher("dbo.Adresse", (txtBx_nom_client_affichage->Text), (txtBx_Prenom_client_affichage->Text))->Tables["dbo.Adresse"];

}
private: System::Void btn_selectionner_client_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGrid_DDN_client->SelectedRows->Count >= 0) {
		
		txtBx_ID_client->Text = (Client->selectionner("dbo.Client", Convert::ToInt32(dataGrid_DDN_client->SelectedRows[0]->Cells["ID_client"]->Value)))->Tables["dbo.Client"]->Rows[0]->ItemArray[0]->ToString();
		txtBx_D1A_client->Text = (Client->selectionner("dbo.Client", Convert::ToInt32(dataGrid_DDN_client->SelectedRows[0]->Cells["ID_client"]->Value)))->Tables["dbo.Client"]->Rows[0]->ItemArray[1]->ToString();
		txtBx_DDN_client->Text = (Client->selectionner("dbo.Client", Convert::ToInt32(dataGrid_DDN_client->SelectedRows[0]->Cells["ID_client"]->Value)))->Tables["dbo.Client"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_email_client->Text = (Client->selectionner("dbo.Client", Convert::ToInt32(dataGrid_DDN_client->SelectedRows[0]->Cells["ID_client"]->Value)))->Tables["dbo.Client"]->Rows[0]->ItemArray[3]->ToString();
		txtBx_Nom_client_information->Text = (Client->selectionner("dbo.Client", Convert::ToInt32(dataGrid_DDN_client->SelectedRows[0]->Cells["ID_client"]->Value)))->Tables["dbo.Client"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_Prenom_client_information->Text = (Client->selectionner("dbo.Client", Convert::ToInt32(dataGrid_DDN_client->SelectedRows[0]->Cells["ID_client"]->Value)))->Tables["dbo.Client"]->Rows[0]->ItemArray[5]->ToString();

		txtBx_ID_adresse_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
		txtBx_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
		txtBx_num_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_code_postal_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
		txtBx_pays_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_ville_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();

		dataGrid_adresse_livraison->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"];
		
	}
	else {
		txtBx_message_client->Text = "Merci de rechercher un client avec de selectionner !";
	}
}
};
}
