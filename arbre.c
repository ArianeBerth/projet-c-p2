//
// Created by pouss on 13/11/2024.
//
#include "arbre.h"
#include "map.h"


void deleteElement(t_move [], int , int);


t_node *createNode(t_localisation loc, t_move *availableMove, int sizeAvailableMove, t_map map, int nbMoveRemaining, t_move lastMove) {
    t_node *newNode = (t_node *)malloc(sizeof(t_node *));
    newNode->loc = loc;
    newNode->availableMove = availableMove;
    newNode->sizeAvailableMove = sizeAvailableMove;
    newNode->map = map;
    newNode->nbMoveRemaining = nbMoveRemaining;
    newNode->lastMove = lastMove;
    newNode->nextNode = NULL;
    return newNode;
}

void deleteElement(t_move arr[], int size, int index) {
    if (index < 0 || index >= size) {
        printf("Index out of bounds\n");
        return;
    }

    // Shift elements to the left
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    (size)--;
}

void sonNod(t_node *node){
    for (int i=0; i<node->sizeAvailableMove; i++) {
        t_localisation loc = move(node->loc, node->availableMove[i]);
        t_move *temp = (t_move *)malloc(node->sizeAvailableMove*sizeof(t_move));
        for (int j=0; j<node->sizeAvailableMove; j++){
            temp[j] = node->availableMove[j];
        }

        deleteElement(temp, node->sizeAvailableMove, i);
        t_node *sonNode = createNode(loc, temp, node->sizeAvailableMove-1, node->map, node->nbMoveRemaining-1, node->availableMove[i])
    }
}


/*t_node *tree(t_map map){
    t_node *new= createNode(0,4,0);
}*/
