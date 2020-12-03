#pragma once

#include "CL_CAD.h"
#include "CL_TBDATE.h"

namespace NS_Svc {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	ref class CL_svc_gestion_date
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_TBDATE^ TBDATE;
		DataSet^ dataSetDate;

	public:
		CL_svc_gestion_date();
		DataSet^ listeDatePaiement(String^, int);
		int^ ajouter(int, String^);
		void modifier(int, int, String^);
		void supprimer(int);
	};

}