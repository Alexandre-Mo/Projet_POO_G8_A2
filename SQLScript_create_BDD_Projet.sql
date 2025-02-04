

CREATE TABLE Client(
        ID_client     Int  IDENTITY  NOT NULL ,
        D1A_client    Date ,
        DDN_client    Date NOT NULL ,
        Email_client  Varchar (50) NOT NULL ,
        Nom_client    Varchar (50) NOT NULL ,
        Prenom_client Varchar (50) NOT NULL
	,CONSTRAINT Client_PK PRIMARY KEY (ID_client)
);


CREATE TABLE Nature(
        ID_couleur Int  IDENTITY  NOT NULL ,
        Couleur    Varchar (50) NOT NULL
	,CONSTRAINT Nature_PK PRIMARY KEY (ID_couleur)
);


CREATE TABLE Article(
        ID_article        Int  IDENTITY  NOT NULL ,
        Quantite_stock    Int NOT NULL ,
        Reference_article Varchar (50) NOT NULL ,
        ID_couleur        Int NOT NULL,
        Prix_unitaire_HT Float
	,CONSTRAINT Article_PK PRIMARY KEY (ID_article)
);


CREATE TABLE Commande(
        ID_commande        Int  IDENTITY  NOT NULL ,
        Date_emission      Date NOT NULL ,
        Date_payement      Date NOT NULL ,
        Mode_payement      Varchar (10) NOT NULL ,
        Remise             Float NOT NULL ,
        ID_client          Int NOT NULL,
        Reference_commande    Varchar (20) NOT NULL ,
        ID_adresse         Int NOT NULL 
	,CONSTRAINT Commande_PK PRIMARY KEY (ID_commande)
);


CREATE TABLE Ligne_commande(
        ID_Ligne         Int  IDENTITY  NOT NULL ,
        Taux_TVA         Float NOT NULL ,
        Quantite_Produit Int NOT NULL ,
        ID_commande      Int NOT NULL ,
        ID_article       Int NOT NULL
	,CONSTRAINT Ligne_commande_PK PRIMARY KEY (ID_Ligne)
);


CREATE TABLE Adresse(
        ID_adresse   Int  IDENTITY  NOT NULL ,
        Nom_rue      Varchar (50) NOT NULL ,
        Num_rue      Int NOT NULL ,
        Code_postal Int NOT NULL ,
        Pays         Varchar (50) NOT NULL ,
        Ville        Varchar (50) NOT NULL ,
        Type         Int NOT NULL ,
        ID_client    Int ,
        ID_personnel Int
	,CONSTRAINT Adresse_PK PRIMARY KEY (ID_adresse)
);


CREATE TABLE Personnel(
        ID_personnel     Int  IDENTITY  NOT NULL ,
        Date_embauche    Date NOT NULL ,
        Prenom_personnel Varchar (10) NOT NULL ,
        Nom_personnel    Varchar (10) NOT NULL ,
        ID_personnel_SH  Int 
	,CONSTRAINT Personnel_PK PRIMARY KEY (ID_personnel)
);

CREATE TABLE Date_paiement(
        ID_Date         Int  IDENTITY  NOT NULL ,
        ID_commande      Int NOT NULL ,
        paiement      Date NOT NULL
	,CONSTRAINT Date_paiement_PK PRIMARY KEY (ID_Date)
);

ALTER TABLE Date_paiement
	ADD CONSTRAINT id_commande_FK
	FOREIGN KEY (ID_commande)
	REFERENCES Commande(ID_commande);





ALTER TABLE Article
	ADD CONSTRAINT Article_Nature0_FK
	FOREIGN KEY (ID_couleur)
	REFERENCES Nature(ID_couleur);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_adresse_FK
	FOREIGN KEY (ID_adresse)
	REFERENCES Adresse(ID_adresse);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Client1_FK
	FOREIGN KEY (ID_client)
	REFERENCES Client(ID_client);

ALTER TABLE Ligne_commande
	ADD CONSTRAINT Ligne_commande_Commande0_FK
	FOREIGN KEY (ID_commande)
	REFERENCES Commande(ID_commande);

ALTER TABLE Ligne_commande
	ADD CONSTRAINT Ligne_commande_Article1_FK
	FOREIGN KEY (ID_article)
	REFERENCES Article(ID_article);

ALTER TABLE Adresse
	ADD CONSTRAINT Adresse_Client0_FK
	FOREIGN KEY (ID_client)
	REFERENCES Client(ID_client);

ALTER TABLE Adresse
	ADD CONSTRAINT Adresse_Personnel1_FK
	FOREIGN KEY (ID_personnel)
	REFERENCES Personnel(ID_personnel);

ALTER TABLE Personnel
	ADD CONSTRAINT ID_personnel_SH1_FK
	FOREIGN KEY (ID_personnel)
	REFERENCES Personnel(ID_personnel);

