//Loren Sether
//Cosc 4785 Fa18
//Program 6
//December 11th 2018
//symbolTable.hpp

#include<stdio.h>
#include<vector>
#include<cstddef>
#include<iostream>
#include <iterator>

using namespace std;

//Symbol Table
class SymbolTable
{
private:
  int count;
  //For each entry
  struct symbolEntry
  {
    string name;
    string value;
    char type;
    SymbolTable* localSymbolTable;
  };
  
  vector<symbolEntry> entries;
  SymbolTable* previous;
  
public:
   int depth;
  SymbolTable()
  {
    previous = NULL;
  }
  SymbolTable(SymbolTable* prev)
  {
    
    count = 0;
    previous = prev;
  }
  
  void addSymbolEntry(string id, string value, char type)
  {
    if(!symbolEntryExists(id, type))
    {
      
      symbolEntry newSymbolEntry = {id,value,type,NULL};
    
if(newSymbolEntry.type=='m'||newSymbolEntry.type=='c'||newSymbolEntry.type=='k')
      {
        newSymbolEntry.localSymbolTable = new SymbolTable(this);
      }
      entries.push_back(newSymbolEntry);
    
      count = count + 1;
    }
    else
    {
      //cerr << "Variable " << id << " already declared" << endl;
    }
    
  }
  
  SymbolTable* getCurrentTable()
  {
    if(entries.back().localSymbolTable != NULL)
    {
      return entries.back().localSymbolTable;
    }
    else
    {
      cerr << "Wrong" <<endl;
    }
    return NULL;
  }
  
  SymbolTable* getParentTable()
  {
    if(previous != NULL)
    {
      return previous;
    }
    else
    {
      cerr << "Wrong" <<endl;
    }
    return NULL;
  }
  
  string indentScope(int x)
  {
    string indent = "";
    for(int i = 0; i < x; i++)
    {
      indent = indent + "  ";
    }
    return indent;
  }
  
  void printEntries()
  {
    
      cout << indentScope(0) << entries.at(0).name << " " 
      << entries.at(0).value << endl;
      
        entries.at(0).localSymbolTable->printLowerEntries();
     
  }
  
  void printLowerEntries()
  {
    depth = 0;
    if(previous !=NULL)
    {
      SymbolTable* temp = previous;
      while(temp!=NULL)
      {
        depth++;
        temp = temp->previous;
      }
    }
    for(unsigned int i = 0; i < entries.size(); i++)
    {
  if(entries.at(i).type=='c'||entries.at(i).type=='m'||entries.at(i).type=='k'){
        cout<<endl;
      }
      if(entries.at(i).type=='c')
      {
        depth = 0;
      }
      if(entries.at(i).type=='m'){
        cout << indentScope(depth) << entries.at(i).name << " method_type "
        << entries.at(i).value << endl;
      }
      else{
      cout << indentScope(depth) << entries.at(i).name << " " 
      << entries.at(i).value << endl;
      }
      
      if(entries.at(i).localSymbolTable!=NULL)
      {
        entries.at(i).localSymbolTable->printLowerEntries();
        
      }
    }
  }
  
  
  bool symbolEntryExists(string id, char type)
  {
    
      for(unsigned int i = 0; i < entries.size(); i++)
      {
        if(id == entries.at(i).name && type == entries.at(i).type)
        {
          return true;
        }
      }
    return false;
    
  }
  
  bool symbolExists(string id, char type)
  {
    
      for(unsigned int i = 0; i < entries.size(); i++)
      {
        
          cout<<id<<type;
        if(id == entries.at(i).name && type == entries.at(i).type)
        {
          return true;
        }
        
      }
      if(previous!=NULL){
      previous->symbolExists(id, type);
      }
    return false;
    
  }
};