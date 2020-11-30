#include "CL_TBCLIENT.h"

namespace NS_Composants {

	CL_TBCLIENT::CL_TBCLIENT() {
		this->D1A_client = "";
		this->DDN_client = "00-00-0000";
		this->email = "Defaut";
		this->nom_client = "Defaut";
		this->prenom_client = "Defaut";
	}
	String^ CL_TBCLIENT::SELECT(void) {
		return "SELECT * FROM dbo.Client";
	}
	String^ CL_TBCLIENT::INSERT(void) {
		return "INSERT INTO dbo.Client " + "(DDN_client,Email_client,Nom_client, Prenom_client) " + "VALUES('" + getDDN_client() + "', '" + getEmail() + "', '" + getNom_client() + "', '" + getPrenom_client() + "'); SELECT @@IDENTITY;";
	}
	String^ CL_TBCLIENT::UPDATE(void) {
		return "UPDATE dbo.Client set Nom_client = ' " + getNom_client()->ToString() + "'" + ", Prenom_client = '" + getPrenom_client()->ToString() + "'" + ", Email_client='" + getEmail()->ToString() + "'" + ", DDN_client = '" + getDDN_client()->ToString() + "'" + ", D1A_client = '" + getD1A_client()->ToString() + "' WHERE ID_client = '" + Convert::ToInt32(getID_client()) + "'";
	}
	String^ CL_TBCLIENT::DELETE(void) {
		return "DELETE FROM dbo.Client WHERE ID_client =" + Convert::ToInt32(getID_client());
	}


	// GETTER
	int^ CL_TBCLIENT::getID_client() {
		return this->ID_client;
	}
	String^ CL_TBCLIENT::getD1A_client() {
		return this->D1A_client;
	}
	String^ CL_TBCLIENT::getDDN_client() {
		return this->DDN_client;
	}
	String^ CL_TBCLIENT::getEmail() {
		return this->email;
	}
	String^ CL_TBCLIENT::getNom_client() {
		return this->nom_client;
	}
	String^ CL_TBCLIENT::getPrenom_client() {
		return this->prenom_client;
	}

	// SETTER
	void CL_TBCLIENT::setID_client(int ID_client) {
		this->ID_client= ID_client;
	}
	void CL_TBCLIENT::setD1A_client(String^ D1A_client) {
		this->D1A_client= D1A_client;
	}
	void CL_TBCLIENT::setDDN_client(String^ DDN_client) {
		this->DDN_client= DDN_client;
	}
	void CL_TBCLIENT::setEmail(String^ email) {
		this->email= email;
	}
	void CL_TBCLIENT::setNom_client(String^ nom_client) {
		this->nom_client= nom_client;
	}
	void CL_TBCLIENT::setPrenom_client(String^ prenom_client) {
		this->prenom_client= prenom_client;
	}
}
