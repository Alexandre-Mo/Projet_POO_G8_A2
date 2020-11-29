#include "CL_TBADRESSE.h"

namespace NS_Composants {

	CL_TBADRESSE::CL_TBADRESSE() {

		this->Nom_rue = "";
		this->Num_rue = 0;
		this->Code_postal = 00000;
		this->Pays = "";
		this->Ville = "";
		this->Type = 0;
		this->ID_client = 0;
		this->ID_personnel = 0;
	}
	String^ CL_TBADRESSE::SELECT(int T,int ID) {
		if (T == 1) {
			return "SELECT * FROM dbo.Adresse WHERE Type ='1' AND ID_client = '" + ID + "'";
		}
		if (T == 2) {
			setID_client(ID);
			return "SELECT * FROM dbo.Adresse WHERE Type ='2' AND ID_client = '" + ID + "'";
		}
		if (T == 3) {
			setID_client(ID);
			return "SELECT Nom_rue,Num_rue,Code_postal,Pays,Ville FROM dbo.Adresse WHERE Type ='3' AND ID_client = '" + ID + "'";
		}
		
	}
	String^ CL_TBADRESSE::INSERT(void) {
		
	
		return "INSERT INTO dbo.Adresse " + "(Nom_rue,Num_rue,Code_postal,Pays,Ville,Type,ID_client) " + "VALUES('" + getNom_rue() + "', '" + getNum_rue() + "', '" + getCode_postal() + "', '" + getPays() + "', '" + getVille() + "', '" + getType() + "', '" + getID_client() + "'); SELECT @@IDENTITY;";
		
	}
	String^ CL_TBADRESSE::UPDATE(void) {
		return "UPDATE dbo.Adresse set Nom_rue = ' " + getNom_rue()->ToString() + "'" + ", Num_rue = '" + getNum_rue()->ToString() + "'" + ", Code_postal='" + getCode_postal()->ToString() + "'" + ", Pays = '" + getPays()->ToString() + "'" + ", Ville = '" + getVille()->ToString() + "'" + ", Type = '" + getType()->ToString() + "'" + ", ID_client = '" + getID_client()->ToString() + "'" + ", ID_personnel = '" + getID_personnel()->ToString() + "' WHERE ID_adresse = '" + Convert::ToInt32(getID_adresse()) + "'";
	}
	String^ CL_TBADRESSE::DELETE(void) {
		return "DELETE FROM dbo.Adresse WHERE ID_adresse =" + Convert::ToInt32(getID_adresse());
	}


	// GETTER
	int^ CL_TBADRESSE::getID_adresse() {
		return this->ID_adresse;
	}
	int^ CL_TBADRESSE::getID_client() {
		return this->ID_client;
	}
	int^ CL_TBADRESSE::getID_personnel() {
		return this->ID_personnel;
	}
	int^ CL_TBADRESSE::getCode_postal() {
		return this->Code_postal;
	}
	int^ CL_TBADRESSE::getType() {
		return this->Type;
	}
	String^ CL_TBADRESSE::getNom_rue() {
		return this->Nom_rue;
	}
	int^ CL_TBADRESSE::getNum_rue() {
		return this->Num_rue;
	}
	String^ CL_TBADRESSE::getPays() {
		return this->Pays;
	}
	String^ CL_TBADRESSE::getVille() {
		return this->Ville;
	}
	// SETTER
	void CL_TBADRESSE::setID_adresse(int^ ID_adresse) {
		this->ID_adresse = ID_adresse;
	}
	void CL_TBADRESSE::setID_client(int^ ID_client) {
		this->ID_client= ID_client;
	}
	void CL_TBADRESSE::setID_personnel(int^ ID_personnel) {
		this->ID_personnel= ID_personnel;
	}
	void CL_TBADRESSE::setCode_postal(int^ Code_postal) {
		this->Code_postal = Code_postal;
	}
	void CL_TBADRESSE::setType(int^ Type) {
		this->Type = Type;
	}
	void CL_TBADRESSE::setNom_rue(String^ Nom_rue) {
		this->Nom_rue = Nom_rue;
	}
	void CL_TBADRESSE::setNum_rue(int^ Num_rue) {
		this->Num_rue = Num_rue;
	}
	void CL_TBADRESSE::setPays(String^ Pays) {
		this->Pays = Pays;
	}
	void CL_TBADRESSE::setVille(String^ Ville) {
		this->Ville = Ville;
	
	}
}
