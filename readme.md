## MORPION  
Mode 1v1 et un mode 1vsIA

## Structure
- player.hpp et player.cpp servent a creer les variables liées au joueurs 
- game.hpp et game.cpp servent a creer le plateau, la detection de victoire et la mise en place de l'ia 
- main.cpp contient la boucle de gameplay, le menu de demarrage et la gestion du tour par tour

## Fonctionnalités
- le mode 1v1 ou 1vsIa
- Detection de victoire 
- Amelioration de l'ia de base 

## Problèmes rencontrés
- IA ne bloquait pas : "index!=1" corrigé en "index!=-1"
- VS code à dû être désinstallé et réinstallé car il ne voulait étrangement plus se lancer ??? -> apres ça j'ai eu des soucis sur les commits comme si gitignore ne fonctionnait plus, mais je ne sais pas si c'était ça

## Compilation
g++ main.cpp player.cpp game.cpp -o morpion
