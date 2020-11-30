#pragma once
#include "CL_CAD.h"
#include "CL_TBPERSONNEL.h"

namespace NS_Svc {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	ref class CL_svc_gestionPersonnel
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_TBPERSONNEL^ TBPERSONNEL;
		DataSet^ dataSetPersonnel;

	public:
		CL_svc_gestionPersonnel();
		DataSet^ listePersonnel(String^);
		int^ ajouter(String^, String^, String^, int^, String^);
		void modifier(int^, String^, String^, String^, int^, String^);
		void supprimer(int^);
	};

}
