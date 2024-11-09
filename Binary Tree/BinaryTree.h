#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;


class TreeNode
{
public:
    char word[50];
    char translation[50];
    int access_count;
    TreeNode* left;
    TreeNode* right;

    TreeNode(const char* word, const char* translation, int access_count = 0);
};

class BinaryTree
{
private:
    TreeNode* root;

    TreeNode* addNode(TreeNode* node, const char* word, const char* translation, int access_count);
    TreeNode* findNode(TreeNode* node, const char* word);
    TreeNode* deleteNode(TreeNode* node, const char* word);
    TreeNode* findMostPopular(TreeNode* node, TreeNode*& most_popular);
    TreeNode* findLeastPopular(TreeNode* node, TreeNode*& least_popular);

public:
    BinaryTree();
    ~BinaryTree();

    void addWord(const char* word, const char* translation, int access_count = 0);
    void displayTranslation(const char* word);
    void replaceTranslation(const char* word, const char* new_translation);
    void deleteWord(const char* word);
    void displayMostPopularWord();
    void displayLeastPopularWord();
    void clear(TreeNode* node);
};

#endif 