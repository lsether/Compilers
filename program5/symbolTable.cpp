//Loren Sether
//Cosc 4785 Fa18
//Program 5
//November 26th 2018

//struct for entries
struct Entry
{
  string name;
  char type;
  *SymbolTable localSymbolTable;
};

//Symbol Table class
class SymbolTable
{
  *SymbolTable previous;
  **SymbolTable next;
  unordered_map<Entry, int>;
  
  SymbolTable(SymbolTable *parent, string value)
  {
    
  }
  
  void addLowerSymbolTable()
  {
    
  }
  
  void addEntry()
  {
    
  }
  
  bool entryExists()
  {
    
  }
};