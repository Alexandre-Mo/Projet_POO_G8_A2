#pragma once

#include "CL_CAD.h"
#include "CL_TBCLIENT.h"

namespace NS_Svc {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	ref class CL_svc_gestionClient
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_TBCLIENT^ TBCLIENT;
		DataSet^ dataSetClient;

	public:
		CL_svc_gestionClient();
		DataSet^ listeClient(String^);
		int^ ajouter(String^, String^, String^, String^, String^);
		void modifier(int, String^, String^, String^ , String^ , String^);
		void supprimer(int);
		DataSet^ rechercher(String^, String^, String^);
		DataSet^ selectionner(String^, int);
		DataSet^ searchD1A(String^ dataTableName, int ID_client);
		DataSet^ updateD1A(String^ dataTableName, int ID_client, String^ D1A);
	};

}