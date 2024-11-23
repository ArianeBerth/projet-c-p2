//
// Created by pouss on 13/11/2024.
//

#ifndef UNTITLED1_ARBRE_H
#define UNTITLED1_ARBRE_H

#endif //UNTITLED1_ARBRE_H
#include "stdlib.h"
#include "stdio.h"
#include "moves.h"
#include "map.h"

typedef struct s_node
{
    t_localisation loc;
    t_move **availableMove;
    int sizeAvailableMove;
    t_map map;
    int nbMoveRemaining;
    t_move lastMove;
    struct s_node *nextNode; //initialisé à NULL
} t_node;

t_node *createNode(t_localisation, t_move **, int, t_map, int, t_move);
