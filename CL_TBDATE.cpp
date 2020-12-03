#include "CL_TBDATE.h"


namespace NS_Composants {

	CL_TBDATE::CL_TBDATE() {
		this->Dpaiement = "00-00-0000";
		this->ID_commande = 0;
		this->ID_Date = 0;
	}

	String^ CL_TBDATE::SELECT(void) {
		return "SELECT paiement,ID_Date FROM dbo.Date_paiement  WHERE ID_commande = '" + getID_commande() + "'";
		}
	String^ CL_TBDATE::INSERT(void) {
		return "INSERT INTO dbo.Date_paiement " + "(ID_commande, paiement) " + "VALUES('"  + Convert::ToInt32(getID_commande()) + "', '" + getDpaiement() + "'); SELECT @@IDENTITY;";
		}
	String^ CL_TBDATE::UPDATE(void) {
		return "UPDATE dbo.Date_paiement set paiement = '" + getDpaiement()->ToString() + "'" + ", ID_commande = '" + Convert::ToInt32(getID_commande()) + "' WHERE ID_Date= " + Convert::ToInt32(getID_Date());
		}
	String^ CL_TBDATE::DELETE(void) {
		return "DELETE FROM dbo.Date_paiement WHERE ID_commande =" + Convert::ToInt32(getID_commande());
	}

	// GETTER
	int CL_TBDATE::getID_Date() {
		return this->ID_Date;
	}

	int CL_TBDATE::getID_commande() {
		return this->ID_commande;
	}
	String^ CL_TBDATE::getDpaiement() {
		return this->Dpaiement;
	}


	// SETTER
	void CL_TBDATE::setID_Date(int ID_Date){
		this->ID_Date = ID_Date;
	}
	void CL_TBDATE::setID_commande(int ID_commande) {
		this->ID_commande = ID_commande;
	}
	void CL_TBDATE::setDpaiement (String^ Dpaiement) {
		this->Dpaiement = Dpaiement;
	}



}
