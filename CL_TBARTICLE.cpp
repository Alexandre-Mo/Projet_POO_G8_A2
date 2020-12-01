#include "CL_TBARTICLE.h"


namespace NS_Composants {

	CL_TBARTICLE::CL_TBARTICLE() {
		this->quantite_stock = 0;
		this->Reference_article_information = "Defaut";

	}
	String^ CL_TBARTICLE::SELECT(void) {
		return "SELECT * FROM dbo.Article INNER JOIN dbo.Nature ON dbo.Article.ID_couleur = dbo.Nature.ID_couleur";
	}
	String^ CL_TBARTICLE::INSERT(void) {
		return "INSERT INTO dbo.Article" + "(quantite_stock, Reference_article,ID_couleur) " + "VALUES('" + Convert::ToInt32(getquantite_stock()) + "', '" + getReference_article_information() +"','"+ Convert::ToInt32(getquantite_stock()) + "'); SELECT @@IDENTITY;";
	}
	String^ CL_TBARTICLE::UPDATE(void) {
		return "UPDATE dbo.Article set quantite_stock = ' " + Convert::ToInt32(getquantite_stock()) + "'" + ", Reference_article = '" + getReference_article_information()->ToString() + "'"+", ID_couleur ='"+ Convert::ToInt32(getID_couleur())+"' WHERE ID_article = '"+ Convert::ToInt32(getID_article()) +"'";
	}
	String^ CL_TBARTICLE::DELETE(void) {
		return "DELETE FROM dbo.Article WHERE ID_article =" + Convert::ToInt32(getID_article());
	}

	String^ CL_TBARTICLE::SELECTbyNameAndColor(void) {
		return "SELECT * FROM dbo.Article INNER JOIN dbo.Nature ON dbo.Article.ID_couleur = dbo.Nature.ID_couleur WHERE  Reference_article = '" + getReference_article_information()->ToString()+"' AND Couleur = '"+ getCouleur()->ToString()+"'";
	}


	// GETTER
	int CL_TBARTICLE::getID_article() {
		return this->ID_article;
	}
	int CL_TBARTICLE::getquantite_stock() {
		return this->quantite_stock;
	}
	String^ CL_TBARTICLE::getReference_article_information() {
		return this->Reference_article_information;
	}
	int CL_TBARTICLE::getID_couleur() {
		return this->ID_couleur;
	}
	String^ CL_TBARTICLE::getCouleur() {
		return this->Couleur;
	}

	// SETTER
	void CL_TBARTICLE::setID_article(int ID_article) {
		this->ID_article = ID_article;
	}
	void CL_TBARTICLE::setquantite_stock(int quantite_stock) {
		this->quantite_stock = quantite_stock;
	}
	void CL_TBARTICLE::setReference_article_information(String^ Reference_article_information) {
		this->Reference_article_information = Reference_article_information;
	}
	void CL_TBARTICLE::setCouleur(String^ Couleur) {
		this->Couleur = Couleur;
	}

	void CL_TBARTICLE::setID_couleur(int ID_couleur) {
		this->ID_couleur = ID_couleur;
	}
}
