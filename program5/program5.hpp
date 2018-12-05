//program5.hpp
//Loren Sether
//COSC 4785 Fa18
//Program 05
//November 30, 2018

#ifndef NODES_H
#define NODES_H
#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include"symbolTable.hpp"
using namespace std;
using std::string;
extern string interface;
extern int column;
extern int line;
extern int prevCol;
extern int prevLine;
extern int errors;
extern SymbolTable* globalSymbolTable;

class Node 
{
public:
  Node(Node* l,Node* r,Node* n);
  virtual ~Node();
  virtual void print()=0;
  void setNext(Node *n);
  void setLeft(Node *n);
  void setRight(Node *n);
  
protected:
  Node* left;
  Node* right;
  Node* next;
};

class ClassDeclaration: public Node {
public:
  ClassDeclaration(Node* l, Node* r,Node* n,string* op);
  ClassDeclaration(Node* l, Node* r,Node* n,const char* op);
         
         void print();
         
         
private:
  string opstr;
};

class ClassBody: public Node {
public:
  ClassBody(Node* l, Node* r,Node* n,string* op);
  ClassBody(Node* l, Node* r,Node* n,const char* op);
         
         void print();
         
         
private:
  string opstr;
};

class ClassBodyMoreVar: public Node {
public:
  ClassBodyMoreVar(Node* l, Node* r,Node* n,string* op);
  ClassBodyMoreVar(Node* l, Node* r,Node* n,const char* op);
         
         void print();
         
         
private:
  string opstr;
};

class ClassBodyMoreConst: public Node {
public:
  ClassBodyMoreConst(Node* l, Node* r,Node* n,string* op);
  ClassBodyMoreConst(Node* l, Node* r,Node* n,const char* op);
         
         void print();
         
         
private:
  string opstr;
};

class ClassBodyMoreMethod: public Node {
public:
  ClassBodyMoreMethod(Node* l, Node* r,Node* n,string* op);
  ClassBodyMoreMethod(Node* l, Node* r,Node* n,const char* op);
         
         void print();
         
         
private:
  string opstr;
};

class VarDeclaration: public Node {
public:
  VarDeclaration(Node* l, Node* r,Node* n,string* op);
  VarDeclaration(Node* l, Node* r,Node* n,const char* op);
         
         void print();
         
         
private:
  string opstr;
};

class Type: public Node {
  public:
    Type(Node* l,Node* r,Node* n,string* lop,string* rop);
    Type(Node* l,Node* r,Node* n,const char* lop,string* rop);
    Type(Node* l,Node* r,Node* n,string* lop,const char* rop);
    Type(Node* l,Node* r,Node* n,const char* lop,const char* rop);
    
    void print();
    
    private:
    string lopstr;
    string ropstr;
  };
  
class ConstructorDeclaration: public Node {
  public:
    ConstructorDeclaration(Node* l,Node* r,Node* n,string* op);
    ConstructorDeclaration(Node* l,Node* r,Node* n,const char* op);
    
    void print();
    
    private:
    string opstr;
  };
  
class MethodDeclaration: public Node {
  public:
    MethodDeclaration(Node* l,Node* r,Node* n,string* op);
    MethodDeclaration(Node* l,Node* r,Node* n,const char* op);
    
    void print();
    
    private:
    string opstr;
  };
  
class ResultType: public Node {
  public:
    ResultType(Node* l,Node* r,Node* n,string* op);
    ResultType(Node* l,Node* r,Node* n,const char* op);
    
    void print();
    
    private:
    string opstr;
  };
  
class ParameterList: public Node {
public:
  ParameterList(Node* l, Node* r, Node* n,string* op);
  ParameterList(Node* l, Node* r, Node* n, const char* op);
  
  void print();
  
private:
  string opstr;
};
  
class Parameter: public Node {
  public:
    Parameter(Node* l,Node* r,Node* n,string* op);
    Parameter(Node* l,Node* r,Node* n,const char* op);
    
    void print();
    
    private:
    string opstr;
  };
  
class Block: public Node {
  public:
    Block(Node* l,Node* r,Node* n,string* op);
    Block(Node* l,Node* r,Node* n,const char* op);
    
    void print();
    
    private:
    string opstr;
  };
  
class LocalVarDeclaration: public Node {
  public:
    LocalVarDeclaration(Node* l,Node* r,Node* n,string* op);
    LocalVarDeclaration(Node* l,Node* r,Node* n,const char* op);
    
    void print();
    
    private:
    string opstr;
  };
  
class StatementMore: public Node {
  public:
    StatementMore(Node* l,Node* r,Node* n,string* op);
    StatementMore(Node* l,Node* r,Node* n,const char* op);
    
    void print();
    
    private:
    string opstr;
  };
  
class Statement: public Node {
  public:
    Statement(Node* l,Node* r,Node* n,string* op);
    Statement(Node* l,Node* r,Node* n,const char* op);
    
    void print();
    
    private:
    string opstr;
  };
  

class Name: public Node {
  public:
    Name(Node* l,Node* r,Node* n,string* lop,
         string* rop);
     Name(Node* l,Node* r,Node* n,const char* lop, 
          string* rop);
     Name(Node* l,Node* r,Node* n,string* lop, 
          const char* rop);
     Name(Node* l,Node* r,Node* n,const char* lop, 
          const char* rop);
            
              void print();
              
  private:
    string lopstr;
    string ropstr;
  };
  
class Arglist: public Node {
public:
  Arglist(Node* l, Node* r, Node* n,string* op);
  Arglist(Node* l, Node* r, Node* n, const char* op);
  
  void print();
  
private:
  string opstr;
};

class ConditionalStatement: public Node {
public:
  ConditionalStatement(Node* l,Node* r,Node* n,string* op);
  ConditionalStatement(Node* l,Node* r,Node* n,const char* op);
  
  void print();

private:
  string opstr;
  };

class OptionalExpression: public Node {
public:
  OptionalExpression(Node* l,Node* r,Node* n,string* op);
  OptionalExpression(Node* l,Node* r,Node* n,const char* op);
  
  void print();

private:
  string opstr;
  };

class Expression: public Node {
public:
  Expression(Node* l,Node* r,Node* n,string* op);
  Expression(Node* l,Node* r,Node* n,const char* op);
  
  void print();

private:
  string opstr;
  };
  
class Number: public Node {
public:
  Number(Node* l,Node* r,Node* n,string* op);
  Number(Node* l,Node* r,Node* n,const char* op);
  
  void print();

private:
  string opstr;
  };
  
class NewExpression: public Node {
  public:
    NewExpression(Node* l,Node* r,Node* n,string* op);
    NewExpression(Node* l,Node* r,Node* n,const char* op);
    
    void print();
    
  private:
    string opstr;
  };
  
  class UnaryOp: public Node {
  public:
    UnaryOp(Node* r,Node* n,string* op);
    UnaryOp(Node* r,Node* n,const char* op);
    
    void print();
    
  private:
    string opstr;
  };
  
class RelationOp: public Node {
public:
  RelationOp(Node* l,Node* r,Node* n,string* op);
  RelationOp(Node* l,Node* r,Node* n,const char* op);
  
  void print();

private:
  string opstr;
  };
  
class SumOp: public Node {
public:
  SumOp(Node* l,Node* r,Node* n,string* op);
  SumOp(Node* l,Node* r,Node* n,const char* op);
  
  void print();

private:
  string opstr;
  };
  
class ProductOp: public Node {
public:
  ProductOp(Node* l,Node* r,Node* n,string* op);
  ProductOp(Node* l,Node* r,Node* n,const char* op);
  
  void print();

private:
  string opstr;
  };

  class BracketExp: public Node {
  public:
    BracketExp(Node* l,Node* r,Node* n);
    
    void print();
  };
  
  class MultiBracket: public Node {
  public:
    MultiBracket(Node* l,Node* n,string* lop,
                 string* rop);
    MultiBracket(Node* l,Node* n,const char* lop,
                  const char* rop);
                              
    void print();
                              
  private:
    string lopstr;
    string ropstr;
  };
  
  
  #endif
  