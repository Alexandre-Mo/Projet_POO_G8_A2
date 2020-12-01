#pragma once

#include "CL_CAD.h"
#include "CL_TBCOMMANDE.h"

namespace NS_Svc {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	ref class CL_svc_gestionCommande
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_TBCOMMANDE^ TBCOMMANDE;
		DataSet^ dataSetCommande;

	public:
		CL_svc_gestionCommande();
		DataSet^ listeCommande(String^);
		int ajouter(String^ Date_emission, String^ Date_payement, String^ Mode_payement, float Remise, int ID_client);
		void modifier(int, String^ Date_emission, String^ Date_payement, String^ Mode_payement, float Remise, int ID_client);
		void supprimer(int);
		//DataSet^ rechercher(String^, String^, String^);
		//DataSet^ selectionner(String^, int);
	};

}