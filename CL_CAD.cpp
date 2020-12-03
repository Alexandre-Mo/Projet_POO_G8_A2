#include "CL_CAD.h"

namespace NS_Composants {

	CL_CAD::CL_CAD() {
		this->rq_Sql = "RIEN";
		this->strCon = "Data Source=DESKTOP-6LFJ9O0\\SQLSERVERRPOO; Initial Catalog=Database_Projet_POO_G8; Integrated Security=true;";
		//this->strCon = "Data Source=LAPTOP-LRF66FRF; Initial Catalog=Database_Projet_POO_G8; Integrated Security=true;";
		//this->strCon = "Data Source=LAPTOP-2SFNSF9Q\\PROJETPOO; Initial Catalog=Database_Projet_POO_G8; Integrated Security=true;";
		
		con = gcnew SqlConnection(strCon);
		cmd = gcnew SqlCommand();
		cmd->Connection = con;
		cmd->CommandType = CommandType::Text;
	}

	int CL_CAD::actionRowsID(String^ rq_sql) {
		int id;
		this->rq_Sql = rq_sql;
		cmd->CommandText = this->rq_Sql;
		con->Open();
		id = Convert::ToInt32(cmd->ExecuteScalar());
		con->Close();
		return id;
	}

	void CL_CAD::actionRows(String^ rq_sql) {
		this->rq_Sql = rq_sql;
		cmd->CommandText = this->rq_Sql;
		con->Open();
		cmd->ExecuteNonQuery();
		con->Close();
	}

	DataSet^ CL_CAD::getRows(String^ rq_sql, String^ dataTableName) {
		this->rq_Sql = rq_sql;
		cmd->CommandText = this->rq_Sql;
		da = gcnew SqlDataAdapter(cmd);
		ds = gcnew DataSet();
		da->Fill(ds, dataTableName);
		return ds;
	}
}