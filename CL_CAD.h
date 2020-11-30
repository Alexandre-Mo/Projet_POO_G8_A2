#pragma once


namespace NS_Composants {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Data;
	using namespace System::Data::SqlClient;


	ref class CL_CAD
	{
	private:
		String^ strCon;
		String^ rq_Sql;
		SqlConnection^ con;
		SqlCommand^ cmd;
		SqlDataAdapter^ da;
		DataSet^ ds; 

	public:
		CL_CAD();
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);

	};

}