#include "CL_TBPERSONNEL.h"

namespace NS_Composants {

	CL_TBPERSONNEL::CL_TBPERSONNEL() {
		this->DE_personnel = "";
		this->Nom_personnel = "Defaut";
		this->Prenom_personnel = "Defaut";

	}
	String^ CL_TBPERSONNEL::SELECT(void) {
		return "SELECT * FROM dbo.Personnel";
	}
	String^ CL_TBPERSONNEL::INSERT(void) {
		return "INSERT INTO dbo.Personnel" + "(Date_embauche,Nom_personnel, Prenom_personnel,ID_personnel_SH) " + "VALUES('" + getDE_personnel() + "', '" + getNom_personnel() + "', '" + getPrenom_personnel() + "','"+ getIDSup_personnel() +"'); SELECT @@IDENTITY;";
	}
	String^ CL_TBPERSONNEL::UPDATE(void) {
		return "UPDATE dbo.Personnel set Nom_Personnel = '" + getNom_personnel()->ToString() + "'" + ", Prenom_personnel = '" + getPrenom_personnel()->ToString() + "'" + ", Date_embauche = '" + getDE_personnel()->ToString() + "'" + ", ID_personnel_SH = '" + Convert::ToInt32(getIDSup_personnel()) + "' WHERE ID_personnel = '" + Convert::ToInt32(getID_personnel()) + "'";
	}
	String^ CL_TBPERSONNEL::DELETE(void) {
		return "DELETE FROM dbo.Personnel WHERE ID_Personnel =" + Convert::ToInt32(getID_personnel());
	}

	String^ CL_TBPERSONNEL::SELECTbyName(void) {
		return "SELECT ID_personnel,date_embauche FROM dbo.Personnel WHERE Nom_personnel = '" + getNom_personnel() + "' AND Prenom_personnel = '" + getPrenom_personnel() + "'";
	}

	String^ CL_TBPERSONNEL::SELECTbyID(void) {
		return "SELECT * FROM dbo.Personnel WHERE ID_personnel = " + Convert::ToInt32(getID_personnel());
	}

	// GETTER
	int CL_TBPERSONNEL::getID_personnel() {
		return this->ID_personnel;
	}
	String^ CL_TBPERSONNEL::getDE_personnel() {
		return this->DE_personnel;
	}
	String^ CL_TBPERSONNEL::getNom_personnel() {
		return this->Nom_personnel;
	}
	String^ CL_TBPERSONNEL::getPrenom_personnel() {
		return this->Prenom_personnel;
	}

	// SETTER
	void CL_TBPERSONNEL::setID_personnel(int ID_personnel) {
		this->ID_personnel = ID_personnel;
	}
	void CL_TBPERSONNEL::setIDSup_personnel(int IDSup_personnel) {
		this->IDSup_personnel = IDSup_personnel;
	}
	void CL_TBPERSONNEL::setDE_personnel(String^ DE_personnel) {
		this->DE_personnel = DE_personnel;
	}
	void CL_TBPERSONNEL::setNom_personnel(String^ nom_personnel) {
		this->Nom_personnel = nom_personnel;
	}
	void CL_TBPERSONNEL::setPrenom_personnel(String^ prenom_personnel) {
		this->Prenom_personnel = prenom_personnel;
	}
}
