#pragma once
#include "CL_CAD.h"
#include "CL_TBPERSONNEL.h"
#include "CL_svc_gestionPersonnel.h"

namespace NS_Svc {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	ref class CL_Test
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_TBPERSONNEL^ TBPERSONNEL;
		DataSet^ dataSetPersonnel;
	public:
		CL_Test();
		void testMetod();
		DataSet^ listePersonnel(String^);
	};
}
