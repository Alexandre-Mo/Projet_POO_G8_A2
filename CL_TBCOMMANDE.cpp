#include "CL_TBCOMMANDE.h"

namespace NS_Composants {

	CL_TBCOMMANDE::CL_TBCOMMANDE() {
		this->Date_emission = "00-00-0000";
		this->Date_payement = "00-00-0000";
		this->Mode_payement = "";
		this->Remise = 0;
		this->ID_Societe = 0;
		this->ID_societe_Produit = 0;
		this->ID_client = 0;

	}
	String^ CL_TBCOMMANDE::SELECT(void) {
		return "SELECT * FROM dbo.Commande";
	}
	String^ CL_TBCOMMANDE::INSERT(void) {
		return "INSERT INTO dbo.Commande " + "(DDate_emission, Date_payement, Mode_payement, Remise, ID_Societe, ID_societe_Produit, ID_client) " + "VALUES('" + getDate_emission() + "', '" + getDate_payement() + "', '" + getMode_payement() + "', '" + getRemise() + "', '" + getID_Societe() + "', '" + getID_societe_Produit() + "', '" + getID_client() + "'); SELECT @@IDENTITY;";
	}
	String^ CL_TBCOMMANDE::UPDATE(void) {
		return "UPDATE dbo.Commande set Date_emission = ' " + getDate_emission()->ToString() + "'" + ", Date_payement = '" + getDate_payement()->ToString() + "'" + ", Mode_payement='" + getMode_payement()->ToString() + "'" + ", Remise = '" + getRemise() + "'" + ", ID_Societe = '" + Convert::ToInt32(getID_client()) + ", ID_societe_Produit = '" + Convert::ToInt32(getID_societe_Produit()) + ", ID_client = '" + Convert::ToInt32(getID_client()) + "' WHERE ID_commande = '" + Convert::ToInt32(getID_commande()) + "'";
	}
	String^ CL_TBCOMMANDE::DELETE(void) {
		return "DELETE FROM dbo.Commande WHERE ID_commande =" + Convert::ToInt32(getID_commande());
	}


	// GETTER
	int CL_TBCOMMANDE::getID_commande() {
		return this->ID_commande;
	}
	String^ CL_TBCOMMANDE::getDate_emission() {
		return this->Date_emission;
	}
	String^ CL_TBCOMMANDE::getDate_payement() {
		return this->Date_payement;
	}
	String^ CL_TBCOMMANDE::getMode_payement() {
		return this->Mode_payement;
	}
	float CL_TBCOMMANDE::getRemise() {
		return this->Remise;
	}
	int CL_TBCOMMANDE::getID_Societe() {
		return this->ID_Societe;
	}
	int CL_TBCOMMANDE::getID_societe_Produit() {
		return this->ID_societe_Produit;
	}
	int CL_TBCOMMANDE::getID_client() {
		return this->ID_client;
	}

	// SETTER
	void CL_TBCOMMANDE::setID_commande(int ID_commande) {
		this->ID_commande = ID_commande;
	}
	void CL_TBCOMMANDE::setDate_emission(String^ Date_emission) {
		this->Date_emission = Date_emission;
	}
	void CL_TBCOMMANDE::setDate_payement(String^ Date_payement) {
		this->Date_payement = Date_payement;
	}
	void CL_TBCOMMANDE::setMode_payement(String^ Mode_payement) {
		this->Mode_payement = Mode_payement;
	}
	void CL_TBCOMMANDE::setRemise(int Remise) {
		this->Remise = Remise;
	}
	void CL_TBCOMMANDE::setID_Societe(int ID_Societe) {
		this->ID_Societe = ID_Societe;
	}
	void CL_TBCOMMANDE::setID_societe_Produit(int ID_societe_Produit) {
		this->ID_societe_Produit = ID_societe_Produit;
	}
	void CL_TBCOMMANDE::setID_client(int ID_client) {
		this->ID_client = ID_client;
	}
}