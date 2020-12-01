#include "CL_svc_gestionCommande.h"


namespace NS_Svc {

	CL_svc_gestionCommande::CL_svc_gestionCommande() {

		cad = gcnew NS_Composants::CL_CAD();
		TBCOMMANDE = gcnew NS_Composants::CL_TBCOMMANDE();
		dataSetCommande = gcnew DataSet();
	}

	DataSet^ CL_svc_gestionCommande::listeCommande(String^ dataTableName) {
		dataSetCommande->Clear();
		dataSetCommande = cad->getRows(TBCOMMANDE->SELECT(), dataTableName);

		return dataSetCommande;
	}

	int^ CL_svc_gestionCommande::ajouter(String^ Date_emission, String^ Date_payement, String^ Mode_payement, float Remise, int ID_societe,int ID_client) {
		int id_personne;
		TBCOMMANDE->setDate_emission(Date_emission);
		TBCOMMANDE->setDate_payement(Date_payement);
		TBCOMMANDE->setMode_payement(Mode_payement);
		TBCOMMANDE->setRemise(Remise);
		TBCOMMANDE->setID_Societe(ID_societe);
		TBCOMMANDE->setID_client(ID_client);

		id_personne = cad->actionRowsID(TBCOMMANDE->INSERT());
		return id_personne;
	}

	void CL_svc_gestionCommande::modifier(int id, String^ Date_emission, String^ Date_payement, String^ Mode_payement, float Remise, int ID_societe, int ID_client) {
		TBCOMMANDE->setID_commande(id);
		TBCOMMANDE->setDate_emission(Date_emission);
		TBCOMMANDE->setDate_payement(Date_payement);
		TBCOMMANDE->setMode_payement(Mode_payement);
		TBCOMMANDE->setRemise(Remise);
		TBCOMMANDE->setID_Societe(ID_societe);
		TBCOMMANDE->setID_client(ID_client);
		cad->actionRowsID(TBCOMMANDE->UPDATE());
	}

	void CL_svc_gestionCommande::supprimer(int id) {
		TBCOMMANDE->setID_client(id);
		cad->actionRowsID(TBCOMMANDE->DELETE());
	}

	/*
	DataSet^ CL_svc_gestionCommande::rechercher(String^ dataTableName, String^ nom, String^ prenom) {
		TBCOMMANDE->setNom_client(nom);
		TBCOMMANDE->setPrenom_client(prenom);
		dataSetCommande = cad->getRows(TBCOMMANDE->SELECTbyName(), dataTableName);
		return dataSetCommande;
	}

	DataSet^ CL_svc_gestionCommande::selectionner(String^ dataTableName, int ID_client) {
		TBCOMMANDE->setID_client(ID_client);
		dataSetCommande = cad->getRows(TBCOMMANDE->SELECTbyID(), dataTableName);
		return dataSetCommande;
	}
	*/
}