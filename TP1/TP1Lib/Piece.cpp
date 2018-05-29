/**
 * \file Piece.cpp
 * \brief Ce fichier contient une implantation des méthodes de la classe Piece
 * \author Étudiant(e)
 * \version 0.1
 * \date juin 2018
 *
 */

#include "Labyrinthe.h"
#include "Porte.h"
#include "Piece.h"


using namespace std;

namespace TP1
{
	//constructeur par défaut
    Piece::Piece()
    {
    	getNom() = nom;
    	list<Porte> portes;
    	parcourue = false;
    	distanceDuDebut = 0;
    }

    //constructeur de copie
    Piece::Piece(const std::string & s)
    {
    	getNom() = s;
    }

    //destructeur
    Piece::~Piece()
    {
    }

    //Surcharge de l'opérateur =
    const Piece& Piece::operator =(const Piece& source)
    {
    	portes = source.portes;
    	parcourue = source.parcourue;
        nom = source.nom;
        distanceDuDebut = source.distanceDuDebut;
        return (*this);
    }

    //Accesseur du nom d'une pièce
    string Piece::getNom() const
    {
        return nom;
    }

    //Pour initialiser l'attribut parcourue à true ou false
    void Piece::setParcourue(bool p)
    {
    	p = false;
    }

    //Pour initialiser l'attribut distanceDuDebut
    void Piece::setDistanceDuDebut(int d)
    {
        distanceDuDebut = d;
    }

    //Acceder au membre parcourue
    bool Piece::getParcourue() const
    {
        return parcourue;
    }

    //Accéder au membre distanceDuDebut
    int Piece::getDistanceDuDebut() const
    {
        return distanceDuDebut;
    }



}
