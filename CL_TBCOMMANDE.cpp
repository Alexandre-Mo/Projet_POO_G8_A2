#include "CL_TBCOMMANDE.h"

namespace NS_Composants {

	CL_TBCOMMANDE::CL_TBCOMMANDE() {
		this->Date_emission = "00-00-0000";
		this->Date_livraison = "00-00-0000";
		this->Mode_payement = "";
		this->Remise = 0;
		this->ID_Societe = 0;
		this->ID_societe_Produit = 0;
		this->ID_client = 0;

	}
	String^ CL_TBCOMMANDE::SELECT(void) {
		return "SELECT * FROM dbo.Commande ";
	}
	String^ CL_TBCOMMANDE::SELECTbyIDclient(void) {
		return "SELECT Date_emission,Date_livraison,Mode_payement,Remise,Reference_commande FROM dbo.Commande WHERE ID_client='"+Convert::ToInt32(getID_client())+"'";
	}
	String^ CL_TBCOMMANDE::SELECTbyRef(void) {
		return "SELECT * FROM dbo.Commande WHERE Reference_commande = '"+ getReference_commande() +"'";
	}
	String^ CL_TBCOMMANDE::INSERT(void) {
		return "INSERT INTO dbo.Commande " + "(Date_emission, Date_livraison, Mode_payement, Remise, ID_client,Reference_commande,ID_adresse) " + "VALUES('" + getDate_emission() + "', '" + getDate_livraison() + "', '" + getMode_payement() + "', '" + getRemise() + "', '" + getID_client() + "','"+getReference_commande()+"','"+ Convert::ToInt32(getID_adresse())+"'); SELECT @@IDENTITY;";
	}
	String^ CL_TBCOMMANDE::UPDATE(void) {
		return "UPDATE dbo.Commande set Date_emission = ' " + getDate_emission()->ToString() + "'" + ", Date_livraison = '" + getDate_livraison()->ToString() + "'" + ", Mode_payement='" + getMode_payement()->ToString() + "'" + ", Remise = '" + getRemise() + "', ID_client = '" + Convert::ToInt32(getID_client()) + "', Reference_commande = '"+getReference_commande()+"',ID_adresse = '"+ Convert::ToInt32(getID_adresse())+"' WHERE ID_commande = " + Convert::ToInt32(getID_commande());
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
	String^ CL_TBCOMMANDE::getDate_livraison() {
		return this->Date_livraison;
	}
	String^ CL_TBCOMMANDE::getMode_payement() {
		return this->Mode_payement;
	}
	float CL_TBCOMMANDE::getRemise() {
		return this->Remise;
	}
	int CL_TBCOMMANDE::getID_adresse() {
		return this->ID_adresse;
	}
	String^ CL_TBCOMMANDE::getReference_commande() {
		return this->Reference_commande;
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
	void CL_TBCOMMANDE::setDate_livraison(String^ Date_payement) {
		this->Date_livraison = Date_payement;
	}
	void CL_TBCOMMANDE::setMode_payement(String^ Mode_payement) {
		this->Mode_payement = Mode_payement;
	}
	void CL_TBCOMMANDE::setRemise(float Remise) {
		this->Remise = Remise;
	}
	void CL_TBCOMMANDE::setID_adresse(int ID_adresse) {
		this->ID_adresse = ID_adresse;
	}
	void CL_TBCOMMANDE::setReference_commande(String^ Reference_commande) {
		this->Reference_commande = Reference_commande;
	}
	void CL_TBCOMMANDE::setID_client(int ID_client) {
		this->ID_client = ID_client;
	}
}