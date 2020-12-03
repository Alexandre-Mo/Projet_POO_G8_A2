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

	DataSet^ CL_svc_gestionCommande::CommandebyRef(String^ dataTableName,String^ reference_commande) {
		TBCOMMANDE->setReference_commande(reference_commande);
		dataSetCommande->Clear();
		dataSetCommande = cad->getRows(TBCOMMANDE->SELECTbyRef(), dataTableName);

		return dataSetCommande;
	}

	int CL_svc_gestionCommande::ajouter(String^ Date_emission, String^ Date_payement, String^ Mode_payement, float Remise,int ID_client,String^ reference_commande, int ID_adresse) {
		int id_personne;
		TBCOMMANDE->setDate_emission(Date_emission);
		TBCOMMANDE->setDate_livraison(Date_payement);
		TBCOMMANDE->setMode_payement(Mode_payement);
		TBCOMMANDE->setRemise(Remise);
		TBCOMMANDE->setID_client(ID_client);
		TBCOMMANDE->setReference_commande(reference_commande);
		TBCOMMANDE->setID_adresse(ID_adresse);

		id_personne = cad->actionRowsID(TBCOMMANDE->INSERT());
		return id_personne;
	}

	void CL_svc_gestionCommande::modifier(int id, String^ Date_emission, String^ Date_livraison, String^ Mode_payement, float Remise, int ID_client, String^ reference_commande, int ID_adresse) {
		TBCOMMANDE->setID_commande(id);
		TBCOMMANDE->setDate_emission(Date_emission);
		TBCOMMANDE->setDate_livraison(Date_livraison);
		TBCOMMANDE->setMode_payement(Mode_payement);
		TBCOMMANDE->setRemise(Remise);
		TBCOMMANDE->setID_client(ID_client);
		TBCOMMANDE->setReference_commande(reference_commande);
		TBCOMMANDE->setID_adresse(ID_adresse);
		cad->actionRowsID(TBCOMMANDE->UPDATE());
	}

	void CL_svc_gestionCommande::supprimer(int id) { 
		TBCOMMANDE->setID_commande(id);
		cad->actionRowsID(TBCOMMANDE->DELETE());
	}


	DataSet^ CL_svc_gestionCommande::selectionner(String^ dataTableName, int ID_client) {
		TBCOMMANDE->setID_client(ID_client);
		dataSetCommande = cad->getRows(TBCOMMANDE->SELECTbyIDclient(), dataTableName);
		return dataSetCommande;
	}
	
}