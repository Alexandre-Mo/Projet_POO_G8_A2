#include "CL_svc_gestionStatistique.h"

namespace NS_Svc {
	CL_svc_gestionStatistique::CL_svc_gestionStatistique() {
		cad = gcnew NS_Composants::CL_CAD();
		TBSTAT = gcnew NS_Composants::CL_STAT();
		dataSetStat = gcnew DataSet();
	}

	DataSet^ CL_svc_gestionStatistique::reaprovisionnement(String^ dataTableName,int seuil) {
		TBSTAT->setSeuil_reaprovisionnement(seuil);
		dataSetStat->Clear();
		dataSetStat = cad->getRows(TBSTAT->SELECTseuilReaprovisionnement(), dataTableName);

		return dataSetStat;
		}

	DataSet^ CL_svc_gestionStatistique::ArticlePlusVendus(String^ dataTableName) {
		dataSetStat->Clear();
		dataSetStat = cad->getRows(TBSTAT->SELECTArticlePlusVendus(), dataTableName);

		return dataSetStat;
	}

	DataSet^ CL_svc_gestionStatistique::ArticleMoinsVendus(String^ dataTableName) {
		dataSetStat->Clear();
		dataSetStat = cad->getRows(TBSTAT->SELECTArticleMoinsVendus(), dataTableName);

		return dataSetStat;
	}

	DataSet^ CL_svc_gestionStatistique::ChiffreAffaireMois(String^ dataTableName,int mois) {
		TBSTAT->setmois(mois);
		dataSetStat->Clear();
		dataSetStat = cad->getRows(TBSTAT->SELECTChiffreAffaireMois(), dataTableName);

		return dataSetStat;
	}

	DataSet^ CL_svc_gestionStatistique::ValeurAchatStock(String^ dataTableName) {
		dataSetStat->Clear();
		dataSetStat = cad->getRows(TBSTAT->SELECTValeurAchatStock(), dataTableName);
		return dataSetStat;
	}

	DataSet^ CL_svc_gestionStatistique::ValeurCommercialeStock(String^ dataTableName, int marge) {
		dataSetStat->Clear();
		dataSetStat = cad->getRows(TBSTAT->SELECTValeurCommercialeStock(marge),dataTableName);

		return dataSetStat;
	}

	DataSet^ CL_svc_gestionStatistique::CalculPanierMoyen(String^ dataTableName) {
		dataSetStat->Clear();
		dataSetStat = cad->getRows(TBSTAT->SELECTCalculPanierMoyen(), dataTableName);

		return dataSetStat;
	}
	
	DataSet^ CL_svc_gestionStatistique::Simulation(String^ dataTableName, float marge, float remise, float demarque, float TVA) {
		TBSTAT->setmarge(marge);
		TBSTAT->setremise(remise);
		TBSTAT->setdemarque(demarque);
		TBSTAT->setTVA(TVA);
		dataSetStat->Clear();
		dataSetStat = cad->getRows(TBSTAT->SELECTSimulation(), dataTableName);

		return dataSetStat;
	
	}


}