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
	String^ CL_TBADRESSE::SELECT(void) {
		if (getType() == 1) {
			return "SELECT * FROM dbo.Adresse WHERE Type ='1' AND ID_client = '" + getID_client() + "'";
		}
		if (getType() == 2) {
			return "SELECT * FROM dbo.Adresse WHERE Type ='2' AND ID_personnel = '" + getID_personnel() + "'";
		}
		if (getType() == 3) {
			return "SELECT ID_adresse,Nom_rue,Num_rue,Code_postal,Pays,Ville FROM dbo.Adresse WHERE Type ='3' AND ID_client = '" + getID_client() + "'";
		}
		
	}
	String^ CL_TBADRESSE::INSERT(void) {

		if (getType() == 1 || getType() == 3) {
			return "INSERT INTO dbo.Adresse " + "(Nom_rue,Num_rue,Code_postal,Pays,Ville,Type,ID_client) " + "VALUES('" + getNom_rue() + "', '" + getNum_rue() + "', '" + getCode_postal() + "', '" + getPays() + "', '" + getVille() + "', '" + getType() + "', '" + getID_client() + "'); SELECT @@IDENTITY;";
		}
		if (getType() == 2) {
			return "INSERT INTO dbo.Adresse " + "(Nom_rue,Num_rue,Code_postal,Pays,Ville,Type,ID_personnel) " + "VALUES('" + getNom_rue() + "', '" + getNum_rue() + "', '" + getCode_postal() + "', '" + getPays() + "', '" + getVille() + "', '" + getType() + "', '" + getID_personnel() + "'); SELECT @@IDENTITY;";
		}
		
	}
	String^ CL_TBADRESSE::UPDATE(void) {
		
		    
		if (getType() == 1) {
			return "UPDATE dbo.Adresse set Nom_rue = '" + getNom_rue()->ToString() + "'" + ", Num_rue = '" + getNum_rue() + "'" + ", Code_postal='" + getCode_postal() + "'" + ", Pays = '" + getPays()->ToString() + "'" + ", Ville = '" + getVille()->ToString() + "'" + ", Type = '" + getType() + "'" + ", ID_client = '" + getID_client() + "' WHERE ID_adresse = '" + Convert::ToInt32(getID_adresse()) + "'";
		}
		if (getType() == 2) {
			return "UPDATE dbo.Adresse set Nom_rue = '" + getNom_rue()->ToString() + "'" + ", Num_rue = '" + getNum_rue() + "'" + ", Code_postal='" + getCode_postal() + "'" + ", Pays = '" + getPays()->ToString() + "'" + ", Ville = '" + getVille()->ToString() + "'" + ", Type = '" + getType() + "'" + ", ID_personnel = '" + getID_personnel() + "' WHERE ID_personnel = '" + getID_personnel() + "'";
			}
		if (getType() == 3) {
			return "UPDATE dbo.Adresse set Nom_rue = '" + getNom_rue()->ToString() + "'" + ", Num_rue = '" + getNum_rue() + "'" + ", Code_postal='" + getCode_postal() + "'" + ", Pays = '" + getPays()->ToString() + "'" + ", Ville = '" + getVille()->ToString() + "'" + ", Type = '" + getType() + "'" + ", ID_client = '" + getID_client() + "' WHERE ID_adresse = '" + Convert::ToInt32(getID_adresse()) + "'";
		}
	}
	String^ CL_TBADRESSE::DELETE(void) {

		if (getType() == 1) {
			return "DELETE FROM dbo.Adresse WHERE ID_client =" + Convert::ToInt32(getID_client());
		}
		if (getType() == 2) {
			return "DELETE FROM dbo.Adresse WHERE ID_personnel =" + Convert::ToInt32(getID_personnel());
		}
		if (getType() == 3) {
			return "DELETE FROM dbo.Adresse WHERE ID_client =" + Convert::ToInt32(getID_client());
		}

	}


	// GETTER
	int CL_TBADRESSE::getID_adresse() {
		return this->ID_adresse;
	}
	int CL_TBADRESSE::getID_client() {
		return this->ID_client;
	}
	int CL_TBADRESSE::getID_personnel() {
		return this->ID_personnel;
	}
	int CL_TBADRESSE::getCode_postal() {
		return this->Code_postal;
	}
	int CL_TBADRESSE::getType() {
		return this->Type;
	}
	String^ CL_TBADRESSE::getNom_rue() {
		return this->Nom_rue;
	}
	int CL_TBADRESSE::getNum_rue() {
		return this->Num_rue;
	}
	String^ CL_TBADRESSE::getPays() {
		return this->Pays;
	}
	String^ CL_TBADRESSE::getVille() {
		return this->Ville;
	}
	// SETTER
	void CL_TBADRESSE::setID_adresse(int ID_adresse) {
		this->ID_adresse = ID_adresse;
	}
	void CL_TBADRESSE::setID_client(int ID_client) {
		this->ID_client= ID_client;
	}
	void CL_TBADRESSE::setID_personnel(int ID_personnel) {
		this->ID_personnel= ID_personnel;
	}
	void CL_TBADRESSE::setCode_postal(int Code_postal) {
		this->Code_postal = Code_postal;
	}
	void CL_TBADRESSE::setType(int Type) {
		this->Type = Type;
	}
	void CL_TBADRESSE::setNom_rue(String^ Nom_rue) {
		this->Nom_rue = Nom_rue;
	}
	void CL_TBADRESSE::setNum_rue(int Num_rue) {
		this->Num_rue = Num_rue;
	}
	void CL_TBADRESSE::setPays(String^ Pays) {
		this->Pays = Pays;
	}
	void CL_TBADRESSE::setVille(String^ Ville) {
		this->Ville = Ville;
	
	}
}
