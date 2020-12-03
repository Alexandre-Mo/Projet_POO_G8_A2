#pragma once

namespace NS_Composants {

    using namespace System;

    ref class CL_TBCOMMANDE
    {
    private:
        int ID_commande;
        String^ Date_emission;
        String^ Date_livraison;
        String^ Mode_payement;
        float Remise;
        int ID_Societe;
        int ID_societe_Produit;
        int ID_client;
        String^ Reference_commande;
        int ID_adresse;
    public:
        CL_TBCOMMANDE();
        String^ SELECT(void);
        String^ INSERT(void);
        String^ UPDATE(void);
        String^ DELETE(void);
        String^ SELECTbyRef(void);
        String^ SELECTbyIDclient(void);

        // GETTER
        int getID_commande();
        String^ getDate_emission();
        String^ getDate_livraison();
        String^ getMode_payement();
        float getRemise();
        int getID_adresse();
        String^ getReference_commande();
        int getID_client();

        // SETTER
        void setID_commande(int);
        void setDate_emission(String^);
        void setDate_livraison(String^);
        void setMode_payement(String^);
        void setRemise(float);
        void setID_adresse(int);
        void setReference_commande(String^);
        void setID_client(int);
    };

}