//Author:Autumn macon
//Date:4/13/18
//File: node.cpp
//description:

#include "node.h"
#include <iostream>

using namespace std;

Node::Node(int indata, string value){
  left = NULL;
  right = NULL;
  key = value;
  data = indata;
}

