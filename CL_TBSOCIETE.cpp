#include "CL_TBSOCIETE.h"


namespace NS_Composants {

	CL_TBSOCIETE::CL_TBSOCIETE() {
		this->Nom_societe = "Defaut";

	}
	String^ CL_TBSOCIETE::SELECT(void) {
		return "SELECT * FROM dbo.Societe";
	}
	String^ CL_TBSOCIETE::INSERT(void) {
		return "INSERT INTO dbo.Societe" + "(Nom_societe) " + "VALUES('" + getNom_societe() + "'); SELECT @@IDENTITY;";
	}
	String^ CL_TBSOCIETE::UPDATE(void) {
		return "UPDATE dbo.Societe set Nom_societe = ' " + getNom_societe()->ToString() + "'" + ", ID_societe = '" + Convert::ToInt32(getID_societe()) + "'";
	}
	String^ CL_TBSOCIETE::DELETE(void) {
		return "DELETE FROM dbo.Societe WHERE ID_societe =" + Convert::ToInt32(getID_societe());
	}


	// GETTER
	int CL_TBSOCIETE::getID_societe() {
		return this->ID_societe;
	}
	String^ CL_TBSOCIETE::getNom_societe() {
		return this->Nom_societe;
	}

	// SETTER
	void CL_TBSOCIETE::setID_societe(int ID_societe) {
		this->ID_societe = ID_societe;
	}
	void CL_TBSOCIETE::setNom_societe(String^ Nom_societe) {
		this->Nom_societe = Nom_societe;
	}
}
