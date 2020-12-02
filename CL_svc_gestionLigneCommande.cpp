#include "CL_svc_gestionLigneCommande.h"

namespace NS_Svc {

	CL_svc_gestionLigneCommande::CL_svc_gestionLigneCommande() {

		cad = gcnew NS_Composants::CL_CAD();
		TBLIGNECOMMANDE = gcnew NS_Composants::CL_TBLIGNECOMMANDE();
		dataSetLigneCommande = gcnew DataSet();
	}

	DataSet^ CL_svc_gestionLigneCommande::listeLigneCommande(String^ dataTableName, int ID) {
		dataSetLigneCommande->Clear();
		TBLIGNECOMMANDE->setID_commande(ID);
		dataSetLigneCommande = cad->getRows(TBLIGNECOMMANDE->SELECT(), dataTableName);

		return dataSetLigneCommande;
	}


	int^ CL_svc_gestionLigneCommande::ajouter(float Taux_TVA, int Quantite_Produit,int ID_commande, int ID_article) {
		int id_adresse;
		TBLIGNECOMMANDE->setTaux_TVA(Taux_TVA);
		TBLIGNECOMMANDE->setQuantite_Produit(Quantite_Produit);
		TBLIGNECOMMANDE->setID_commande(ID_commande);
		TBLIGNECOMMANDE->setID_article(ID_article);

		id_adresse = cad->actionRowsID(TBLIGNECOMMANDE->INSERT());
		return id_adresse;
	}

	void CL_svc_gestionLigneCommande::modifier(int id, float Taux_TVA, int Quantite_Produit, int ID_commande, int ID_article) {
		TBLIGNECOMMANDE->setTaux_TVA(Taux_TVA);
		TBLIGNECOMMANDE->setQuantite_Produit(Quantite_Produit);
		TBLIGNECOMMANDE->setID_commande(ID_commande);
		TBLIGNECOMMANDE->setID_article(ID_article);
		TBLIGNECOMMANDE->setID_Ligne(id);
		cad->actionRowsID(TBLIGNECOMMANDE->UPDATE());
	}

	void CL_svc_gestionLigneCommande::supprimer(int id) {
		TBLIGNECOMMANDE->setID_commande(id);
		cad->actionRowsID(TBLIGNECOMMANDE->DELETE());
	}



}