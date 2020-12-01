#pragma once

namespace NS_Composants {

	using namespace System;

	ref class CL_TBSOCIETE
	{
	private:
		int ID_societe;
		String^ Nom_societe;
	public:
		CL_TBSOCIETE();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		// GETTER
		int getID_societe();
		String^ getNom_societe();
		// SETTER
		void setID_societe(int);
		void setNom_societe(String^);
	};

}
