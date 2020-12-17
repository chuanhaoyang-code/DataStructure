//
// Created by 86159 on 2020/12/16.
//

#ifndef AVLTREE_AVL_H
#define AVLTREE_AVL_H
#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#define Type int
#define BOOL int
#define TRUE 1
#define FALSE 0

typedef struct AVLNode{
    Type data;
    AVLNode *leftNode;
    AVLNode *rightNode;
    int bf;
}AVLNode;

typedef struct AVLTree{
    AVLNode *root;
}AVLTree;

void InitAVLTree(AVLTree *avl);
AVLNode* BuyNode(Type x);

BOOL InsertAVL(AVLTree *avl, Type x);
BOOL InsertAVL(AVLNode *&t , Type x);

BOOL RemoveAVL(AVLTree *avl, Type key);
BOOL RemoveAVL(AVLNode *&t, Type key);

void RotateR(AVLNode *&ptr);
void RotateL(AVLNode *&ptr);
void RotateLR(AVLNode *&ptr);
void RotateRL(AVLNode *&ptr);
#endif //AVLTREE_AVL_H
