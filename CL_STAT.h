#pragma once

namespace NS_Composants {

	using namespace System;

	ref class CL_STAT
	{
	private:
		int seuil_reaprovisionnement;
		int mois;
		float TVA;
		float remise;
		float demarque;
		float marge;
	public:
		CL_STAT();
		String^ SELECTseuilReaprovisionnement(void);
		String^ SELECTArticleMoinsVendus(void);
		String^ SELECTArticlePlusVendus(void);
		String^ SELECTChiffreAffaireMois(void);
		String^ SELECTValeurAchatStock(void);
		String^ SELECTValeurCommercialeStock(int);
		String^ CL_STAT::SELECTCalculPanierMoyen(void);
		String^ CL_STAT::SELECTSimulation(void);

		// GETTER
		int getSeuil_reaprovisionnement();
		int getmois();
		float getTVA();
		float getremise();
		float getdemarque();
		float getmarge();

		// SETTER
		void setSeuil_reaprovisionnement(int);
		void setmois(int);
		void setTVA(float);
		void setremise(float);
		void setdemarque(float);
		void setmarge(float);
	};
}