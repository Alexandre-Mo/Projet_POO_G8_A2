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
	private: System::Windows::Forms::TabPage^ tbPage_GestionClient_Informations;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tbPage_GestionClient_Modifier = (gcnew System::Windows::Forms::TabPage());
			this->tbPage_GestionClient_Afficher = (gcnew System::Windows::Forms::TabPage());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->tbPage_GestionClient_Informations = (gcnew System::Windows::Forms::TabPage());
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
			this->tbC_MenuPrincipal->SuspendLayout();
			this->tbPage_Informations->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tbPage_GestionClient->SuspendLayout();
			this->tbPage_GestionClient_Supprimer->SuspendLayout();
			this->tbPage_GestionClient_Creer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tbPage_GestionPersonnel->SuspendLayout();
			this->tbC_GestionPersonnel->SuspendLayout();
			this->tbPage_GestionCommande->SuspendLayout();
			this->tbC_GestionCommande->SuspendLayout();
			this->tbPage_GestionStock->SuspendLayout();
			this->tbC_GestionStock->SuspendLayout();
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
			this->tbPage_GestionClient_Supprimer->Controls->Add(this->tbPage_GestionClient_Informations);
			this->tbPage_GestionClient_Supprimer->Location = System::Drawing::Point(-2, 0);
			this->tbPage_GestionClient_Supprimer->Name = L"tbPage_GestionClient_Supprimer";
			this->tbPage_GestionClient_Supprimer->SelectedIndex = 0;
			this->tbPage_GestionClient_Supprimer->Size = System::Drawing::Size(1011, 581);
			this->tbPage_GestionClient_Supprimer->TabIndex = 2;
			// 
			// tbPage_GestionClient_Creer
			// 
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
			this->button2->Location = System::Drawing::Point(180, 473);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 42);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Effacer tous les champs";
			this->button2->UseVisualStyleBackColor = false;
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
			this->button1->Location = System::Drawing::Point(180, 425);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 42);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Creer";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(417, 425);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(522, 87);
			this->textBox8->TabIndex = 20;
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
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(111, 266);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Rue";
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(414, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Adresse(s) de livraison";
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
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(112, 212);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(142, 263);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(170, 20);
			this->textBox5->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(112, 162);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(117, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(117, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(112, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(417, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(522, 291);
			this->dataGridView1->TabIndex = 0;
			// 
			// tbPage_GestionClient_Modifier
			// 
			this->tbPage_GestionClient_Modifier->Location = System::Drawing::Point(4, 4);
			this->tbPage_GestionClient_Modifier->Name = L"tbPage_GestionClient_Modifier";
			this->tbPage_GestionClient_Modifier->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionClient_Modifier->Size = System::Drawing::Size(1003, 555);
			this->tbPage_GestionClient_Modifier->TabIndex = 1;
			this->tbPage_GestionClient_Modifier->Text = L"Modifier";
			this->tbPage_GestionClient_Modifier->UseVisualStyleBackColor = true;
			// 
			// tbPage_GestionClient_Afficher
			// 
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
			this->tabPage9->Location = System::Drawing::Point(4, 4);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(1003, 555);
			this->tabPage9->TabIndex = 3;
			this->tabPage9->Text = L"Supprimer";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// tbPage_GestionClient_Informations
			// 
			this->tbPage_GestionClient_Informations->Location = System::Drawing::Point(4, 4);
			this->tbPage_GestionClient_Informations->Name = L"tbPage_GestionClient_Informations";
			this->tbPage_GestionClient_Informations->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_GestionClient_Informations->Size = System::Drawing::Size(1003, 555);
			this->tbPage_GestionClient_Informations->TabIndex = 4;
			this->tbPage_GestionClient_Informations->Text = L"Informations";
			this->tbPage_GestionClient_Informations->UseVisualStyleBackColor = true;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tbPage_GestionPersonnel->ResumeLayout(false);
			this->tbC_GestionPersonnel->ResumeLayout(false);
			this->tbPage_GestionCommande->ResumeLayout(false);
			this->tbC_GestionCommande->ResumeLayout(false);
			this->tbPage_GestionStock->ResumeLayout(false);
			this->tbC_GestionStock->ResumeLayout(false);
			this->tbPage_GestionStatistiques->ResumeLayout(false);
			this->tbC_GestionStatistiques->ResumeLayout(false);
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

};
}


