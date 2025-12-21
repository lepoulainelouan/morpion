## MORPION  
Mode 1v1 et un mode 1vsIA

## Structure
- player.hpp / player.cpp : structure Player et création d’un joueur
- game.hpp / game.cpp : affichage du plateau, détection de victoire, IA
- main.cpp : boucle principale, choix du mode, gestion des tours

## Fonctionnalités
- Plateau 3x3 avec tableau statique
- Mode Joueur vs Joueur
- Tour par tour
- Détection de victoire
- IA niveau 1 : bloque les coups gagnants du joueur sinon joue aléatoirement

## Problèmes rencontrés
- IA ne bloquait pas : "index!=1" corrigé en "index!=-1"
- Inclusion incorrecte de game.cpp dans main.cpp cela donnait un conflit de définition
- VS code à dû être désinstallé et réinstallé car il ne voulait étrangement plus se lancer ??? -> apres ça j'ai eu des soucis sur les commits comme si gitignore ne fonctionnait plus, mais je ne sais pas si c'était ça

## Compilation
g++ main.cpp player.cpp game.cpp -o morpion

## Lancement
./morpion