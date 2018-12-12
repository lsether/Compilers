//program6.cpp
//Loren Sether
//COSC 4785 Fa18
//Program 06
//December 11th 2018

#include<FlexLexer.h>
#include"program6.hpp"
#include"symbolTable.hpp"
#include<iostream>
using namespace std;

Node *head;
SymbolTable *globalSymbolTable;
SymbolTable *currentSymbolTable;
string temp;
bool mainMethod;
bool thisFollow;
bool isInt;
bool notDeclared;

yyFlexLexer scanner;

Node::Node(Node* l=NULL,Node* r=NULL,Node* n=NULL):
      left(l),right(r),next(n){
        globalSymbolTable = new SymbolTable(NULL);
        currentSymbolTable = globalSymbolTable;
      }
Node::~Node()
      {
         if(next != NULL) delete next;
        if(left != NULL) delete left;
        if(right != NULL) delete right;
      }
      void Node::setNext(Node *n){next=n;}
      void Node::setLeft(Node *n){left=n;}
      void Node::setRight(Node *n){right=n;}
void Node::createSymbolTable(){
 if(left!=NULL)left->createSymbolTable();
 if(right!=NULL)right->createSymbolTable();
 if(next!=NULL)next->createSymbolTable(); 
}

ClassDeclaration::ClassDeclaration(Node* l=NULL, Node* r=NULL,Node* n=NULL,
                               string* op=NULL):
         Node(l,r,n)
         { 
           if(op != NULL) opstr=op->c_str();
         }
ClassDeclaration::ClassDeclaration(Node* l=NULL, Node* r=NULL,Node* n=NULL,
                               const char* op=NULL):
         Node(l,r,n)
         { 
           opstr=op;
         }
        
        void ClassDeclaration::createSymbolTable()
        {
          temp = "class_type";
          currentSymbolTable->addSymbolEntry(opstr, temp, 'c');
          currentSymbolTable = currentSymbolTable->getCurrentTable();
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
          currentSymbolTable = globalSymbolTable;
        }
        
         
         void ClassDeclaration::print() {
           
           cout <<" <ClassDeclaration> --> ";
           if(left!=NULL){
           cout << "class " << opstr << " <ClassBody>"<< endl;
           }
           else{
             cout << "error"<< endl<<endl;
           }
             if(left != NULL)left->print();
             if(right != NULL)right->print();
             if(next != NULL)next->print();
         }

ClassBody::ClassBody(Node* l=NULL, Node* r=NULL,Node* n=NULL,
                               string* op=NULL):
         Node(l,r,n)
         { 
           if(op != NULL) opstr=op->c_str();
         }
ClassBody::ClassBody(Node* l=NULL, Node* r=NULL,Node* n=NULL,
                               const char* op=NULL):
         Node(l,r,n)
         { 
           opstr=op;
         }
         
         void ClassBody::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL&&next!=NULL){
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
            if(next!=NULL)next->createSymbolTable();
          }
          else if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          else if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
        }
         
         void ClassBody::print() {
           cout <<" <ClassBody> --> ";
           if(left!=NULL&&right!=NULL&&next!=NULL)
           {
             cout << "{ <VarDeclaration> <ConstructorDeclaration>" << 
                     " <MethodDeclaration> }" << endl;
           }
           else if(left!=NULL&&right!=NULL&&opstr==("1"))
           {
             cout << "{ <VarDeclaration> <ConstructorDeclaration> }" << endl;
           }
           else if(left!=NULL&&right!=NULL&&opstr==("2"))
           {
             cout << "{ <ConstructorDeclaration> <MethodDeclaration> }" << endl;
           }
           else if(left!=NULL&&right!=NULL&&opstr==("3"))
           {
             cout << "{ <VarDeclaration> <MethodDeclaration> }" << endl;
           }
           else if(left!=NULL&&opstr==("1"))
           {
             cout << "{ <VarDeclaration> }" << endl;
           }
           else if(left!=NULL&&opstr==("2"))
           {
             cout << "{ <ConstructorDeclaration> }" << endl;
           }
           else if(left!=NULL&&opstr==("3"))
           {
             cout << "{ <MethodDeclaration> }" << endl;
           }
           else{
             cout << "{ "<<opstr<<" }"<<endl<<endl;
           }
             if(left != NULL)left->print();
             if(right != NULL)right->print();
           if(next != NULL)next->print();
         }
         
ClassBodyMoreVar::ClassBodyMoreVar(Node* l=NULL, Node* r=NULL,Node* n=NULL,
                               string* op=NULL):
         Node(l,r,n)
         { 
           if(op != NULL) opstr=op->c_str();
         }
ClassBodyMoreVar::ClassBodyMoreVar(Node* l=NULL, Node* r=NULL,Node* n=NULL,
                               const char* op=NULL):
         Node(l,r,n)
         { 
           opstr=op;
         }
         
         void ClassBodyMoreVar::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          else if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
        }
         
         void ClassBodyMoreVar::print() {
           if(left!=NULL&&right!=NULL)
           {
             cout <<" <VarDeclaration> --> ";
             cout << "<VarDeclaration> <VarDeclaration>" << endl;
           }
             if(left != NULL)left->print();
             if(right != NULL)right->print();
             if(next != NULL)next->print();
         }
         
ClassBodyMoreConst::ClassBodyMoreConst(Node* l=NULL, Node* r=NULL,Node* n=NULL,
                               string* op=NULL):
         Node(l,r,n)
         { 
           if(op != NULL) opstr=op->c_str();
         }
ClassBodyMoreConst::ClassBodyMoreConst(Node* l=NULL, Node* r=NULL,Node* n=NULL,
                               const char* op=NULL):
         Node(l,r,n)
         { 
           opstr=op;
         }
         
         void ClassBodyMoreConst::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          else if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
        }
         
         void ClassBodyMoreConst::print() {
           if(left!=NULL&&right!=NULL)
           {
             cout <<" <ConstructorDeclaration> --> ";
             cout << "<ConstructorDeclaration> <ConstructorDeclaration>" << 
             endl;
           }
             if(left != NULL)left->print();
             if(right != NULL)right->print();
             if(next != NULL)next->print();
         }
         
ClassBodyMoreMethod::ClassBodyMoreMethod(Node* l=NULL, Node* r=NULL,
                                         Node* n=NULL,string* op=NULL):
         Node(l,r,n)
         { 
           if(op != NULL) opstr=op->c_str();
         }
ClassBodyMoreMethod::ClassBodyMoreMethod(Node* l=NULL, Node* r=NULL,
                                         Node* n=NULL,const char* op=NULL):
         Node(l,r,n)
         { 
           opstr=op;
         }
         
         void ClassBodyMoreMethod::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          else if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
        }
         
         void ClassBodyMoreMethod::print() {
           if(left!=NULL&&right!=NULL)
           {
             cout <<" <MethodDeclaration> --> ";
             cout << "<MethodDeclaration> <MethodDeclaration>" << 
             endl;
           }
             if(left != NULL)left->print();
             if(right != NULL)right->print();
             if(next != NULL)next->print();
         }


VarDeclaration::VarDeclaration(Node* l=NULL, Node* r=NULL,Node* n=NULL,
                               string* op=NULL):
         Node(l,r,n)
         { 
           if(op != NULL) opstr=op->c_str();
         }
VarDeclaration::VarDeclaration(Node* l=NULL, Node* r=NULL,Node* n=NULL,
                               const char* op=NULL):
         Node(l,r,n)
         { 
           opstr=op;
         }
         
        void VarDeclaration::createSymbolTable()
        {
          temp = "variable";
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
          currentSymbolTable->addSymbolEntry(opstr, temp, 'v');
        }
         
         void VarDeclaration::print() {
           cout <<" <VarDeclaration> --> ";
           cout << "<Type> " << opstr<<endl;
           
             if(left != NULL)left->print();
             if(right != NULL)right->print();
           if(next != NULL)next->print();
      cout<<endl;
         }
         
Type::Type(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       string* lop=NULL,string* rop=NULL):
    Node(l,r,n)
    { 
      if(lop != NULL) lopstr=lop->c_str();
      if(rop != NULL) ropstr=rop->c_str();
    }
Type::Type(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* lop=NULL,string* rop=NULL):
    Node(l,r,n)
    { 
      lopstr=lop;
      if(rop != NULL) ropstr=rop->c_str();
    }
Type::Type(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       string* lop=NULL,const char* rop=NULL):
    Node(l,r,n)
    { 
      if(lop != NULL) lopstr=lop->c_str();
      ropstr=rop;
    }
Type::Type(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* lop=NULL,const char* rop=NULL):
    Node(l,r,n)
    { 
      lopstr=lop;
      ropstr=rop;
    }
    
    void Type::createSymbolTable()
        {
          if(lopstr==("1")&&left!=NULL)
      {
        temp = "int multibrackets";
      }
      else if(ropstr==("1")){
        temp = lopstr + " multibrackets";
      }
      else if(lopstr==("1"))
      {
        temp = "int";
      }
      else{
        temp = lopstr;
      }
        }
    
    void Type::print() { 
      cout << " <Type> --> ";
      if(lopstr==("1"))
      {
        cout << "int" <<endl;
      }
      else if(ropstr==("1")){
        cout << "<Identifier> <MultiBracket> " <<endl;
        cout << " <Identifier> --> "<<lopstr<<endl;
      }
      else{
        cout << "<Identifier> " <<endl;
        cout << " <Identifier> --> "<<lopstr<<endl;
      }
       if(left != NULL)left->print();
       if(right != NULL)right->print();
       if(next != NULL)next->print();
    } 
       
ConstructorDeclaration::ConstructorDeclaration(Node* l=NULL,Node* r=NULL,
                                               Node* n=NULL,string* op=NULL):
    Node(l,r,n)
    { 
      if(op != NULL) opstr=op->c_str();
    }
ConstructorDeclaration::ConstructorDeclaration(Node* l=NULL,Node* r=NULL,
                                               Node* n=NULL,
                                               const char* op=NULL):
    Node(l,r,n)
    { 
      opstr=op;
    }
    
    void ConstructorDeclaration::createSymbolTable()
        {
          if(!mainMethod){
            if(opstr=="main"){
              mainMethod=true;
            }
          temp = "constructor_type";
          currentSymbolTable->addSymbolEntry(opstr, temp, 'k');
          currentSymbolTable = currentSymbolTable->getCurrentTable();
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          currentSymbolTable = currentSymbolTable->getParentTable();
        }
        else if(opstr!="main"){
          temp = "constructor_type";
          currentSymbolTable->addSymbolEntry(opstr, temp, 'k');
          currentSymbolTable = currentSymbolTable->getCurrentTable();
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          currentSymbolTable = currentSymbolTable->getParentTable();
        }
        else{
          cerr<<"Cannot have more than 1 main method declared!"<<endl<<endl;
        }
        }
        
    
    void ConstructorDeclaration::print() { 
      cout << " <ConstructorDeclaration> --> ";
      cout << opstr << " ( <ParameterList> ) <Block>"<<endl;
      
      if(left != NULL)left->print();
      if(right != NULL)right->print();
      if(next != NULL)next->print();
      cout<<endl;
    }
    
MethodDeclaration::MethodDeclaration(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       string* op=NULL):
    Node(l,r,n)
    { 
      if(op != NULL) opstr=op->c_str();
    }
MethodDeclaration::MethodDeclaration(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
    Node(l,r,n)
    { 
      opstr=op;
    }
    
    void MethodDeclaration::createSymbolTable()
        {
          if(!mainMethod){
            if(opstr=="main"){
              mainMethod=true;
            }
          temp = "method_type";
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
          currentSymbolTable->addSymbolEntry(opstr, temp, 'm');
          currentSymbolTable = currentSymbolTable->getCurrentTable();
          if(right!=NULL&&next!=NULL)
          {
            if(right!=NULL)right->createSymbolTable();
            if(next!=NULL)next->createSymbolTable();
          }
          currentSymbolTable = currentSymbolTable->getParentTable();
          }
          else if(opstr!="main")
          {
            temp = "method_type";
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
          currentSymbolTable->addSymbolEntry(opstr, temp, 'm');
          currentSymbolTable = currentSymbolTable->getCurrentTable();
          if(right!=NULL&&next!=NULL)
          {
            if(right!=NULL)right->createSymbolTable();
            if(next!=NULL)next->createSymbolTable();
          }
          currentSymbolTable = currentSymbolTable->getParentTable();
          }
          else{
            cerr<<"Cannot have more than 1 main method declared!"<<endl<<endl;
          }
        }
    
    void MethodDeclaration::print() { 
      cout << " <MethodDeclaration> --> ";
      cout << "<ResultType> " << opstr << " ( <ParameterList> ) <Block>"<<endl;
      
      if(left != NULL)left->print();
      if(right != NULL)right->print();
      if(next != NULL)next->print();
      cout<<endl;
    }
    
ResultType::ResultType(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       string* op=NULL):
    Node(l,r,n)
    { 
      if(op != NULL) opstr=op->c_str();
    }
ResultType::ResultType(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
    Node(l,r,n)
    { 
      opstr=op;
    }
    
    void ResultType::createSymbolTable()
        {
          temp = "variable";
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
          else{
            temp = "void";
          }
        }
    
    void ResultType::print() { 
      cout << " <ResultType> --> ";
      if(left!=NULL)
      {
        cout << "<Type>" << endl;
      }
      else{
        cout << opstr <<endl;
      }
      
      if(left != NULL)left->print();
      if(right != NULL)right->print();
      if(next != NULL)next->print();
    }
    
ParameterList::ParameterList(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                             string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
ParameterList::ParameterList(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                             const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void ParameterList::createSymbolTable()
        {
          
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
        }
  
  void ParameterList::print() {
    cout << " <ParameterList> --> ";
    if (left==NULL)
    {
      cout << "<Empty>" << endl;
    }
    else if(left!=NULL && !opstr.empty())
    {
      cout << "<ParameterList> , <Parameter>" << endl;
    }
    else if(left!=NULL)
    {
      cout << " <Parameter>" << endl;
    }
    
    if(left != NULL)left->print();
    if(right != NULL)right->print();
    if(next != NULL)next->print();
  }
    
Parameter::Parameter(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                               string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
Parameter::Parameter(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void Parameter::createSymbolTable()
        {
          temp = "variable";
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
          currentSymbolTable->addSymbolEntry(opstr, temp, 'v');
        }
        
  void Parameter::print() {
    cout << " <Parameter> --> ";
    if(left!=NULL)
    {
      cout << "<Type> " << opstr <<endl;
    }
    
    if(left != NULL)left->print();
    if(right != NULL)right->print();
    if(next != NULL)next->print();
  }    
    
Block::Block(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                               string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
Block::Block(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void Block::createSymbolTable()
        {
          if(left!=NULL && opstr=="<LocalVarDeclaration>")
          {
            if(left!=NULL)left->createSymbolTable();
          }
          if(left!=NULL && opstr=="<Statement>")
          {
            if(left!=NULL)left->createSymbolTable();
          }
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
        }
  
  void Block::print() {
    cout << " <Block> --> ";
    if(left!=NULL&&right!=NULL)
    {
      cout << "{ <LocalVarDeclaration> <Statement> }"<<endl;
    }
    else if(left!=NULL){
      cout << "{ " << opstr << " }" << endl;
    }
    else{
      cout << "{ }"<<endl;
    }
    
    if(left != NULL)left->print();
    if(right != NULL)right->print();
    if(next != NULL)next->print();
  }    
    
LocalVarDeclaration::LocalVarDeclaration(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                               string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
LocalVarDeclaration::LocalVarDeclaration(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void LocalVarDeclaration::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
          currentSymbolTable->addSymbolEntry(opstr, temp, 'v');
        }
  
  void LocalVarDeclaration::print() {
    cout << " <LocalVarDeclaration> --> ";
    if(left!=NULL&&right!=NULL)
    {
      cout << "<LocalVarDeclaration> <Type> "<<opstr<<" ;"<<endl;
    }
    else{
      cout << "<Type> " << opstr << " ;" << endl;
    }
    
    if(left != NULL)left->print();
    if(right != NULL)right->print();
    if(next != NULL)next->print();
  }    
  
StatementMore::StatementMore(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                         string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
StatementMore::StatementMore(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void StatementMore::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          if(left!=NULL){
            if(left!=NULL)left->createSymbolTable();
          }
        }
  
  void StatementMore::print() {
    
    if(left != NULL)left->print();
    if(right != NULL)right->print();
    if(next != NULL)next->print();
  }    
    
Statement::Statement(Node* l=NULL,Node* r=NULL,Node* n=NULL,string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
Statement::Statement(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void Statement::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL&&opstr=="1")
          {
            
              if(left!=NULL)left->createSymbolTable();
            if(!currentSymbolTable->symbolExists(temp, 'v'))
            {
              cerr<<"Not declared variable!"<<endl<<endl;
            }
            else{
              if(right!=NULL)right->createSymbolTable();
            }
          }
          if(left!=NULL&&right!=NULL&&opstr=="2")
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          if(left!=NULL&&opstr=="2")
          {
            if(left!=NULL)left->createSymbolTable();
          }
          if(left!=NULL&&opstr=="3")
          {
            if(left!=NULL)left->createSymbolTable();
          }
          if(left!=NULL&&right!=NULL&&opstr=="5")
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          if(left!=NULL&&opstr=="4")
          {
            if(left!=NULL)left->createSymbolTable();
          }
          if(left!=NULL&&opstr=="5")
          {
            if(left!=NULL)left->createSymbolTable();
          }
        }
  
  void Statement::print() {
    cout << " <Statement> --> ";
    if (left!=NULL&&right!=NULL&&next!=NULL&&opstr==("1"))
    {
      cout << "<Statement> <Name> = <Expression> ;" << endl;
    }
    if (left!=NULL&&right!=NULL&&next!=NULL&&opstr==("2"))
    {
      cout << "<Statement> <Name> ( <Arglist> ) ;" << endl;
    }
    if (left!=NULL&&right!=NULL&&next!=NULL&&opstr==("3"))
    {
      cout << "<Statement> while ( <Expression> ) <Statement> ;" << endl;
    }
    if (left!=NULL&&right!=NULL&&opstr==("1"))
    {
      cout << "<Name> = <Expression> ;" << endl;
    }
    else if (left!=NULL&&right!=NULL&&opstr==("2"))
    {
      cout << "<Name> ( <Arglist> ) ;" << endl;
    }
    else if (left!=NULL&&right!=NULL&&opstr==("3"))
    {
      cout << "<Statement> print ( <Arglist> ) ;" << endl;
    }
    else if (left!=NULL&&right!=NULL&&opstr==("4"))
    {
      cout << "<Statement> <ConditionalStatement>" << endl;
    }
    else if (left!=NULL&&right!=NULL&&opstr==("5"))
    {
      cout << "while ( <Expression> ) <Statement> ;" << endl;
    }
    else if (left!=NULL&&right!=NULL&&opstr==("6"))
    {
      cout << "<Statement> return <OptionalExpression> ;" << endl;
    }
    else if (left!=NULL&&right!=NULL&&opstr==("7"))
    {
      cout << "<Statement> <Block>" << endl;
    }
    else if(left!=NULL && opstr==("1"))
    {
      cout << "<Statement> ;" << endl;
    }
    else if(left!=NULL && opstr==("2"))
    {
      cout << "print ( <Arglist> ) ;" << endl;
    }
    else if(left!=NULL && opstr==("3"))
    {
      cout << "<ConditionalStatement>" << endl;
    }
    else if(left!=NULL && opstr==("4"))
    {
      cout << "return <OptionalExpression> ;" << endl;
    }
    else if(left!=NULL && opstr==("5"))
    {
      cout << "<Block>" << endl;
    }
    else {
      cout << ";" << endl;
    }
    
    if(left != NULL)left->print();
    if(right != NULL)right->print();
    if(next != NULL)next->print();
  }    

Name::Name(Node* l=NULL,Node* r=NULL,Node* n=NULL,string* lop=NULL,
           string* rop=NULL):
      Node(l,r,n)
      { 
        if(lop != NULL) lopstr=lop->c_str();
        if(rop != NULL) ropstr=rop->c_str();
      }
Name::Name(Node* l=NULL,Node* r=NULL,Node* n=NULL,const char* lop=NULL, 
              string* rop = NULL):
      Node(l,r,n)
      { 
        lopstr=lop;
        if(rop != NULL) ropstr=rop->c_str();
      }
Name::Name(Node* l=NULL,Node* r=NULL,Node* n=NULL,string* lop=NULL, 
              const char* rop = NULL):
      Node(l,r,n)
      { 
        if(lop != NULL) lopstr=lop->c_str();
        ropstr=rop;
      }
Name::Name(Node* l=NULL,Node* r=NULL,Node* n=NULL,const char* lop=NULL, 
              const char* rop = NULL):
      Node(l,r,n)
      { 
        lopstr=lop;
        ropstr=rop;
      }
      
      void Name::createSymbolTable()
        {
          if(left==NULL&&right==NULL&&next==NULL&&ropstr=="1")
          {
            temp=lopstr;
          }
          if(left!=NULL&&lopstr==".")
          {
            thisFollow=true;
            if(left!=NULL)left->createSymbolTable();
          }
          if(left==NULL&&right==NULL&&next==NULL&&lopstr=="this")
          {
            if(!thisFollow){
              cerr << "this needs to be only at beginning of dotted name!"<<endl
              <<endl;
            }
            thisFollow=false;
          }
        }
      
      void Name::print() { 
                cout << " <Name> -->";
                if(left!=NULL&&right!=NULL)
                {
                  cout << " <Name> <BracketExp>"<<endl;
                }
                else if(left==NULL&&right==NULL&&next==NULL)
                {
                  if(ropstr=="")
                  {
                    cout << " " << lopstr << " "<<endl;
                  }
                  else{
                    cout << " " << lopstr << " "<<endl;
                  }
                }
                else if(ropstr=="")
                {
                  cout<<" <Identifier> <BracketExp>"<<endl;
                  cout<<" <Identifier> --> " << lopstr<<endl;
                }
                else
                {
                  cout << " <Name>";
                  if(!lopstr.empty())
                 cout << " " << lopstr << " ";
                if(!ropstr.empty())
                 cout << " " << ropstr << " ";
                cout <<endl;
                }
                
                if(left != NULL)left->print();
                if(right != NULL)right->print();
                if(next != NULL)next->print();
              }
        
Arglist::Arglist(Node* l=NULL,Node* r=NULL,Node* n=NULL,string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
Arglist::Arglist(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void Arglist::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
        }
  
  void Arglist::print() {
    cout << " <Arglist> --> ";
    if (left==NULL)
    {
      cout << "<Empty>" << endl;
    }
    else if(left!=NULL && !opstr.empty())
    {
      cout << "<Arglist> , <Expression>" << endl;
    }
    else if(left!=NULL)
    {
      cout << " <Expression>" << endl;
    }
    
    if(left != NULL)left->print();
    if(right != NULL)right->print();
    if(next != NULL)next->print();
  }
  
ConditionalStatement::ConditionalStatement(Node* l=NULL,Node* r=NULL,
                                       Node* n=NULL,string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
ConditionalStatement::ConditionalStatement(Node* l=NULL,Node* r=NULL,
                                           Node* n=NULL, const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void ConditionalStatement::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL&&next!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
            if(next!=NULL)next->createSymbolTable();
          }
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
        }
  
  void ConditionalStatement::print() { 
    cout << " <ConditionalStatement> --> ";
    if(left!=NULL&&right!=NULL&&next!=NULL)
    {
      cout << "if ( <Expression> ) <Statement> else <Statement>"<<endl;
    }
    else if(left!=NULL&&right!=NULL){
      cout << "if ( <Expression> ) <Statement>" << endl;
    }
    if(left != NULL)left->print();
    if(right != NULL)right->print();
    if(next != NULL)next->print();
    }  
  
OptionalExpression::OptionalExpression(Node* l=NULL,Node* r=NULL,
                                       Node* n=NULL,string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
OptionalExpression::OptionalExpression(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void OptionalExpression::createSymbolTable()
        {
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
        }
  
  void OptionalExpression::print() { 
    cout << " <OptionalExpression> --> ";
    if(left!=NULL)
    {
      cout << "<Expression>"<<endl;
    }
    else {
      cout << "<Empty>" << endl;
    }
    if(left != NULL)left->print();
    if(right != NULL)right->print();
    if(next != NULL)next->print();
    }

Expression::Expression(Node* l=NULL,Node* r=NULL,Node* n=NULL,string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
Expression::Expression(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void Expression::createSymbolTable()
        {
          
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
            if(right!=NULL)right->createSymbolTable();
          }
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
        }
  
  void Expression::print() { 
    cout << " <Expression> --> ";
    if(left!=NULL && right != NULL && !opstr.empty())
    {
      cout << "<Name> ( <Arglist> )"<<endl;
    }
    if(opstr==""){
      cout<<" ( <Expression> )" << endl;
    }
    else if(left==NULL&&right==NULL&&next==NULL){
       if(!opstr.empty())
         cout << " " << opstr << " " << endl;
    }
    else if(left!=NULL&&right==NULL&&next == NULL)
    {
      cout << opstr << endl;
    }
    if(left != NULL)left->print();
    if(right != NULL)right->print();
    if(next != NULL)next->print();
    }
    
Number::Number(Node* l=NULL,Node* r=NULL,Node* n=NULL,string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
Number::Number(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void Number::createSymbolTable()
        {
          isInt=true;
        }
  
  void Number::print() { 
    cout << " <Expression> --> <Number>"<<endl;
    cout << " <Number> --> "<<opstr<<endl;
    if(left != NULL)left->print();
    if(right != NULL)right->print();
    if(next != NULL)next->print();
    }
    
NewExpression::NewExpression(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                             string* op=NULL):
    Node(l,r,n)
    { 
      if(op != NULL) opstr=op->c_str();
    }
NewExpression::NewExpression(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                             const char* op=NULL):
    Node(l,r,n)
    { 
      opstr=op;
    }
    
    void NewExpression::createSymbolTable()
        {
          if(left!=NULL&&!opstr.empty())
          {
            if(opstr==("1"))
              {
          
              }
              else if(opstr==("2"))
              {
          
              }
              else{
                if(left!=NULL)left->createSymbolTable();
              }
              }
        }
    
    void NewExpression::print() { 
      cout << " <NewExpression> --> ";
      cout << "new";
      if(left==NULL && right==NULL && next==NULL&&!opstr.empty())
      {
        if(opstr==("1")){
          cout <<" <Type> " << endl;
          cout << " <Type> --> int"<<endl;
        }
        else{
          cout <<" <Type> " << endl;
          cout << " <Type> --> <Identifier>" <<endl;
          cout<< " <Identifier> --> " <<opstr <<endl;
        }
      }
      else if(left!=NULL&&right!=NULL&&!opstr.empty())
      {
        cout << " <Type> <BracketExp> <MultiBracket>"<<endl;
        cout<<" <Type> --> "<<opstr<<endl;
      }
      else if(left!=NULL&&right!=NULL&&opstr.empty())
      {
        cout << " <Type> <BracketExp> <MultiBracket>"<<endl;
        cout<<" <Type> --> int"<<endl;
      }
      else if(left!=NULL&&!opstr.empty())
      {
        if(opstr==("1"))
        {
          cout << " <Type> <BracketExp>"<<endl;
          cout<<" <Type> --> int"<<endl;
        }
        else if(opstr==("2"))
        {
          cout << " <Type>  <MultiBracket>"<<endl;
          cout<<" <Type> --> int"<<endl;
        }
        else{
          cout << " <Type> ( <Arglist> )"<<endl;
          cout << " <Type> --> <Identifier>"<<endl;
          cout << " <Identifier> --> "<<opstr<<endl;
        }
      }
      else if(right!=NULL&&!opstr.empty())
      {
        cout << " <Type> <BracketExp>"<<endl;
          cout<<" <Type> --> <Identifier>"<<endl;
          cout << " <Identifier> --> "<<opstr<<endl;
      }
      else if(next!=NULL&&!opstr.empty())
      {
        cout << " <Type> <MultiBracket>"<<endl;
          cout<<" <Type> --> <Identifier>"<<endl;
          cout << " <Identifier> --> "<<opstr<<endl;
      }
        if(left != NULL)left->print();
        if(right != NULL)right->print();
      if(next != NULL)next->print();
    } 
  
UnaryOp::UnaryOp(Node* r=NULL,Node* n=NULL,string* op=NULL):
    Node(r,n)
    { 
      if(op != NULL) opstr=op->c_str();
    }
UnaryOp::UnaryOp(Node* r=NULL,Node* n=NULL,const char* op=NULL):
    Node(r,n)
    { 
      opstr=op;
    }
    
    void UnaryOp::createSymbolTable()
        {
          if(left!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
          if(!isInt)
          {
            cerr << "Operations must be with numbers!"<<endl<<endl;
          }
          isInt=false;
        }
    
    void UnaryOp::print() { 
       if(!opstr.empty())
         cout << " <Expression> -->";
         cout << " " << "<UnaryOp>" << " ";
         cout <<"<Expression>"<<endl;
       cout << " <UnaryOp> -- > " << opstr << endl;
       if(left != NULL)left->print();
       if(right != NULL)right->print();
       if(next != NULL)next->print();
    }
    
RelationOp::RelationOp(Node* l=NULL,Node* r=NULL,Node* n=NULL,string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
RelationOp::RelationOp(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void RelationOp::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
          if(left!=NULL&&right!=NULL)
          {
            if(right!=NULL)right->createSymbolTable();
          }
          if(!isInt)
          {
            cerr << "Operations must be with numbers!"<<endl<<endl;
          }
          isInt=false;
        }
  
  void RelationOp::print() { 
    cout << " <Expression> --> ";
    if(left!=NULL && right != NULL && !opstr.empty())
    {
      cout << "<Expression> "<< "<RelationOp>" << " <Expression>"<<endl;
    }
    if(opstr==""){
      cout<<" ( <Expression> )" << endl;
    }
    else if(left==NULL&&right==NULL&&next==NULL){
       if(!opstr.empty())
         cout << " " << opstr << " " << endl;
    }
    else if(left!=NULL&&right==NULL&&next == NULL)
    {
      cout << opstr << endl;
    }
    if(left != NULL)left->print();
    cout << " <RelationOp> --> " << opstr << endl;
    if(right != NULL)right->print();
    if(next != NULL)next->print();
    }
    
SumOp::SumOp(Node* l=NULL,Node* r=NULL,Node* n=NULL,string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
SumOp::SumOp(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void SumOp::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
          if(left!=NULL&&right!=NULL)
          {
            if(right!=NULL)right->createSymbolTable();
          }
          if(!isInt)
          {
            cerr << "Operations must be with numbers!"<<endl<<endl;
          }
          isInt=false;
        }
  
  void SumOp::print() { 
    cout << " <Expression> --> ";
    if(left!=NULL && right != NULL && !opstr.empty())
    {
      cout << "<Expression> "<< "<SumOp>" << " <Expression>"<<endl;
    }
    if(opstr==""){
      cout<<" ( <Expression> )" << endl;
    }
    else if(left==NULL&&right==NULL&&next==NULL){
       if(!opstr.empty())
         cout << " " << opstr << " " << endl;
    }
    else if(left!=NULL&&right==NULL&&next == NULL)
    {
      cout << opstr << endl;
    }
    if(left != NULL)left->print();
    cout << " <SumOp> --> " << opstr << endl;
    if(right != NULL)right->print();
    if(next != NULL)next->print();
    }
    
ProductOp::ProductOp(Node* l=NULL,Node* r=NULL,Node* n=NULL,string* op=NULL):
  Node(l,r,n)
  { 
    if(op != NULL) opstr=op->c_str();
  }
ProductOp::ProductOp(Node* l=NULL,Node* r=NULL,Node* n=NULL,
                       const char* op=NULL):
  Node(l,r,n)
  { 
    opstr=op;
  }
  
  void ProductOp::createSymbolTable()
        {
          if(left!=NULL&&right!=NULL)
          {
            if(left!=NULL)left->createSymbolTable();
          }
          if(left!=NULL&&right!=NULL)
          {
            if(right!=NULL)right->createSymbolTable();
          }
          if(!isInt)
          {
            cerr << "Operations must be with numbers!"<<endl<<endl;
          }
          isInt=false;
        }
  
  void ProductOp::print() { 
    cout << " <Expression> --> ";
    if(left!=NULL && right != NULL && !opstr.empty())
    {
      cout << "<Expression> "<< "<ProductOp>" << " <Expression>"<<endl;
    }
    if(opstr==""){
      cout<<" ( <Expression> )" << endl;
    }
    else if(left==NULL&&right==NULL&&next==NULL){
       if(!opstr.empty())
         cout << " " << opstr << " " << endl;
    }
    else if(left!=NULL&&right==NULL&&next == NULL)
    {
      cout << opstr << endl;
    }
    if(left != NULL)left->print();
    cout << " <ProductOp> --> " << opstr << endl;
    if(right != NULL)right->print();
    if(next != NULL)next->print();
    }
 
   
  
BracketExp::BracketExp(Node* l=NULL,Node* r=NULL,Node* n=NULL):
    Node(l,r,n)
    { 
      
    }
    
    void BracketExp::print() {
      cout << " <BracketExp> --> ";
      if(right==NULL)
      {
        cout << "[ <Expression> ]" << endl;
      }
      else
      {
        cout << "<BracketExp> [ <Expression> ]" << endl;
      }
      if(left != NULL)left->print();
      if(right !=NULL)right->print();
      if(next != NULL)next->print();
    }
  
  
MultiBracket::MultiBracket(Node* l=NULL,Node* n=NULL,string* lop=NULL,
                 string* rop=NULL):
    Node(l,n)
    { 
       if(lop != NULL) lopstr=lop->c_str();
       if(rop != NULL) ropstr=rop->c_str();
    }
MultiBracket::MultiBracket(Node* l=NULL,Node* n=NULL,const char* lop=NULL,
                  const char* rop=NULL):
    Node(l,n)
    { 
      lopstr=lop;
      ropstr=rop;
    }
                              
    void MultiBracket::print() { 
      cout << " <MultiBracket> -->";
      if(left!=NULL){
        cout << " <MultiBracket> [ ]"<<endl;
      }
      else{
        if(!lopstr.empty())
        cout << " " << lopstr << " ";
        if(!ropstr.empty())
        cout << " " << ropstr << " ";
       }
                      
       if(left != NULL)left->print();          
       cout << endl;
       if(right != NULL)right->print();
       if(next != NULL)next->print();
                              }
              
  
  
extern void yyparse();
int main()
{
  //yydebug=1;
  mainMethod = false;
  thisFollow = false;
  isInt = false;
  notDeclared = true;
  head=NULL;
  yyparse();
     if(head!=NULL){
        head->createSymbolTable();
     }
  //if(head != NULL) {
    //cout << "\n\nAnd now the 'tree'\n\n";
    //cout << " <Program> --> <ClassDeclaration>"<<endl<<endl;
    //head->print();
    //cout << endl;
  //}
  globalSymbolTable->printEntries();
  return 0;
}