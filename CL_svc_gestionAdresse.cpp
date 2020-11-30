#include "CL_svc_gestionAdresse.h"

namespace NS_Svc {

	CL_svc_gestionAdresse::CL_svc_gestionAdresse() {

		cad = gcnew NS_Composants::CL_CAD();
		TBADRESSE = gcnew NS_Composants::CL_TBADRESSE();
		dataSetAdresse = gcnew DataSet();
	}

	DataSet^ CL_svc_gestionAdresse::listeAdresse(String^ dataTableName,int Type, int ID) {
		dataSetAdresse->Clear();
		TBADRESSE->setType(Type);
		TBADRESSE->setID_client(ID);
		TBADRESSE->setID_personnel(ID);
		dataSetAdresse = cad->getRows(TBADRESSE->SELECT(), dataTableName);

		return dataSetAdresse;
	}


	int^ CL_svc_gestionAdresse::ajouter(String^ Nom_rue, int Num_rue, int Code_postal, String^ Pays, String^ Ville, int Type, int ID_client, int ID_personnel) {
		int id_adresse;
		TBADRESSE->setNom_rue(Nom_rue);
		TBADRESSE->setNum_rue(Num_rue);
		TBADRESSE->setCode_postal(Code_postal);
		TBADRESSE->setPays(Pays);
		TBADRESSE->setVille(Ville);
		TBADRESSE->setType(Type);
		TBADRESSE->setID_client(ID_client);
		TBADRESSE->setID_personnel(ID_personnel);

		id_adresse = cad->actionRowsID(TBADRESSE->INSERT());
		return id_adresse;
	}

	void CL_svc_gestionAdresse::modifier(int id,String^ Nom_rue, int Num_rue, int Code_postal, String^ Pays, String^ Ville, int Type, int ID_client, int ID_personnel) {
		TBADRESSE->setID_adresse(id);
		TBADRESSE->setNom_rue(Nom_rue);
		TBADRESSE->setNum_rue(Num_rue);
		TBADRESSE->setCode_postal(Code_postal);
		TBADRESSE->setPays(Pays);
		TBADRESSE->setVille(Ville);
		TBADRESSE->setType(Type);
		TBADRESSE->setID_client(ID_client);
		TBADRESSE->setID_personnel(ID_personnel);
		cad->actionRowsID(TBADRESSE->UPDATE());
	}

	void CL_svc_gestionAdresse::supprimer(int id, int Type) {
		TBADRESSE->setID_client(id);
		TBADRESSE->setID_personnel(id);
		TBADRESSE->setType(Type);
		cad->actionRowsID(TBADRESSE->DELETE());
	}

	

}