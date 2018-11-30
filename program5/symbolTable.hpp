//Loren Sether
//Cosc 4785 Fa18
//Program 5
//November 30th 2018
//symbolTable.hpp

#include<stdio.h>
#include<vector>
#include<cstddef>
#include<iostream>

using namespace std;

//Symbol Table
class symbolTable
{
private:
  int count;
  //For each entry
  struct symbolEntry
  {
    string name;
    string value;
    char type;
    symbolTable* localSymbolTable;
  };
  
  vector<symbolEntry> entries;
  symbolTable* previous;
  
public:
  symbolTable(symbolTable* prev)
  {
    previous = prev;
  }
  
  void addSymbolEntry(string id, char type)
  {
    count = 0;
    string temp;
    cout << "Attempting to add " << id << " of type " << type << endl;
    if(!symbolEntryExists(id))
    {
      switch (type)
      {
        case 'i':
          temp = "0";
          break;
        case 'm':
          temp = "method";
          break;
        case 'c':
          temp = "class";
          break;
      }
      
      symbolEntry newSymbolEntry = {id,temp,type,nullptr};
      if(newSymbolEntry.type == 'm' || newSymbolEntry.type == 'c')
      {
        newSymbolEntry.localSymbolTable = new symbolTable(this);
        cout << newSymbolEntry.localSymbolTable->previous->count << endl;
      }
      entries.push_back(newSymbolEntry);
      
      cout << entries.at(count).name << " successfully added with value " << 
              entries.at(count).value << endl;
      if(entries.at(count).localSymbolTable !=NULL)
      {
        cout << "Method/Class now has a symbol table with " << 
                 entries.at(count).localSymbolTable->count << 
                 " variables declared" << endl;
      }
      count = count + 1;
    }
    else
    {
      cerr << "Variable " << id << " already declared" << endl;
    }
  }
  
  bool symbolEntryExists(string id)
  {
    for(auto x : entries)
    {
      if(id == x.name)
      {
        return true;
      }
    }
    return false;
  }
};