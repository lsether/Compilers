//Loren Sether
//Cosc 4785 Fa18
//Program 5
//November 26th 2018

//hash table for symbol table

const int MAX = 100;

class Node
{
  string identifier, scope, type;
  int lineNo;
  Node* next;
  
public:
  Node()
  {
    next = NULL;
  }
  
  Node(string name, string type,
}