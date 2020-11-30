#include "CL_svc_gestionPersonnel.h"

namespace NS_Svc {

	CL_svc_gestionPersonnel::CL_svc_gestionPersonnel() {

		cad = gcnew NS_Composants::CL_CAD();
		TBPERSONNEL = gcnew NS_Composants::CL_TBPERSONNEL();
		dataSetPersonnel = gcnew DataSet();
	}

	DataSet^ CL_svc_gestionPersonnel::listePersonnel(String^ dataTableName) {
		dataSetPersonnel->Clear();
		dataSetPersonnel = cad->getRows(TBPERSONNEL->SELECT(), dataTableName);

		return dataSetPersonnel;
	}

	int^ CL_svc_gestionPersonnel::ajouter(String^ nom, String^ prenom, String^ DE, int^ IDSup, String^ email) {
		int id_personne;
		TBPERSONNEL->setNom_personnel(nom);
		TBPERSONNEL->setPrenom_personnel(prenom);
		TBPERSONNEL->setDE_personnel(DE);
		TBPERSONNEL->setIDSup_personnel(IDSup);
		TBPERSONNEL->setEmail(email);

		id_personne = cad->actionRowsID(TBPERSONNEL->INSERT());
		return id_personne;
	}

	void CL_svc_gestionPersonnel::modifier(int^ id, String^ nom, String^ prenom, String^ DE, int^ IDSup, String^ email) {
		TBPERSONNEL->setID_personnel(id);
		TBPERSONNEL->setNom_personnel(nom);
		TBPERSONNEL->setPrenom_personnel(prenom);
		TBPERSONNEL->setDE_personnel(DE);
		TBPERSONNEL->setIDSup_personnel(IDSup);
		TBPERSONNEL->setEmail(email);
		cad->actionRowsID(TBPERSONNEL->UPDATE());
	}

	void CL_svc_gestionPersonnel::supprimer(int^ id) {
		TBPERSONNEL->setID_personnel(id);
		cad->actionRowsID(TBPERSONNEL->DELETE());
	}

}