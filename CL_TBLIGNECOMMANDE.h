#pragma once

namespace NS_Composants {

	using namespace System;

	ref class CL_TBLIGNECOMMANDE
	{
	};

}

#pragma once

namespace NS_Composants {

	using namespace System;

	ref class CL_TBARTICLE
	{
	private:
		int quantite_stock;
		int ID_article;
		String^ Reference_article;
	public:
		CL_TBARTICLE();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		// GETTER
		int getquantite_stock();
		int getID_article();
		String^ getReference_article();
		// SETTER
		void setquantite_stock(int);
		void setID_article(int);
		void setReference_article(String^);
	};

}
