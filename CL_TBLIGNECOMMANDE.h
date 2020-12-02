#pragma once

namespace NS_Composants {

	using namespace System;

	ref class CL_TBLIGNECOMMANDE
	{
	private:
		int ID_Ligne;
		float Prix_unitaire_HT;
		float Taux_TVA;
		int Qauntite_Produit;
		int ID_commande;
		int ID_article;
	public:
		CL_TBLIGNECOMMANDE();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		// GETTER
		int getID_Ligne();
		int getID_article();
		int getQuantite_Produit();
		int getID_commande();
		float getPrix_unitaire_HT();
		float getTaux_TVA();
		// SETTER
		void setID_Ligne(int);
		void setID_article(int);
		void setQuantite_Produit(int);
		void setID_commande(int);
		void setPrix_unitaire_HT(float);
		void setTaux_TVA(float);
	};

}