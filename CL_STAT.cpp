#include "CL_STAT.h"


namespace NS_Composants {

	CL_STAT::CL_STAT() {

	}
	/*String^ CL_TBLIGNECOMMANDE::SELECT(void) {
		return "SELECT Taux_TVA,Quantite_Produit,Reference_article,Couleur,dbo.Article.Prix_unitaire_HT,ID_Ligne,dbo.Article.ID_article FROM (dbo.Ligne_commande INNER JOIN dbo.Article ON dbo.Ligne_commande.ID_article = dbo.Article.ID_article) INNER JOIN dbo.Nature ON dbo.Article.ID_couleur = dbo.Nature.ID_couleur WHERE ID_commande = '" + getID_commande() + "'";
	}
	String^ CL_TBLIGNECOMMANDE::INSERT(void) {
		return "INSERT INTO dbo.Ligne_commande" + "(Taux_TVA, ID_article, ID_commande, Quantite_Produit) " + "VALUES('" + getTaux_TVA().ToString()->Replace(",", ".") + "', '" + Convert::ToInt32(getID_article()) + "', '" + Convert::ToInt32(getID_commande()) + "', '" + getQuantite_Produit() + "'); SELECT @@IDENTITY;";
	}
	String^ CL_TBLIGNECOMMANDE::UPDATE(void) {
		return "UPDATE dbo.Ligne_commande set Quantite_Produit = '" + Convert::ToInt32(getQuantite_Produit()) + "'" + ", ID_commande = '" + Convert::ToInt32(getID_commande()) + "'" + ", ID_article = '" + Convert::ToInt32(getID_article()) + "'" + ", Taux_TVA = '" + getTaux_TVA().ToString()->Replace(",", ".") + "' WHERE ID_Ligne= " + Convert::ToInt32(getID_Ligne());
	}
	String^ CL_TBLIGNECOMMANDE::DELETE(void) {
		return "DELETE FROM dbo.Ligne_commande WHERE ID_commande =" + Convert::ToInt32(getID_commande());
	}


	// GETTER
	int CL_TBLIGNECOMMANDE::getID_Ligne() {
		return this->ID_Ligne;
	}
	int CL_TBLIGNECOMMANDE::getQuantite_Produit() {
		return this->Qauntite_Produit;
	}
	int CL_TBLIGNECOMMANDE::getID_commande() {
		return this->ID_commande;
	}
	int CL_TBLIGNECOMMANDE::getID_article() {
		return this->ID_article;
	}
	float CL_TBLIGNECOMMANDE::getPrix_unitaire_HT() {
		return this->Prix_unitaire_HT;
	}
	float CL_TBLIGNECOMMANDE::getTaux_TVA() {

		return this->Taux_TVA;
	}

	// SETTER
	void CL_TBLIGNECOMMANDE::setID_Ligne(int ID_Ligne) {
		this->ID_Ligne = ID_Ligne;
	}
	void CL_TBLIGNECOMMANDE::setID_article(int ID_article) {
		this->ID_article = ID_article;
	}
	void CL_TBLIGNECOMMANDE::setID_commande(int ID_commande) {
		this->ID_commande = ID_commande;
	}
	void CL_TBLIGNECOMMANDE::setQuantite_Produit(int Qauntite_Produit) {
		this->Qauntite_Produit = Qauntite_Produit;
	}
	void CL_TBLIGNECOMMANDE::setPrix_unitaire_HT(float Prix_unitaire_HT) {
		this->Prix_unitaire_HT = Prix_unitaire_HT;
	}
	void CL_TBLIGNECOMMANDE::setTaux_TVA(float Taux_TVA) {
		this->Taux_TVA = Taux_TVA;
	}
	*/
}
