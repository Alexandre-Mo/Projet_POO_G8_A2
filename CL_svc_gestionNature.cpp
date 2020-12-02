#include "CL_svc_gestionNature.h"

namespace NS_Svc {

	CL_svc_gestionNature::CL_svc_gestionNature() {

		cad = gcnew NS_Composants::CL_CAD();
		TBNATURE = gcnew NS_Composants::CL_TBNATURE();
		dataSetNature = gcnew DataSet();
	}

	DataSet^ CL_svc_gestionNature::listeCouleur(String^ dataTableName,String^ couleur) {
		TBNATURE->setCouleur(couleur);
		dataSetNature->Clear();
		dataSetNature = cad->getRows(TBNATURE->SELECT(), dataTableName);

		return dataSetNature;
	}
	DataSet^ CL_svc_gestionNature::IDbyNameCouleur(String^ dataTableName,String^ ref) {
		int id_personne;
		TBNATURE->setCouleur(ref);

		dataSetNature->Clear();
		dataSetNature = cad->getRows(TBNATURE->SELECTbyName(), dataTableName);

		return dataSetNature;
	}

	int^ CL_svc_gestionNature::ajouter(String^ ref) {
		int id_personne;
		TBNATURE->setCouleur(ref);

		id_personne = cad->actionRowsID(TBNATURE->INSERT());
		return id_personne;
	}

	void CL_svc_gestionNature::modifier(int id, String^ ref) {
		TBNATURE->setID_couleur(id);
		TBNATURE->setCouleur(ref);

		cad->actionRowsID(TBNATURE->UPDATE());
	}

	void CL_svc_gestionNature::supprimer(int id) {
		TBNATURE->setID_couleur(id);
		cad->actionRowsID(TBNATURE->DELETE());
	}


}