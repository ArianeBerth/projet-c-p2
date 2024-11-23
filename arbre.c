//
// Created by pouss on 13/11/2024.
//
#include "arbre.h"
#include "map.h"


t_node *createNode(t_localisation loc, t_move **availableMove, int sizeAvailableMove, t_map map, int nbMoveRemaining, t_move lastMove) {
    t_node *newNode;
    newNode->loc = loc;
    newNode->availableMove = availableMove;
    newNode->sizeAvailableMove = sizeAvailableMove;
    newNode->map = map;
    newNode->nbMoveRemaining = nbMoveRemaining;
    newNode->lastMove = lastMove;
    newNode->nextNode = NULL;
    return newNode;
}




/*t_node *tree(t_map map){
    t_node *new= createNode(0,4,0);
}*/
