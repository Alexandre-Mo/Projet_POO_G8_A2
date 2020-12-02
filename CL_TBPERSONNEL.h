#pragma once

namespace NS_Composants {

	using namespace System;

	ref class CL_TBPERSONNEL
	{
	private:
		int ID_personnel;
		int IDSup_personnel;
		String^ DE_personnel;
		String^ Nom_personnel;
		String^ Prenom_personnel;
	public:
		CL_TBPERSONNEL();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		String^ SELECTbyName(void);
		String^ SELECTbyID(void);

		// GETTER
		int getID_personnel();
		int getIDSup_personnel();
		String^ getDE_personnel();
		String^ getNom_personnel();
		String^ getPrenom_personnel();

		// SETTER
		void setID_personnel(int);
		void setIDSup_personnel(int);
		void setDE_personnel(String^);
		void setNom_personnel(String^);
		void setPrenom_personnel(String^);
	};

}