#pragma once
#include "CL_CAD.h"
#include "CL_TBARTICLE.h"

namespace NS_Svc {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	ref class CL_svc_gestionStock
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_TBARTICLE^ TBARTICLE;
		DataSet^ dataSetArticle;

	public:
		CL_svc_gestionStock();
		DataSet^ listeArticle(String^);
		int ajouter(int, String^,int);
		void modifier(int, int, String^,int);
		void supprimer(int);
		DataSet^ selectionner(String^, String^, String^);
		//DataSet^ rechercher(String^, String^, String^);
		//DataSet^ selectionner(String^, int);

	};

}