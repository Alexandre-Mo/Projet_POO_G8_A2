#include "CL_svc_gestionClient.h"

namespace NS_Svc {

	CL_svc_gestionClient::CL_svc_gestionClient() {

		cad = gcnew NS_Composants::CL_CAD();
		TBCLIENT = gcnew NS_Composants::CL_TBCLIENT();
		dataSetClient = gcnew DataSet();
	}

	DataSet^ CL_svc_gestionClient::listeClient(String^ dataTableName) {
		dataSetClient->Clear();
		dataSetClient = cad->getRows(TBCLIENT->SELECT(), dataTableName);

		return dataSetClient;
	}

	int^ CL_svc_gestionClient::ajouter(String^ nom, String^ prenom, String^ DDN, String^ D1A, String^ email) {
		int id_personne;
		TBCLIENT->setNom_client(nom);
		TBCLIENT->setPrenom_client(prenom);
		TBCLIENT->setDDN_client(DDN);
		TBCLIENT->setD1A_client(D1A);
		TBCLIENT->setEmail(email);

		id_personne = cad->actionRowsID(TBCLIENT->INSERT());
		return id_personne;
	}

	void CL_svc_gestionClient::modifier(int^ id, String^ nom, String^ prenom, String^ DDN, String^ D1A, String^ email) {
		TBCLIENT->setNom_client(nom);
		TBCLIENT->setPrenom_client(prenom);
		TBCLIENT->setID_client(id);
		TBCLIENT->setDDN_client(DDN);
		TBCLIENT->setD1A_client(D1A);
		TBCLIENT->setEmail(email);
		cad->actionRowsID(TBCLIENT->UPDATE());
	}

	void CL_svc_gestionClient::supprimer(int^ id) {
		TBCLIENT->setID_client(id);
		cad->actionRowsID(TBCLIENT->DELETE());
	}

}