#include "CL_svc_gestionStock.h"

namespace NS_Svc {

	CL_svc_gestionStock::CL_svc_gestionStock() {

		cad = gcnew NS_Composants::CL_CAD();
		TBARTICLE = gcnew NS_Composants::CL_TBARTICLE();
		dataSetArticle = gcnew DataSet();
	}

	DataSet^ CL_svc_gestionStock::listeArticle(String^ dataTableName) {
		dataSetArticle->Clear();
		dataSetArticle = cad->getRows(TBARTICLE->SELECT(), dataTableName);

		return dataSetArticle;
	}

	int^ CL_svc_gestionStock::ajouter(int quantite, String^ ref) {
		int id_article;
		TBARTICLE->setquantite_stock(quantite);
		TBARTICLE->setReference_article_information(ref);

		id_article = cad->actionRowsID(TBARTICLE->INSERT());
		return id_article;
	}

	void CL_svc_gestionStock::modifier(int quantite, int id, String^ ref) {
		TBARTICLE->setquantite_stock(quantite);
		TBARTICLE->setID_article(id);
		TBARTICLE->setReference_article_information(ref);
		cad->actionRowsID(TBARTICLE->UPDATE());
	}

	void CL_svc_gestionStock::supprimer(int id) {
		TBARTICLE->setID_article(id);
		cad->actionRowsID(TBARTICLE->DELETE());
	}

//	DataSet^ CL_svc_gestionStock::rechercher(String^ dataTableName, String^ nom, String^ prenom) {
//		TBARTICLE->setNom_stock(nom);
//		TBARTICLE->setPrenom_stock(prenom);
//		dataSetStock = cad->getRows(TBARTICLE->SELECTbyName(), dataTableName);
//		return dataSetStock;
//	}
//	DataSet^ CL_svc_gestionStock::selectionner(String^ dataTableName, int ID_client) {
//		TBARTICLE->setID_stock(ID_client);
//		dataSetStock = cad->getRows(TBARTICLE->SELECTbyID(), dataTableName);
//		return dataSetStock;
//	}


}