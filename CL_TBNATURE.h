#pragma once

namespace NS_Composants {

	using namespace System;

	ref class CL_TBNATURE
	{	
	private:
		int ID_couleur;
		String^ Couleur;
	public:
		CL_TBNATURE();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		// GETTER
		int getID_couleur();
		String^ getCouleur();
		// SETTER
		void setID_couleur(int);
		void setCouleur(String^);
	};

}
