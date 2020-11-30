#pragma once

#include "CL_CAD.h"
#include "CL_TBADRESSE.h"

namespace NS_Svc {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	ref class CL_svc_gestionAdresse
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_TBADRESSE^ TBADRESSE;
		DataSet^ dataSetAdresse;

	public:
		CL_svc_gestionAdresse();
		DataSet^ listeAdresse(String^,int, int);
		int^ ajouter(String^, int, int, String^, String^, int, int, int);
		void modifier(int, String^, int, int, String^, String^, int, int, int);
		void supprimer(int,int);

	};

}