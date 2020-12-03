#pragma once

namespace NS_Composants {

	using namespace System;

	ref class CL_TBDATE
	{
	private:
		int ID_Date;
		int ID_commande;
		String^ Dpaiement;
	public:
		CL_TBDATE();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		// GETTER
		int getID_Date();
		int getID_commande();
		String^ getDpaiement();

		// SETTER
		void setID_Date(int);
		void setID_commande(int);
		void setDpaiement(String^);


	};

}