#pragma once


#include "CL_CAD.h"
#include "CL_TBCLIENT.h"
#include "CL_svc_gestionClient.h"
#include "CL_svc_gestionPersonnel.h"
#include "CL_svc_gestionAdresse.h"
#include "CL_svc_gestionCommande.h"
#include "CL_svc_gestionLigneCommande.h"
#include "CL_svc_gestionStock.h"
#include "CL_svc_gestionNature.h"
#include "CL_svc_gestionStatistique.h"
#include "CL_svc_gestion_date.h"

#include <string.h> 
#include <iostream> 


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
private: System::Windows::Forms::Button^ btn_selectionner_personnel;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::DataGridView^ dataGrid_DE_personnel_affichage;

private: System::Windows::Forms::Button^ btn_rechercher_personnel;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ txtBx_nom_personnel_affichage;




private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ txtBx_prenom_personnel_affichage;


private: System::Windows::Forms::GroupBox^ groupBox18;
private: System::Windows::Forms::Button^ btn_rechercher_commande;
private: System::Windows::Forms::TextBox^ txtBx_reference_commande_affichage;



private: System::Windows::Forms::Label^ label31;



private: System::Windows::Forms::GroupBox^ groupBox15;
private: System::Windows::Forms::Button^ btn_modifier_commande;

private: System::Windows::Forms::Button^ btn_first_commande;
private: System::Windows::Forms::Button^ btn_supprimer_commande;


private: System::Windows::Forms::Button^ btn_left_commande;

private: System::Windows::Forms::GroupBox^ groupBox16;
private: System::Windows::Forms::Button^ btn_nouveau_commande;
private: System::Windows::Forms::Button^ enregistrer;


private: System::Windows::Forms::Button^ btn_right_commande;
private: System::Windows::Forms::Button^ btn_last_commande;


private: System::Windows::Forms::GroupBox^ groupBox17;
private: System::Windows::Forms::TextBox^ txtBx_remise;


private: System::Windows::Forms::TextBox^ txtBx_date_emission;

private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ txtBx_ID_commande_information;
private: System::Windows::Forms::TextBox^ txtBx_date_livraison;




private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::DataGridView^ dataGrid_ligne_commande;





private: System::Windows::Forms::TextBox^ txtBx_mode_payment;




private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ txtBx_message_stock;

private: System::Windows::Forms::GroupBox^ groupBox11;
private: System::Windows::Forms::Button^ btn_modifier_article;

private: System::Windows::Forms::Button^ btn_first_article;
private: System::Windows::Forms::Button^ btn_supprimer_article;



private: System::Windows::Forms::Button^ btn_left_article;

private: System::Windows::Forms::GroupBox^ groupBox12;
private: System::Windows::Forms::Button^ btn_nouveau_article;
private: System::Windows::Forms::Button^ btn_enregistrer_article;
private: System::Windows::Forms::Button^ btn_right_article;
private: System::Windows::Forms::Button^ btn_last_article;




private: System::Windows::Forms::GroupBox^ groupBox13;
private: System::Windows::Forms::TextBox^ txtBx_quantite_article;

private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ txtBx_couleur_article;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ txtBx_reference_article;

private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::GroupBox^ groupBox14;
private: System::Windows::Forms::Button^ btn_rechercher_article;
private: System::Windows::Forms::TextBox^ txtBx_reference_article_affichage;


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
		int index_commande;
		int index_stock;
		int quantite;
		NS_Svc::CL_svc_gestionAdresse^ Adresse_livraison = gcnew NS_Svc::CL_svc_gestionAdresse();
		NS_Svc::CL_svc_gestionClient^ Client = gcnew NS_Svc::CL_svc_gestionClient();
		NS_Svc::CL_svc_gestionPersonnel^ Personnel = gcnew NS_Svc::CL_svc_gestionPersonnel();
		NS_Svc::CL_svc_gestionCommande^ Commande = gcnew NS_Svc::CL_svc_gestionCommande();
		NS_Svc::CL_svc_gestionLigneCommande^ LigneCommande = gcnew NS_Svc::CL_svc_gestionLigneCommande();
		NS_Svc::CL_svc_gestionStock^ Stock = gcnew NS_Svc::CL_svc_gestionStock();
		NS_Svc::CL_svc_gestionNature^ Nature = gcnew NS_Svc::CL_svc_gestionNature();
		NS_Svc::CL_svc_gestionStatistique^ Statistique = gcnew NS_Svc::CL_svc_gestionStatistique();
		NS_Svc::CL_svc_gestionStatistique^ Statistique2 = gcnew NS_Svc::CL_svc_gestionStatistique();
		NS_Svc::CL_svc_gestion_date^ Dpaiement = gcnew NS_Svc::CL_svc_gestion_date();

private: System::Windows::Forms::TextBox^ txtBx_rue_client;

private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ txtBx_ID_adresse_client;


private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ txtBx_num_rue_client;

private: System::Windows::Forms::Label^ lbl1;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::DataGridView^ dataGrid_commande_client;





	   NS_Svc::CL_svc_gestionAdresse^ Adresse = gcnew NS_Svc::CL_svc_gestionAdresse();
private: System::Windows::Forms::TextBox^ txtBx_num_rue_personnel;

private: System::Windows::Forms::Label^ label21;
	   NS_Svc::CL_svc_gestionAdresse^ Adr = gcnew NS_Svc::CL_svc_gestionAdresse();
private: System::Windows::Forms::Button^ btn_selectionner_SH;
private: System::Windows::Forms::Button^ btn_rechercher_SH;
private: System::Windows::Forms::Label^ label37;






private: System::Windows::Forms::GroupBox^ groupBox19;


private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::DataGridView^ dataGrid_DDN_client_commande;

private: System::Windows::Forms::Button^ btn_rechercher_client_commande;

private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::TextBox^ txtBx_nom_client_commande;

private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::TextBox^ txtBx_prenom_client_commande;
private: System::Windows::Forms::Button^ btn_selectionner_client_commande;
private: System::Windows::Forms::TextBox^ txtBx_ID_article;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::TextBox^ txtBx_couleur_article_affichage;

private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::GroupBox^ groupBox20;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::TextBox^ txtBx_message_commande;

private: System::Windows::Forms::Label^ label57;










private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::TextBox^ txtBx_reference_commande;


private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Button^ btn_selectionner_adresse_commande;

private: System::Windows::Forms::DataGridView^ dataGrid_adresse_commande;

private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
private: System::Windows::Forms::TextBox^ txtBxID_adresse_commande;


private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::TextBox^ txtBxRue_adresse_commande;

private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::TextBox^ txtBxPays_adresse_commande;

private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::TextBox^ txtBxNum_adresse_commande;
private: System::Windows::Forms::TextBox^ txtBxCode_postale_adresse_commande;



private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::TextBox^ txtBxVille_adresse_commande;

private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::TextBox^ txtBx_ID_client_commande;

private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::ComboBox^ cbBx_mois_statistique;



























private: System::Windows::Forms::GroupBox^ groupBox27;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Button^ btn_CalculChiffreAffaireMois;
private: System::Windows::Forms::TextBox^ txtx_Resultat_CalculChiffreAffaireMois;


private: System::Windows::Forms::GroupBox^ groupBox26;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Button^ btn_panier_moyen;

private: System::Windows::Forms::TextBox^ txtBx_resultat_statistique;

private: System::Windows::Forms::GroupBox^ groupBox29;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Button^ btn_identifier_statistique;
private: System::Windows::Forms::DataGridView^ dataGrid_article_plus_vendus;



private: System::Windows::Forms::GroupBox^ groupBox28;
private: System::Windows::Forms::Button^ btn_recherche_reaprovisionnement;

private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::TextBox^ txtBx_seuil_reaprovisionnement;
private: System::Windows::Forms::DataGridView^ dataGrid_reaprovisionnement;


private: System::Windows::Forms::TextBox^ txtBx_prix_article;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::DataGridView^ dataGrid_article_moins_vendus;
private: System::Windows::Forms::Button^ Btn_valeur_achat_stock;
private: System::Windows::Forms::Button^ Btn_valeur_commerciale_stock;



private: System::Windows::Forms::GroupBox^ groupBox30;
private: System::Windows::Forms::TextBox^ txtBxMontant_total_TTC;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::TextBox^ txtBxMontant_total_TVA;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::TextBox^ txtBxMontant_total_HT;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ btn_simulation;

private: System::Windows::Forms::GroupBox^ groupBox25;
private: System::Windows::Forms::GroupBox^ groupBox22;
private: System::Windows::Forms::RadioButton^ rB_TVA_2_1;

private: System::Windows::Forms::RadioButton^ rB_TVA_20;
private: System::Windows::Forms::RadioButton^ rB_TVA_5_5;


private: System::Windows::Forms::GroupBox^ groupBox24;
private: System::Windows::Forms::RadioButton^ rB_demarque_5;

private: System::Windows::Forms::RadioButton^ rB_demarque_2;
private: System::Windows::Forms::RadioButton^ rB_demarque_3;


private: System::Windows::Forms::GroupBox^ groupBox21;
private: System::Windows::Forms::RadioButton^ rB_remise_6;

private: System::Windows::Forms::RadioButton^ rB_remise_5;

private: System::Windows::Forms::GroupBox^ groupBox23;
private: System::Windows::Forms::RadioButton^ rB_marge_commerciale_15;

private: System::Windows::Forms::RadioButton^ rB_marge_commerciale_5;
private: System::Windows::Forms::RadioButton^ rB_marge_commerciale_10;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::DataGridView^ dataGrid_date_paiement_client_commande;






private: System::Windows::Forms::DataGridView^ dataGrid_DE_SH;
	


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
			this->dataGrid_commande_client = (gcnew System::Windows::Forms::DataGridView());
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
			this->btn_selectionner_SH = (gcnew System::Windows::Forms::Button());
			this->btn_rechercher_SH = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->dataGrid_DE_SH = (gcnew System::Windows::Forms::DataGridView());
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
			this->btn_selectionner_personnel = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->dataGrid_DE_personnel_affichage = (gcnew System::Windows::Forms::DataGridView());
			this->btn_rechercher_personnel = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtBx_nom_personnel_affichage = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtBx_prenom_personnel_affichage = (gcnew System::Windows::Forms::TextBox());
			this->tbPage_GestionCommande = (gcnew System::Windows::Forms::TabPage());
			this->groupBox20 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->txtBx_message_commande = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->groupBox18 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_rechercher_commande = (gcnew System::Windows::Forms::Button());
			this->txtBx_reference_commande_affichage = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_modifier_commande = (gcnew System::Windows::Forms::Button());
			this->btn_first_commande = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer_commande = (gcnew System::Windows::Forms::Button());
			this->btn_left_commande = (gcnew System::Windows::Forms::Button());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_nouveau_commande = (gcnew System::Windows::Forms::Button());
			this->enregistrer = (gcnew System::Windows::Forms::Button());
			this->btn_right_commande = (gcnew System::Windows::Forms::Button());
			this->btn_last_commande = (gcnew System::Windows::Forms::Button());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->groupBox30 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBxMontant_total_TTC = (gcnew System::Windows::Forms::TextBox());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->txtBxMontant_total_TVA = (gcnew System::Windows::Forms::TextBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->txtBxMontant_total_HT = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->dataGrid_date_paiement_client_commande = (gcnew System::Windows::Forms::DataGridView());
			this->txtBx_reference_commande = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->groupBox19 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBx_ID_client_commande = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->txtBxID_adresse_commande = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->btn_selectionner_adresse_commande = (gcnew System::Windows::Forms::Button());
			this->txtBxRue_adresse_commande = (gcnew System::Windows::Forms::TextBox());
			this->dataGrid_adresse_commande = (gcnew System::Windows::Forms::DataGridView());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->txtBxPays_adresse_commande = (gcnew System::Windows::Forms::TextBox());
			this->btn_rechercher_client_commande = (gcnew System::Windows::Forms::Button());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->txtBxNum_adresse_commande = (gcnew System::Windows::Forms::TextBox());
			this->btn_selectionner_client_commande = (gcnew System::Windows::Forms::Button());
			this->txtBxCode_postale_adresse_commande = (gcnew System::Windows::Forms::TextBox());
			this->dataGrid_DDN_client_commande = (gcnew System::Windows::Forms::DataGridView());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->txtBxVille_adresse_commande = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_nom_client_commande = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->txtBx_prenom_client_commande = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_remise = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_date_emission = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->txtBx_ID_commande_information = (gcnew System::Windows::Forms::TextBox());
			this->txtBx_date_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->dataGrid_ligne_commande = (gcnew System::Windows::Forms::DataGridView());
			this->txtBx_mode_payment = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->tbPage_GestionStock = (gcnew System::Windows::Forms::TabPage());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtBx_message_stock = (gcnew System::Windows::Forms::TextBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_modifier_article = (gcnew System::Windows::Forms::Button());
			this->btn_first_article = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer_article = (gcnew System::Windows::Forms::Button());
			this->btn_left_article = (gcnew System::Windows::Forms::Button());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_nouveau_article = (gcnew System::Windows::Forms::Button());
			this->btn_enregistrer_article = (gcnew System::Windows::Forms::Button());
			this->btn_right_article = (gcnew System::Windows::Forms::Button());
			this->btn_last_article = (gcnew System::Windows::Forms::Button());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBx_prix_article = (gcnew System::Windows::Forms::TextBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->txtBx_ID_article = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->txtBx_quantite_article = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->txtBx_couleur_article = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txtBx_reference_article = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBx_couleur_article_affichage = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->btn_rechercher_article = (gcnew System::Windows::Forms::Button());
			this->txtBx_reference_article_affichage = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->tbPage_GestionStatistiques = (gcnew System::Windows::Forms::TabPage());
			this->groupBox29 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGrid_article_moins_vendus = (gcnew System::Windows::Forms::DataGridView());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->btn_identifier_statistique = (gcnew System::Windows::Forms::Button());
			this->dataGrid_article_plus_vendus = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox28 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_recherche_reaprovisionnement = (gcnew System::Windows::Forms::Button());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->txtBx_seuil_reaprovisionnement = (gcnew System::Windows::Forms::TextBox());
			this->dataGrid_reaprovisionnement = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox27 = (gcnew System::Windows::Forms::GroupBox());
			this->cbBx_mois_statistique = (gcnew System::Windows::Forms::ComboBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->btn_CalculChiffreAffaireMois = (gcnew System::Windows::Forms::Button());
			this->txtx_Resultat_CalculChiffreAffaireMois = (gcnew System::Windows::Forms::TextBox());
			this->groupBox26 = (gcnew System::Windows::Forms::GroupBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_simulation = (gcnew System::Windows::Forms::Button());
			this->Btn_valeur_achat_stock = (gcnew System::Windows::Forms::Button());
			this->Btn_valeur_commerciale_stock = (gcnew System::Windows::Forms::Button());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->btn_panier_moyen = (gcnew System::Windows::Forms::Button());
			this->txtBx_resultat_statistique = (gcnew System::Windows::Forms::TextBox());
			this->groupBox25 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox22 = (gcnew System::Windows::Forms::GroupBox());
			this->rB_TVA_2_1 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_TVA_20 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_TVA_5_5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox24 = (gcnew System::Windows::Forms::GroupBox());
			this->rB_demarque_5 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_demarque_2 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_demarque_3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox21 = (gcnew System::Windows::Forms::GroupBox());
			this->rB_remise_6 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_remise_5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox23 = (gcnew System::Windows::Forms::GroupBox());
			this->rB_marge_commerciale_15 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_marge_commerciale_5 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_marge_commerciale_10 = (gcnew System::Windows::Forms::RadioButton());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->tbC_MenuPrincipal->SuspendLayout();
			this->tbPage_Informations->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tbPage_GestionClient->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_commande_client))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_adresse_livraison))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_DDN_client))->BeginInit();
			this->tbPage_GestionPersonnel->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_DE_SH))->BeginInit();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_DE_personnel_affichage))->BeginInit();
			this->tbPage_GestionCommande->SuspendLayout();
			this->groupBox20->SuspendLayout();
			this->groupBox18->SuspendLayout();
			this->groupBox15->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->groupBox17->SuspendLayout();
			this->groupBox30->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_date_paiement_client_commande))->BeginInit();
			this->groupBox19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_adresse_commande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_DDN_client_commande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_ligne_commande))->BeginInit();
			this->tbPage_GestionStock->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->tbPage_GestionStatistiques->SuspendLayout();
			this->groupBox29->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_article_moins_vendus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_article_plus_vendus))->BeginInit();
			this->groupBox28->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_reaprovisionnement))->BeginInit();
			this->groupBox27->SuspendLayout();
			this->groupBox26->SuspendLayout();
			this->groupBox25->SuspendLayout();
			this->groupBox22->SuspendLayout();
			this->groupBox24->SuspendLayout();
			this->groupBox21->SuspendLayout();
			this->groupBox23->SuspendLayout();
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
			this->tbC_MenuPrincipal->Location = System::Drawing::Point(0, 2);
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
			this->groupBox3->Controls->Add(this->dataGrid_commande_client);
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
			// dataGrid_commande_client
			// 
			this->dataGrid_commande_client->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid_commande_client->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_commande_client->Location = System::Drawing::Point(215, 211);
			this->dataGrid_commande_client->Name = L"dataGrid_commande_client";
			this->dataGrid_commande_client->RowHeadersWidth = 51;
			this->dataGrid_commande_client->Size = System::Drawing::Size(460, 232);
			this->dataGrid_commande_client->TabIndex = 48;
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
			this->txtBx_D1A_client->Enabled = false;
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
			this->dataGrid_adresse_livraison->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid_adresse_livraison->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_adresse_livraison->Location = System::Drawing::Point(215, 27);
			this->dataGrid_adresse_livraison->Name = L"dataGrid_adresse_livraison";
			this->dataGrid_adresse_livraison->RowHeadersWidth = 51;
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
			this->dataGrid_DDN_client->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid_DDN_client->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_DDN_client->Location = System::Drawing::Point(137, 32);
			this->dataGrid_DDN_client->Name = L"dataGrid_DDN_client";
			this->dataGrid_DDN_client->RowHeadersWidth = 51;
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
			this->groupBox7->Text = L"Creer un nouveau personnel";
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
			this->groupBox10->Controls->Add(this->btn_selectionner_SH);
			this->groupBox10->Controls->Add(this->btn_rechercher_SH);
			this->groupBox10->Controls->Add(this->label37);
			this->groupBox10->Controls->Add(this->dataGrid_DE_SH);
			this->groupBox10->Controls->Add(this->label12);
			this->groupBox10->Controls->Add(this->txtBx_ID_SH);
			this->groupBox10->Controls->Add(this->label26);
			this->groupBox10->Controls->Add(this->label13);
			this->groupBox10->Controls->Add(this->txtBx_prenom_SH);
			this->groupBox10->Controls->Add(this->txtBx_nom_SH);
			this->groupBox10->Location = System::Drawing::Point(305, 75);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(372, 231);
			this->groupBox10->TabIndex = 44;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Superieur hierarchique";
			// 
			// btn_selectionner_SH
			// 
			this->btn_selectionner_SH->Location = System::Drawing::Point(226, 193);
			this->btn_selectionner_SH->Name = L"btn_selectionner_SH";
			this->btn_selectionner_SH->Size = System::Drawing::Size(75, 23);
			this->btn_selectionner_SH->TabIndex = 46;
			this->btn_selectionner_SH->Text = L"Selectionner";
			this->btn_selectionner_SH->UseVisualStyleBackColor = true;
			this->btn_selectionner_SH->Click += gcnew System::EventHandler(this, &MyForm::btn_selectionner_SH_Click);
			// 
			// btn_rechercher_SH
			// 
			this->btn_rechercher_SH->Location = System::Drawing::Point(40, 193);
			this->btn_rechercher_SH->Name = L"btn_rechercher_SH";
			this->btn_rechercher_SH->Size = System::Drawing::Size(75, 23);
			this->btn_rechercher_SH->TabIndex = 53;
			this->btn_rechercher_SH->Text = L"Rechercher";
			this->btn_rechercher_SH->UseVisualStyleBackColor = true;
			this->btn_rechercher_SH->Click += gcnew System::EventHandler(this, &MyForm::btn_rechercher_SH_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(155, 32);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(103, 16);
			this->label37->TabIndex = 52;
			this->label37->Text = L"Date d\'embauche";
			// 
			// dataGrid_DE_SH
			// 
			this->dataGrid_DE_SH->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid_DE_SH->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_DE_SH->Location = System::Drawing::Point(158, 51);
			this->dataGrid_DE_SH->Name = L"dataGrid_DE_SH";
			this->dataGrid_DE_SH->RowHeadersWidth = 51;
			this->dataGrid_DE_SH->Size = System::Drawing::Size(208, 136);
			this->dataGrid_DE_SH->TabIndex = 51;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(6, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 32);
			this->label12->TabIndex = 50;
			this->label12->Text = L"ID superieur \r\nhierarchique";
			// 
			// txtBx_ID_SH
			// 
			this->txtBx_ID_SH->Enabled = false;
			this->txtBx_ID_SH->Location = System::Drawing::Point(9, 51);
			this->txtBx_ID_SH->Name = L"txtBx_ID_SH";
			this->txtBx_ID_SH->Size = System::Drawing::Size(143, 20);
			this->txtBx_ID_SH->TabIndex = 49;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(6, 132);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(122, 32);
			this->label26->TabIndex = 48;
			this->label26->Text = L"Prenom du superieur\r\nhierarchique";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(6, 74);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(109, 32);
			this->label13->TabIndex = 47;
			this->label13->Text = L"Nom du superieur \r\nhierarchique";
			// 
			// txtBx_prenom_SH
			// 
			this->txtBx_prenom_SH->Location = System::Drawing::Point(9, 167);
			this->txtBx_prenom_SH->Name = L"txtBx_prenom_SH";
			this->txtBx_prenom_SH->Size = System::Drawing::Size(143, 20);
			this->txtBx_prenom_SH->TabIndex = 46;
			// 
			// txtBx_nom_SH
			// 
			this->txtBx_nom_SH->Location = System::Drawing::Point(9, 109);
			this->txtBx_nom_SH->Name = L"txtBx_nom_SH";
			this->txtBx_nom_SH->Size = System::Drawing::Size(143, 20);
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
			this->groupBox9->Controls->Add(this->btn_selectionner_personnel);
			this->groupBox9->Controls->Add(this->label23);
			this->groupBox9->Controls->Add(this->dataGrid_DE_personnel_affichage);
			this->groupBox9->Controls->Add(this->btn_rechercher_personnel);
			this->groupBox9->Controls->Add(this->label24);
			this->groupBox9->Controls->Add(this->txtBx_nom_personnel_affichage);
			this->groupBox9->Controls->Add(this->label25);
			this->groupBox9->Controls->Add(this->txtBx_prenom_personnel_affichage);
			this->groupBox9->Location = System::Drawing::Point(9, 6);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(301, 164);
			this->groupBox9->TabIndex = 51;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Affichage";
			// 
			// btn_selectionner_personnel
			// 
			this->btn_selectionner_personnel->Location = System::Drawing::Point(33, 130);
			this->btn_selectionner_personnel->Name = L"btn_selectionner_personnel";
			this->btn_selectionner_personnel->Size = System::Drawing::Size(75, 23);
			this->btn_selectionner_personnel->TabIndex = 45;
			this->btn_selectionner_personnel->Text = L"Selectionner";
			this->btn_selectionner_personnel->UseVisualStyleBackColor = true;
			this->btn_selectionner_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_selectionner_personnel_Click);
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
			// dataGrid_DE_personnel_affichage
			// 
			this->dataGrid_DE_personnel_affichage->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid_DE_personnel_affichage->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_DE_personnel_affichage->Location = System::Drawing::Point(137, 32);
			this->dataGrid_DE_personnel_affichage->Name = L"dataGrid_DE_personnel_affichage";
			this->dataGrid_DE_personnel_affichage->RowHeadersWidth = 51;
			this->dataGrid_DE_personnel_affichage->Size = System::Drawing::Size(158, 121);
			this->dataGrid_DE_personnel_affichage->TabIndex = 43;
			// 
			// btn_rechercher_personnel
			// 
			this->btn_rechercher_personnel->Location = System::Drawing::Point(33, 101);
			this->btn_rechercher_personnel->Name = L"btn_rechercher_personnel";
			this->btn_rechercher_personnel->Size = System::Drawing::Size(75, 23);
			this->btn_rechercher_personnel->TabIndex = 42;
			this->btn_rechercher_personnel->Text = L"Rechercher";
			this->btn_rechercher_personnel->UseVisualStyleBackColor = true;
			this->btn_rechercher_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_rechercher_personnel_Click);
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
			// txtBx_nom_personnel_affichage
			// 
			this->txtBx_nom_personnel_affichage->Location = System::Drawing::Point(14, 32);
			this->txtBx_nom_personnel_affichage->Name = L"txtBx_nom_personnel_affichage";
			this->txtBx_nom_personnel_affichage->Size = System::Drawing::Size(117, 20);
			this->txtBx_nom_personnel_affichage->TabIndex = 38;
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
			// txtBx_prenom_personnel_affichage
			// 
			this->txtBx_prenom_personnel_affichage->Location = System::Drawing::Point(14, 75);
			this->txtBx_prenom_personnel_affichage->Name = L"txtBx_prenom_personnel_affichage";
			this->txtBx_prenom_personnel_affichage->Size = System::Drawing::Size(117, 20);
			this->txtBx_prenom_personnel_affichage->TabIndex = 39;
			// 
			// tbPage_GestionCommande
			// 
			this->tbPage_GestionCommande->Controls->Add(this->groupBox20);
			this->tbPage_GestionCommande->Controls->Add(this->txtBx_message_commande);
			this->tbPage_GestionCommande->Controls->Add(this->label57);
			this->tbPage_GestionCommande->Controls->Add(this->groupBox18);
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
			// groupBox20
			// 
			this->groupBox20->Controls->Add(this->button3);
			this->groupBox20->Controls->Add(this->button2);
			this->groupBox20->Controls->Add(this->textBox7);
			this->groupBox20->Controls->Add(this->label58);
			this->groupBox20->Location = System::Drawing::Point(153, 138);
			this->groupBox20->Name = L"groupBox20";
			this->groupBox20->Size = System::Drawing::Size(157, 190);
			this->groupBox20->TabIndex = 57;
			this->groupBox20->TabStop = false;
			this->groupBox20->Text = L"Facture";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(36, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 43);
			this->button3->TabIndex = 43;
			this->button3->Text = L"Génerer la facture";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(5, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 23);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Selectionner un dossier...";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(5, 102);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(145, 20);
			this->textBox7->TabIndex = 38;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(16, 22);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(135, 32);
			this->label58->TabIndex = 40;
			this->label58->Text = L"Choisir un dossier pour \r\nla facture";
			// 
			// txtBx_message_commande
			// 
			this->txtBx_message_commande->Location = System::Drawing::Point(11, 346);
			this->txtBx_message_commande->Multiline = true;
			this->txtBx_message_commande->Name = L"txtBx_message_commande";
			this->txtBx_message_commande->Size = System::Drawing::Size(299, 196);
			this->txtBx_message_commande->TabIndex = 43;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(8, 330);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(54, 16);
			this->label57->TabIndex = 44;
			this->label57->Text = L"Message";
			// 
			// groupBox18
			// 
			this->groupBox18->Controls->Add(this->btn_rechercher_commande);
			this->groupBox18->Controls->Add(this->txtBx_reference_commande_affichage);
			this->groupBox18->Controls->Add(this->label31);
			this->groupBox18->Location = System::Drawing::Point(153, 6);
			this->groupBox18->Name = L"groupBox18";
			this->groupBox18->Size = System::Drawing::Size(157, 126);
			this->groupBox18->TabIndex = 56;
			this->groupBox18->TabStop = false;
			this->groupBox18->Text = L"Affichage";
			// 
			// btn_rechercher_commande
			// 
			this->btn_rechercher_commande->Location = System::Drawing::Point(37, 87);
			this->btn_rechercher_commande->Name = L"btn_rechercher_commande";
			this->btn_rechercher_commande->Size = System::Drawing::Size(82, 23);
			this->btn_rechercher_commande->TabIndex = 42;
			this->btn_rechercher_commande->Text = L"Rechercher";
			this->btn_rechercher_commande->UseVisualStyleBackColor = true;
			this->btn_rechercher_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_rechercher_commande_Click);
			// 
			// txtBx_reference_commande_affichage
			// 
			this->txtBx_reference_commande_affichage->Location = System::Drawing::Point(20, 61);
			this->txtBx_reference_commande_affichage->Name = L"txtBx_reference_commande_affichage";
			this->txtBx_reference_commande_affichage->Size = System::Drawing::Size(117, 20);
			this->txtBx_reference_commande_affichage->TabIndex = 38;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(17, 27);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(93, 32);
			this->label31->TabIndex = 40;
			this->label31->Text = L"Reference de la \r\ncommande";
			// 
			// groupBox15
			// 
			this->groupBox15->Controls->Add(this->btn_modifier_commande);
			this->groupBox15->Controls->Add(this->btn_first_commande);
			this->groupBox15->Controls->Add(this->btn_supprimer_commande);
			this->groupBox15->Controls->Add(this->btn_left_commande);
			this->groupBox15->Controls->Add(this->groupBox16);
			this->groupBox15->Controls->Add(this->btn_right_commande);
			this->groupBox15->Controls->Add(this->btn_last_commande);
			this->groupBox15->Location = System::Drawing::Point(11, 6);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(136, 322);
			this->groupBox15->TabIndex = 54;
			this->groupBox15->TabStop = false;
			this->groupBox15->Text = L"Menu";
			// 
			// btn_modifier_commande
			// 
			this->btn_modifier_commande->Location = System::Drawing::Point(12, 21);
			this->btn_modifier_commande->Name = L"btn_modifier_commande";
			this->btn_modifier_commande->Size = System::Drawing::Size(113, 38);
			this->btn_modifier_commande->TabIndex = 48;
			this->btn_modifier_commande->Text = L"Modifier";
			this->btn_modifier_commande->UseVisualStyleBackColor = true;
			this->btn_modifier_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_modifier_commande_Click);
			// 
			// btn_first_commande
			// 
			this->btn_first_commande->Location = System::Drawing::Point(24, 235);
			this->btn_first_commande->Name = L"btn_first_commande";
			this->btn_first_commande->Size = System::Drawing::Size(38, 38);
			this->btn_first_commande->TabIndex = 39;
			this->btn_first_commande->Text = L"<<";
			this->btn_first_commande->UseVisualStyleBackColor = true;
			this->btn_first_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_first_commande_Click);
			// 
			// btn_supprimer_commande
			// 
			this->btn_supprimer_commande->Location = System::Drawing::Point(12, 65);
			this->btn_supprimer_commande->Name = L"btn_supprimer_commande";
			this->btn_supprimer_commande->Size = System::Drawing::Size(113, 38);
			this->btn_supprimer_commande->TabIndex = 45;
			this->btn_supprimer_commande->Text = L"Supprimer";
			this->btn_supprimer_commande->UseVisualStyleBackColor = true;
			this->btn_supprimer_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_supprimer_commande_Click);
			// 
			// btn_left_commande
			// 
			this->btn_left_commande->Location = System::Drawing::Point(67, 235);
			this->btn_left_commande->Name = L"btn_left_commande";
			this->btn_left_commande->Size = System::Drawing::Size(38, 38);
			this->btn_left_commande->TabIndex = 40;
			this->btn_left_commande->Text = L"<";
			this->btn_left_commande->UseVisualStyleBackColor = true;
			this->btn_left_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_left_commande_Click);
			// 
			// groupBox16
			// 
			this->groupBox16->Controls->Add(this->btn_nouveau_commande);
			this->groupBox16->Controls->Add(this->enregistrer);
			this->groupBox16->Location = System::Drawing::Point(6, 105);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(125, 127);
			this->groupBox16->TabIndex = 47;
			this->groupBox16->TabStop = false;
			this->groupBox16->Text = L"Creer une nouvelle commande";
			// 
			// btn_nouveau_commande
			// 
			this->btn_nouveau_commande->Location = System::Drawing::Point(6, 33);
			this->btn_nouveau_commande->Name = L"btn_nouveau_commande";
			this->btn_nouveau_commande->Size = System::Drawing::Size(113, 38);
			this->btn_nouveau_commande->TabIndex = 44;
			this->btn_nouveau_commande->Text = L"Nouveau";
			this->btn_nouveau_commande->UseVisualStyleBackColor = true;
			this->btn_nouveau_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_nouveau_commande_Click);
			// 
			// enregistrer
			// 
			this->enregistrer->Location = System::Drawing::Point(6, 77);
			this->enregistrer->Name = L"enregistrer";
			this->enregistrer->Size = System::Drawing::Size(113, 38);
			this->enregistrer->TabIndex = 43;
			this->enregistrer->Text = L"Enregistrer";
			this->enregistrer->UseVisualStyleBackColor = true;
			this->enregistrer->Click += gcnew System::EventHandler(this, &MyForm::enregistrer_Click);
			// 
			// btn_right_commande
			// 
			this->btn_right_commande->Location = System::Drawing::Point(24, 279);
			this->btn_right_commande->Name = L"btn_right_commande";
			this->btn_right_commande->Size = System::Drawing::Size(38, 38);
			this->btn_right_commande->TabIndex = 41;
			this->btn_right_commande->Text = L">";
			this->btn_right_commande->UseVisualStyleBackColor = true;
			this->btn_right_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_right_commande_Click);
			// 
			// btn_last_commande
			// 
			this->btn_last_commande->Location = System::Drawing::Point(67, 279);
			this->btn_last_commande->Name = L"btn_last_commande";
			this->btn_last_commande->Size = System::Drawing::Size(38, 38);
			this->btn_last_commande->TabIndex = 42;
			this->btn_last_commande->Text = L">>";
			this->btn_last_commande->UseVisualStyleBackColor = true;
			this->btn_last_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_last_commande_Click);
			// 
			// groupBox17
			// 
			this->groupBox17->Controls->Add(this->label61);
			this->groupBox17->Controls->Add(this->groupBox30);
			this->groupBox17->Controls->Add(this->dataGrid_date_paiement_client_commande);
			this->groupBox17->Controls->Add(this->txtBx_reference_commande);
			this->groupBox17->Controls->Add(this->label43);
			this->groupBox17->Controls->Add(this->groupBox19);
			this->groupBox17->Controls->Add(this->txtBx_remise);
			this->groupBox17->Controls->Add(this->txtBx_date_emission);
			this->groupBox17->Controls->Add(this->label33);
			this->groupBox17->Controls->Add(this->label34);
			this->groupBox17->Controls->Add(this->label44);
			this->groupBox17->Controls->Add(this->txtBx_ID_commande_information);
			this->groupBox17->Controls->Add(this->txtBx_date_livraison);
			this->groupBox17->Controls->Add(this->label46);
			this->groupBox17->Controls->Add(this->dataGrid_ligne_commande);
			this->groupBox17->Controls->Add(this->txtBx_mode_payment);
			this->groupBox17->Controls->Add(this->label52);
			this->groupBox17->Controls->Add(this->label54);
			this->groupBox17->Location = System::Drawing::Point(316, 6);
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->Size = System::Drawing::Size(683, 540);
			this->groupBox17->TabIndex = 52;
			this->groupBox17->TabStop = false;
			this->groupBox17->Text = L"Information";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(543, 11);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(104, 16);
			this->label61->TabIndex = 73;
			this->label61->Text = L"Date de paiement";
			// 
			// groupBox30
			// 
			this->groupBox30->Controls->Add(this->txtBxMontant_total_TTC);
			this->groupBox30->Controls->Add(this->label71);
			this->groupBox30->Controls->Add(this->txtBxMontant_total_TVA);
			this->groupBox30->Controls->Add(this->label70);
			this->groupBox30->Controls->Add(this->txtBxMontant_total_HT);
			this->groupBox30->Controls->Add(this->label69);
			this->groupBox30->Location = System::Drawing::Point(9, 463);
			this->groupBox30->Name = L"groupBox30";
			this->groupBox30->Size = System::Drawing::Size(200, 71);
			this->groupBox30->TabIndex = 57;
			this->groupBox30->TabStop = false;
			this->groupBox30->Text = L"montant Total";
			// 
			// txtBxMontant_total_TTC
			// 
			this->txtBxMontant_total_TTC->Enabled = false;
			this->txtBxMontant_total_TTC->Location = System::Drawing::Point(124, 32);
			this->txtBxMontant_total_TTC->Name = L"txtBxMontant_total_TTC";
			this->txtBxMontant_total_TTC->Size = System::Drawing::Size(70, 20);
			this->txtBxMontant_total_TTC->TabIndex = 60;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(122, 13);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(29, 16);
			this->label71->TabIndex = 59;
			this->label71->Text = L"TTC";
			// 
			// txtBxMontant_total_TVA
			// 
			this->txtBxMontant_total_TVA->Enabled = false;
			this->txtBxMontant_total_TVA->Location = System::Drawing::Point(75, 32);
			this->txtBxMontant_total_TVA->Name = L"txtBxMontant_total_TVA";
			this->txtBxMontant_total_TVA->Size = System::Drawing::Size(43, 20);
			this->txtBxMontant_total_TVA->TabIndex = 58;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(72, 13);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(31, 16);
			this->label70->TabIndex = 57;
			this->label70->Text = L"TVA";
			// 
			// txtBxMontant_total_HT
			// 
			this->txtBxMontant_total_HT->Enabled = false;
			this->txtBxMontant_total_HT->Location = System::Drawing::Point(6, 32);
			this->txtBxMontant_total_HT->Name = L"txtBxMontant_total_HT";
			this->txtBxMontant_total_HT->Size = System::Drawing::Size(63, 20);
			this->txtBxMontant_total_HT->TabIndex = 56;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(3, 13);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(24, 16);
			this->label69->TabIndex = 55;
			this->label69->Text = L"HT";
			// 
			// dataGrid_date_paiement_client_commande
			// 
			this->dataGrid_date_paiement_client_commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_date_paiement_client_commande->Location = System::Drawing::Point(546, 30);
			this->dataGrid_date_paiement_client_commande->Name = L"dataGrid_date_paiement_client_commande";
			this->dataGrid_date_paiement_client_commande->RowHeadersWidth = 51;
			this->dataGrid_date_paiement_client_commande->Size = System::Drawing::Size(131, 133);
			this->dataGrid_date_paiement_client_commande->TabIndex = 72;
			// 
			// txtBx_reference_commande
			// 
			this->txtBx_reference_commande->Enabled = false;
			this->txtBx_reference_commande->Location = System::Drawing::Point(9, 437);
			this->txtBx_reference_commande->Name = L"txtBx_reference_commande";
			this->txtBx_reference_commande->Size = System::Drawing::Size(200, 20);
			this->txtBx_reference_commande->TabIndex = 54;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(6, 418);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(154, 16);
			this->label43->TabIndex = 53;
			this->label43->Text = L"Reference de la commande";
			// 
			// groupBox19
			// 
			this->groupBox19->Controls->Add(this->txtBx_ID_client_commande);
			this->groupBox19->Controls->Add(this->label47);
			this->groupBox19->Controls->Add(this->txtBxID_adresse_commande);
			this->groupBox19->Controls->Add(this->label38);
			this->groupBox19->Controls->Add(this->label49);
			this->groupBox19->Controls->Add(this->btn_selectionner_adresse_commande);
			this->groupBox19->Controls->Add(this->txtBxRue_adresse_commande);
			this->groupBox19->Controls->Add(this->dataGrid_adresse_commande);
			this->groupBox19->Controls->Add(this->label50);
			this->groupBox19->Controls->Add(this->label51);
			this->groupBox19->Controls->Add(this->txtBxPays_adresse_commande);
			this->groupBox19->Controls->Add(this->btn_rechercher_client_commande);
			this->groupBox19->Controls->Add(this->label53);
			this->groupBox19->Controls->Add(this->label39);
			this->groupBox19->Controls->Add(this->txtBxNum_adresse_commande);
			this->groupBox19->Controls->Add(this->btn_selectionner_client_commande);
			this->groupBox19->Controls->Add(this->txtBxCode_postale_adresse_commande);
			this->groupBox19->Controls->Add(this->dataGrid_DDN_client_commande);
			this->groupBox19->Controls->Add(this->label55);
			this->groupBox19->Controls->Add(this->label40);
			this->groupBox19->Controls->Add(this->txtBxVille_adresse_commande);
			this->groupBox19->Controls->Add(this->txtBx_nom_client_commande);
			this->groupBox19->Controls->Add(this->label59);
			this->groupBox19->Controls->Add(this->label41);
			this->groupBox19->Controls->Add(this->label56);
			this->groupBox19->Controls->Add(this->txtBx_prenom_client_commande);
			this->groupBox19->Location = System::Drawing::Point(215, 169);
			this->groupBox19->Name = L"groupBox19";
			this->groupBox19->Size = System::Drawing::Size(467, 371);
			this->groupBox19->TabIndex = 52;
			this->groupBox19->TabStop = false;
			this->groupBox19->Text = L"Client";
			// 
			// txtBx_ID_client_commande
			// 
			this->txtBx_ID_client_commande->Enabled = false;
			this->txtBx_ID_client_commande->Location = System::Drawing::Point(9, 44);
			this->txtBx_ID_client_commande->Name = L"txtBx_ID_client_commande";
			this->txtBx_ID_client_commande->Size = System::Drawing::Size(117, 20);
			this->txtBx_ID_client_commande->TabIndex = 70;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(6, 25);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(54, 16);
			this->label47->TabIndex = 71;
			this->label47->Text = L"ID client";
			// 
			// txtBxID_adresse_commande
			// 
			this->txtBxID_adresse_commande->Enabled = false;
			this->txtBxID_adresse_commande->Location = System::Drawing::Point(406, 44);
			this->txtBxID_adresse_commande->Name = L"txtBxID_adresse_commande";
			this->txtBxID_adresse_commande->Size = System::Drawing::Size(52, 20);
			this->txtBxID_adresse_commande->TabIndex = 68;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(10, 196);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(114, 16);
			this->label38->TabIndex = 58;
			this->label38->Text = L"Adresse de livraison";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(342, 47);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(58, 13);
			this->label49->TabIndex = 69;
			this->label49->Text = L"ID adresse";
			// 
			// btn_selectionner_adresse_commande
			// 
			this->btn_selectionner_adresse_commande->Location = System::Drawing::Point(10, 326);
			this->btn_selectionner_adresse_commande->Name = L"btn_selectionner_adresse_commande";
			this->btn_selectionner_adresse_commande->Size = System::Drawing::Size(93, 41);
			this->btn_selectionner_adresse_commande->TabIndex = 57;
			this->btn_selectionner_adresse_commande->Text = L"Selectionner l\'adresse";
			this->btn_selectionner_adresse_commande->UseVisualStyleBackColor = true;
			this->btn_selectionner_adresse_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_selectionner_adresse_commande_Click);
			// 
			// txtBxRue_adresse_commande
			// 
			this->txtBxRue_adresse_commande->Location = System::Drawing::Point(294, 69);
			this->txtBxRue_adresse_commande->Name = L"txtBxRue_adresse_commande";
			this->txtBxRue_adresse_commande->Size = System::Drawing::Size(164, 20);
			this->txtBxRue_adresse_commande->TabIndex = 66;
			// 
			// dataGrid_adresse_commande
			// 
			this->dataGrid_adresse_commande->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid_adresse_commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_adresse_commande->Location = System::Drawing::Point(10, 215);
			this->dataGrid_adresse_commande->Name = L"dataGrid_adresse_commande";
			this->dataGrid_adresse_commande->RowHeadersWidth = 51;
			this->dataGrid_adresse_commande->Size = System::Drawing::Size(451, 105);
			this->dataGrid_adresse_commande->TabIndex = 56;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(263, 72);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(27, 13);
			this->label50->TabIndex = 67;
			this->label50->Text = L"Rue";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(263, 150);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(30, 13);
			this->label51->TabIndex = 65;
			this->label51->Text = L"Pays";
			// 
			// txtBxPays_adresse_commande
			// 
			this->txtBxPays_adresse_commande->Location = System::Drawing::Point(294, 147);
			this->txtBxPays_adresse_commande->Name = L"txtBxPays_adresse_commande";
			this->txtBxPays_adresse_commande->Size = System::Drawing::Size(164, 20);
			this->txtBxPays_adresse_commande->TabIndex = 64;
			// 
			// btn_rechercher_client_commande
			// 
			this->btn_rechercher_client_commande->Location = System::Drawing::Point(9, 151);
			this->btn_rechercher_client_commande->Name = L"btn_rechercher_client_commande";
			this->btn_rechercher_client_commande->Size = System::Drawing::Size(75, 23);
			this->btn_rechercher_client_commande->TabIndex = 42;
			this->btn_rechercher_client_commande->Text = L"Rechercher";
			this->btn_rechercher_client_commande->UseVisualStyleBackColor = true;
			this->btn_rechercher_client_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_rechercher_client_commande_Click);
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(263, 124);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(63, 13);
			this->label53->TabIndex = 63;
			this->label53->Text = L"Code postal";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(127, 25);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(104, 16);
			this->label39->TabIndex = 44;
			this->label39->Text = L"Date de naissance";
			// 
			// txtBxNum_adresse_commande
			// 
			this->txtBxNum_adresse_commande->Location = System::Drawing::Point(294, 44);
			this->txtBxNum_adresse_commande->Name = L"txtBxNum_adresse_commande";
			this->txtBxNum_adresse_commande->Size = System::Drawing::Size(36, 20);
			this->txtBxNum_adresse_commande->TabIndex = 57;
			// 
			// btn_selectionner_client_commande
			// 
			this->btn_selectionner_client_commande->Location = System::Drawing::Point(130, 155);
			this->btn_selectionner_client_commande->Name = L"btn_selectionner_client_commande";
			this->btn_selectionner_client_commande->Size = System::Drawing::Size(75, 41);
			this->btn_selectionner_client_commande->TabIndex = 45;
			this->btn_selectionner_client_commande->Text = L"Selectionner le client";
			this->btn_selectionner_client_commande->UseVisualStyleBackColor = true;
			this->btn_selectionner_client_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_selectionner_client_commande_Click);
			// 
			// txtBxCode_postale_adresse_commande
			// 
			this->txtBxCode_postale_adresse_commande->Location = System::Drawing::Point(332, 121);
			this->txtBxCode_postale_adresse_commande->Name = L"txtBxCode_postale_adresse_commande";
			this->txtBxCode_postale_adresse_commande->Size = System::Drawing::Size(126, 20);
			this->txtBxCode_postale_adresse_commande->TabIndex = 62;
			// 
			// dataGrid_DDN_client_commande
			// 
			this->dataGrid_DDN_client_commande->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid_DDN_client_commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_DDN_client_commande->Location = System::Drawing::Point(130, 44);
			this->dataGrid_DDN_client_commande->Name = L"dataGrid_DDN_client_commande";
			this->dataGrid_DDN_client_commande->RowHeadersWidth = 51;
			this->dataGrid_DDN_client_commande->Size = System::Drawing::Size(128, 105);
			this->dataGrid_DDN_client_commande->TabIndex = 43;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(263, 98);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(26, 13);
			this->label55->TabIndex = 61;
			this->label55->Text = L"Ville";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(7, 106);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(51, 16);
			this->label40->TabIndex = 41;
			this->label40->Text = L"Prenom";
			// 
			// txtBxVille_adresse_commande
			// 
			this->txtBxVille_adresse_commande->Location = System::Drawing::Point(294, 95);
			this->txtBxVille_adresse_commande->Name = L"txtBxVille_adresse_commande";
			this->txtBxVille_adresse_commande->Size = System::Drawing::Size(164, 20);
			this->txtBxVille_adresse_commande->TabIndex = 60;
			// 
			// txtBx_nom_client_commande
			// 
			this->txtBx_nom_client_commande->Location = System::Drawing::Point(10, 83);
			this->txtBx_nom_client_commande->Name = L"txtBx_nom_client_commande";
			this->txtBx_nom_client_commande->Size = System::Drawing::Size(117, 20);
			this->txtBx_nom_client_commande->TabIndex = 38;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(263, 47);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(29, 13);
			this->label59->TabIndex = 59;
			this->label59->Text = L"Num";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(7, 64);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(35, 16);
			this->label41->TabIndex = 40;
			this->label41->Text = L"Nom";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(263, 25);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(148, 16);
			this->label56->TabIndex = 56;
			this->label56->Text = L"Adresse de livraison choisi";
			// 
			// txtBx_prenom_client_commande
			// 
			this->txtBx_prenom_client_commande->Location = System::Drawing::Point(10, 125);
			this->txtBx_prenom_client_commande->Name = L"txtBx_prenom_client_commande";
			this->txtBx_prenom_client_commande->Size = System::Drawing::Size(117, 20);
			this->txtBx_prenom_client_commande->TabIndex = 39;
			// 
			// txtBx_remise
			// 
			this->txtBx_remise->Location = System::Drawing::Point(7, 395);
			this->txtBx_remise->Name = L"txtBx_remise";
			this->txtBx_remise->Size = System::Drawing::Size(200, 20);
			this->txtBx_remise->TabIndex = 49;
			// 
			// txtBx_date_emission
			// 
			this->txtBx_date_emission->Location = System::Drawing::Point(9, 353);
			this->txtBx_date_emission->Name = L"txtBx_date_emission";
			this->txtBx_date_emission->Size = System::Drawing::Size(200, 20);
			this->txtBx_date_emission->TabIndex = 45;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(4, 376);
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
			this->label34->Location = System::Drawing::Point(6, 337);
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
			this->label44->Location = System::Drawing::Point(6, 217);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(113, 16);
			this->label44->TabIndex = 43;
			this->label44->Text = L"ID de la commande";
			// 
			// txtBx_ID_commande_information
			// 
			this->txtBx_ID_commande_information->Enabled = false;
			this->txtBx_ID_commande_information->Location = System::Drawing::Point(9, 233);
			this->txtBx_ID_commande_information->Name = L"txtBx_ID_commande_information";
			this->txtBx_ID_commande_information->Size = System::Drawing::Size(200, 20);
			this->txtBx_ID_commande_information->TabIndex = 42;
			// 
			// txtBx_date_livraison
			// 
			this->txtBx_date_livraison->Location = System::Drawing::Point(9, 314);
			this->txtBx_date_livraison->Name = L"txtBx_date_livraison";
			this->txtBx_date_livraison->Size = System::Drawing::Size(200, 20);
			this->txtBx_date_livraison->TabIndex = 40;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(10, 11);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(117, 16);
			this->label46->TabIndex = 38;
			this->label46->Text = L"Ligne de commande";
			// 
			// dataGrid_ligne_commande
			// 
			this->dataGrid_ligne_commande->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid_ligne_commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_ligne_commande->Location = System::Drawing::Point(13, 30);
			this->dataGrid_ligne_commande->Name = L"dataGrid_ligne_commande";
			this->dataGrid_ligne_commande->RowHeadersWidth = 51;
			this->dataGrid_ligne_commande->Size = System::Drawing::Size(528, 133);
			this->dataGrid_ligne_commande->TabIndex = 37;
			// 
			// txtBx_mode_payment
			// 
			this->txtBx_mode_payment->Location = System::Drawing::Point(9, 272);
			this->txtBx_mode_payment->Name = L"txtBx_mode_payment";
			this->txtBx_mode_payment->Size = System::Drawing::Size(200, 20);
			this->txtBx_mode_payment->TabIndex = 22;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(6, 295);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(98, 16);
			this->label52->TabIndex = 27;
			this->label52->Text = L"Date de livraison";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(6, 256);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(109, 16);
			this->label54->TabIndex = 28;
			this->label54->Text = L"Mode de paiement";
			// 
			// tbPage_GestionStock
			// 
			this->tbPage_GestionStock->Controls->Add(this->label27);
			this->tbPage_GestionStock->Controls->Add(this->txtBx_message_stock);
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
			// txtBx_message_stock
			// 
			this->txtBx_message_stock->Location = System::Drawing::Point(316, 454);
			this->txtBx_message_stock->Multiline = true;
			this->txtBx_message_stock->Name = L"txtBx_message_stock";
			this->txtBx_message_stock->Size = System::Drawing::Size(683, 77);
			this->txtBx_message_stock->TabIndex = 55;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->btn_modifier_article);
			this->groupBox11->Controls->Add(this->btn_first_article);
			this->groupBox11->Controls->Add(this->btn_supprimer_article);
			this->groupBox11->Controls->Add(this->btn_left_article);
			this->groupBox11->Controls->Add(this->groupBox12);
			this->groupBox11->Controls->Add(this->btn_right_article);
			this->groupBox11->Controls->Add(this->btn_last_article);
			this->groupBox11->Location = System::Drawing::Point(52, 200);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(182, 308);
			this->groupBox11->TabIndex = 54;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Menu";
			// 
			// btn_modifier_article
			// 
			this->btn_modifier_article->Location = System::Drawing::Point(12, 21);
			this->btn_modifier_article->Name = L"btn_modifier_article";
			this->btn_modifier_article->Size = System::Drawing::Size(157, 38);
			this->btn_modifier_article->TabIndex = 48;
			this->btn_modifier_article->Text = L"Modifier";
			this->btn_modifier_article->UseVisualStyleBackColor = true;
			this->btn_modifier_article->Click += gcnew System::EventHandler(this, &MyForm::btn_modifier_article_Click);
			// 
			// btn_first_article
			// 
			this->btn_first_article->Location = System::Drawing::Point(6, 247);
			this->btn_first_article->Name = L"btn_first_article";
			this->btn_first_article->Size = System::Drawing::Size(38, 38);
			this->btn_first_article->TabIndex = 39;
			this->btn_first_article->Text = L"<<";
			this->btn_first_article->UseVisualStyleBackColor = true;
			this->btn_first_article->Click += gcnew System::EventHandler(this, &MyForm::btn_first_article_Click);
			// 
			// btn_supprimer_article
			// 
			this->btn_supprimer_article->Location = System::Drawing::Point(12, 65);
			this->btn_supprimer_article->Name = L"btn_supprimer_article";
			this->btn_supprimer_article->Size = System::Drawing::Size(157, 38);
			this->btn_supprimer_article->TabIndex = 45;
			this->btn_supprimer_article->Text = L"Supprimer";
			this->btn_supprimer_article->UseVisualStyleBackColor = true;
			this->btn_supprimer_article->Click += gcnew System::EventHandler(this, &MyForm::btn_supprimer_article_Click);
			// 
			// btn_left_article
			// 
			this->btn_left_article->Location = System::Drawing::Point(49, 247);
			this->btn_left_article->Name = L"btn_left_article";
			this->btn_left_article->Size = System::Drawing::Size(38, 38);
			this->btn_left_article->TabIndex = 40;
			this->btn_left_article->Text = L"<";
			this->btn_left_article->UseVisualStyleBackColor = true;
			this->btn_left_article->Click += gcnew System::EventHandler(this, &MyForm::btn_left_article_Click);
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->btn_nouveau_article);
			this->groupBox12->Controls->Add(this->btn_enregistrer_article);
			this->groupBox12->Location = System::Drawing::Point(6, 115);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(169, 117);
			this->groupBox12->TabIndex = 47;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Creer un nouvel article";
			// 
			// btn_nouveau_article
			// 
			this->btn_nouveau_article->Location = System::Drawing::Point(6, 19);
			this->btn_nouveau_article->Name = L"btn_nouveau_article";
			this->btn_nouveau_article->Size = System::Drawing::Size(157, 38);
			this->btn_nouveau_article->TabIndex = 44;
			this->btn_nouveau_article->Text = L"Nouveau";
			this->btn_nouveau_article->UseVisualStyleBackColor = true;
			this->btn_nouveau_article->Click += gcnew System::EventHandler(this, &MyForm::btn_nouveau_article_Click);
			// 
			// btn_enregistrer_article
			// 
			this->btn_enregistrer_article->Location = System::Drawing::Point(6, 63);
			this->btn_enregistrer_article->Name = L"btn_enregistrer_article";
			this->btn_enregistrer_article->Size = System::Drawing::Size(157, 38);
			this->btn_enregistrer_article->TabIndex = 43;
			this->btn_enregistrer_article->Text = L"Enregistrer";
			this->btn_enregistrer_article->UseVisualStyleBackColor = true;
			this->btn_enregistrer_article->Click += gcnew System::EventHandler(this, &MyForm::btn_enregistrer_article_Click);
			// 
			// btn_right_article
			// 
			this->btn_right_article->Location = System::Drawing::Point(93, 247);
			this->btn_right_article->Name = L"btn_right_article";
			this->btn_right_article->Size = System::Drawing::Size(38, 38);
			this->btn_right_article->TabIndex = 41;
			this->btn_right_article->Text = L">";
			this->btn_right_article->UseVisualStyleBackColor = true;
			this->btn_right_article->Click += gcnew System::EventHandler(this, &MyForm::btn_right_article_Click);
			// 
			// btn_last_article
			// 
			this->btn_last_article->Location = System::Drawing::Point(137, 247);
			this->btn_last_article->Name = L"btn_last_article";
			this->btn_last_article->Size = System::Drawing::Size(38, 38);
			this->btn_last_article->TabIndex = 42;
			this->btn_last_article->Text = L">>";
			this->btn_last_article->UseVisualStyleBackColor = true;
			this->btn_last_article->Click += gcnew System::EventHandler(this, &MyForm::btn_last_article_Click);
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->txtBx_prix_article);
			this->groupBox13->Controls->Add(this->label68);
			this->groupBox13->Controls->Add(this->txtBx_ID_article);
			this->groupBox13->Controls->Add(this->label45);
			this->groupBox13->Controls->Add(this->txtBx_quantite_article);
			this->groupBox13->Controls->Add(this->label30);
			this->groupBox13->Controls->Add(this->txtBx_couleur_article);
			this->groupBox13->Controls->Add(this->label29);
			this->groupBox13->Controls->Add(this->txtBx_reference_article);
			this->groupBox13->Controls->Add(this->label28);
			this->groupBox13->Location = System::Drawing::Point(316, 6);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(683, 426);
			this->groupBox13->TabIndex = 52;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Information";
			// 
			// txtBx_prix_article
			// 
			this->txtBx_prix_article->Location = System::Drawing::Point(268, 288);
			this->txtBx_prix_article->Name = L"txtBx_prix_article";
			this->txtBx_prix_article->Size = System::Drawing::Size(117, 20);
			this->txtBx_prix_article->TabIndex = 49;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(265, 272);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(93, 16);
			this->label68->TabIndex = 50;
			this->label68->Text = L"Prix unitaire HT";
			// 
			// txtBx_ID_article
			// 
			this->txtBx_ID_article->Enabled = false;
			this->txtBx_ID_article->Location = System::Drawing::Point(268, 106);
			this->txtBx_ID_article->Name = L"txtBx_ID_article";
			this->txtBx_ID_article->Size = System::Drawing::Size(117, 20);
			this->txtBx_ID_article->TabIndex = 47;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(265, 90);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(80, 16);
			this->label45->TabIndex = 48;
			this->label45->Text = L"ID de l\'article";
			// 
			// txtBx_quantite_article
			// 
			this->txtBx_quantite_article->Location = System::Drawing::Point(268, 243);
			this->txtBx_quantite_article->Name = L"txtBx_quantite_article";
			this->txtBx_quantite_article->Size = System::Drawing::Size(117, 20);
			this->txtBx_quantite_article->TabIndex = 45;
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
			// txtBx_couleur_article
			// 
			this->txtBx_couleur_article->Location = System::Drawing::Point(268, 194);
			this->txtBx_couleur_article->Name = L"txtBx_couleur_article";
			this->txtBx_couleur_article->Size = System::Drawing::Size(117, 20);
			this->txtBx_couleur_article->TabIndex = 43;
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
			// txtBx_reference_article
			// 
			this->txtBx_reference_article->Location = System::Drawing::Point(269, 145);
			this->txtBx_reference_article->Name = L"txtBx_reference_article";
			this->txtBx_reference_article->Size = System::Drawing::Size(117, 20);
			this->txtBx_reference_article->TabIndex = 41;
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
			this->groupBox14->Controls->Add(this->txtBx_couleur_article_affichage);
			this->groupBox14->Controls->Add(this->label48);
			this->groupBox14->Controls->Add(this->btn_rechercher_article);
			this->groupBox14->Controls->Add(this->txtBx_reference_article_affichage);
			this->groupBox14->Controls->Add(this->label42);
			this->groupBox14->Location = System::Drawing::Point(64, 38);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(157, 156);
			this->groupBox14->TabIndex = 51;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Affichage";
			// 
			// txtBx_couleur_article_affichage
			// 
			this->txtBx_couleur_article_affichage->Location = System::Drawing::Point(20, 93);
			this->txtBx_couleur_article_affichage->Name = L"txtBx_couleur_article_affichage";
			this->txtBx_couleur_article_affichage->Size = System::Drawing::Size(117, 20);
			this->txtBx_couleur_article_affichage->TabIndex = 43;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(17, 77);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(109, 16);
			this->label48->TabIndex = 44;
			this->label48->Text = L"Couleur de l\'article";
			// 
			// btn_rechercher_article
			// 
			this->btn_rechercher_article->Location = System::Drawing::Point(36, 126);
			this->btn_rechercher_article->Name = L"btn_rechercher_article";
			this->btn_rechercher_article->Size = System::Drawing::Size(82, 23);
			this->btn_rechercher_article->TabIndex = 42;
			this->btn_rechercher_article->Text = L"Rechercher";
			this->btn_rechercher_article->UseVisualStyleBackColor = true;
			this->btn_rechercher_article->Click += gcnew System::EventHandler(this, &MyForm::btn_rechercher_article_Click);
			// 
			// txtBx_reference_article_affichage
			// 
			this->txtBx_reference_article_affichage->Location = System::Drawing::Point(20, 45);
			this->txtBx_reference_article_affichage->Name = L"txtBx_reference_article_affichage";
			this->txtBx_reference_article_affichage->Size = System::Drawing::Size(117, 20);
			this->txtBx_reference_article_affichage->TabIndex = 38;
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
			this->tbPage_GestionStatistiques->Controls->Add(this->groupBox29);
			this->tbPage_GestionStatistiques->Controls->Add(this->groupBox28);
			this->tbPage_GestionStatistiques->Controls->Add(this->groupBox27);
			this->tbPage_GestionStatistiques->Controls->Add(this->groupBox26);
			this->tbPage_GestionStatistiques->Controls->Add(this->groupBox25);
			this->tbPage_GestionStatistiques->Location = System::Drawing::Point(4, 22);
			this->tbPage_GestionStatistiques->Name = L"tbPage_GestionStatistiques";
			this->tbPage_GestionStatistiques->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionStatistiques->Size = System::Drawing::Size(1007, 549);
			this->tbPage_GestionStatistiques->TabIndex = 5;
			this->tbPage_GestionStatistiques->Text = L"Gestion Statistiques";
			this->tbPage_GestionStatistiques->UseVisualStyleBackColor = true;
			// 
			// groupBox29
			// 
			this->groupBox29->Controls->Add(this->dataGrid_article_moins_vendus);
			this->groupBox29->Controls->Add(this->label67);
			this->groupBox29->Controls->Add(this->label66);
			this->groupBox29->Controls->Add(this->btn_identifier_statistique);
			this->groupBox29->Controls->Add(this->dataGrid_article_plus_vendus);
			this->groupBox29->Location = System::Drawing::Point(3, 383);
			this->groupBox29->Name = L"groupBox29";
			this->groupBox29->Size = System::Drawing::Size(587, 159);
			this->groupBox29->TabIndex = 15;
			this->groupBox29->TabStop = false;
			this->groupBox29->Text = L"Vente articles";
			// 
			// dataGrid_article_moins_vendus
			// 
			this->dataGrid_article_moins_vendus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_article_moins_vendus->Location = System::Drawing::Point(291, 48);
			this->dataGrid_article_moins_vendus->Name = L"dataGrid_article_moins_vendus";
			this->dataGrid_article_moins_vendus->RowHeadersWidth = 51;
			this->dataGrid_article_moins_vendus->Size = System::Drawing::Size(265, 105);
			this->dataGrid_article_moins_vendus->TabIndex = 21;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(435, 32);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(125, 13);
			this->label67->TabIndex = 20;
			this->label67->Text = L"Articles les moins vendus";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(20, 32);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(117, 13);
			this->label66->TabIndex = 17;
			this->label66->Text = L"Articles les plus vendus";
			// 
			// btn_identifier_statistique
			// 
			this->btn_identifier_statistique->Location = System::Drawing::Point(218, 19);
			this->btn_identifier_statistique->Name = L"btn_identifier_statistique";
			this->btn_identifier_statistique->Size = System::Drawing::Size(127, 23);
			this->btn_identifier_statistique->TabIndex = 15;
			this->btn_identifier_statistique->Text = L"Identifier";
			this->btn_identifier_statistique->UseVisualStyleBackColor = true;
			this->btn_identifier_statistique->Click += gcnew System::EventHandler(this, &MyForm::btn_identifier_statistique_Click);
			// 
			// dataGrid_article_plus_vendus
			// 
			this->dataGrid_article_plus_vendus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_article_plus_vendus->Location = System::Drawing::Point(20, 48);
			this->dataGrid_article_plus_vendus->Name = L"dataGrid_article_plus_vendus";
			this->dataGrid_article_plus_vendus->RowHeadersWidth = 51;
			this->dataGrid_article_plus_vendus->Size = System::Drawing::Size(265, 105);
			this->dataGrid_article_plus_vendus->TabIndex = 19;
			// 
			// groupBox28
			// 
			this->groupBox28->Controls->Add(this->btn_recherche_reaprovisionnement);
			this->groupBox28->Controls->Add(this->label65);
			this->groupBox28->Controls->Add(this->txtBx_seuil_reaprovisionnement);
			this->groupBox28->Controls->Add(this->dataGrid_reaprovisionnement);
			this->groupBox28->Location = System::Drawing::Point(144, 178);
			this->groupBox28->Name = L"groupBox28";
			this->groupBox28->Size = System::Drawing::Size(446, 200);
			this->groupBox28->TabIndex = 16;
			this->groupBox28->TabStop = false;
			this->groupBox28->Text = L"Produit sous le seuil de réaprovisionnement";
			// 
			// btn_recherche_reaprovisionnement
			// 
			this->btn_recherche_reaprovisionnement->Location = System::Drawing::Point(29, 88);
			this->btn_recherche_reaprovisionnement->Name = L"btn_recherche_reaprovisionnement";
			this->btn_recherche_reaprovisionnement->Size = System::Drawing::Size(75, 53);
			this->btn_recherche_reaprovisionnement->TabIndex = 17;
			this->btn_recherche_reaprovisionnement->Text = L"Rechercher";
			this->btn_recherche_reaprovisionnement->UseVisualStyleBackColor = true;
			this->btn_recherche_reaprovisionnement->Click += gcnew System::EventHandler(this, &MyForm::btn_recherche_reaprovisionnement_Click);
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(17, 33);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(140, 13);
			this->label65->TabIndex = 6;
			this->label65->Text = L"Seuil de réaprovisionnement";
			// 
			// txtBx_seuil_reaprovisionnement
			// 
			this->txtBx_seuil_reaprovisionnement->Location = System::Drawing::Point(20, 49);
			this->txtBx_seuil_reaprovisionnement->Name = L"txtBx_seuil_reaprovisionnement";
			this->txtBx_seuil_reaprovisionnement->Size = System::Drawing::Size(100, 20);
			this->txtBx_seuil_reaprovisionnement->TabIndex = 5;
			// 
			// dataGrid_reaprovisionnement
			// 
			this->dataGrid_reaprovisionnement->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_reaprovisionnement->Location = System::Drawing::Point(163, 33);
			this->dataGrid_reaprovisionnement->Name = L"dataGrid_reaprovisionnement";
			this->dataGrid_reaprovisionnement->RowHeadersWidth = 51;
			this->dataGrid_reaprovisionnement->Size = System::Drawing::Size(240, 150);
			this->dataGrid_reaprovisionnement->TabIndex = 0;
			// 
			// groupBox27
			// 
			this->groupBox27->Controls->Add(this->cbBx_mois_statistique);
			this->groupBox27->Controls->Add(this->label64);
			this->groupBox27->Controls->Add(this->btn_CalculChiffreAffaireMois);
			this->groupBox27->Controls->Add(this->txtx_Resultat_CalculChiffreAffaireMois);
			this->groupBox27->Location = System::Drawing::Point(5, 178);
			this->groupBox27->Name = L"groupBox27";
			this->groupBox27->Size = System::Drawing::Size(133, 199);
			this->groupBox27->TabIndex = 15;
			this->groupBox27->TabStop = false;
			this->groupBox27->Text = L"Calcul du chiffre d\'affaire en fonction du mois";
			// 
			// cbBx_mois_statistique
			// 
			this->cbBx_mois_statistique->FormattingEnabled = true;
			this->cbBx_mois_statistique->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9", L"10", L"11", L"12"
			});
			this->cbBx_mois_statistique->Location = System::Drawing::Point(6, 45);
			this->cbBx_mois_statistique->Name = L"cbBx_mois_statistique";
			this->cbBx_mois_statistique->Size = System::Drawing::Size(121, 21);
			this->cbBx_mois_statistique->TabIndex = 16;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(18, 128);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(46, 13);
			this->label64->TabIndex = 13;
			this->label64->Text = L"Résultat";
			// 
			// btn_CalculChiffreAffaireMois
			// 
			this->btn_CalculChiffreAffaireMois->Location = System::Drawing::Point(38, 72);
			this->btn_CalculChiffreAffaireMois->Name = L"btn_CalculChiffreAffaireMois";
			this->btn_CalculChiffreAffaireMois->Size = System::Drawing::Size(57, 53);
			this->btn_CalculChiffreAffaireMois->TabIndex = 14;
			this->btn_CalculChiffreAffaireMois->Text = L"Calculer";
			this->btn_CalculChiffreAffaireMois->UseVisualStyleBackColor = true;
			this->btn_CalculChiffreAffaireMois->Click += gcnew System::EventHandler(this, &MyForm::btn_CalculChiffreAffaireMois_Click);
			// 
			// txtx_Resultat_CalculChiffreAffaireMois
			// 
			this->txtx_Resultat_CalculChiffreAffaireMois->Location = System::Drawing::Point(18, 144);
			this->txtx_Resultat_CalculChiffreAffaireMois->Name = L"txtx_Resultat_CalculChiffreAffaireMois";
			this->txtx_Resultat_CalculChiffreAffaireMois->Size = System::Drawing::Size(96, 20);
			this->txtx_Resultat_CalculChiffreAffaireMois->TabIndex = 12;
			// 
			// groupBox26
			// 
			this->groupBox26->Controls->Add(this->label60);
			this->groupBox26->Controls->Add(this->textBox1);
			this->groupBox26->Controls->Add(this->btn_simulation);
			this->groupBox26->Controls->Add(this->Btn_valeur_achat_stock);
			this->groupBox26->Controls->Add(this->Btn_valeur_commerciale_stock);
			this->groupBox26->Controls->Add(this->label63);
			this->groupBox26->Controls->Add(this->btn_panier_moyen);
			this->groupBox26->Controls->Add(this->txtBx_resultat_statistique);
			this->groupBox26->Location = System::Drawing::Point(596, 6);
			this->groupBox26->Name = L"groupBox26";
			this->groupBox26->Size = System::Drawing::Size(408, 537);
			this->groupBox26->TabIndex = 12;
			this->groupBox26->TabStop = false;
			this->groupBox26->Text = L"Calcul";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(74, 377);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(59, 13);
			this->label60->TabIndex = 18;
			this->label60->Text = L"Information";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(77, 396);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(249, 108);
			this->textBox1->TabIndex = 17;
			// 
			// btn_simulation
			// 
			this->btn_simulation->Location = System::Drawing::Point(111, 49);
			this->btn_simulation->Name = L"btn_simulation";
			this->btn_simulation->Size = System::Drawing::Size(169, 51);
			this->btn_simulation->TabIndex = 11;
			this->btn_simulation->Text = L"Simulation des valeurs commerciales";
			this->btn_simulation->UseVisualStyleBackColor = true;
			this->btn_simulation->Click += gcnew System::EventHandler(this, &MyForm::btn_simulation_Click);
			// 
			// Btn_valeur_achat_stock
			// 
			this->Btn_valeur_achat_stock->Location = System::Drawing::Point(111, 223);
			this->Btn_valeur_achat_stock->Name = L"Btn_valeur_achat_stock";
			this->Btn_valeur_achat_stock->Size = System::Drawing::Size(169, 53);
			this->Btn_valeur_achat_stock->TabIndex = 16;
			this->Btn_valeur_achat_stock->Text = L"Calcul de la valeur d\'achat du stock";
			this->Btn_valeur_achat_stock->UseVisualStyleBackColor = true;
			this->Btn_valeur_achat_stock->Click += gcnew System::EventHandler(this, &MyForm::Btn_valeur_achat_stock_Click);
			// 
			// Btn_valeur_commerciale_stock
			// 
			this->Btn_valeur_commerciale_stock->Location = System::Drawing::Point(111, 164);
			this->Btn_valeur_commerciale_stock->Name = L"Btn_valeur_commerciale_stock";
			this->Btn_valeur_commerciale_stock->Size = System::Drawing::Size(169, 53);
			this->Btn_valeur_commerciale_stock->TabIndex = 15;
			this->Btn_valeur_commerciale_stock->Text = L"Calcule de la valeur commerciale du stock";
			this->Btn_valeur_commerciale_stock->UseVisualStyleBackColor = true;
			this->Btn_valeur_commerciale_stock->Click += gcnew System::EventHandler(this, &MyForm::Btn_valeur_commerciale_stock_Click);
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(174, 300);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(46, 13);
			this->label63->TabIndex = 13;
			this->label63->Text = L"Résultat";
			// 
			// btn_panier_moyen
			// 
			this->btn_panier_moyen->Location = System::Drawing::Point(111, 105);
			this->btn_panier_moyen->Name = L"btn_panier_moyen";
			this->btn_panier_moyen->Size = System::Drawing::Size(169, 53);
			this->btn_panier_moyen->TabIndex = 14;
			this->btn_panier_moyen->Text = L"Calcul du panier moyen";
			this->btn_panier_moyen->UseVisualStyleBackColor = true;
			this->btn_panier_moyen->Click += gcnew System::EventHandler(this, &MyForm::btn_panier_moyen_Click);
			// 
			// txtBx_resultat_statistique
			// 
			this->txtBx_resultat_statistique->Location = System::Drawing::Point(77, 316);
			this->txtBx_resultat_statistique->Name = L"txtBx_resultat_statistique";
			this->txtBx_resultat_statistique->Size = System::Drawing::Size(249, 20);
			this->txtBx_resultat_statistique->TabIndex = 12;
			// 
			// groupBox25
			// 
			this->groupBox25->Controls->Add(this->groupBox22);
			this->groupBox25->Controls->Add(this->groupBox24);
			this->groupBox25->Controls->Add(this->groupBox21);
			this->groupBox25->Controls->Add(this->groupBox23);
			this->groupBox25->Location = System::Drawing::Point(6, 6);
			this->groupBox25->Name = L"groupBox25";
			this->groupBox25->Size = System::Drawing::Size(584, 165);
			this->groupBox25->TabIndex = 11;
			this->groupBox25->TabStop = false;
			this->groupBox25->Text = L"Simulation des valeurs commerciales";
			// 
			// groupBox22
			// 
			this->groupBox22->Controls->Add(this->rB_TVA_2_1);
			this->groupBox22->Controls->Add(this->rB_TVA_20);
			this->groupBox22->Controls->Add(this->rB_TVA_5_5);
			this->groupBox22->Location = System::Drawing::Point(37, 37);
			this->groupBox22->Name = L"groupBox22";
			this->groupBox22->Size = System::Drawing::Size(76, 96);
			this->groupBox22->TabIndex = 8;
			this->groupBox22->TabStop = false;
			this->groupBox22->Text = L"TVA";
			// 
			// rB_TVA_2_1
			// 
			this->rB_TVA_2_1->AutoSize = true;
			this->rB_TVA_2_1->Location = System::Drawing::Point(9, 64);
			this->rB_TVA_2_1->Name = L"rB_TVA_2_1";
			this->rB_TVA_2_1->Size = System::Drawing::Size(48, 17);
			this->rB_TVA_2_1->TabIndex = 2;
			this->rB_TVA_2_1->TabStop = true;
			this->rB_TVA_2_1->Text = L"2,1%";
			this->rB_TVA_2_1->UseVisualStyleBackColor = true;
			// 
			// rB_TVA_20
			// 
			this->rB_TVA_20->AutoSize = true;
			this->rB_TVA_20->Location = System::Drawing::Point(9, 18);
			this->rB_TVA_20->Name = L"rB_TVA_20";
			this->rB_TVA_20->Size = System::Drawing::Size(45, 17);
			this->rB_TVA_20->TabIndex = 0;
			this->rB_TVA_20->TabStop = true;
			this->rB_TVA_20->Text = L"20%";
			this->rB_TVA_20->UseVisualStyleBackColor = true;
			// 
			// rB_TVA_5_5
			// 
			this->rB_TVA_5_5->AutoSize = true;
			this->rB_TVA_5_5->Location = System::Drawing::Point(9, 41);
			this->rB_TVA_5_5->Name = L"rB_TVA_5_5";
			this->rB_TVA_5_5->Size = System::Drawing::Size(48, 17);
			this->rB_TVA_5_5->TabIndex = 1;
			this->rB_TVA_5_5->TabStop = true;
			this->rB_TVA_5_5->Text = L"5,5%";
			this->rB_TVA_5_5->UseVisualStyleBackColor = true;
			// 
			// groupBox24
			// 
			this->groupBox24->Controls->Add(this->rB_demarque_5);
			this->groupBox24->Controls->Add(this->rB_demarque_2);
			this->groupBox24->Controls->Add(this->rB_demarque_3);
			this->groupBox24->Location = System::Drawing::Point(241, 37);
			this->groupBox24->Name = L"groupBox24";
			this->groupBox24->Size = System::Drawing::Size(119, 96);
			this->groupBox24->TabIndex = 10;
			this->groupBox24->TabStop = false;
			this->groupBox24->Text = L"Démarque Inconnue";
			// 
			// rB_demarque_5
			// 
			this->rB_demarque_5->AutoSize = true;
			this->rB_demarque_5->Location = System::Drawing::Point(6, 65);
			this->rB_demarque_5->Name = L"rB_demarque_5";
			this->rB_demarque_5->Size = System::Drawing::Size(44, 17);
			this->rB_demarque_5->TabIndex = 2;
			this->rB_demarque_5->TabStop = true;
			this->rB_demarque_5->Text = L"x5%";
			this->rB_demarque_5->UseVisualStyleBackColor = true;
			// 
			// rB_demarque_2
			// 
			this->rB_demarque_2->AutoSize = true;
			this->rB_demarque_2->Location = System::Drawing::Point(6, 19);
			this->rB_demarque_2->Name = L"rB_demarque_2";
			this->rB_demarque_2->Size = System::Drawing::Size(44, 17);
			this->rB_demarque_2->TabIndex = 0;
			this->rB_demarque_2->TabStop = true;
			this->rB_demarque_2->Text = L"x2%";
			this->rB_demarque_2->UseVisualStyleBackColor = true;
			// 
			// rB_demarque_3
			// 
			this->rB_demarque_3->AutoSize = true;
			this->rB_demarque_3->Location = System::Drawing::Point(6, 42);
			this->rB_demarque_3->Name = L"rB_demarque_3";
			this->rB_demarque_3->Size = System::Drawing::Size(44, 17);
			this->rB_demarque_3->TabIndex = 1;
			this->rB_demarque_3->TabStop = true;
			this->rB_demarque_3->Text = L"x3%";
			this->rB_demarque_3->UseVisualStyleBackColor = true;
			// 
			// groupBox21
			// 
			this->groupBox21->Controls->Add(this->rB_remise_6);
			this->groupBox21->Controls->Add(this->rB_remise_5);
			this->groupBox21->Location = System::Drawing::Point(366, 37);
			this->groupBox21->Name = L"groupBox21";
			this->groupBox21->Size = System::Drawing::Size(77, 96);
			this->groupBox21->TabIndex = 7;
			this->groupBox21->TabStop = false;
			this->groupBox21->Text = L"Remise";
			// 
			// rB_remise_6
			// 
			this->rB_remise_6->AutoSize = true;
			this->rB_remise_6->Location = System::Drawing::Point(6, 52);
			this->rB_remise_6->Name = L"rB_remise_6";
			this->rB_remise_6->Size = System::Drawing::Size(44, 17);
			this->rB_remise_6->TabIndex = 4;
			this->rB_remise_6->TabStop = true;
			this->rB_remise_6->Text = L"x6%";
			this->rB_remise_6->UseVisualStyleBackColor = true;
			// 
			// rB_remise_5
			// 
			this->rB_remise_5->AutoSize = true;
			this->rB_remise_5->Location = System::Drawing::Point(6, 29);
			this->rB_remise_5->Name = L"rB_remise_5";
			this->rB_remise_5->Size = System::Drawing::Size(44, 17);
			this->rB_remise_5->TabIndex = 3;
			this->rB_remise_5->TabStop = true;
			this->rB_remise_5->Text = L"x5%";
			this->rB_remise_5->UseVisualStyleBackColor = true;
			// 
			// groupBox23
			// 
			this->groupBox23->Controls->Add(this->rB_marge_commerciale_15);
			this->groupBox23->Controls->Add(this->rB_marge_commerciale_5);
			this->groupBox23->Controls->Add(this->rB_marge_commerciale_10);
			this->groupBox23->Location = System::Drawing::Point(119, 37);
			this->groupBox23->Name = L"groupBox23";
			this->groupBox23->Size = System::Drawing::Size(116, 96);
			this->groupBox23->TabIndex = 9;
			this->groupBox23->TabStop = false;
			this->groupBox23->Text = L"Marge commerciale";
			// 
			// rB_marge_commerciale_15
			// 
			this->rB_marge_commerciale_15->AutoSize = true;
			this->rB_marge_commerciale_15->Location = System::Drawing::Point(4, 64);
			this->rB_marge_commerciale_15->Name = L"rB_marge_commerciale_15";
			this->rB_marge_commerciale_15->Size = System::Drawing::Size(50, 17);
			this->rB_marge_commerciale_15->TabIndex = 2;
			this->rB_marge_commerciale_15->TabStop = true;
			this->rB_marge_commerciale_15->Text = L"x15%";
			this->rB_marge_commerciale_15->UseVisualStyleBackColor = true;
			// 
			// rB_marge_commerciale_5
			// 
			this->rB_marge_commerciale_5->AutoSize = true;
			this->rB_marge_commerciale_5->Location = System::Drawing::Point(6, 19);
			this->rB_marge_commerciale_5->Name = L"rB_marge_commerciale_5";
			this->rB_marge_commerciale_5->Size = System::Drawing::Size(44, 17);
			this->rB_marge_commerciale_5->TabIndex = 0;
			this->rB_marge_commerciale_5->TabStop = true;
			this->rB_marge_commerciale_5->Text = L"x5%";
			this->rB_marge_commerciale_5->UseVisualStyleBackColor = true;
			// 
			// rB_marge_commerciale_10
			// 
			this->rB_marge_commerciale_10->AutoSize = true;
			this->rB_marge_commerciale_10->Location = System::Drawing::Point(6, 42);
			this->rB_marge_commerciale_10->Name = L"rB_marge_commerciale_10";
			this->rB_marge_commerciale_10->Size = System::Drawing::Size(50, 17);
			this->rB_marge_commerciale_10->TabIndex = 1;
			this->rB_marge_commerciale_10->TabStop = true;
			this->rB_marge_commerciale_10->Text = L"x10%";
			this->rB_marge_commerciale_10->UseVisualStyleBackColor = true;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_commande_client))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_DE_SH))->EndInit();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_DE_personnel_affichage))->EndInit();
			this->tbPage_GestionCommande->ResumeLayout(false);
			this->tbPage_GestionCommande->PerformLayout();
			this->groupBox20->ResumeLayout(false);
			this->groupBox20->PerformLayout();
			this->groupBox18->ResumeLayout(false);
			this->groupBox18->PerformLayout();
			this->groupBox15->ResumeLayout(false);
			this->groupBox16->ResumeLayout(false);
			this->groupBox17->ResumeLayout(false);
			this->groupBox17->PerformLayout();
			this->groupBox30->ResumeLayout(false);
			this->groupBox30->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_date_paiement_client_commande))->EndInit();
			this->groupBox19->ResumeLayout(false);
			this->groupBox19->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_adresse_commande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_DDN_client_commande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_ligne_commande))->EndInit();
			this->tbPage_GestionStock->ResumeLayout(false);
			this->tbPage_GestionStock->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->tbPage_GestionStatistiques->ResumeLayout(false);
			this->groupBox29->ResumeLayout(false);
			this->groupBox29->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_article_moins_vendus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_article_plus_vendus))->EndInit();
			this->groupBox28->ResumeLayout(false);
			this->groupBox28->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_reaprovisionnement))->EndInit();
			this->groupBox27->ResumeLayout(false);
			this->groupBox27->PerformLayout();
			this->groupBox26->ResumeLayout(false);
			this->groupBox26->PerformLayout();
			this->groupBox25->ResumeLayout(false);
			this->groupBox22->ResumeLayout(false);
			this->groupBox22->PerformLayout();
			this->groupBox24->ResumeLayout(false);
			this->groupBox24->PerformLayout();
			this->groupBox21->ResumeLayout(false);
			this->groupBox21->PerformLayout();
			this->groupBox23->ResumeLayout(false);
			this->groupBox23->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		// CHARGEMENT CLIENT
		index_client = 0;
		if ((Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows->Count > 0) {
			txtBx_ID_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[0]->ToString();
			txtBx_D1A_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[1]->ToString();
			txtBx_DDN_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[2]->ToString();
			txtBx_email_client->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[3]->ToString();
			txtBx_Nom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[4]->ToString();
			txtBx_Prenom_client_information->Text = (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows[index_client]->ItemArray[5]->ToString();
		}
		else {
			txtBx_ID_client->Text = "0";
			txtBx_D1A_client->Text = "01/01/1900";
			txtBx_DDN_client->Text = "01/01/1900";
			txtBx_email_client->Text = "default";
			txtBx_Nom_client_information->Text = "default";
			txtBx_Prenom_client_information->Text = "default";

		}
		if (txtBx_ID_client->Text != "0" ) {
			txtBx_ID_adresse_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
			txtBx_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
			txtBx_num_rue_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
			txtBx_code_postal_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
			txtBx_pays_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
			txtBx_ville_client->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();

			dataGrid_adresse_livraison->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Adresse"];
			dataGrid_commande_client->DataSource = (Commande->selectionner("dbo.Commande", Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Commande"];
			//txtBx_D1A_client->Text = dataGrid_commande_client->Rows[0]->Cells[0]->Value->ToString();
		}
		// CHARGEMENT PERSONNEL 

		index_personnel = 0;
		if ((Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows->Count > 0) {
			txtBx_ID_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[0]->ToString();
			txtBx_DE_personnel->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[1]->ToString();
			txtBx_Nom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[2]->ToString();
			txtBx_ID_SH->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[4]->ToString();
			txtBx_Prenom_personnel_information->Text = (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows[index_personnel]->ItemArray[3]->ToString();
		}
		else {
			txtBx_ID_personnel->Text = "0";
			txtBx_DE_personnel->Text = "01/01/1900";
			txtBx_Nom_personnel_information->Text = "default";
			txtBx_ID_SH->Text = "0";
			txtBx_Prenom_personnel_information->Text = "default";

		}

		if (txtBx_ID_personnel->Text != "0") {
			txtBx_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
			txtBx_num_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
			txtBx_code_postal_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
			txtBx_pays_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
			txtBx_ville_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
			if (txtBx_ID_SH->Text != "0" && txtBx_ID_SH->Text != "") {
				txtBx_nom_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(txtBx_ID_SH->Text)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[2]->ToString();
				txtBx_prenom_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(txtBx_ID_SH->Text)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[3]->ToString();
			}
		}

		// CHARGEMENT COMMANDE
		index_commande = 0;
		if ((Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows->Count > 0) {
			txtBx_ID_commande_information->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[0]->ToString();
			txtBx_date_emission->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[1]->ToString();
			txtBx_date_livraison->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[2]->ToString();
			txtBx_mode_payment->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[3]->ToString();
			txtBx_remise->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[4]->ToString();
			txtBx_ID_client_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[5]->ToString();
			txtBxID_adresse_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[7]->ToString();
			txtBx_reference_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[6]->ToString();
			txtBxNum_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
			txtBxID_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
			txtBxRue_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
			txtBxVille_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
			txtBxCode_postale_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
			txtBxPays_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();

			txtBx_nom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[4]->ToString();
			txtBx_prenom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[5]->ToString();

			dataGrid_ligne_commande->DataSource = (LigneCommande->listeLigneCommande("dbo.Commande", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Commande"];
			
			dataGrid_date_paiement_client_commande->DataSource = (Dpaiement->listeDatePaiement("dbo.Date", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Date"];

			dataGrid_DDN_client_commande->DataSource = Client->rechercher("dbo.Client", "", "")->Tables["dbo.Client"];
			dataGrid_adresse_commande->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, 0))->Tables["dbo.Adresse"];


			float HT = 0;
			float TVA = 0;
			float TTC = 0;
			
			for (int i = 0; i < dataGrid_ligne_commande->Rows->Count - 1; i++) {
				HT += Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value);
				TVA += (Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value)) * (float)Convert::ToDouble(dataGrid_ligne_commande->Rows[i]->Cells["Taux_TVA"]->Value);
			}
			TTC = HT + TVA;
			txtBxMontant_total_HT->Text = HT.ToString();
			txtBxMontant_total_TVA->Text = TVA.ToString();
			txtBxMontant_total_TTC->Text = TTC.ToString();
		}
			
		// CHARGEMENT STOCK
		index_stock = 0;
		if ((Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows->Count > 0) {
			txtBx_ID_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[0]->ToString();
			txtBx_reference_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[2]->ToString();
			txtBx_couleur_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[6]->ToString();
			txtBx_quantite_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[1]->ToString();
			txtBx_prix_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[4]->ToString();
		}

		
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

	if (index_client > 0 && (Client->listeClient("dbo.Client"))->Tables["dbo.Client"]->Rows->Count > 0) {
		index_client--;
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
	dataGrid_commande_client->DataSource = (Commande->selectionner("dbo.Commande", 0))->Tables["dbo.Commande"];
	txtBx_message_client->Clear();
	txtBx_message_client->Text = "Rentrez les données pour le nouveau client, puis cliquez sur enregistrer";
}
private: System::Void btn_first_client_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBx_message_client->Clear();
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
	dataGrid_commande_client->DataSource = (Commande->selectionner("dbo.Commande", Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Commande"];

}
private: System::Void btn_left_client_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBx_message_client->Clear();
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
	dataGrid_commande_client->DataSource = (Commande->selectionner("dbo.Commande", Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Commande"];

}
private: System::Void btn_right_client_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBx_message_client->Clear();
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
	dataGrid_commande_client->DataSource = (Commande->selectionner("dbo.Commande", Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Commande"];

}
private: System::Void btn_last_client_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBx_message_client->Clear();
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
	dataGrid_commande_client->DataSource = (Commande->selectionner("dbo.Commande", Convert::ToInt32(txtBx_ID_client->Text)))->Tables["dbo.Commande"];

}
private: System::Void btn_enregistrer_client_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBx_ID_client->Text == "" && txtBx_DDN_client->Text != "" && txtBx_email_client->Text != "" && txtBx_Nom_client_information->Text != "" && txtBx_Prenom_client_information->Text != "") {
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
		txtBx_message_client->Text = "Nouveau client ajouté !";
	}
	else {
	txtBx_message_client->Clear();
	txtBx_message_client->Text = "Cliquez sur nouveau pour ajouter une personne";
	}
}
private: System::Void btn_Modifier_client_Click(System::Object^ sender, System::EventArgs^ e) {
	Client->modifier(Convert::ToInt32(txtBx_ID_client->Text), txtBx_Nom_client_information->Text, txtBx_Prenom_client_information->Text, txtBx_DDN_client->Text, txtBx_D1A_client->Text, txtBx_email_client->Text);
	Adresse->modifier(Convert::ToInt32(txtBx_ID_adresse_client->Text),txtBx_rue_client->Text, Convert::ToInt32(txtBx_num_rue_client->Text), Convert::ToInt32(txtBx_code_postal_client->Text), txtBx_pays_client->Text, txtBx_ville_client->Text, 1, Convert::ToInt32(txtBx_ID_client->Text), 0);

	for (int i = 0; i < dataGrid_adresse_livraison->SelectedRows->Count; i++) {

		if (dataGrid_adresse_livraison->SelectedRows[i]->Cells["ID_adresse"]->Value->ToString() == "") {
			txtBx_message_client->Text = "Adresse de livraison ajouté ! \n";
			dataGrid_adresse_livraison->SelectedRows[i]->Cells["ID_adresse"]->Value = Adresse->ajouter(dataGrid_adresse_livraison->SelectedRows[i]->Cells["Nom_rue"]->Value->ToString(), Convert::ToInt32(dataGrid_adresse_livraison->SelectedRows[i]->Cells["Num_rue"]->Value->ToString()), Convert::ToInt32(dataGrid_adresse_livraison->SelectedRows[i]->Cells["Code_postal"]->Value->ToString()), dataGrid_adresse_livraison->SelectedRows[i]->Cells["Pays"]->Value->ToString(), dataGrid_adresse_livraison->SelectedRows[i]->Cells["Ville"]->Value->ToString(), 3, Convert::ToInt32(txtBx_ID_client->Text), 0);
		}
		else {
			Adresse_livraison->modifier(Convert::ToInt32(dataGrid_adresse_livraison->SelectedRows[i]->Cells["ID_adresse"]->Value->ToString()), dataGrid_adresse_livraison->SelectedRows[i]->Cells["Nom_rue"]->Value->ToString(), Convert::ToInt32(dataGrid_adresse_livraison->SelectedRows[i]->Cells["Num_rue"]->Value->ToString()), Convert::ToInt32(dataGrid_adresse_livraison->SelectedRows[i]->Cells["Code_postal"]->Value->ToString()), dataGrid_adresse_livraison->SelectedRows[i]->Cells["Pays"]->Value->ToString(), dataGrid_adresse_livraison->SelectedRows[i]->Cells["Ville"]->Value->ToString(), 3, Convert::ToInt32(txtBx_ID_client->Text), 0);
		}
	
	} 
}
private: System::Void btn_rechercher_client_Click(System::Object^ sender, System::EventArgs^ e) {
		// txtBx_nom_client_affichage->Text;
		//   txtBx_Prenom_client_affichage->Text;
		   dataGrid_DDN_client->DataSource = Client->rechercher("dbo.Client", (txtBx_nom_client_affichage->Text), (txtBx_Prenom_client_affichage->Text))->Tables["dbo.Client"];
		 
	   }
private: System::Void btn_selectionner_client_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGrid_DDN_client->SelectedRows->Count > 0 && dataGrid_DDN_client->Rows->Count != 1) {

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
	   
// EVENEMENT PERSONNEL
private: System::Void btn_Supprimer_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	Adresse->supprimer(Convert::ToInt32(txtBx_ID_personnel->Text), 2);
	Personnel->supprimer(Convert::ToInt32(txtBx_ID_personnel->Text));
	
	txtBx_message_personnel->Text = "Personnel supprimé";
	if (index_personnel > 0 && (Personnel->listePersonnel("dbo.Personnel"))->Tables["dbo.Personnel"]->Rows->Count > 0) {
		index_personnel--;
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

	if (txtBx_ID_SH->Text != "0") {
		txtBx_nom_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(txtBx_ID_SH->Text)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_prenom_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(txtBx_ID_SH->Text)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[3]->ToString();
	}


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

	if (txtBx_ID_SH->Text != "0" && txtBx_ID_SH->Text != "") {
		txtBx_nom_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(txtBx_ID_SH->Text)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_prenom_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(txtBx_ID_SH->Text)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[3]->ToString();
	}

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

	if (txtBx_ID_SH->Text != "0") {
		txtBx_nom_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(txtBx_ID_SH->Text)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_prenom_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(txtBx_ID_SH->Text)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[3]->ToString();
	}

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

	if (txtBx_ID_SH->Text != "0") {
		txtBx_nom_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(txtBx_ID_SH->Text)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_prenom_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(txtBx_ID_SH->Text)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[3]->ToString();
	}
}
private: System::Void btn_enregistrer_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBx_ID_personnel->Text == "" && txtBx_DE_personnel->Text != "" && txtBx_Nom_personnel_information->Text != "" && txtBx_Prenom_personnel_information->Text != "" && txtBx_ID_SH->Text != "") {
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
	Adresse->modifier(Convert::ToInt32(txtBx_ID_personnel->Text),txtBx_rue_personnel->Text, Convert::ToInt32(txtBx_num_rue_personnel->Text), Convert::ToInt32(txtBx_code_postal_personnel->Text), txtBx_pays_personnel->Text, txtBx_ville_personnel->Text, 2, 0, Convert::ToInt32(txtBx_ID_personnel->Text));

}
private: System::Void btn_rechercher_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	//txtBx_nom_personnel_affichage->Text;
	//txtBx_prenom_personnel_affichage->Text;
	//NS_Svc::CL_svc_gestionPersonnel^ test = gcnew NS_Svc::CL_svc_gestionPersonnel();
	dataGrid_DE_personnel_affichage->DataSource = Personnel->rechercher("dbo.Adresse", (txtBx_nom_personnel_affichage->Text), (txtBx_prenom_personnel_affichage->Text))->Tables["dbo.Adresse"];

}
private: System::Void btn_selectionner_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGrid_DE_personnel_affichage->SelectedRows->Count >= 0 && dataGrid_DE_personnel_affichage->Rows->Count != 1) {

		txtBx_ID_personnel->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(dataGrid_DE_personnel_affichage->SelectedRows[0]->Cells["ID_personnel"]->Value)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[0]->ToString();
		txtBx_DE_personnel->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(dataGrid_DE_personnel_affichage->SelectedRows[0]->Cells["ID_personnel"]->Value)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[1]->ToString();
		txtBx_Nom_personnel_information->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(dataGrid_DE_personnel_affichage->SelectedRows[0]->Cells["ID_personnel"]->Value)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_Prenom_personnel_information->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(dataGrid_DE_personnel_affichage->SelectedRows[0]->Cells["ID_personnel"]->Value)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[3]->ToString();
		txtBx_ID_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(dataGrid_DE_personnel_affichage->SelectedRows[0]->Cells["ID_personnel"]->Value)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[4]->ToString();
		
		//txtBx_ID_adresse_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 1, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
		txtBx_num_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_code_postal_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
		txtBx_pays_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_ville_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
		txtBx_rue_personnel->Text = (Adresse->listeAdresse("dbo.Adresse", 2, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();

		//dataGrid_adresse_livraison->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, Convert::ToInt32(txtBx_ID_personnel->Text)))->Tables["dbo.Adresse"];

	}
	else {
		txtBx_message_personnel->Text = "Merci de rechercher un personnel avec de selectionner !";
	}
}
private: System::Void btn_rechercher_SH_Click(System::Object^ sender, System::EventArgs^ e) {

	dataGrid_DE_SH->DataSource = Personnel->rechercher("dbo.Adresse", (txtBx_nom_SH->Text), (txtBx_prenom_SH->Text))->Tables["dbo.Adresse"];
	
}
private: System::Void btn_selectionner_SH_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGrid_DE_SH->SelectedRows->Count > 0 && dataGrid_DE_SH->Rows->Count != 1)
		txtBx_ID_SH->Text = (Personnel->selectionner("dbo.Personnel", Convert::ToInt32(dataGrid_DE_SH->SelectedRows[0]->Cells["ID_personnel"]->Value)))->Tables["dbo.Personnel"]->Rows[0]->ItemArray[0]->ToString();
	else
		txtBx_ID_SH->Text = "0";
}

// EVENEMENT COMMANDE
private: System::Void btn_rechercher_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((Commande->CommandebyRef("dbo.Commande", txtBx_reference_commande_affichage->Text))->Tables["dbo.Commande"]->Rows->Count > 0) {

		txtBx_ID_commande_information->Text = (Commande->CommandebyRef("dbo.Commande", txtBx_reference_commande_affichage->Text))->Tables["dbo.Commande"]->Rows[0]->ItemArray[0]->ToString();
		txtBx_date_emission->Text = (Commande->CommandebyRef("dbo.Commande", txtBx_reference_commande_affichage->Text))->Tables["dbo.Commande"]->Rows[0]->ItemArray[1]->ToString();
		txtBx_date_livraison->Text = (Commande->CommandebyRef("dbo.Commande", txtBx_reference_commande_affichage->Text))->Tables["dbo.Commande"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_mode_payment->Text = (Commande->CommandebyRef("dbo.Commande", txtBx_reference_commande_affichage->Text))->Tables["dbo.Commande"]->Rows[0]->ItemArray[3]->ToString();
		txtBx_remise->Text = (Commande->CommandebyRef("dbo.Commande", txtBx_reference_commande_affichage->Text))->Tables["dbo.Commande"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_ID_client_commande->Text = (Commande->CommandebyRef("dbo.Commande", txtBx_reference_commande_affichage->Text))->Tables["dbo.Commande"]->Rows[0]->ItemArray[5]->ToString();
		txtBxID_adresse_commande->Text = (Commande->CommandebyRef("dbo.Commande", txtBx_reference_commande_affichage->Text))->Tables["dbo.Commande"]->Rows[0]->ItemArray[7]->ToString();
		txtBx_reference_commande->Text = (Commande->CommandebyRef("dbo.Commande", txtBx_reference_commande_affichage->Text))->Tables["dbo.Commande"]->Rows[0]->ItemArray[6]->ToString();
		txtBxNum_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
		txtBxID_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
		txtBxRue_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
		txtBxVille_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
		txtBxCode_postale_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
		txtBxPays_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();

		txtBx_nom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_prenom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[5]->ToString();

		dataGrid_ligne_commande->DataSource = (LigneCommande->listeLigneCommande("dbo.Commande", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Commande"];
		float HT = 0;
		float TVA = 0;
		float TTC = 0;

		for (int i = 0; i < dataGrid_ligne_commande->Rows->Count - 1; i++) {
			HT += Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value);
			TVA += (Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value)) * (float)Convert::ToDouble(dataGrid_ligne_commande->Rows[i]->Cells["Taux_TVA"]->Value);
		}
		TTC = HT + TVA;
		txtBxMontant_total_HT->Text = HT.ToString();
		txtBxMontant_total_TVA->Text = TVA.ToString();
		txtBxMontant_total_TTC->Text = TTC.ToString();
	}
}
private: System::Void btn_modifier_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	Commande->modifier(Convert::ToInt32(txtBx_ID_commande_information->Text), txtBx_date_emission->Text, txtBx_date_livraison->Text, txtBx_mode_payment->Text, (float)Convert::ToDouble(txtBx_remise->Text), Convert::ToInt32(txtBx_ID_client_commande->Text), txtBx_reference_commande->Text, Convert::ToInt32(txtBxID_adresse_commande->Text));
	Client->updateD1A("clientupdateD1A", Convert::ToInt32(txtBx_ID_client_commande->Text), (Client->searchD1A("clientupdateD1A", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["clientupdateD1A"]->Rows[0]->ItemArray[0]->ToString()));
	// Ligne commande
	for (int i = 0; i < dataGrid_ligne_commande->SelectedRows->Count; i++) {
		if (dataGrid_ligne_commande->SelectedRows[i]->Cells["ID_Ligne"]->Value->ToString() == "") {
			int id_article = Convert::ToInt32(Stock->selectionner("dbo.Article", dataGrid_ligne_commande->SelectedRows[i]->Cells["Reference_article"]->Value->ToString(), dataGrid_ligne_commande->SelectedRows[i]->Cells["Couleur"]->Value->ToString())->Tables["dbo.Article"]->Rows[0]->ItemArray[0]->ToString());
			txtBx_message_commande->Text = "Nouvel ligne de commande ajouté à cette commande ! \n";
			dataGrid_ligne_commande->SelectedRows[i]->Cells["ID_Ligne"]->Value = LigneCommande->ajouter((float)Convert::ToDouble(dataGrid_ligne_commande->SelectedRows[i]->Cells["Taux_TVA"]->Value->ToString()), Convert::ToInt32(dataGrid_ligne_commande->SelectedRows[i]->Cells["Quantite_Produit"]->Value->ToString()), Convert::ToInt32(txtBx_ID_commande_information->Text), id_article);
		}
		else {
			txtBx_message_commande->Text += "\n Ligne Modifié !";
			int id_article = Convert::ToInt32(Stock->selectionner("dbo.Article", dataGrid_ligne_commande->SelectedRows[i]->Cells["Reference_article"]->Value->ToString(), dataGrid_ligne_commande->SelectedRows[i]->Cells["Couleur"]->Value->ToString())->Tables["dbo.Article"]->Rows[0]->ItemArray[0]->ToString());
			LigneCommande->modifier(Convert::ToInt32(dataGrid_ligne_commande->SelectedRows[i]->Cells["ID_Ligne"]->Value->ToString()), (float)Convert::ToDouble(dataGrid_ligne_commande->SelectedRows[i]->Cells["Taux_TVA"]->Value->ToString()), Convert::ToInt32(dataGrid_ligne_commande->SelectedRows[i]->Cells["Quantite_Produit"]->Value->ToString()), Convert::ToInt32(txtBx_ID_commande_information->Text), id_article);
		}

	}
	// Date de paiement
	for (int i = 0; i < dataGrid_date_paiement_client_commande->SelectedRows->Count; i++) {
		if (dataGrid_date_paiement_client_commande->SelectedRows[i]->Cells["ID_Date"]->Value->ToString() == "") {
			txtBx_message_commande->Text += "Nouvel Date de paiement ajouté à cette commande ! \n";
			dataGrid_date_paiement_client_commande->SelectedRows[i]->Cells["ID_Date"]->Value = Dpaiement->ajouter(Convert::ToInt32(txtBx_ID_commande_information->Text), dataGrid_date_paiement_client_commande->SelectedRows[i]->Cells["paiement"]->Value->ToString());
		}
		else {
			txtBx_message_commande->Text += "\n Ligne Modifié !";
			Dpaiement->modifier(Convert::ToInt32(dataGrid_date_paiement_client_commande->SelectedRows[i]->Cells["ID_Date"]->Value->ToString()), Convert::ToInt32(txtBx_ID_commande_information->Text), dataGrid_date_paiement_client_commande->SelectedRows[i]->Cells["paiement"]->Value->ToString());
		}

	}

}
private: System::Void btn_supprimer_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	Dpaiement->supprimer(Convert::ToInt32(txtBx_ID_commande_information->Text));
	LigneCommande->supprimer(Convert::ToInt32(txtBx_ID_commande_information->Text));
	Commande->supprimer(Convert::ToInt32(txtBx_ID_commande_information->Text));



	if (index_commande > 0 && (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows->Count > 0) {
		index_commande--;
		txtBx_ID_commande_information->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[0]->ToString();
		txtBx_date_emission->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[1]->ToString();
		txtBx_date_livraison->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[2]->ToString();
		txtBx_mode_payment->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[3]->ToString();
		txtBx_remise->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[4]->ToString();
		txtBx_ID_client_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[5]->ToString();
		txtBxID_adresse_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[7]->ToString();
		txtBx_reference_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[6]->ToString();
		txtBxNum_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
		txtBxID_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
		txtBxRue_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
		txtBxVille_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
		txtBxCode_postale_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
		txtBxPays_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();

		txtBx_nom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_prenom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[5]->ToString();

		dataGrid_date_paiement_client_commande->DataSource = (Dpaiement->listeDatePaiement("dbo.Date", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Date"];
		dataGrid_ligne_commande->DataSource = (LigneCommande->listeLigneCommande("dbo.Commande", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Commande"];
	}
}
private: System::Void btn_nouveau_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBx_ID_commande_information->Clear();
	txtBx_date_emission->Clear();
	txtBx_date_livraison->Clear();
	txtBx_mode_payment->Clear();
	txtBx_remise->Clear();
	txtBx_ID_client_commande->Clear();
	txtBx_nom_client_commande->Clear();
	txtBx_prenom_client_commande->Clear();
	txtBxNum_adresse_commande->Clear();
	txtBxID_adresse_commande->Clear();
	txtBxRue_adresse_commande->Clear();
	txtBxVille_adresse_commande->Clear();
	txtBxCode_postale_adresse_commande->Clear();
	txtBxPays_adresse_commande->Clear();
	txtBx_reference_commande->Clear();
	txtBxMontant_total_HT->Clear();
	txtBxMontant_total_TVA->Clear();
	txtBxMontant_total_TTC->Clear();

	dataGrid_DDN_client_commande->DataSource = Client->rechercher("dbo.Client", (txtBx_nom_client_commande->Text), (txtBx_prenom_client_commande->Text))->Tables["dbo.Client"];
	dataGrid_adresse_commande->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, 0))->Tables["dbo.Adresse"];

	dataGrid_ligne_commande->DataSource = (LigneCommande->listeLigneCommande("dbo.Commande",0))->Tables["dbo.Commande"];
	dataGrid_date_paiement_client_commande->DataSource = (Dpaiement->listeDatePaiement("dbo.Date", 0))->Tables["dbo.Date"];

}
private: System::Void enregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBx_ID_commande_information->Text == "" && txtBx_date_emission->Text != "" && txtBx_date_livraison->Text != "" && txtBx_mode_payment->Text != "" && txtBx_remise->Text != "" && txtBx_ID_client_commande->Text != "" && txtBxID_adresse_commande->Text != "") {
		String^ ref_commande;
		ref_commande = (txtBx_prenom_client_commande->Text)->Substring(0, 2) + (txtBx_nom_client_commande->Text)->Substring(0, 2) + txtBx_date_emission->Text->ToString()->Substring(6,4) +(txtBxVille_adresse_commande->Text)->Substring(0, 3);
		Commande->ajouter(txtBx_date_emission->Text, txtBx_date_livraison->Text, txtBx_mode_payment->Text, (float)Convert::ToDouble(txtBx_remise->Text), Convert::ToInt32(txtBx_ID_client_commande->Text), ref_commande, Convert::ToInt32(txtBxID_adresse_commande->Text));

		index_commande = Convert::ToInt32((Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows->Count) - 1;;

		txtBx_ID_commande_information->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[0]->ToString();
		txtBx_date_emission->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[1]->ToString();
		txtBx_date_livraison->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[2]->ToString();
		txtBx_mode_payment->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[3]->ToString();
		txtBx_remise->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[4]->ToString();
		txtBx_ID_client_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[5]->ToString();
		txtBxID_adresse_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[7]->ToString();

		Client->updateD1A("clientupdateD1A", Convert::ToInt32(txtBx_ID_client_commande->Text), (Client->searchD1A("clientupdateD1A", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["clientupdateD1A"]->Rows[0]->ItemArray[0]->ToString()));

		txtBxNum_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
		txtBxID_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
		txtBxRue_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
		txtBxVille_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
		txtBxCode_postale_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
		txtBxPays_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();

		txtBx_nom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_prenom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[5]->ToString();

		ref_commande += txtBx_ID_commande_information->Text->ToString();
		Commande->modifier(Convert::ToInt32(txtBx_ID_commande_information->Text), txtBx_date_emission->Text, txtBx_date_livraison->Text, txtBx_mode_payment->Text, (float)Convert::ToDouble(txtBx_remise->Text), Convert::ToInt32(txtBx_ID_client_commande->Text), ref_commande, Convert::ToInt32(txtBxID_adresse_commande->Text));
		txtBx_reference_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[6]->ToString();

		for (int i = 0; i < dataGrid_ligne_commande->SelectedRows->Count; i++)
		{
			int id_article = Convert::ToInt32(Stock->selectionner("dbo.Article", dataGrid_ligne_commande->SelectedRows[i]->Cells["Reference_article"]->Value->ToString(), dataGrid_ligne_commande->SelectedRows[i]->Cells["Couleur"]->Value->ToString())->Tables["dbo.Article"]->Rows[0]->ItemArray[0]->ToString());
			LigneCommande->ajouter((float)Convert::ToDouble(dataGrid_ligne_commande->SelectedRows[i]->Cells["Taux_TVA"]->Value->ToString()), Convert::ToInt32(dataGrid_ligne_commande->SelectedRows[i]->Cells["Quantite_Produit"]->Value->ToString()), Convert::ToInt32(txtBx_ID_commande_information->Text), id_article);
			int quantite = Convert::ToInt32((Stock->quantitebyID("quantite",id_article))->Tables["quantite"]->Rows[0]->ItemArray[0]->ToString())- Convert::ToInt32(dataGrid_ligne_commande->SelectedRows[i]->Cells["Quantite_Produit"]->Value->ToString());
			Stock->modifierQuantite(quantite, id_article);
		}
		for (int i = 0; i < dataGrid_date_paiement_client_commande->SelectedRows->Count; i++)
		{
			Dpaiement->ajouter(Convert::ToInt32(txtBx_ID_commande_information->Text), dataGrid_date_paiement_client_commande->SelectedRows[i]->Cells["paiement"]->Value->ToString());
		}

		txtBx_message_commande->Text = ("Nouvelle commande ajouté");
		int nbRows = Convert::ToInt32((Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows->Count);
		if (index_commande < nbRows - 1)index_commande++;
		txtBx_ID_commande_information->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[0]->ToString();
		txtBx_date_emission->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[1]->ToString();
		txtBx_date_livraison->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[2]->ToString();
		txtBx_mode_payment->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[3]->ToString();
		txtBx_remise->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[4]->ToString();
		txtBx_ID_client_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[5]->ToString();
		txtBxID_adresse_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[7]->ToString();
		txtBx_reference_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[6]->ToString();
		txtBxNum_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
		txtBxID_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
		txtBxRue_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
		txtBxVille_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
		txtBxCode_postale_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
		txtBxPays_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();

		txtBx_nom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[4]->ToString();
		txtBx_prenom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[5]->ToString();

		dataGrid_ligne_commande->DataSource = (LigneCommande->listeLigneCommande("dbo.Commande", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Commande"];
		float HT = 0;
		float TVA = 0;
		float TTC = 0;

		for (int i = 0; i < dataGrid_ligne_commande->Rows->Count - 1; i++) {
			HT += Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value);
			TVA += (Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value)) * (float)Convert::ToDouble(dataGrid_ligne_commande->Rows[i]->Cells["Taux_TVA"]->Value);
		}
		TTC = HT + TVA;
		txtBxMontant_total_HT->Text = HT.ToString();
		txtBxMontant_total_TVA->Text = TVA.ToString();
		txtBxMontant_total_TTC->Text = TTC.ToString();
	}
	else {
		//dataGrid_ligne_commande->DataSource = (LigneCommande->listeLigneCommande("dbo.Commande", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Commande"];
		txtBx_message_commande->Text = ("Merci de cliquer sur nouveau pour créer une nouvelle commande");
	}
}			///
private: System::Void btn_first_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	index_commande = 0;
	txtBx_ID_commande_information->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[0]->ToString();
	txtBx_date_emission->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[1]->ToString();
	txtBx_date_livraison->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[2]->ToString();
	txtBx_mode_payment->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[3]->ToString();
	txtBx_remise->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[4]->ToString();
	txtBx_ID_client_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[5]->ToString();
	txtBxID_adresse_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[7]->ToString();
	txtBx_reference_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[6]->ToString();
	txtBxNum_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBxID_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
	txtBxRue_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBxVille_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
	txtBxCode_postale_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBxPays_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();

	txtBx_nom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_prenom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[5]->ToString();

	dataGrid_ligne_commande->DataSource = (LigneCommande->listeLigneCommande("dbo.Commande", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Commande"];

	dataGrid_date_paiement_client_commande->DataSource = (Dpaiement->listeDatePaiement("dbo.Date", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Date"];


	dataGrid_DDN_client_commande->DataSource = Client->rechercher("dbo.Client","","")->Tables["dbo.Client"];
	dataGrid_adresse_commande->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, 0))->Tables["dbo.Adresse"];


	float HT = 0;
	float TVA = 0;
	float TTC = 0;

	for (int i = 0; i < dataGrid_ligne_commande->Rows->Count-1; i++) {
		HT += Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value);
		TVA += (Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value)) * (float)Convert::ToDouble(dataGrid_ligne_commande->Rows[i]->Cells["Taux_TVA"]->Value);
	}
	TTC = HT + TVA;
	txtBxMontant_total_HT->Text = HT.ToString();
	txtBxMontant_total_TVA->Text = TVA.ToString();
	txtBxMontant_total_TTC->Text = TTC.ToString();
}
private: System::Void btn_left_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	if (index_commande > 0)index_commande--;
	txtBx_ID_commande_information->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[0]->ToString();
	txtBx_date_emission->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[1]->ToString();
	txtBx_date_livraison->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[2]->ToString();
	txtBx_mode_payment->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[3]->ToString();
	txtBx_remise->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[4]->ToString();
	txtBx_ID_client_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[5]->ToString();
	txtBxID_adresse_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[7]->ToString();
	txtBx_reference_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[6]->ToString();
	txtBxNum_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBxID_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
	txtBxRue_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBxVille_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
	txtBxCode_postale_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBxPays_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();

	txtBx_nom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_prenom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[5]->ToString();

	dataGrid_ligne_commande->DataSource = (LigneCommande->listeLigneCommande("dbo.Commande", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Commande"];
	
	dataGrid_date_paiement_client_commande->DataSource = (Dpaiement->listeDatePaiement("dbo.Date", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Date"];

	dataGrid_DDN_client_commande->DataSource = Client->rechercher("dbo.Client", "", "")->Tables["dbo.Client"];
	dataGrid_adresse_commande->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, 0))->Tables["dbo.Adresse"];

	float HT = 0;
	float TVA = 0;
	float TTC = 0;

	for (int i = 0; i < dataGrid_ligne_commande->Rows->Count - 1; i++) {
		HT += Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value);
		TVA += (Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value)) * (float)Convert::ToDouble(dataGrid_ligne_commande->Rows[i]->Cells["Taux_TVA"]->Value);
	}
	TTC = HT + TVA;
	txtBxMontant_total_HT->Text = HT.ToString();
	txtBxMontant_total_TVA->Text = TVA.ToString();
	txtBxMontant_total_TTC->Text = TTC.ToString();
}
private: System::Void btn_right_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	int nbRows = Convert::ToInt32((Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows->Count);
	if (index_commande < nbRows - 1)index_commande++;
	txtBx_ID_commande_information->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[0]->ToString();
	txtBx_date_emission->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[1]->ToString();
	txtBx_date_livraison->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[2]->ToString();
	txtBx_mode_payment->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[3]->ToString();
	txtBx_remise->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[4]->ToString();
	txtBx_ID_client_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[5]->ToString();
	txtBxID_adresse_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[7]->ToString();
	txtBx_reference_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[6]->ToString();
	txtBxNum_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBxID_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
	txtBxRue_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBxVille_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
	txtBxCode_postale_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBxPays_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();

	txtBx_nom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_prenom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[5]->ToString();

	dataGrid_ligne_commande->DataSource = (LigneCommande->listeLigneCommande("dbo.Commande", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Commande"];
	dataGrid_date_paiement_client_commande->DataSource = (Dpaiement->listeDatePaiement("dbo.Date", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Date"];

	dataGrid_DDN_client_commande->DataSource = Client->rechercher("dbo.Client", "", "")->Tables["dbo.Client"];
	dataGrid_adresse_commande->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, 0))->Tables["dbo.Adresse"];


	float HT = 0;
	float TVA = 0;
	float TTC = 0;

	for (int i = 0; i < dataGrid_ligne_commande->Rows->Count - 1; i++) {
		HT += Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value);
		TVA += (Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value)) * (float)Convert::ToDouble(dataGrid_ligne_commande->Rows[i]->Cells["Taux_TVA"]->Value);
	}
	TTC = HT + TVA;
	txtBxMontant_total_HT->Text = HT.ToString();
	txtBxMontant_total_TVA->Text = TVA.ToString();
	txtBxMontant_total_TTC->Text = TTC.ToString();
}
private: System::Void btn_last_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	index_commande = Convert::ToInt32((Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows->Count) - 1;

	txtBx_ID_commande_information->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[0]->ToString();
	txtBx_date_emission->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[1]->ToString();
	txtBx_date_livraison->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[2]->ToString();
	txtBx_mode_payment->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[3]->ToString();
	txtBx_remise->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[4]->ToString();
	txtBx_ID_client_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[5]->ToString();
	txtBxID_adresse_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[7]->ToString();
	txtBx_reference_commande->Text = (Commande->listeCommande("dbo.Commande"))->Tables["dbo.Commande"]->Rows[index_commande]->ItemArray[6]->ToString();
	txtBxNum_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[2]->ToString();
	txtBxID_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
	txtBxRue_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[1]->ToString();
	txtBxVille_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[5]->ToString();
	txtBxCode_postale_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[3]->ToString();
	txtBxPays_adresse_commande->Text = Adresse->AdressebyID("dbo.Adresse", Convert::ToInt32(txtBxID_adresse_commande->Text))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[4]->ToString();

	txtBx_nom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[4]->ToString();
	txtBx_prenom_client_commande->Text = Client->selectionner("dbo.Client", Convert::ToInt32(txtBx_ID_client_commande->Text))->Tables["dbo.Client"]->Rows[0]->ItemArray[5]->ToString();

	dataGrid_ligne_commande->DataSource = (LigneCommande->listeLigneCommande("dbo.Commande", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Commande"];
	
	dataGrid_date_paiement_client_commande->DataSource = (Dpaiement->listeDatePaiement("dbo.Date", Convert::ToInt32(txtBx_ID_commande_information->Text)))->Tables["dbo.Date"];

	dataGrid_DDN_client_commande->DataSource = Client->rechercher("dbo.Client", "", "")->Tables["dbo.Client"];
	dataGrid_adresse_commande->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, 0))->Tables["dbo.Adresse"];


	float HT = 0;
	float TVA = 0;
	float TTC = 0;

	for (int i = 0; i < dataGrid_ligne_commande->Rows->Count - 1; i++) {
		HT += Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value);
		TVA += (Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Quantite_Produit"]->Value) * Convert::ToInt32(dataGrid_ligne_commande->Rows[i]->Cells["Prix_unitaire_HT"]->Value)) * (float)Convert::ToDouble(dataGrid_ligne_commande->Rows[i]->Cells["Taux_TVA"]->Value);
	}
	TTC = HT + TVA;
	txtBxMontant_total_HT->Text = HT.ToString();
	txtBxMontant_total_TVA->Text = TVA.ToString();
	txtBxMontant_total_TTC->Text = TTC.ToString();
}
private: System::Void btn_rechercher_client_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGrid_DDN_client_commande->DataSource = Client->rechercher("dbo.Client", (txtBx_nom_client_commande->Text), (txtBx_prenom_client_commande->Text))->Tables["dbo.Client"];
}
private: System::Void btn_selectionner_client_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGrid_DE_personnel_affichage->SelectedRows->Count >= 0 && dataGrid_DDN_client_commande->Rows->Count != 1 && dataGrid_DDN_client_commande->SelectedRows->Count == 1) {

		txtBx_ID_client_commande->Text = (Client->selectionner("dbo.Client", Convert::ToInt32(dataGrid_DDN_client_commande->SelectedRows[0]->Cells["ID_client"]->Value)))->Tables["dbo.Client"]->Rows[0]->ItemArray[0]->ToString();
		dataGrid_adresse_commande->DataSource = (Adr->listeAdresse("dbo.Adresse", 3, Convert::ToInt32(txtBx_ID_client_commande->Text)))->Tables["dbo.Adresse"];
	}
	else {
		txtBx_message_personnel->Text = "Merci de rechercher un personnel avec de selectionner !";
	}
}
private: System::Void btn_selectionner_adresse_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGrid_adresse_commande->SelectedRows->Count == 1) {
		txtBxID_adresse_commande->Text = dataGrid_adresse_commande->SelectedRows[0]->Cells["ID_adresse"]->Value->ToString();
		txtBxNum_adresse_commande->Text = dataGrid_adresse_commande->SelectedRows[0]->Cells["Num_rue"]->Value->ToString();
		txtBxRue_adresse_commande->Text = dataGrid_adresse_commande->SelectedRows[0]->Cells["Nom_rue"]->Value->ToString();
		txtBxVille_adresse_commande->Text = dataGrid_adresse_commande->SelectedRows[0]->Cells["Ville"]->Value->ToString();
		txtBxCode_postale_adresse_commande->Text = dataGrid_adresse_commande->SelectedRows[0]->Cells["Code_postal"]->Value->ToString();
		txtBxPays_adresse_commande->Text = dataGrid_adresse_commande->SelectedRows[0]->Cells["Pays"]->Value->ToString();
	}
}

// EVENEMENT SOTCK
private: System::Void btn_modifier_article_Click(System::Object^ sender, System::EventArgs^ e) {
		int id_couleur = 0;
		for (int i = 0; i < Nature->listeCouleur("dbo.Nature", txtBx_couleur_article->Text)->Tables["dbo.Nature"]->Rows->Count; i++) {
			if (Nature->listeCouleur("dbo.Nature", txtBx_couleur_article->Text)->Tables["dbo.Nature"]->Rows[i]->ItemArray[1] == txtBx_couleur_article->Text) {
				id_couleur = Convert::ToInt32(Nature->IDbyNameCouleur("dbo.Nature", txtBx_couleur_article->Text)->Tables["dbo.Nature"]->Rows[0]->ItemArray[0]->ToString());
			}
		}
		if (id_couleur == 0)
			id_couleur = Convert::ToInt32(Nature->ajouter(txtBx_couleur_article->Text));

		Stock->modifier(Convert::ToInt32(txtBx_quantite_article->Text), Convert::ToInt32(txtBx_ID_article->Text), txtBx_reference_article->Text, Convert::ToInt32(id_couleur),Convert::ToInt32(txtBx_prix_article->Text));
	
}
private: System::Void btn_supprimer_article_Click(System::Object^ sender, System::EventArgs^ e) {
	Stock->supprimer(Convert::ToInt32(txtBx_ID_article->Text));

	if (index_stock > 0 && (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows->Count > 0) {
		index_stock--;
		txtBx_ID_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[0]->ToString();
		txtBx_reference_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[2]->ToString();
		txtBx_couleur_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[5]->ToString();
		txtBx_quantite_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[1]->ToString();
	}
}
private: System::Void btn_nouveau_article_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBx_ID_article->Clear();
	txtBx_reference_article->Clear();
	txtBx_couleur_article->Clear();
	txtBx_quantite_article->Clear();
	txtBx_prix_article->Clear();

}
private: System::Void btn_enregistrer_article_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBx_ID_article->Text == "" && txtBx_couleur_article->Text != "" && txtBx_reference_article->Text != "" && txtBx_quantite_article->Text != "" && txtBx_prix_article->Text != "") {
		int id_couleur = 0;
		for (int i = 0; i < Nature->listeCouleur("dbo.Nature", txtBx_couleur_article->Text)->Tables["dbo.Nature"]->Rows->Count; i++) {
			if (Nature->listeCouleur("dbo.Nature", txtBx_couleur_article->Text)->Tables["dbo.Nature"]->Rows[i]->ItemArray[1] == txtBx_couleur_article->Text) {
				id_couleur = Convert::ToInt32(Nature->IDbyNameCouleur("dbo.Nature", txtBx_couleur_article->Text)->Tables["dbo.Nature"]->Rows[0]->ItemArray[0]->ToString());
			}
		}
		if (id_couleur == 0)
			id_couleur = Convert::ToInt32(Nature->ajouter(txtBx_couleur_article->Text));

		Stock->ajouter(Convert::ToInt32(txtBx_quantite_article->Text), txtBx_reference_article->Text, Convert::ToInt32(id_couleur), Convert::ToInt32(txtBx_prix_article->Text));

	index_stock = Convert::ToInt32((Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows->Count) - 1;
	txtBx_ID_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[0]->ToString();
	txtBx_reference_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[2]->ToString();
	txtBx_couleur_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[5]->ToString();
	txtBx_quantite_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[1]->ToString();
	txtBx_prix_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[4]->ToString();
	}
	else {
		txtBx_message_personnel->Text = "Cliquez sur nouveau pour ajouter un article";
	}
}
private: System::Void btn_first_article_Click(System::Object^ sender, System::EventArgs^ e) {
	index_stock = 0;
	txtBx_ID_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[0]->ToString();
	txtBx_reference_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[2]->ToString();
	txtBx_couleur_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[6]->ToString();
	txtBx_quantite_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[1]->ToString();
	txtBx_prix_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[4]->ToString();
}
private: System::Void btn_left_article_Click(System::Object^ sender, System::EventArgs^ e) {
	if (index_stock > 0)index_stock--;
	txtBx_ID_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[0]->ToString();
	txtBx_reference_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[2]->ToString();
	txtBx_couleur_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[6]->ToString();
	txtBx_quantite_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[1]->ToString();
	txtBx_prix_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[4]->ToString();
}
private: System::Void btn_right_article_Click(System::Object^ sender, System::EventArgs^ e) {
	int nbRows = Convert::ToInt32((Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows->Count);
	if (index_stock < nbRows - 1)index_stock++;
	txtBx_ID_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[0]->ToString();
	txtBx_reference_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[2]->ToString();
	txtBx_couleur_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[6]->ToString();
	txtBx_quantite_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[1]->ToString();
	txtBx_prix_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[4]->ToString();
}
private: System::Void btn_last_article_Click(System::Object^ sender, System::EventArgs^ e) {
	index_stock = Convert::ToInt32((Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows->Count) - 1;
	txtBx_ID_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[0]->ToString();
	txtBx_reference_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[2]->ToString();
	txtBx_couleur_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[6]->ToString();
	txtBx_quantite_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[1]->ToString();
	txtBx_prix_article->Text = (Stock->listeArticle("dbo.Article"))->Tables["dbo.Article"]->Rows[index_stock]->ItemArray[4]->ToString();
}
private: System::Void btn_rechercher_article_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((Stock->selectionner("art", txtBx_reference_article_affichage->Text, txtBx_couleur_article_affichage->Text))->Tables["art"]->Rows->Count > 0) {
		txtBx_ID_article->Text = (Stock->selectionner("art", txtBx_reference_article_affichage->Text, txtBx_couleur_article_affichage->Text))->Tables["art"]->Rows[0]->ItemArray[0]->ToString();
		txtBx_reference_article->Text = (Stock->selectionner("art", txtBx_reference_article_affichage->Text, txtBx_couleur_article_affichage->Text))->Tables["art"]->Rows[0]->ItemArray[2]->ToString();
		txtBx_couleur_article->Text = (Stock->selectionner("art", txtBx_reference_article_affichage->Text, txtBx_couleur_article_affichage->Text))->Tables["art"]->Rows[0]->ItemArray[6]->ToString();
		txtBx_quantite_article->Text = (Stock->selectionner("art", txtBx_reference_article_affichage->Text, txtBx_couleur_article_affichage->Text))->Tables["art"]->Rows[0]->ItemArray[1]->ToString();
		txtBx_prix_article->Text = (Stock->selectionner("art", txtBx_reference_article_affichage->Text, txtBx_couleur_article_affichage->Text))->Tables["art"]->Rows[0]->ItemArray[4]->ToString();
	}
}

// EVENEMENT STATISTIQUE
private: System::Void btn_recherche_reaprovisionnement_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBx_seuil_reaprovisionnement->Text != "") {
		dataGrid_reaprovisionnement->DataSource = (Statistique->reaprovisionnement("Stat", Convert::ToInt32(txtBx_seuil_reaprovisionnement->Text)))->Tables["Stat"];

	}
}
private: System::Void btn_identifier_statistique_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGrid_article_plus_vendus->DataSource = (Statistique->ArticlePlusVendus("PlusVendus"))->Tables["PlusVendus"];
	dataGrid_article_moins_vendus->DataSource = (Statistique2->ArticleMoinsVendus("MoinsVendus"))->Tables["MoinsVendus"];
}
private: System::Void btn_CalculChiffreAffaireMois_Click(System::Object^ sender, System::EventArgs^ e) {
	if(cbBx_mois_statistique->Text != "")
	txtx_Resultat_CalculChiffreAffaireMois->Text = (Statistique->ChiffreAffaireMois("dbo.Adresse",Convert::ToInt32(cbBx_mois_statistique->Text)))->Tables["dbo.Adresse"]->Rows[0]->ItemArray[0]->ToString();
}
private: System::Void Btn_valeur_achat_stock_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBx_resultat_statistique->Text = (Statistique->ValeurAchatStock("PlusVendus"))->Tables["PlusVendus"]->Rows[0]->ItemArray[0]->ToString();
}
private: System::Void Btn_valeur_commerciale_stock_Click(System::Object^ sender, System::EventArgs^ e) {
	int marge;
	if (rB_marge_commerciale_5->Checked) {
		marge = 1;
	}
	if (rB_marge_commerciale_10->Checked) {
		marge = 2;
	}
	if (rB_marge_commerciale_15->Checked) {
		marge = 3;
	}
	NS_Svc::CL_svc_gestionStatistique^ stat = gcnew NS_Svc::CL_svc_gestionStatistique();
	txtBx_resultat_statistique->Text = (Statistique->ValeurCommercialeStock("CommercialeStock",marge))->Tables["CommercialeStock"]->Rows[0]->ItemArray[0]->ToString();
}
private: System::Void btn_panier_moyen_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBx_resultat_statistique->Text = (Statistique->CalculPanierMoyen("panierMoyen"))->Tables["panierMoyen"]->Rows[0]->ItemArray[0]->ToString();;
}
private: System::Void btn_simulation_Click(System::Object^ sender, System::EventArgs^ e) {
	float marge;
	float remise;
	float demarque;
	float TVA;
	// CHECK MARGE
	if (rB_marge_commerciale_5->Checked) {
		marge = 0.05;
	}
	if (rB_marge_commerciale_10->Checked) {
		marge = 0.10;
	}
	if (rB_marge_commerciale_15->Checked) {
		marge = 0.15;
	}
	// CHECK REMISE
	if (rB_remise_5->Checked) {
		remise = 0.05;
	}
	if (rB_remise_6->Checked) {
		remise = 0.06;
	}
	// CHECK DEMARQUE
	if (rB_demarque_2->Checked) {
		demarque = 0.02;
	}
	if (rB_demarque_3->Checked) {
		demarque = 0.03;
	}
	if (rB_demarque_5->Checked) {
		demarque = 0.05;
	}
	// CHECK TVA
	if (rB_TVA_20->Checked) {
		TVA = 0.2;
	}
	if (rB_TVA_2_1->Checked) {
		TVA = 0.021;
	}
	if (rB_TVA_5_5->Checked) {
		TVA = 0.055;
	}

	txtBx_resultat_statistique->Text = (Statistique->Simulation("simulation",marge,remise,demarque,TVA))->Tables["simulation"]->Rows[0]->ItemArray[0]->ToString();;
}
};
}
