#include "CL_Test.h"
//MyForm.h//
NS_Svc::CL_svc_gestionPersonnel^ Personnel_test = gcnew NS_Svc::CL_svc_gestionPersonnel();

Personnel_test->ajouter("Test", "Personnel", "11/11/1111", "1");
if (Personnel_test == "INSERT INTO dbo.Personnel (Date_embauche, Nom_personnel, Prenom_personnel, ID_personnel_SH) VALUES('11-11-1111', 'Test', 'Personnel', '1'); SELECT @@IDENTITY; "){
Personnel_test->supprimer(Convert::ToInt32("1"));
	bool supernikel == true;
}
else() {
	bool supernikel == false
}
cout << supernikel << endl;


//end//
namespace NS_Svc {

	CL_Test::CL_Test() {
		cad = gcnew NS_Composants::CL_CAD();
		TBPERSONNEL = gcnew NS_Composants::CL_TBPERSONNEL();
		dataSetPersonnel = gcnew DataSet();
	}

	DataSet^ CL_Test::listePersonnel(String^ dataTableName) {
		dataSetPersonnel->Clear();
		dataSetPersonnel = cad->getRows(TBPERSONNEL->SELECT(), dataTableName);

		return dataSetPersonnel;
	}

	/*int^ CL_svc_gestionPersonnel::ajouter(String^ nom, String^ prenom, String^ DE, int IDSup) {
		int id_personne;
		TBPERSONNEL->setNom_personnel(nom);
		TBPERSONNEL->setPrenom_personnel(prenom);
		TBPERSONNEL->setDE_personnel(DE);
		TBPERSONNEL->setIDSup_personnel(IDSup);

		id_personne = cad->actionRowsID(TBPERSONNEL->INSERT());
		return id_personne;
	}*/
	//(txtBx_Nom_personnel_information, txtBx_Prenom_personnel_information, txtBx_DE_personnel, txtBx_ID_SH//
	////Personnel_test->ajouter(txtBx_Nom_personnel_information->Text, txtBx_Prenom_personnel_information->Text, txtBx_DE_personnel->Text, Convert::ToInt32(txtBx_ID_SH->Text));
	//Personnel_test->ajouter("Test","Personnel","11/11/1111","1");
	////Personnel_test->ajouter(txtBx_Nom_personnel_information->Text, txtBx_Prenom_personnel_information->Text, txtBx_DE_personnel->Text, Convert::ToInt32(txtBx_ID_SH->Text));
	/*String^ CL_TBPERSONNEL::INSERT(void) {
		return "INSERT INTO dbo.Personnel" + "(Date_embauche,Nom_personnel, Prenom_personnel,ID_personnel_SH) " + "VALUES('" + getDE_personnel() + "', '" + getNom_personnel() + "', '" + getPrenom_personnel() + "','" + getIDSup_personnel() + "'); SELECT @@IDENTITY;";
	}*/
}