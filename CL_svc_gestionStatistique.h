#pragma once

#include "CL_CAD.h"
#include "CL_STAT.h"


namespace NS_Svc {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	ref class CL_svc_gestionStatistique
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_STAT^ TBSTAT;
		DataSet^ dataSetStat;
	public:
		CL_svc_gestionStatistique();
		DataSet^ reaprovisionnement(String^, int);
	};

}

