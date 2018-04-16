//Author:Autumn Macon
//Date:4/8/18
//File: BST.cpp
//Description:implements the functions 


#include "BST.h"
#include <iostream>
#include <fstream>

using namespace std;

BST::BST()
{
  //constructor
  root = NULL;  
}

BST::~BST()
{
  // destructor
    //destructor_helper(root);
}

//void BST::destructor_helper(Node *current){
//    if(current != NULL){
//      destructor_helper(current->left);
//      destructor_helper(current->right);
//      delete current;
//}

void BST::Set(int indata, string inkey){
  if(root == NULL)
    root = new Node(indata, inkey);
  else
    insertHelper(root, indata, inkey);
}

void BST::insertHelper(Node *current, int indata, string inkey) {
  if(inkey == current-> key){
     current->data = indata;
     // if key exist then overwrites the data
  }
 else if(inkey < current->key){
    //Insert Left
    if(current->left == NULL)
      current->left = new Node(indata, inkey);
    else
      insertHelper(current->left, indata, inkey);
  }
  else {
    //Insert Right
   if(current->right == NULL)
      current->right = new Node(indata, inkey);
    else
      insertHelper(current->right, indata, inkey);
  }
}


void BST::print() {
  printHelper(root);
  cout << endl;
}

/*
void save_file(Node *current,fstream& ofile){
     ofstream ofile;
     ofile.open("saved_file");
     if(current!= NULL){
       save_file(current->left, ofile)
	 ofile << current->data;
       ofile << current->value;
       save_file(current->right,ofile);
     }
*/

void BST::printHelper(Node *current) {
    if(current != NULL) {
    printHelper(current->left);
    cout << current->data << " ";
    printHelper(current->right);
  }
}  

string BST::Min(){
    Node* current = root;
    if(current == NULL){
      //cout << "Empty" <<endl;
	return "";
    }
    else{ 
	while(current->left != NULL){
	  current = current->left;
	 }
	return current->key;
    }
}

string BST::Max(){
    Node* current = root;
    if(current == NULL){
	return "";
     }
    else{
	while(current->right != NULL){
	   current = current->right;
	}
	return current->key;
    }
}

/*
int BST::Find(string key){
     int num;    
     if(root != NULL){
        num= Find_helper(root, key);
    }
    	return num;
// if -1 is returned key was not found
// else the num is the value of the data of the node of that key 
}
*/

int Find_helper(Node* current, string key){
    int num = -1;
    if(key == current->key){
	return current->data;
    }	
    if(current->left != NULL){
	num = Find_helper(current->left,key);
	if(num != -1)
	   return num;
    }
    if(current->right != NULL){
	num = Find_helper(current->right, key);
	if(num != -1)
	   return num;
    }
	return num;
 }


void BST::delete_node(string key, int value) {
  delete_helper(root, key,  value);
}

void BST::delete_helper(Node* &current, string key, int value) {
  //Node doesn't exist
  if(current == NULL)
    return;
  //Go left
  else if(value < current->data)
    delete_helper(current->left, key, value);
  //Go right
  else if(current->data < value)
    delete_helper(current->right, key, value);
  //Equal
  else {
    Node *temp;

    if(current->left == NULL) {
      temp = current->right;
      delete current;
      current = temp;
    }
    else if(current->right == NULL) {
      temp = current->left;
      delete current;
      current = temp;
    }
    else {
      temp = current->right;
      Node *current = NULL;

      while(temp->left != NULL) {
	current = temp;
	temp = temp->left;
      }

      current->data = temp->data;

      if(root != NULL)
	delete_helper(root->left,root->left->key, root->left->data);
      else
	delete_helper(current->right, current->right->key, current->right->data);

    }//else
  }//else
}//deleteHelper






