 //Author: Autumn Macon
//Date:4/9/18
//File: BST.h
//Description: declares all the functions for the class

#ifndef BST_H
#define BST_H

#include <iostream>
#include <string>
#include "node.h"

class BST{
  
 private:
    Node *root;
    void insertHelper(Node *current, int indata, std::string key );
    void printHelper(Node *current);
    void destructor_helper(Node* current);
    int Find_helper(Node *current, std::string key);
    //void save_helper(Node *current, std::ofstream myfile);
 
public:
    BST();
    /******************************
    *   Constructor
    *   Set all value to 0 or NULL
    *******************************/

    ~BST();
    //destructor

    void Read_file(std::string file_name);
    /*********************************
     *  reads the data from the file
     *
     *******************************/
    
    void Set(int indata, std::string inkey);
    /**************************************
     *
     *
     *************************************/
    void print();
    //prints the information
    
    int Find(std::string data);
    /**************************************
     * takes a string parameter and returns
     * the value in the tree 
     *************************************/
   
    void save_file(std::string file_name);
    /**********************************
     *
     *
     *********************************/
    
    void delete_node(std::string key, int value);
    /******************************
     *
     *
     ***************************/
    
    void delete_helper(Node* &current, std::string key, int value);
    /*************************
     *
     *
     ****************************/
    
    std::string Min();
    /************************
     *  finds the smallest number 
     *   in the tree.
     ****************************/
    
    std::string Max();
    /***************************
     *  finds the largest number 
     *   in the tree.
     **************************/
};

#endif // BST_H

