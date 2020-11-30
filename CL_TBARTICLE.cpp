#include "CL_TBARTICLE.h"


namespace NS_Composants {

	CL_TBARTICLE::CL_TBARTICLE() {
		this->quantite_stock = 0;
		this->Reference_article = "Defaut";

	}
	String^ CL_TBARTICLE::SELECT(void) {
		return "SELECT * FROM dbo.Article";
	}
	String^ CL_TBARTICLE::INSERT(void) {
		return "INSERT INTO dbo.Article" + "(quantite_stock, Reference_article) " + "VALUES('" + Convert::ToInt32(getquantite_stock()) + "', '" + getReference_article() + "'); SELECT @@IDENTITY;";
	}
	String^ CL_TBARTICLE::UPDATE(void) {
		return "UPDATE dbo.Article set quantite_stock = ' " + Convert::ToInt32(getquantite_stock()) + "'" + ", Reference_article = '" + getReference_article()->ToString() + "'" + ", ID_article = '" + Convert::ToInt32(getID_article()) + "'";
	}
	String^ CL_TBARTICLE::DELETE(void) {
		return "DELETE FROM dbo.Article WHERE ID_article =" + Convert::ToInt32(getID_article());
	}


	// GETTER
	int CL_TBARTICLE::getID_article() {
		return this->ID_article;
	}
	int CL_TBARTICLE::getquantite_stock() {
		return this->quantite_stock;
	}
	String^ CL_TBARTICLE::getReference_article() {
		return this->Reference_article;
	}

	// SETTER
	void CL_TBARTICLE::setID_article(int ID_article) {
		this->ID_article = ID_article;
	}
	void CL_TBARTICLE::setquantite_stock(int quantite_stock) {
		this->quantite_stock = quantite_stock;
	}
	void CL_TBARTICLE::setReference_article(String^ Reference_article) {
		this->Reference_article = Reference_article;
	}
}
