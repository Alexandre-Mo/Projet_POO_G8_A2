#pragma once


namespace NS_Composants {

	using namespace System;

	ref class CL_TBADRESSE
	{
	private:
		int ID_adresse;
		String^ Nom_rue;
		int Num_rue;
		int Code_postal;
		String^ Pays;
		String^ Ville;
		int Type; // 1 = Adresse de facturation client ; 2 = Adresse d'habitation personnel ; 3 = Adresse de livraison client
		int ID_client;
		int ID_personnel;
	public:
		CL_TBADRESSE();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		String^ SELECTbyID(void);

	// GETTER
		int getID_adresse();
		int getID_client();
		int getID_personnel();
		int getType();
		int getCode_postal();
		String^ getNom_rue();
		int getNum_rue();
		String^ getPays();
		String^ getVille();
	// SETTER
		void setID_adresse(int);
		void setID_client(int);
		void setID_personnel(int);
		void setCode_postal(int);
		void setType(int);
		void setNom_rue(String^);
		void setNum_rue(int);
		void setPays(String^);
		void setVille(String^);
	};

}