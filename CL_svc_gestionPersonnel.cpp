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

	int^ CL_svc_gestionPersonnel::ajouter(String^ nom, String^ prenom, String^ DE, int IDSup) {
		int id_personne;
		TBPERSONNEL->setNom_personnel(nom);
		TBPERSONNEL->setPrenom_personnel(prenom);
		TBPERSONNEL->setDE_personnel(DE);
		TBPERSONNEL->setIDSup_personnel(IDSup);

		id_personne = cad->actionRowsID(TBPERSONNEL->INSERT());
		return id_personne;
	}

	void CL_svc_gestionPersonnel::modifier(int id, String^ nom, String^ prenom, String^ DE, int IDSup) {
		TBPERSONNEL->setID_personnel(id);
		TBPERSONNEL->setNom_personnel(nom);
		TBPERSONNEL->setPrenom_personnel(prenom);
		TBPERSONNEL->setDE_personnel(DE);
		TBPERSONNEL->setIDSup_personnel(IDSup);
		cad->actionRowsID(TBPERSONNEL->UPDATE());
	}

	void CL_svc_gestionPersonnel::supprimer(int id) {
		TBPERSONNEL->setID_personnel(id);
		cad->actionRowsID(TBPERSONNEL->DELETE());
	}

	DataSet^ CL_svc_gestionPersonnel::rechercher(String^ dataTableName, String^ nom, String^ prenom) {
		TBPERSONNEL->setNom_personnel(nom);
		TBPERSONNEL->setPrenom_personnel(prenom);
		dataSetPersonnel = cad->getRows(TBPERSONNEL->SELECTbyName(), dataTableName);
		return dataSetPersonnel;
	}

	DataSet^ CL_svc_gestionPersonnel::selectionner(String^ dataTableName, int ID_client) {
		TBPERSONNEL->setID_personnel(ID_client);
		dataSetPersonnel = cad->getRows(TBPERSONNEL->SELECTbyID(), dataTableName);
		return dataSetPersonnel;
	}
	

}