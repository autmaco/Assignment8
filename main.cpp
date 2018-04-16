//Author:Autumn macon
//Date:4/9/18
//File: Driver.cpp
//Description: main driver for program

#include <iostream>
#include <fstream>
#include "BST.h"
//#include <string>
//#include <iomanip>
//#include <fstream>

using namespace std;

/*
void Read_file(std::string file_name, BST tree){
  std:: ifstream infile;
  infile.open("test.dat");

  string temp;
  infile >> temp;
  while(infile){
    int num = tree.Find(temp);
    if(num != -1){
      tree.Set(num+1, temp);
    }
    else {
      tree.Set(1,temp);
      infile >> temp;
    }
      infile.close();
 }
}
*/

int main(){
    BST tree;

    int User_input;
    cout << " You may select one of the following options: " << endl;
    cout << " 1. Read from a file. " << endl;
    cout << " 2. Write to a file. " << endl;
    cout << " 3. Print the inventory." << endl; 
    cout << "4. Find the maximum number. " << endl;
    cout << "5. Find the minimum number. " << endl;
    cout << "6. Delete. " << endl;
    cout << "7. Quit." << endl;

    cin >> User_input;
    string file_name = "test.dat";
    string Save_file;

    while(User_input !=7){
        if(User_input == 1){
	    cout << "What file do you want to use? " <<endl;
	    // cin >> file_name;
	    // cout << endl; 
	    // Read_file("test.dat",tree);

	    tree.Set(99,"the");
	    tree.Set(520,"A");
	    tree.Set(10,"dog");
	    tree.Set(1,"car");
	    tree.Set(20,"Help");
    }
        else if (User_input == 2){
	cout << "Please enter a file name!" << endl;
	cin >> Save_file;
	// tree.save_file(Save_file);    
    }
        else if(User_input == 3){
	tree.print();   
	cout << endl;
    }
        else if(User_input == 4){
	  cout << "Maximum:";
	  tree.Max();
	  cout << endl;
    }
        else if(User_input == 5){
	cout <<"Minimum: " << tree.Min();
	cout << endl;
    }
        else if(User_input == 6){
	cout <<"what do you want to delete!" << endl;
	//cin >> delete_key;
	//	cin >>delete_data;
        //tree.delete_node(key,data);
    }

    //cout << "Thank you for using Autumn's Inventory!" << endl;
	// cout << "If you want to continue please put in another command number! " << endl;
    cin >> User_input;
    }

  
}




