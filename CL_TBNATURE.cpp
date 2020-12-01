#include "CL_TBNATURE.h"


namespace NS_Composants {

	CL_TBNATURE::CL_TBNATURE() {
		this->Couleur = "Defaut";

	}
	String^ CL_TBNATURE::SELECT(void) {
		return "SELECT * FROM dbo.Nature";
	}
	String^ CL_TBNATURE::INSERT(void) {
		return "INSERT INTO dbo.Nature" + "(Couleur) " + "VALUES('" + getCouleur() + "'); SELECT @@IDENTITY;";
	}
	String^ CL_TBNATURE::UPDATE(void) {
		return "UPDATE dbo.Nature set Couleur = ' " + getCouleur()->ToString() + "'" + ", ID_couleur = '" + Convert::ToInt32(getID_couleur()) + "'";
	}
	String^ CL_TBNATURE::DELETE(void) {
		return "DELETE FROM dbo.Nature WHERE ID_couleur =" + Convert::ToInt32(getID_couleur());
	}


	// GETTER
	int CL_TBNATURE::getID_couleur() {
		return this->ID_couleur;
	}
	String^ CL_TBNATURE::getCouleur() {
		return this->Couleur;
	}

	// SETTER
	void CL_TBNATURE::setID_couleur(int ID_couleur) {
		this->ID_couleur = ID_couleur;
	}
	void CL_TBNATURE::setCouleur(String^ Couleur) {
		this->Couleur = Couleur;
	}
}
