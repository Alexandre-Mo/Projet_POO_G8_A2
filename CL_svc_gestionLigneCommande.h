#pragma once

#include "CL_CAD.h"
#include "CL_TBLIGNECOMMANDE.h"

namespace NS_Svc {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	ref class CL_svc_gestionLigneCommande
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_TBLIGNECOMMANDE^ TBLIGNECOMMANDE;
		DataSet^ dataSetLigneCommande;

	public:
		CL_svc_gestionLigneCommande();
		DataSet^ listeLigneCommande(String^, int);
		int^ ajouter( float, int, int, int);
		void modifier(int, float, int , int , int );
		void supprimer(int);
		void supprimerbyID_CLIENT(int id);
	}; 

}