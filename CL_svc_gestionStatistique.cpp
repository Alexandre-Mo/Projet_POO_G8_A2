#include "CL_svc_gestionStatistique.h"

namespace NS_Svc {
	CL_svc_gestionStatistique::CL_svc_gestionStatistique() {

	}

	DataSet^ CL_svc_gestionStatistique::reaprovisionnement(String^ dataTableName,int seuil) {

		dataSetStat->Clear();
		//dataSetStat = cad->getRows(TBSTAT->SELECTseuilReaprovisionnement(), dataTableName);

		return dataSetStat;
		}

}