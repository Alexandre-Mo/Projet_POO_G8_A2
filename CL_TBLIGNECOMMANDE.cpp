#include "CL_TBLIGNECOMMANDE.h"


namespace NS_Composants {

	CL_TBLIGNECOMMANDE::CL_TBLIGNECOMMANDE() {
		this->Prix_unitaire_HT = 0;
		this->Taux_TVA = 0;
		this->Qauntite_Produit = 0;
		this->ID_commande = 0;
		this->ID_article = 0;

	}
	String^ CL_TBLIGNECOMMANDE::SELECT(void) {
		return "SELECT Prix_unitaire_HT,Taux_TVA,Quantite_Produit,Reference_article,Couleur FROM (dbo.Ligne_commande INNER JOIN dbo.Article ON dbo.Ligne_commande.ID_article = dbo.Article.ID_article) INNER JOIN dbo.Nature ON dbo.Article.ID_couleur = dbo.Nature.ID_couleur WHERE ID_commande = '" + getID_commande() + "'";
	}
	String^ CL_TBLIGNECOMMANDE::INSERT(void) {
		return "INSERT INTO dbo.Ligne_commande" + "(Prix_unitaire_HT, Taux_TVA, ID_article, ID_commande, Qauntite_Produit) " + "VALUES('" + getPrix_unitaire_HT() + "', '" + getTaux_TVA() + "', '" + Convert::ToInt32(getID_article()) + "', '" + Convert::ToInt32(getID_commande()) + "', '" + getQuantite_Produit() + "', '" + getTaux_TVA() + "'); SELECT @@IDENTITY;";
	}
	String^ CL_TBLIGNECOMMANDE::UPDATE(void) {
		return "UPDATE dbo.Ligne_commande set Qauntite_Produit = ' " + Convert::ToInt32(getQuantite_Produit()) + "'" + ", ID_commande = '" + "'" + Convert::ToInt32(getID_commande()) + "'" + ", ID_article = '" + "'" + Convert::ToInt32(getID_article()) + "'" + ", Prix_unitaire_HT = '" + getPrix_unitaire_HT() + "'" + ", Taux_TVA = '" + getTaux_TVA() + "'";
	}
	String^ CL_TBLIGNECOMMANDE::DELETE(void) {
		return "DELETE FROM dbo.Ligne_commande WHERE ID_Ligne =" + Convert::ToInt32(getID_Ligne());
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
	void CL_TBLIGNECOMMANDE::setID_Ligne(int ID_article) {
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

}
