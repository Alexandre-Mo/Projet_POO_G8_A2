#pragma once

namespace NS_Composants {

	using namespace System;

	ref class CL_TBCLIENT
	{
	private:
		int ID_client;
		String^ D1A_client;
		String^ DDN_client;
		String^ email;
		String^ nom_client;
		String^ prenom_client;
	public:
		CL_TBCLIENT();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
	
	// GETTER
		int^ getID_client();
		String^ getD1A_client();
		String^ getDDN_client();
		String^ getEmail();
		String^ getNom_client();
		String^ getPrenom_client();

	// SETTER
		void setID_client(int);
		void setD1A_client(String^);
		void setDDN_client(String^);
		void setEmail(String^);
	    void setNom_client(String^);
		void setPrenom_client(String^);
	};

}