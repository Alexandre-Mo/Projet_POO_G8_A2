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

	int CL_svc_gestionStock::ajouter(int quantite, String^ ref,int ID_couleur) {
		int id_article;
		TBARTICLE->setquantite_stock(quantite);
		TBARTICLE->setReference_article_information(ref);
		TBARTICLE->setID_couleur(ID_couleur);
		id_article = cad->actionRowsID(TBARTICLE->INSERT());
		return id_article;
	}

	void CL_svc_gestionStock::modifier(int quantite, int id, String^ ref,int ID_couleur) {
		TBARTICLE->setquantite_stock(quantite);
		TBARTICLE->setID_article(id);
		TBARTICLE->setReference_article_information(ref);
		TBARTICLE->setID_couleur(ID_couleur);
		cad->actionRowsID(TBARTICLE->UPDATE());
	}

	void CL_svc_gestionStock::supprimer(int id) {
		TBARTICLE->setID_article(id);
		cad->actionRowsID(TBARTICLE->DELETE());
	}

	DataSet^ CL_svc_gestionStock::selectionner(String^ dataTableName, String^ ref_article, String^ couleur) {
		TBARTICLE->setReference_article_information(ref_article);
		TBARTICLE->setCouleur(couleur);
		dataSetArticle = cad->getRows(TBARTICLE->SELECTbyNameAndColor(), dataTableName);
		return dataSetArticle;
	}

}