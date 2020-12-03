#include "CL_svc_gestion_date.h"

namespace NS_Svc {

	CL_svc_gestion_date::CL_svc_gestion_date() {

		cad = gcnew NS_Composants::CL_CAD();
		TBDATE = gcnew NS_Composants::CL_TBDATE();
		dataSetDate = gcnew DataSet();
	}

	DataSet^ CL_svc_gestion_date::listeDatePaiement(String^ dataTableName, int ID) {
		dataSetDate->Clear();
		TBDATE->setID_commande(ID);
		dataSetDate = cad->getRows(TBDATE->SELECT(), dataTableName);

		return dataSetDate;
	}


	int^ CL_svc_gestion_date::ajouter(int ID_commande, String^ Dpaiement) {
		int id_adresse;
		TBDATE->setID_commande(ID_commande);
		TBDATE->setDpaiement(Dpaiement);

		id_adresse = cad->actionRowsID(TBDATE->INSERT());
		return id_adresse;
	}

	void CL_svc_gestion_date::modifier(int id, int ID_commande, String^ Dpaiement) {

		TBDATE->setDpaiement(Dpaiement);
		TBDATE->setID_commande(ID_commande);
		TBDATE->setID_Date(id);
		cad->actionRowsID(TBDATE->UPDATE());
	}

	void CL_svc_gestion_date::supprimer(int id) {
		TBDATE->setID_commande(id);
		cad->actionRowsID(TBDATE->DELETE());
	}



}