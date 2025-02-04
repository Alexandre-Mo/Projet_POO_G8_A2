Requete TOP 10 articles les plus vendus : 

SELECT TOP 10 SUM(Quantite_produit) AS Quantite_produit,Reference_article,Couleur
FROM ((dbo.Ligne_commande INNER JOIN dbo.Article ON dbo.Ligne_commande.ID_article = dbo.Article.ID_article)INNER JOIN dbo.Nature ON dbo.Article.ID_couleur = dbo.Nature.ID_couleur)
GROUP BY dbo.Article.Reference_article,Couleur
ORDER BY Quantite_produit DESC

Requete TOP 10 articles les plus vendus : 

SELECT TOP 10 SUM(Quantite_produit) AS Quantite_produit,ID_article 
FROM dbo.Ligne_commande 
GROUP BY ID_article
ORDER BY Quantite_produit ASC

Requete Panier moyen : 

SELECT SUM(PRIX)/(SELECT COUNT(*) FROM dbo.Commande) AS  PRIX_TOTAL
FROM
(SELECT (Quantite_Produit*Prix_unitaire_HT ) AS PRIX
FROM
(SELECT Ligne_commande.ID_article,SUM(Quantite_Produit) AS Quantite_Produit,Prix_unitaire_HT 
FROM Article INNER JOIN Ligne_commande ON Article.ID_article = Ligne_commande.ID_article
GROUP BY Ligne_commande.ID_article,Prix_unitaire_HT ) AS TEST) AS TEST2

Requete calcul valeur d achat :
SELECT SUM(Quantite_stock*Prix_unitaire_HT) AS Valeur_Achat FROM dbo.Article

Requete calcul valeur commerciale :

SELECT TEST1.Valeur_Achat+TEST1.Valeur_Achat*0.15
FROM
(SELECT SUM(Quantite_stock*Prix_unitaire_HT) AS Valeur_Achat FROM dbo.Article) AS TEST1

Requete calcul chiffre d affarire en fonction du mois : 

SELECT SUM(Quantite_Produit*Prix_unitaire_HT)
FROM
(SELECT Quantite_Produit,ID_article
FROM 
dbo.Ligne_commande INNER JOIN dbo.Commande 
ON dbo.Ligne_commande.ID_commande = dbo.Commande.ID_commande
WHERE MONTH(Date_emission) = 11)AS TEST1 INNER JOIN dbo.Article 
ON TEST1.ID_article = dbo.Article.ID_article

Requete simulation :

SELECT TEST1.Valeur_Achat+(TEST1.Valeur_Achat*0.2)+(TEST1.Valeur_Achat*0.05)+(TEST1.Valeur_Achat*0.02)+(TEST1.Valeur_Achat*0.05)
FROM
(SELECT SUM(Quantite_stock*Prix_unitaire_HT) AS Valeur_Achat FROM dbo.Article) AS TEST1
