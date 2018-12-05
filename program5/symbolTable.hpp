//Loren Sether
//Cosc 4785 Fa18
//Program 5
//November 30th 2018
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
    string *name;
    string value;
    char type;
    int scope;
    SymbolTable* localSymbolTable;
  };
  
  vector<symbolEntry> entries;
  SymbolTable* previous;
  
public:
  int scopeCounter;
  SymbolTable(SymbolTable* prev)
  {
    previous = prev;
  }
  
  void addSymbolEntry(string *id, char type)
  {
    count = 0;
    string temp;
    cout << "Attempting to add " << *id << " of type " << type << endl;
    if(!symbolEntryExists(id, type))
    {
      switch (type)
      {
        case 'i':
          temp = "0";
          break;
        case 'm':
          temp = "method";
          scopeCounter++;
          break;
        case 'c':
          temp = "class";
          scopeCounter++;
          break;
      }
      
      symbolEntry newSymbolEntry = {id,temp,type,scopeCounter,NULL};
      if(newSymbolEntry.type == 'm' || newSymbolEntry.type == 'c')
      {
        newSymbolEntry.localSymbolTable = new SymbolTable(this);
        cout << newSymbolEntry.localSymbolTable->previous->count << endl;
      }
      entries.push_back(newSymbolEntry);
      
      cout << *entries.at(count).name << " successfully added with value " 
           << entries.at(count).value << endl;
      if(entries.at(count).localSymbolTable !=NULL)
      {
        cout << "Method/Class now has a symbol table with " 
             << entries.at(count).localSymbolTable->count 
             << " variables declared" << endl;
      }
      count = count + 1;
    }
    else
    {
      cerr << "Variable " << id << " already declared" << endl;
    }
    
  }
  
  void subScope()
  {
    scopeCounter--;
  }
  
  void printEntries()
  {
    if(previous != NULL)
    {
      previous->printEntries();
      for(unsigned int i = 0; i < entries.size(); i++)
      {
        cout << *entries.at(i).name << " " << entries.at(i).value << " "
             << entries.at(i).type << " " << entries.at(i).scope << endl;
      }
    }
    else
    {
      for(unsigned int i = 0; i < entries.size(); i++)
      {
        cout << *entries.at(i).name << " " << entries.at(i).value << " "
             << entries.at(i).type << " " << entries.at(i).scope << endl;
      }
    }
  }
  
  
  bool symbolEntryExists(string *id, char type)
  {
    if(previous == NULL)
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
    else
    {
      for(unsigned int i = 0; i < entries.size(); i++)
      {
        if(id == entries.at(i).name && type == entries.at(i).type)
        {
          return true;
        }
      }
      previous->symbolEntryExists(id, type);
    }
    
  }
};