#include "CL_STAT.h"


namespace NS_Composants {

	CL_STAT::CL_STAT() {

	}
	
	String^ CL_STAT::SELECTseuilReaprovisionnement(void) {
		return "SELECT * FROM dbo.Article WHERE Quantite_stock < " + getSeuil_reaprovisionnement();
	}

	String^ CL_STAT::SELECTArticlePlusVendus(void) {
		return "SELECT TOP 10 SUM(Quantite_produit) AS Quantite_produit,Reference_article,Couleur FROM((dbo.Ligne_commande INNER JOIN dbo.Article ON dbo.Ligne_commande.ID_article = dbo.Article.ID_article)INNER JOIN dbo.Nature ON dbo.Article.ID_couleur = dbo.Nature.ID_couleur) GROUP BY dbo.Article.Reference_article, Couleur ORDER BY Quantite_produit DESC";
	}
	String^ CL_STAT::SELECTArticleMoinsVendus(void) {
		return "SELECT TOP 10 SUM(Quantite_produit) AS Quantite_produit,Reference_article,Couleur FROM((dbo.Ligne_commande INNER JOIN dbo.Article ON dbo.Ligne_commande.ID_article = dbo.Article.ID_article)INNER JOIN dbo.Nature ON dbo.Article.ID_couleur = dbo.Nature.ID_couleur) GROUP BY dbo.Article.Reference_article, Couleur ORDER BY Quantite_produit ASC";
	}
	String^ CL_STAT::SELECTChiffreAffaireMois(void) {
		return "SELECT SUM(Quantite_Produit*Prix_unitaire_HT)FROM(SELECT Quantite_Produit, ID_article FROM dbo.Ligne_commande INNER JOIN dbo.Commande ON dbo.Ligne_commande.ID_commande = dbo.Commande.ID_commande WHERE MONTH(Date_emission) = "+ Convert::ToInt32(getmois()) +")AS TEST1 INNER JOIN dbo.Article ON TEST1.ID_article = dbo.Article.ID_article";
	}

	String^ CL_STAT::SELECTValeurAchatStock(void) {
		return "SELECT SUM(Quantite_stock*Prix_unitaire_HT) AS Valeur_Achat FROM dbo.Article";
	}

	String^ CL_STAT::SELECTValeurCommercialeStock(int marge) {
		if(marge == 1)
		return "SELECT TEST1.Valeur_Achat+TEST1.Valeur_Achat*0.05 FROM (SELECT SUM(Quantite_stock*Prix_unitaire_HT) AS Valeur_Achat FROM dbo.Article) AS TEST1";
		if (marge == 2)
		return "SELECT TEST1.Valeur_Achat+TEST1.Valeur_Achat*0.10 FROM (SELECT SUM(Quantite_stock*Prix_unitaire_HT) AS Valeur_Achat FROM dbo.Article) AS TEST1";
		if (marge == 3)
		return "SELECT TEST1.Valeur_Achat+TEST1.Valeur_Achat*0.15 FROM (SELECT SUM(Quantite_stock*Prix_unitaire_HT) AS Valeur_Achat FROM dbo.Article) AS TEST1";
	}
	String^ CL_STAT::SELECTCalculPanierMoyen() {
		return "SELECT SUM(PRIX)/(SELECT COUNT(*) FROM dbo.Commande) AS  PRIX_TOTAL FROM(SELECT(Quantite_Produit * Prix_unitaire_HT) AS PRIX FROM (SELECT Ligne_commande.ID_article, SUM(Quantite_Produit) AS Quantite_Produit, Prix_unitaire_HT FROM Article INNER JOIN Ligne_commande ON Article.ID_article = Ligne_commande.ID_article GROUP BY Ligne_commande.ID_article, Prix_unitaire_HT) AS TEST) AS TEST2";
	
	}

	String^ CL_STAT::SELECTSimulation() {
		return "SELECT TEST1.Valeur_Achat + (TEST1.Valeur_Achat * "+getmarge().ToString()->Replace(",",".")+") + (TEST1.Valeur_Achat * " + getdemarque().ToString()->Replace(",", ".") + ") + (TEST1.Valeur_Achat * " + getTVA().ToString()->Replace(",", ".") + ") + (TEST1.Valeur_Achat *" + getremise().ToString()->Replace(",", ".") + ")FROM(SELECT SUM(Quantite_stock * Prix_unitaire_HT) AS Valeur_Achat FROM dbo.Article) AS TEST1";
	}

	// GETTER
	int CL_STAT::getSeuil_reaprovisionnement() {
		return this->seuil_reaprovisionnement;
	}
	int CL_STAT::getmois() {
		return this->mois;
	}
	float CL_STAT::getTVA() {
		return this->TVA;
	}
	float CL_STAT::getremise() {
		return this->remise;
	}
	float CL_STAT::getdemarque() {
		return this->demarque;
	}
	float CL_STAT::getmarge() {
		return this->marge;
	}

	// SETTER
	void CL_STAT::setSeuil_reaprovisionnement(int seuil_reaprovisionnement) {
		this->seuil_reaprovisionnement = seuil_reaprovisionnement;
	}
	void CL_STAT::setmois(int mois) {
		this->mois = mois;
	}
	void CL_STAT::setTVA(float TVA) {
		this->TVA = TVA;
	}
	void CL_STAT::setremise(float remise) {
		this->remise = remise;
	}
	void CL_STAT::setdemarque(float demarque) {
		this->demarque = demarque;
	}
	void CL_STAT::setmarge(float marge) {
		this->marge = marge;
	}

}
