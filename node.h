//Author:Autumn macon
//Date:4/13/18
//File: node.h
//description:


#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>


class Node{
  public:
     Node *left, *right;
     int data;
     std::string key;
     Node(int indata, std::string value);
};

#endif  // NODE_h
