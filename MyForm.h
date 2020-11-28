#pragma once

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
	private: System::Windows::Forms::TabControl^ tbC_GestionCommande;











	private: System::Windows::Forms::TabPage^ tabPage14;
	private: System::Windows::Forms::TabPage^ tabPage15;
	private: System::Windows::Forms::TabPage^ tabPage16;
	private: System::Windows::Forms::TabPage^ tabPage17;
	private: System::Windows::Forms::TabControl^ tbC_GestionStock;

	private: System::Windows::Forms::TabPage^ tabPage18;
	private: System::Windows::Forms::TabPage^ tabPage19;
	private: System::Windows::Forms::TabPage^ tabPage20;
	private: System::Windows::Forms::TabPage^ tabPage21;
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
	private: System::Windows::Forms::TabControl^ tbPage_GestionClient_Supprimer;
	private: System::Windows::Forms::TabPage^ tbPage_GestionClient_Creer;




	private: System::Windows::Forms::TabPage^ tbPage_GestionClient_Modifier;

	private: System::Windows::Forms::TabPage^ tbPage_GestionClient_Afficher;

	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::TabControl^ tbC_GestionPersonnel;


	private: System::Windows::Forms::TabPage^ tabPage10;
	private: System::Windows::Forms::TabPage^ tabPage11;
	private: System::Windows::Forms::TabPage^ tabPage12;
	private: System::Windows::Forms::TabPage^ tabPage13;
	private: System::Windows::Forms::Button^ btn_GestionStatistiques;

	private: System::Windows::Forms::Button^ btn_GestionStock;

	private: System::Windows::Forms::Button^ btn_GestionCommande;

	private: System::Windows::Forms::Button^ btn_GestionPersonnel;

	private: System::Windows::Forms::Button^ btn_GestionClient;


	private: System::Windows::Forms::Label^ label2;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::GroupBox^ groupBox5;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::GroupBox^ groupBox6;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::DataGridView^ dataGridView7;
private: System::Windows::Forms::TextBox^ textBox37;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::TextBox^ textBox40;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::TextBox^ textBox41;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::TextBox^ textBox42;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker5;
private: System::Windows::Forms::TextBox^ textBox43;
private: System::Windows::Forms::TextBox^ textBox44;
private: System::Windows::Forms::TextBox^ textBox45;
private: System::Windows::Forms::TextBox^ textBox46;






















































	protected:

	protected:















	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->tbPage_GestionClient_Supprimer = (gcnew System::Windows::Forms::TabControl());
			this->tbPage_GestionClient_Creer = (gcnew System::Windows::Forms::TabPage());
			this->tbPage_GestionClient_Modifier = (gcnew System::Windows::Forms::TabPage());
			this->tbPage_GestionClient_Afficher = (gcnew System::Windows::Forms::TabPage());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->tbPage_GestionPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->tbC_GestionPersonnel = (gcnew System::Windows::Forms::TabControl());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->tbPage_GestionCommande = (gcnew System::Windows::Forms::TabPage());
			this->tbC_GestionCommande = (gcnew System::Windows::Forms::TabControl());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->tbPage_GestionStock = (gcnew System::Windows::Forms::TabPage());
			this->tbC_GestionStock = (gcnew System::Windows::Forms::TabControl());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage21 = (gcnew System::Windows::Forms::TabPage());
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker5 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->tbC_MenuPrincipal->SuspendLayout();
			this->tbPage_Informations->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tbPage_GestionClient->SuspendLayout();
			this->tbPage_GestionClient_Supprimer->SuspendLayout();
			this->tbPage_GestionClient_Creer->SuspendLayout();
			this->tbPage_GestionClient_Modifier->SuspendLayout();
			this->tbPage_GestionClient_Afficher->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tbPage_GestionPersonnel->SuspendLayout();
			this->tbC_GestionPersonnel->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tbPage_GestionCommande->SuspendLayout();
			this->tbC_GestionCommande->SuspendLayout();
			this->tbPage_GestionStock->SuspendLayout();
			this->tbC_GestionStock->SuspendLayout();
			this->tbPage_GestionStatistiques->SuspendLayout();
			this->tbC_GestionStatistiques->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
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
			this->tbC_MenuPrincipal->Size = System::Drawing::Size(1015, 608);
			this->tbC_MenuPrincipal->TabIndex = 0;
			// 
			// tbPage_Informations
			// 
			this->tbPage_Informations->Controls->Add(this->groupBox1);
			this->tbPage_Informations->Location = System::Drawing::Point(4, 22);
			this->tbPage_Informations->Name = L"tbPage_Informations";
			this->tbPage_Informations->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_Informations->Size = System::Drawing::Size(1007, 582);
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
			this->tbPage_GestionClient->Controls->Add(this->tbPage_GestionClient_Supprimer);
			this->tbPage_GestionClient->Location = System::Drawing::Point(4, 22);
			this->tbPage_GestionClient->Name = L"tbPage_GestionClient";
			this->tbPage_GestionClient->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionClient->Size = System::Drawing::Size(1007, 582);
			this->tbPage_GestionClient->TabIndex = 1;
			this->tbPage_GestionClient->Text = L"Gestion Client";
			this->tbPage_GestionClient->UseVisualStyleBackColor = true;
			// 
			// tbPage_GestionClient_Supprimer
			// 
			this->tbPage_GestionClient_Supprimer->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tbPage_GestionClient_Supprimer->Controls->Add(this->tbPage_GestionClient_Creer);
			this->tbPage_GestionClient_Supprimer->Controls->Add(this->tbPage_GestionClient_Modifier);
			this->tbPage_GestionClient_Supprimer->Controls->Add(this->tbPage_GestionClient_Afficher);
			this->tbPage_GestionClient_Supprimer->Controls->Add(this->tabPage9);
			this->tbPage_GestionClient_Supprimer->Location = System::Drawing::Point(-2, 0);
			this->tbPage_GestionClient_Supprimer->Name = L"tbPage_GestionClient_Supprimer";
			this->tbPage_GestionClient_Supprimer->SelectedIndex = 0;
			this->tbPage_GestionClient_Supprimer->Size = System::Drawing::Size(1011, 581);
			this->tbPage_GestionClient_Supprimer->TabIndex = 2;
			// 
			// tbPage_GestionClient_Creer
			// 
			this->tbPage_GestionClient_Creer->Controls->Add(this->label16);
			this->tbPage_GestionClient_Creer->Controls->Add(this->button2);
			this->tbPage_GestionClient_Creer->Controls->Add(this->button1);
			this->tbPage_GestionClient_Creer->Controls->Add(this->textBox8);
			this->tbPage_GestionClient_Creer->Controls->Add(this->label12);
			this->tbPage_GestionClient_Creer->Controls->Add(this->textBox7);
			this->tbPage_GestionClient_Creer->Controls->Add(this->label11);
			this->tbPage_GestionClient_Creer->Controls->Add(this->textBox6);
			this->tbPage_GestionClient_Creer->Controls->Add(this->label10);
			this->tbPage_GestionClient_Creer->Controls->Add(this->textBox4);
			this->tbPage_GestionClient_Creer->Controls->Add(this->label9);
			this->tbPage_GestionClient_Creer->Controls->Add(this->label8);
			this->tbPage_GestionClient_Creer->Controls->Add(this->label7);
			this->tbPage_GestionClient_Creer->Controls->Add(this->label6);
			this->tbPage_GestionClient_Creer->Controls->Add(this->label5);
			this->tbPage_GestionClient_Creer->Controls->Add(this->label4);
			this->tbPage_GestionClient_Creer->Controls->Add(this->label3);
			this->tbPage_GestionClient_Creer->Controls->Add(this->dateTimePicker1);
			this->tbPage_GestionClient_Creer->Controls->Add(this->textBox5);
			this->tbPage_GestionClient_Creer->Controls->Add(this->textBox3);
			this->tbPage_GestionClient_Creer->Controls->Add(this->textBox2);
			this->tbPage_GestionClient_Creer->Controls->Add(this->textBox1);
			this->tbPage_GestionClient_Creer->Controls->Add(this->dataGridView1);
			this->tbPage_GestionClient_Creer->Location = System::Drawing::Point(4, 4);
			this->tbPage_GestionClient_Creer->Name = L"tbPage_GestionClient_Creer";
			this->tbPage_GestionClient_Creer->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionClient_Creer->Size = System::Drawing::Size(1003, 555);
			this->tbPage_GestionClient_Creer->TabIndex = 0;
			this->tbPage_GestionClient_Creer->Text = L"Creer";
			this->tbPage_GestionClient_Creer->UseVisualStyleBackColor = true;
			// 
			// tbPage_GestionClient_Modifier
			// 
			this->tbPage_GestionClient_Modifier->Controls->Add(this->button5);
			this->tbPage_GestionClient_Modifier->Controls->Add(this->label15);
			this->tbPage_GestionClient_Modifier->Controls->Add(this->textBox10);
			this->tbPage_GestionClient_Modifier->Controls->Add(this->groupBox3);
			this->tbPage_GestionClient_Modifier->Controls->Add(this->groupBox2);
			this->tbPage_GestionClient_Modifier->Location = System::Drawing::Point(4, 4);
			this->tbPage_GestionClient_Modifier->Name = L"tbPage_GestionClient_Modifier";
			this->tbPage_GestionClient_Modifier->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionClient_Modifier->Size = System::Drawing::Size(1003, 555);
			this->tbPage_GestionClient_Modifier->TabIndex = 1;
			this->tbPage_GestionClient_Modifier->Text = L"Modifier";
			this->tbPage_GestionClient_Modifier->UseVisualStyleBackColor = true;
			this->tbPage_GestionClient_Modifier->Click += gcnew System::EventHandler(this, &MyForm::tbPage_GestionClient_Modifier_Click);
			// 
			// tbPage_GestionClient_Afficher
			// 
			this->tbPage_GestionClient_Afficher->Controls->Add(this->label17);
			this->tbPage_GestionClient_Afficher->Controls->Add(this->textBox11);
			this->tbPage_GestionClient_Afficher->Controls->Add(this->groupBox4);
			this->tbPage_GestionClient_Afficher->Controls->Add(this->groupBox5);
			this->tbPage_GestionClient_Afficher->Location = System::Drawing::Point(4, 4);
			this->tbPage_GestionClient_Afficher->Name = L"tbPage_GestionClient_Afficher";
			this->tbPage_GestionClient_Afficher->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionClient_Afficher->Size = System::Drawing::Size(1003, 555);
			this->tbPage_GestionClient_Afficher->TabIndex = 2;
			this->tbPage_GestionClient_Afficher->Text = L"Afficher";
			this->tbPage_GestionClient_Afficher->UseVisualStyleBackColor = true;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->button6);
			this->tabPage9->Controls->Add(this->label42);
			this->tabPage9->Controls->Add(this->textBox29);
			this->tabPage9->Controls->Add(this->groupBox6);
			this->tabPage9->Controls->Add(this->groupBox7);
			this->tabPage9->Location = System::Drawing::Point(4, 4);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(1003, 555);
			this->tabPage9->TabIndex = 3;
			this->tabPage9->Text = L"Supprimer";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// tbPage_GestionPersonnel
			// 
			this->tbPage_GestionPersonnel->Controls->Add(this->tbC_GestionPersonnel);
			this->tbPage_GestionPersonnel->Location = System::Drawing::Point(4, 22);
			this->tbPage_GestionPersonnel->Name = L"tbPage_GestionPersonnel";
			this->tbPage_GestionPersonnel->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionPersonnel->Size = System::Drawing::Size(1007, 582);
			this->tbPage_GestionPersonnel->TabIndex = 2;
			this->tbPage_GestionPersonnel->Text = L"Gestion Personnel";
			this->tbPage_GestionPersonnel->UseVisualStyleBackColor = true;
			// 
			// tbC_GestionPersonnel
			// 
			this->tbC_GestionPersonnel->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tbC_GestionPersonnel->Controls->Add(this->tabPage10);
			this->tbC_GestionPersonnel->Controls->Add(this->tabPage11);
			this->tbC_GestionPersonnel->Controls->Add(this->tabPage12);
			this->tbC_GestionPersonnel->Controls->Add(this->tabPage13);
			this->tbC_GestionPersonnel->Location = System::Drawing::Point(-2, 0);
			this->tbC_GestionPersonnel->Name = L"tbC_GestionPersonnel";
			this->tbC_GestionPersonnel->SelectedIndex = 0;
			this->tbC_GestionPersonnel->Size = System::Drawing::Size(1011, 581);
			this->tbC_GestionPersonnel->TabIndex = 2;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->label56);
			this->tabPage10->Controls->Add(this->button11);
			this->tabPage10->Controls->Add(this->button12);
			this->tabPage10->Controls->Add(this->textBox39);
			this->tabPage10->Controls->Add(this->label57);
			this->tabPage10->Controls->Add(this->textBox40);
			this->tabPage10->Controls->Add(this->label58);
			this->tabPage10->Controls->Add(this->textBox41);
			this->tabPage10->Controls->Add(this->label59);
			this->tabPage10->Controls->Add(this->textBox42);
			this->tabPage10->Controls->Add(this->label60);
			this->tabPage10->Controls->Add(this->label61);
			this->tabPage10->Controls->Add(this->label63);
			this->tabPage10->Controls->Add(this->label64);
			this->tabPage10->Controls->Add(this->label65);
			this->tabPage10->Controls->Add(this->label66);
			this->tabPage10->Controls->Add(this->dateTimePicker5);
			this->tabPage10->Controls->Add(this->textBox43);
			this->tabPage10->Controls->Add(this->textBox44);
			this->tabPage10->Controls->Add(this->textBox45);
			this->tabPage10->Controls->Add(this->textBox46);
			this->tabPage10->Location = System::Drawing::Point(4, 4);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(1003, 555);
			this->tabPage10->TabIndex = 0;
			this->tabPage10->Text = L"Creer";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// tabPage11
			// 
			this->tabPage11->Location = System::Drawing::Point(4, 4);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(1003, 555);
			this->tabPage11->TabIndex = 1;
			this->tabPage11->Text = L"Modifier";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// tabPage12
			// 
			this->tabPage12->Location = System::Drawing::Point(4, 4);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(1003, 555);
			this->tabPage12->TabIndex = 2;
			this->tabPage12->Text = L"Afficher";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// tabPage13
			// 
			this->tabPage13->Location = System::Drawing::Point(4, 4);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(1003, 555);
			this->tabPage13->TabIndex = 3;
			this->tabPage13->Text = L"Supprimer";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// tbPage_GestionCommande
			// 
			this->tbPage_GestionCommande->Controls->Add(this->tbC_GestionCommande);
			this->tbPage_GestionCommande->Location = System::Drawing::Point(4, 22);
			this->tbPage_GestionCommande->Name = L"tbPage_GestionCommande";
			this->tbPage_GestionCommande->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionCommande->Size = System::Drawing::Size(1007, 582);
			this->tbPage_GestionCommande->TabIndex = 3;
			this->tbPage_GestionCommande->Text = L"Gestion Commande";
			this->tbPage_GestionCommande->UseVisualStyleBackColor = true;
			// 
			// tbC_GestionCommande
			// 
			this->tbC_GestionCommande->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tbC_GestionCommande->Controls->Add(this->tabPage14);
			this->tbC_GestionCommande->Controls->Add(this->tabPage15);
			this->tbC_GestionCommande->Controls->Add(this->tabPage16);
			this->tbC_GestionCommande->Controls->Add(this->tabPage17);
			this->tbC_GestionCommande->Location = System::Drawing::Point(-2, 0);
			this->tbC_GestionCommande->Name = L"tbC_GestionCommande";
			this->tbC_GestionCommande->SelectedIndex = 0;
			this->tbC_GestionCommande->Size = System::Drawing::Size(1011, 581);
			this->tbC_GestionCommande->TabIndex = 1;
			// 
			// tabPage14
			// 
			this->tabPage14->Location = System::Drawing::Point(4, 4);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(1003, 555);
			this->tabPage14->TabIndex = 0;
			this->tabPage14->Text = L"Creer";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// tabPage15
			// 
			this->tabPage15->Location = System::Drawing::Point(4, 4);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(1003, 555);
			this->tabPage15->TabIndex = 1;
			this->tabPage15->Text = L"Modifier";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// tabPage16
			// 
			this->tabPage16->Location = System::Drawing::Point(4, 4);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(1003, 555);
			this->tabPage16->TabIndex = 2;
			this->tabPage16->Text = L"Afficher";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// tabPage17
			// 
			this->tabPage17->Location = System::Drawing::Point(4, 4);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Padding = System::Windows::Forms::Padding(3);
			this->tabPage17->Size = System::Drawing::Size(1003, 555);
			this->tabPage17->TabIndex = 3;
			this->tabPage17->Text = L"Supprimer";
			this->tabPage17->UseVisualStyleBackColor = true;
			// 
			// tbPage_GestionStock
			// 
			this->tbPage_GestionStock->Controls->Add(this->tbC_GestionStock);
			this->tbPage_GestionStock->Location = System::Drawing::Point(4, 22);
			this->tbPage_GestionStock->Name = L"tbPage_GestionStock";
			this->tbPage_GestionStock->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionStock->Size = System::Drawing::Size(1007, 582);
			this->tbPage_GestionStock->TabIndex = 4;
			this->tbPage_GestionStock->Text = L"Gestion Stock";
			this->tbPage_GestionStock->UseVisualStyleBackColor = true;
			// 
			// tbC_GestionStock
			// 
			this->tbC_GestionStock->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tbC_GestionStock->Controls->Add(this->tabPage18);
			this->tbC_GestionStock->Controls->Add(this->tabPage19);
			this->tbC_GestionStock->Controls->Add(this->tabPage20);
			this->tbC_GestionStock->Controls->Add(this->tabPage21);
			this->tbC_GestionStock->Location = System::Drawing::Point(-2, 0);
			this->tbC_GestionStock->Name = L"tbC_GestionStock";
			this->tbC_GestionStock->SelectedIndex = 0;
			this->tbC_GestionStock->Size = System::Drawing::Size(1011, 581);
			this->tbC_GestionStock->TabIndex = 1;
			// 
			// tabPage18
			// 
			this->tabPage18->Location = System::Drawing::Point(4, 4);
			this->tabPage18->Name = L"tabPage18";
			this->tabPage18->Padding = System::Windows::Forms::Padding(3);
			this->tabPage18->Size = System::Drawing::Size(1003, 555);
			this->tabPage18->TabIndex = 0;
			this->tabPage18->Text = L"Creer";
			this->tabPage18->UseVisualStyleBackColor = true;
			// 
			// tabPage19
			// 
			this->tabPage19->Location = System::Drawing::Point(4, 4);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Padding = System::Windows::Forms::Padding(3);
			this->tabPage19->Size = System::Drawing::Size(1003, 555);
			this->tabPage19->TabIndex = 1;
			this->tabPage19->Text = L"Modifier";
			this->tabPage19->UseVisualStyleBackColor = true;
			// 
			// tabPage20
			// 
			this->tabPage20->Location = System::Drawing::Point(4, 4);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Padding = System::Windows::Forms::Padding(3);
			this->tabPage20->Size = System::Drawing::Size(1003, 555);
			this->tabPage20->TabIndex = 2;
			this->tabPage20->Text = L"Afficher";
			this->tabPage20->UseVisualStyleBackColor = true;
			// 
			// tabPage21
			// 
			this->tabPage21->Location = System::Drawing::Point(4, 4);
			this->tabPage21->Name = L"tabPage21";
			this->tabPage21->Padding = System::Windows::Forms::Padding(3);
			this->tabPage21->Size = System::Drawing::Size(1003, 555);
			this->tabPage21->TabIndex = 3;
			this->tabPage21->Text = L"Supprimer";
			this->tabPage21->UseVisualStyleBackColor = true;
			// 
			// tbPage_GestionStatistiques
			// 
			this->tbPage_GestionStatistiques->Controls->Add(this->tbC_GestionStatistiques);
			this->tbPage_GestionStatistiques->Location = System::Drawing::Point(4, 22);
			this->tbPage_GestionStatistiques->Name = L"tbPage_GestionStatistiques";
			this->tbPage_GestionStatistiques->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionStatistiques->Size = System::Drawing::Size(1007, 582);
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
			this->tbC_GestionStatistiques->Size = System::Drawing::Size(1011, 581);
			this->tbC_GestionStatistiques->TabIndex = 1;
			// 
			// tabPage22
			// 
			this->tabPage22->Location = System::Drawing::Point(4, 4);
			this->tabPage22->Name = L"tabPage22";
			this->tabPage22->Padding = System::Windows::Forms::Padding(3);
			this->tabPage22->Size = System::Drawing::Size(1003, 555);
			this->tabPage22->TabIndex = 0;
			this->tabPage22->Text = L"Calcul panier moyen";
			this->tabPage22->UseVisualStyleBackColor = true;
			// 
			// tabPage23
			// 
			this->tabPage23->Location = System::Drawing::Point(4, 4);
			this->tabPage23->Name = L"tabPage23";
			this->tabPage23->Padding = System::Windows::Forms::Padding(3);
			this->tabPage23->Size = System::Drawing::Size(1003, 555);
			this->tabPage23->TabIndex = 1;
			this->tabPage23->Text = L"Calcul chiffre affaire";
			this->tabPage23->UseVisualStyleBackColor = true;
			// 
			// tabPage24
			// 
			this->tabPage24->Location = System::Drawing::Point(4, 4);
			this->tabPage24->Name = L"tabPage24";
			this->tabPage24->Padding = System::Windows::Forms::Padding(3);
			this->tabPage24->Size = System::Drawing::Size(1003, 555);
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
			this->tabPage25->Size = System::Drawing::Size(1003, 555);
			this->tabPage25->TabIndex = 3;
			this->tabPage25->Text = L"Montant total client";
			this->tabPage25->UseVisualStyleBackColor = true;
			// 
			// tabPage26
			// 
			this->tabPage26->Location = System::Drawing::Point(4, 4);
			this->tabPage26->Name = L"tabPage26";
			this->tabPage26->Padding = System::Windows::Forms::Padding(3);
			this->tabPage26->Size = System::Drawing::Size(1003, 555);
			this->tabPage26->TabIndex = 4;
			this->tabPage26->Text = L"10 articles + vendus";
			this->tabPage26->UseVisualStyleBackColor = true;
			// 
			// tabPage27
			// 
			this->tabPage27->Location = System::Drawing::Point(4, 4);
			this->tabPage27->Name = L"tabPage27";
			this->tabPage27->Padding = System::Windows::Forms::Padding(3);
			this->tabPage27->Size = System::Drawing::Size(1003, 555);
			this->tabPage27->TabIndex = 5;
			this->tabPage27->Text = L"10 articles - vendus";
			this->tabPage27->UseVisualStyleBackColor = true;
			// 
			// tabPage28
			// 
			this->tabPage28->Location = System::Drawing::Point(4, 4);
			this->tabPage28->Name = L"tabPage28";
			this->tabPage28->Padding = System::Windows::Forms::Padding(3);
			this->tabPage28->Size = System::Drawing::Size(1003, 555);
			this->tabPage28->TabIndex = 6;
			this->tabPage28->Text = L"Calcul va commerciale stock";
			this->tabPage28->UseVisualStyleBackColor = true;
			// 
			// tabPage29
			// 
			this->tabPage29->Location = System::Drawing::Point(4, 4);
			this->tabPage29->Name = L"tabPage29";
			this->tabPage29->Padding = System::Windows::Forms::Padding(3);
			this->tabPage29->Size = System::Drawing::Size(1003, 555);
			this->tabPage29->TabIndex = 7;
			this->tabPage29->Text = L"Calcul va achat stock";
			this->tabPage29->UseVisualStyleBackColor = true;
			// 
			// tabPage30
			// 
			this->tabPage30->Location = System::Drawing::Point(4, 4);
			this->tabPage30->Name = L"tabPage30";
			this->tabPage30->Padding = System::Windows::Forms::Padding(3);
			this->tabPage30->Size = System::Drawing::Size(1003, 555);
			this->tabPage30->TabIndex = 8;
			this->tabPage30->Text = L"Simulation variation";
			this->tabPage30->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(417, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(522, 291);
			this->dataGridView1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(112, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(117, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(112, 162);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(117, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(142, 263);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(170, 20);
			this->textBox5->TabIndex = 5;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(112, 212);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(109, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Nom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(109, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Prenom";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(109, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Date de naissance";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(109, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Email";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(414, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Adresse(s) de livraison";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(109, 247);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 16);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Adresse de facturation";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(111, 266);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Rue";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(111, 292);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Ville";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(142, 289);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(170, 20);
			this->textBox4->TabIndex = 14;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(111, 318);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 13);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Code postal";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(180, 315);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(132, 20);
			this->textBox6->TabIndex = 16;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(111, 344);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(30, 13);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Pays";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(142, 341);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(170, 20);
			this->textBox7->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(417, 425);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(522, 87);
			this->textBox8->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(180, 414);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 42);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Creer";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Default;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(180, 462);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 42);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Effacer tous les champs";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(13, 78);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 16);
			this->label18->TabIndex = 45;
			this->label18->Text = L"Prenom";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(13, 35);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(35, 16);
			this->label23->TabIndex = 44;
			this->label23->Text = L"Nom";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(16, 94);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(117, 20);
			this->textBox9->TabIndex = 43;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(16, 51);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(117, 20);
			this->textBox17->TabIndex = 42;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->dataGridView2);
			this->groupBox2->Controls->Add(this->textBox17);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Location = System::Drawing::Point(34, 26);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(172, 411);
			this->groupBox2->TabIndex = 46;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Recherche du client à modifier";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(16, 217);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(145, 128);
			this->dataGridView2->TabIndex = 46;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(16, 120);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 47;
			this->button3->Text = L"Rechercher";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(44, 351);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 48;
			this->button4->Text = L"Confirmer";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->dataGridView3);
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->Controls->Add(this->textBox18);
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->textBox19);
			this->groupBox3->Controls->Add(this->label26);
			this->groupBox3->Controls->Add(this->textBox20);
			this->groupBox3->Controls->Add(this->label27);
			this->groupBox3->Controls->Add(this->label28);
			this->groupBox3->Controls->Add(this->label29);
			this->groupBox3->Controls->Add(this->label30);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->dateTimePicker3);
			this->groupBox3->Controls->Add(this->textBox21);
			this->groupBox3->Controls->Add(this->textBox22);
			this->groupBox3->Controls->Add(this->textBox23);
			this->groupBox3->Controls->Add(this->textBox24);
			this->groupBox3->Location = System::Drawing::Point(212, 26);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(756, 411);
			this->groupBox3->TabIndex = 47;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Modification";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(18, 325);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(30, 13);
			this->label24->TabIndex = 58;
			this->label24->Text = L"Pays";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(49, 322);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(170, 20);
			this->textBox18->TabIndex = 57;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(18, 299);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(63, 13);
			this->label25->TabIndex = 56;
			this->label25->Text = L"Code postal";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(87, 296);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(132, 20);
			this->textBox19->TabIndex = 55;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(18, 273);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(26, 13);
			this->label26->TabIndex = 54;
			this->label26->Text = L"Ville";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(49, 270);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(170, 20);
			this->textBox20->TabIndex = 53;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(18, 247);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(27, 13);
			this->label27->TabIndex = 52;
			this->label27->Text = L"Rue";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(16, 228);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(130, 16);
			this->label28->TabIndex = 51;
			this->label28->Text = L"Adresse de facturation";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(16, 127);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(37, 16);
			this->label29->TabIndex = 50;
			this->label29->Text = L"Email";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(16, 177);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(104, 16);
			this->label30->TabIndex = 49;
			this->label30->Text = L"Date de naissance";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(16, 78);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(51, 16);
			this->label31->TabIndex = 48;
			this->label31->Text = L"Prenom";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(16, 35);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(35, 16);
			this->label32->TabIndex = 47;
			this->label32->Text = L"Nom";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(19, 193);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker3->TabIndex = 46;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(49, 244);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(170, 20);
			this->textBox21->TabIndex = 45;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(19, 143);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(117, 20);
			this->textBox22->TabIndex = 44;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(19, 94);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(117, 20);
			this->textBox23->TabIndex = 43;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(19, 51);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(117, 20);
			this->textBox24->TabIndex = 42;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(13, 181);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(115, 32);
			this->label13->TabIndex = 49;
			this->label13->Text = L"Selectionner la date\r\nde naissance";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(254, 35);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(127, 16);
			this->label14->TabIndex = 60;
			this->label14->Text = L"Adresse(s) de livraison";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(257, 51);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(493, 291);
			this->dataGridView3->TabIndex = 59;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(34, 459);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(602, 80);
			this->textBox10->TabIndex = 48;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(31, 440);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 16);
			this->label15->TabIndex = 50;
			this->label15->Text = L"Message";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(414, 406);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 16);
			this->label16->TabIndex = 51;
			this->label16->Text = L"Message";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Cursor = System::Windows::Forms::Cursors::Default;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(750, 472);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 42);
			this->button5->TabIndex = 51;
			this->button5->Text = L"Confirmer la modification";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(13, 35);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(35, 16);
			this->label41->TabIndex = 44;
			this->label41->Text = L"Nom";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(16, 94);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(117, 20);
			this->textBox28->TabIndex = 43;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(13, 78);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(51, 16);
			this->label40->TabIndex = 45;
			this->label40->Text = L"Prenom";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(16, 51);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(117, 20);
			this->textBox27->TabIndex = 42;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(16, 217);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(145, 128);
			this->dataGridView5->TabIndex = 46;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(16, 120);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 47;
			this->button8->Text = L"Rechercher";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(44, 351);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 48;
			this->button7->Text = L"Confirmer";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(13, 181);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(115, 32);
			this->label39->TabIndex = 49;
			this->label39->Text = L"Selectionner la date\r\nde naissance";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label39);
			this->groupBox5->Controls->Add(this->button7);
			this->groupBox5->Controls->Add(this->button8);
			this->groupBox5->Controls->Add(this->dataGridView5);
			this->groupBox5->Controls->Add(this->textBox27);
			this->groupBox5->Controls->Add(this->label40);
			this->groupBox5->Controls->Add(this->textBox28);
			this->groupBox5->Controls->Add(this->label41);
			this->groupBox5->Location = System::Drawing::Point(33, 22);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(172, 411);
			this->groupBox5->TabIndex = 52;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Recherche du client à afficher";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(19, 51);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(117, 20);
			this->textBox26->TabIndex = 42;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(19, 94);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(117, 20);
			this->textBox25->TabIndex = 43;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(19, 143);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(117, 20);
			this->textBox16->TabIndex = 44;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(49, 244);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(170, 20);
			this->textBox15->TabIndex = 45;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(19, 193);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 46;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(16, 35);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(35, 16);
			this->label38->TabIndex = 47;
			this->label38->Text = L"Nom";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(16, 78);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(51, 16);
			this->label37->TabIndex = 48;
			this->label37->Text = L"Prenom";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(16, 177);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(104, 16);
			this->label36->TabIndex = 49;
			this->label36->Text = L"Date de naissance";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(16, 127);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(37, 16);
			this->label35->TabIndex = 50;
			this->label35->Text = L"Email";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(16, 228);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(130, 16);
			this->label34->TabIndex = 51;
			this->label34->Text = L"Adresse de facturation";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(18, 247);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(27, 13);
			this->label33->TabIndex = 52;
			this->label33->Text = L"Rue";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(49, 270);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(170, 20);
			this->textBox14->TabIndex = 53;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(18, 273);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(26, 13);
			this->label22->TabIndex = 54;
			this->label22->Text = L"Ville";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(87, 296);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(132, 20);
			this->textBox13->TabIndex = 55;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(18, 299);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(63, 13);
			this->label21->TabIndex = 56;
			this->label21->Text = L"Code postal";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(49, 322);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(170, 20);
			this->textBox12->TabIndex = 57;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(18, 325);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(30, 13);
			this->label20->TabIndex = 58;
			this->label20->Text = L"Pays";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(257, 51);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(493, 291);
			this->dataGridView4->TabIndex = 59;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(254, 35);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(127, 16);
			this->label19->TabIndex = 60;
			this->label19->Text = L"Adresse(s) de livraison";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->dataGridView4);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->textBox12);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->textBox13);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->textBox14);
			this->groupBox4->Controls->Add(this->label33);
			this->groupBox4->Controls->Add(this->label34);
			this->groupBox4->Controls->Add(this->label35);
			this->groupBox4->Controls->Add(this->label36);
			this->groupBox4->Controls->Add(this->label37);
			this->groupBox4->Controls->Add(this->label38);
			this->groupBox4->Controls->Add(this->dateTimePicker2);
			this->groupBox4->Controls->Add(this->textBox15);
			this->groupBox4->Controls->Add(this->textBox16);
			this->groupBox4->Controls->Add(this->textBox25);
			this->groupBox4->Controls->Add(this->textBox26);
			this->groupBox4->Location = System::Drawing::Point(211, 22);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(756, 411);
			this->groupBox4->TabIndex = 53;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Affichage";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(33, 455);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(934, 80);
			this->textBox11->TabIndex = 54;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(30, 436);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(54, 16);
			this->label17->TabIndex = 55;
			this->label17->Text = L"Message";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Cursor = System::Windows::Forms::Cursors::Default;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(752, 467);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 42);
			this->button6->TabIndex = 56;
			this->button6->Text = L"Confirmer la suppression";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(33, 435);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(54, 16);
			this->label42->TabIndex = 55;
			this->label42->Text = L"Message";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(36, 454);
			this->textBox29->Multiline = true;
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(602, 80);
			this->textBox29->TabIndex = 54;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label43);
			this->groupBox6->Controls->Add(this->dataGridView6);
			this->groupBox6->Controls->Add(this->label44);
			this->groupBox6->Controls->Add(this->textBox30);
			this->groupBox6->Controls->Add(this->label45);
			this->groupBox6->Controls->Add(this->textBox31);
			this->groupBox6->Controls->Add(this->label46);
			this->groupBox6->Controls->Add(this->textBox32);
			this->groupBox6->Controls->Add(this->label47);
			this->groupBox6->Controls->Add(this->label48);
			this->groupBox6->Controls->Add(this->label49);
			this->groupBox6->Controls->Add(this->label50);
			this->groupBox6->Controls->Add(this->label51);
			this->groupBox6->Controls->Add(this->label52);
			this->groupBox6->Controls->Add(this->dateTimePicker4);
			this->groupBox6->Controls->Add(this->textBox33);
			this->groupBox6->Controls->Add(this->textBox34);
			this->groupBox6->Controls->Add(this->textBox35);
			this->groupBox6->Controls->Add(this->textBox36);
			this->groupBox6->Location = System::Drawing::Point(214, 21);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(756, 411);
			this->groupBox6->TabIndex = 53;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Suppression";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(254, 35);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(127, 16);
			this->label43->TabIndex = 60;
			this->label43->Text = L"Adresse(s) de livraison";
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(257, 51);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(493, 291);
			this->dataGridView6->TabIndex = 59;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(18, 325);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(30, 13);
			this->label44->TabIndex = 58;
			this->label44->Text = L"Pays";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(49, 322);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(170, 20);
			this->textBox30->TabIndex = 57;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(18, 299);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(63, 13);
			this->label45->TabIndex = 56;
			this->label45->Text = L"Code postal";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(87, 296);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(132, 20);
			this->textBox31->TabIndex = 55;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(18, 273);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(26, 13);
			this->label46->TabIndex = 54;
			this->label46->Text = L"Ville";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(49, 270);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(170, 20);
			this->textBox32->TabIndex = 53;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(18, 247);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(27, 13);
			this->label47->TabIndex = 52;
			this->label47->Text = L"Rue";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(16, 228);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(130, 16);
			this->label48->TabIndex = 51;
			this->label48->Text = L"Adresse de facturation";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(16, 127);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(37, 16);
			this->label49->TabIndex = 50;
			this->label49->Text = L"Email";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(16, 177);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(104, 16);
			this->label50->TabIndex = 49;
			this->label50->Text = L"Date de naissance";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(16, 78);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(51, 16);
			this->label51->TabIndex = 48;
			this->label51->Text = L"Prenom";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(16, 35);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(35, 16);
			this->label52->TabIndex = 47;
			this->label52->Text = L"Nom";
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(19, 193);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker4->TabIndex = 46;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(49, 244);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(170, 20);
			this->textBox33->TabIndex = 45;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(19, 143);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(117, 20);
			this->textBox34->TabIndex = 44;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(19, 94);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(117, 20);
			this->textBox35->TabIndex = 43;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(19, 51);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(117, 20);
			this->textBox36->TabIndex = 42;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label53);
			this->groupBox7->Controls->Add(this->button9);
			this->groupBox7->Controls->Add(this->button10);
			this->groupBox7->Controls->Add(this->dataGridView7);
			this->groupBox7->Controls->Add(this->textBox37);
			this->groupBox7->Controls->Add(this->label54);
			this->groupBox7->Controls->Add(this->textBox38);
			this->groupBox7->Controls->Add(this->label55);
			this->groupBox7->Location = System::Drawing::Point(36, 21);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(172, 411);
			this->groupBox7->TabIndex = 52;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Recherche du client à supprimer";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(13, 181);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(115, 32);
			this->label53->TabIndex = 49;
			this->label53->Text = L"Selectionner la date\r\nde naissance";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(44, 351);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 48;
			this->button9->Text = L"Confirmer";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(16, 120);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 47;
			this->button10->Text = L"Rechercher";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// dataGridView7
			// 
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Location = System::Drawing::Point(16, 217);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->Size = System::Drawing::Size(145, 128);
			this->dataGridView7->TabIndex = 46;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(16, 51);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(117, 20);
			this->textBox37->TabIndex = 42;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(13, 78);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(51, 16);
			this->label54->TabIndex = 45;
			this->label54->Text = L"Prenom";
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(16, 94);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(117, 20);
			this->textBox38->TabIndex = 43;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(13, 35);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(35, 16);
			this->label55->TabIndex = 44;
			this->label55->Text = L"Nom";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(86, 381);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(54, 16);
			this->label56->TabIndex = 74;
			this->label56->Text = L"Message";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gray;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->Cursor = System::Windows::Forms::Cursors::Default;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(531, 261);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(107, 42);
			this->button11->TabIndex = 73;
			this->button11->Text = L"Effacer tous les champs";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gray;
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->Cursor = System::Windows::Forms::Cursors::Default;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(463, 184);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(107, 42);
			this->button12->TabIndex = 72;
			this->button12->Text = L"Creer";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(89, 400);
			this->textBox39->Multiline = true;
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(522, 87);
			this->textBox39->TabIndex = 71;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(88, 338);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(30, 13);
			this->label57->TabIndex = 70;
			this->label57->Text = L"Pays";
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(119, 335);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(170, 20);
			this->textBox40->TabIndex = 69;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(88, 312);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(63, 13);
			this->label58->TabIndex = 68;
			this->label58->Text = L"Code postal";
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(157, 309);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(132, 20);
			this->textBox41->TabIndex = 67;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(88, 286);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(26, 13);
			this->label59->TabIndex = 66;
			this->label59->Text = L"Ville";
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(119, 283);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(170, 20);
			this->textBox42->TabIndex = 65;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(88, 260);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(27, 13);
			this->label60->TabIndex = 64;
			this->label60->Text = L"Rue";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(86, 241);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(50, 16);
			this->label61->TabIndex = 63;
			this->label61->Text = L"Adresse";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(86, 140);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(161, 16);
			this->label63->TabIndex = 61;
			this->label63->Text = L"Id du supérieur hiérarchique";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(86, 190);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(103, 16);
			this->label64->TabIndex = 60;
			this->label64->Text = L"Date d\'embauche";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(86, 91);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(51, 16);
			this->label65->TabIndex = 59;
			this->label65->Text = L"Prenom";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(86, 48);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(35, 16);
			this->label66->TabIndex = 58;
			this->label66->Text = L"Nom";
			// 
			// dateTimePicker5
			// 
			this->dateTimePicker5->Location = System::Drawing::Point(89, 206);
			this->dateTimePicker5->Name = L"dateTimePicker5";
			this->dateTimePicker5->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker5->TabIndex = 57;
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(119, 257);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(170, 20);
			this->textBox43->TabIndex = 56;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(89, 156);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(117, 20);
			this->textBox44->TabIndex = 55;
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(89, 107);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(117, 20);
			this->textBox45->TabIndex = 54;
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(89, 64);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(117, 20);
			this->textBox46->TabIndex = 53;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1014, 609);
			this->Controls->Add(this->tbC_MenuPrincipal);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
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
			this->tbPage_GestionClient_Supprimer->ResumeLayout(false);
			this->tbPage_GestionClient_Creer->ResumeLayout(false);
			this->tbPage_GestionClient_Creer->PerformLayout();
			this->tbPage_GestionClient_Modifier->ResumeLayout(false);
			this->tbPage_GestionClient_Modifier->PerformLayout();
			this->tbPage_GestionClient_Afficher->ResumeLayout(false);
			this->tbPage_GestionClient_Afficher->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tbPage_GestionPersonnel->ResumeLayout(false);
			this->tbC_GestionPersonnel->ResumeLayout(false);
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->tbPage_GestionCommande->ResumeLayout(false);
			this->tbC_GestionCommande->ResumeLayout(false);
			this->tbPage_GestionStock->ResumeLayout(false);
			this->tbC_GestionStock->ResumeLayout(false);
			this->tbPage_GestionStatistiques->ResumeLayout(false);
			this->tbC_GestionStatistiques->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage24_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   // ---------------------- Bouton du menu principal - EVENEMENT ---------------------- \\

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

};
}
