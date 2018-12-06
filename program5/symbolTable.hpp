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
    string name;
    string value;
    char type;
    SymbolTable* localSymbolTable;
  };
  
  vector<symbolEntry> entries;
  SymbolTable* previous;
  
public:
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
      cerr << "Variable " << id << " already declared" << endl;
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
    if(entries.back().localSymbolTable->previous != NULL)
    {
      return entries.back().localSymbolTable->previous;
    }
    else
    {
      cerr << "Wrong" <<endl;
    }
    return NULL;
  }
  
  void printEntries()
  {
    /*
    if(previous != NULL)
    {
      previous->printEntries();
      for(unsigned int i = 0; i < entries.size(); i++)
      {
        if(entries.at(i).type == 'c')
        {
          cout << entries.at(i).name << " class_type" << endl;
        }
        else if(entries.at(i).type =='m')
        {
          cout << entries.at(i).name << " method_type" << endl;
        }
        else if(entries.at(i).type =='k')
        {
          cout << entries.at(i).name << " constructor_type" << endl;
        }
        else
        {
          cout << entries.at(i).name << " " << entries.at(i).value << " "
               << endl;
        }
      }
      
    }
    else
    {
      for(unsigned int i = 0; i < entries.size(); i++)
      {
        if(entries.at(i).type == 'c')
        {
          cout << entries.at(i).name << " class_type" << endl;
        }
        else if(entries.at(i).type =='m')
        {
          cout << entries.at(i).name << " method_type" << endl;
        }
        else if(entries.at(i).type =='k')
        {
          cout << entries.at(i).name << " constructor_type" << endl;
        }
        else
        {
          cout << entries.at(i).name << " " << entries.at(i).value << " "
               << endl;
        }
      }
    }
    */
    for(unsigned int i = 0; i < entries.size(); i++)
    {
      cout << entries.at(i).name << " " << entries.at(i).value << endl;
      if(entries.at(i).localSymbolTable!=NULL)
      {
        entries.at(i).localSymbolTable->printEntries();
      }
    }
  }
  
  
  bool symbolEntryExists(string id, char type)
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
    return false;
    
  }
};