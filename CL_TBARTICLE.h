#pragma once

namespace NS_Composants {

	using namespace System;

	ref class CL_TBARTICLE
	{
	private:
		int quantite_stock;
		int ID_article;
		int ID_couleur;
		String^ Reference_article_information;
		String^ Couleur;
		int Prix_unitaire_HT;
	public:
		CL_TBARTICLE();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		String^ SELECTbyNameAndColor(void);
		String^ UPDATEQuantite(void);
		String^ SELECTQuantiteByID(void);

		// GETTER
		int getquantite_stock();
		int getID_article();
		int getID_couleur();
		String^ getReference_article_information();
		String^ getCouleur();
		int getPrix_unitaire_HT();
		// SETTER
		void setquantite_stock(int);
		void setID_article(int);
		void setID_couleur(int);
		void setReference_article_information(String^);
		void setCouleur(String^);
		void setPrix_unitaire_HT(int);
	};

}
