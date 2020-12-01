#pragma once
#include "CL_CAD.h"
#include "CL_TBNATURE.h"

namespace NS_Svc {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	ref class CL_svc_gestionNature
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_TBNATURE^ TBNATURE;
		DataSet^ dataSetNature;

	public:
		CL_svc_gestionNature();
		DataSet^ listeCouleur(String^,String^);
		int^ ajouter(String^);
		void modifier(int, String^);
		void supprimer(int);
		DataSet^ IDbyNameCouleur(String^,String^);

	};

}
