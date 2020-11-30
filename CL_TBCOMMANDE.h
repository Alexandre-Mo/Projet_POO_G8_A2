#pragma once

namespace NS_Composants {

	using namespace System;

	ref class CL_TBCOMMANDE
	{
	private:
		int ID_commande;
		String^ Date_emission;
		String^ Date_payement;
		String^ Mode_payement;
		float Remise;
		int ID_Societe;
		int ID_societe_Produit;
		int ID_client;
	public:
		CL_TBCOMMANDE();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		// GETTER
		int getID_commande();
		String^ getDate_emission();
		String^ getDate_payement();
		String^ getMode_payement();
		float getRemise();
		int getID_Societe();
		int getID_societe_Produit();
		int getID_client();

		// SETTER
		int setID_commande();
		String^ setDate_emission();
		String^ setDate_payement();
		String^ setMode_payement();
		float setRemise();
		int setID_Societe();
		int setID_societe_Produit();
		int setID_client();
	};

}