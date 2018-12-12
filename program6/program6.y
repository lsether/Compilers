//Loren Sether
//Cosc 4785
//Program 6
//December 11th 2018

%{
  #include<iostream>
  #include<string>
  #include"program6.hpp"
  #include<FlexLexer.h>
  
  using namespace std; // cause I am lazy
  
  // these are declared in tester.cpp
  extern yyFlexLexer scanner;
  extern Node *head;
  
  /*
   * And this is the magic to make this work with a C++ scanner.
   * Of course change the names to protect the innocent.
   */
  
  #define yylex() scanner.yylex()
  /*
   * Defined in the .lpp file.
   */
  
  extern void yyerror(const char *str);
  
  /*
   * The %defines is the same as -d on the command line but you could also 
   s pec*ify
   * a filename with this. Otherwise, the "output" defines will be named the 
   same
   * as the .cpp file only with .hpp
   *
   * The union becomes yylval. Cannot use something that has a constructor.
   */
  
  %}
  
  %defines
  %define parse.error verbose
  
  %output "program6_tab.cpp"
  
  %union {
    string *str;
    Node *n_type;
  }
  
  %token MINUS OR 
  %token TIMES DIV MOD AND 
  %token EQ NE GE LE GT LT 
  %token LPAREN RPAREN
  %token NOT
  %token DOT THIS
  %token LBRACK RBRACK
  %token INT
  %token NEW
  %token NULLT
  %token READ
  %token SEMI
  %token COMMA
  %token IF ELSE
  %token ASSIGN PRINT WHILE RETURN
  %token LBRACE RBRACE
  %token VOID CLASS
  %token<str> ID NUMBER
  %type<n_type> program expression final name multibrackets bracketexp type 
                newExpression varDeclaration unaryOp relationOp sumOp
                productOp arglist statementMore optionalExpression 
                conditionalStatement statement block localVarDeclaration
                parameter parameterList resultType methodDeclaration
                constructorDeclaration classBody classBodyMoreVar
                classBodyMoreConst classBodyMoreMethod classDeclaration
  
  %left EQ NE GE LE GT LT
  %left PLUS MINUS OR
  %left TIMES DIV MOD AND
  %right THEN ELSE LBRACK
  %precedence NOT UPLUS UMINUS
  
  
  %%
  final: program    {head=$$;}
  program: classDeclaration {
    $$=$1;
  }
  ;
  
classDeclaration: CLASS ID classBody classDeclaration{
    $$ = new ClassDeclaration($3,$4,NULL,$2);
  }
  | CLASS ID classBody {
    $$ = new ClassDeclaration($3,NULL,NULL,$2);
  }
  | CLASS error classBody {
    yyerrok;
    cout<<"Error in classDeclaration"<<endl;
    $$=new ClassDeclaration(NULL,NULL,NULL,"error");
  }
  | error ID classBody {
    yyerrok;
    cout<<"Error in classDeclaration"<<endl;
    $$=new ClassDeclaration(NULL,NULL,NULL,"error");
  }
  | CLASS ID error {
    yyerrok;
    cout<<"Error in classDeclaration"<<endl;
    $$=new ClassDeclaration(NULL,NULL,NULL,"error");
  }
  ;
  
classBody: LBRACE classBodyMoreMethod RBRACE {
    $$ = new ClassBody($2,NULL,NULL,"3");
  }
  | LBRACE classBodyMoreVar classBodyMoreConst classBodyMoreMethod RBRACE {
    $$ = new ClassBody($2,$3,$4,"");
  }
  | LBRACE classBodyMoreVar classBodyMoreMethod RBRACE {
    $$ = new ClassBody($2,$3,NULL,"3");
  }
  | LBRACE classBodyMoreConst RBRACE {
    $$ = new ClassBody($2,NULL,NULL,"2");
  }
  | LBRACE RBRACE {
    $$ = new ClassBody(NULL,NULL,NULL,"");
  }
  | LBRACE classBodyMoreVar classBodyMoreConst RBRACE {
    $$ = new ClassBody($2,$3,NULL,"1");
  }
  | LBRACE classBodyMoreVar RBRACE {
    $$ = new ClassBody($2,NULL,NULL,"1");
  }
  | LBRACE classBodyMoreConst classBodyMoreMethod RBRACE {
    $$ = new ClassBody($2,$3,NULL,"2");
  }
  | LBRACE error RBRACE {
    yyerrok;
    cout << "Error in classBody"<<endl;
    $$ = new ClassBody(NULL,NULL,NULL,"error");
  }
  ;
  
classBodyMoreVar: varDeclaration {
    $$ = new ClassBodyMoreVar($1,NULL,NULL,"");
  }
  | classBodyMoreVar varDeclaration {
    $$ = new ClassBodyMoreVar($1,$2,NULL,"");
  }
  ;
  
classBodyMoreConst: constructorDeclaration {
    $$ = new ClassBodyMoreConst($1,NULL,NULL,"");
  }
  | classBodyMoreConst constructorDeclaration {
    $$ = new ClassBodyMoreConst($1,$2,NULL,"");
  }
  ;
  
classBodyMoreMethod: methodDeclaration {
    $$ = new ClassBodyMoreMethod($1,NULL,NULL,"");
  }
  | classBodyMoreMethod methodDeclaration {
    $$ = new ClassBodyMoreMethod($1,$2,NULL,"");
  }
  ;
  
  varDeclaration: resultType ID SEMI {
    $$ = new VarDeclaration($1,NULL,NULL,$2);
  }
  ;
  
type: INT {
    $$ = new Type(NULL,NULL,NULL,"1","");
  }
  | ID {
    $$ = new Type(NULL,NULL,NULL,$1,"");
  }
  | INT multibrackets{
    $$ = new Type($2,NULL,NULL,"1","");
  }
  | ID multibrackets{
    $$ = new Type($2,NULL,NULL,$1,"1");
  }
  ;
  
constructorDeclaration: ID LPAREN parameterList RPAREN block {
    $$ = new ConstructorDeclaration($3,$5,NULL,$1);
  }
  ;
  
methodDeclaration: resultType ID LPAREN parameterList RPAREN block {
    $$ = new MethodDeclaration($1,$4,$6,$2);
  }
  ;
  
resultType: type {
    $$ = new ResultType($1,NULL,NULL,"");
  }
  | VOID {
    $$ = new ResultType(NULL,NULL,NULL,"void");
  }
  ;
  
parameterList: %empty {
    $$ = new ParameterList(NULL,NULL,NULL,"");
  }
  | parameter {
    $$ = new ParameterList($1,NULL,NULL,"");
  }
  | parameterList COMMA parameter {
    $$ = new ParameterList($1,$3,NULL,",");
  }
  ;
  
parameter: type ID {
    $$ = new Parameter($1,NULL,NULL,$2);
  }
  ;
  
block: LBRACE RBRACE {
    $$ = new Block(NULL,NULL,NULL,"");
  }
  | LBRACE localVarDeclaration RBRACE {
    $$ = new Block($2,NULL,NULL,"<LocalVarDeclaration>");
  }
  | LBRACE statementMore RBRACE {
    $$ = new Block($2,NULL,NULL,"<Statement>");
  } 
  | LBRACE localVarDeclaration statementMore RBRACE {
    $$ = new Block($2,$3,NULL,"");
  }
  
localVarDeclaration: type ID SEMI {
    $$ = new LocalVarDeclaration($1,NULL,NULL,$2);
  }
  | localVarDeclaration type ID SEMI {
    $$ = new LocalVarDeclaration($1,$2,NULL,$3);
  }
  ;
  

statementMore: statement {
    $$ = new StatementMore($1,NULL,NULL,"");
  }
  | statementMore statement {
    $$ = new StatementMore($1,$2,NULL,"");
  }
  ;
  
statement: SEMI {
    $$ = new Statement(NULL,NULL,NULL,";");
  }
  | name ASSIGN expression SEMI {
    $$ = new Statement($1,$3,NULL,"1");
  }
  | name LPAREN arglist RPAREN SEMI {
    $$ = new Statement($1,$3,NULL,"2");
  }
  | PRINT LPAREN arglist RPAREN SEMI {
    $$ = new Statement($3,NULL,NULL,"2");
  }
  | conditionalStatement {
    $$ = new Statement($1,NULL,NULL,"3");
  }
  | WHILE LPAREN expression RPAREN statement {
    $$ = new Statement($3,$5,NULL,"5");
  }
  | RETURN optionalExpression SEMI {
    $$ = new Statement($2,NULL,NULL,"4");
  }
  | block {
    $$ = new Statement($1,NULL,NULL,"5");
  }
  ;
  
  
name: THIS  {
    $$= new Name(NULL,NULL,NULL,"this","");
  }
  | ID       {
    $$= new Name(NULL,NULL,NULL,$1,"1");
  }
  | name DOT ID {
    $$ = new Name($1,NULL,NULL,".",$3);
  }
  | name bracketexp %prec LBRACK {
    $$ = new Name($1,$2,NULL,"","");
  }
  | ID bracketexp %prec LBRACK {
    $$ = new Name($2,NULL,NULL,$1,"");
  }
  ;
  
  
arglist: %empty {
    $$ = new Arglist(NULL,NULL,NULL,"");
  }
  | expression {
    $$ = new Arglist($1,NULL,NULL,"");
  }
  | arglist COMMA expression {
    $$ = new Arglist($1,$3,NULL,",");
  }
  ;
  
conditionalStatement: IF LPAREN expression RPAREN statement %prec THEN {
    $$ = new ConditionalStatement($3,$5,NULL,"if()");
  }
  | IF LPAREN expression RPAREN statement ELSE statement {
    $$ = new ConditionalStatement($3,$5,$7,"if()else");
  }
  ;
  
optionalExpression: %empty {
    $$ = new OptionalExpression(NULL,NULL,NULL,"");
  }
  | expression {
    $$ = new OptionalExpression($1,NULL,NULL,"");
  }
  ;
  
  expression: name           {
    //cout <<  "expr -> ID : " << $1 << endl;
    $$= new Expression($1,NULL,NULL,"<Name>");
  }
  | NUMBER          {
    //cout << "expr -> NUM : " << $1 << endl;
    $$ = new Number(NULL,NULL,NULL,$1);
  }
  | NULLT       {
    $$ = new Expression(NULL,NULL,NULL,"null");
  }
  | name LPAREN arglist RPAREN {
    $$ = new Expression($1,$3,NULL,"<Name> ( )");
  }
  | READ LPAREN RPAREN  {
    $$ = new Expression(NULL,NULL,NULL,"read ( )");
  }
  | newExpression       {
    $$ = new Expression($1,NULL,NULL,"<NewExpression>");
  }
  | unaryOp
  | relationOp
  | sumOp
  | productOp
  | LPAREN expression RPAREN {
    $$=new Expression($2,NULL,NULL,"");
  }
  ;
  
  newExpression: NEW ID LPAREN arglist RPAREN  {
    $$ = new NewExpression($4,NULL,NULL,$2);
  }
  | NEW INT                    {
    $$ = new NewExpression(NULL,NULL,NULL,"1");
  }
  | NEW INT bracketexp         {
    $$ = new NewExpression($3,NULL,NULL,"1");
  }
  | NEW INT bracketexp multibrackets {
    $$ = new NewExpression($3,$4,NULL,"");
  }
  | NEW INT multibrackets {
    $$ = new NewExpression($3,NULL,NULL,"2");
  }
  | NEW ID                    {
    $$ = new NewExpression(NULL,NULL,NULL,$2);
  }
  | NEW ID bracketexp         {
    $$ = new NewExpression(NULL,$3,NULL,$2);
  }
  | NEW ID bracketexp multibrackets {
    $$ = new NewExpression($3,$4,NULL,$2);
  }
  | NEW ID multibrackets {
    $$ = new NewExpression(NULL,NULL,$3,$2);
  }
  ;
  
  unaryOp: MINUS expression %prec UMINUS {
    $$ = new UnaryOp($2,NULL,"-");
  }
  | PLUS expression %prec UPLUS {
    $$ = new UnaryOp($2,NULL,"+");
  }
  | NOT expression {
    $$ = new UnaryOp($2,NULL,"!");
  }
  ;
  
  relationOp: expression EQ expression  {
    //$1->print(); cout << " -EQ exp- ";
    //$3->print(); cout << endl;
    $$=new RelationOp($1,$3,NULL,"==");
  }
  | expression NE expression  {
    //$1->print(); cout << " -NE exp- ";
    //$3->print(); cout << endl;
    $$=new RelationOp($1,$3,NULL,"!=");
  }
  | expression GE expression  {
    //$1->print(); cout << " -GE exp- ";
    //$3->print(); cout << endl;
    $$=new RelationOp($1,$3,NULL,">=");
  }
  | expression LE expression  {
    //$1->print(); cout << " -LE exp- ";
    //$3->print(); cout << endl;
    $$=new RelationOp($1,$3,NULL,"<=");
  }
  | expression GT expression  {
    //$1->print(); cout << " -GT exp- ";
    //$3->print(); cout << endl;
    $$=new RelationOp($1,$3,NULL,">");
  }
  | expression LT expression  {
    //$1->print(); cout << " -LT exp- ";
    //$3->print(); cout << endl;
    $$=new RelationOp($1,$3,NULL,"<");
  }
  ;
  
  sumOp: expression PLUS expression {
    //$1->print(); cout << " -PLUS exp- ";
    //$3->print(); cout << endl;
    $$=new SumOp($1,$3,NULL,"+");
  }
  | expression MINUS expression  {
    //$1->print(); cout << " -MINUS exp- ";
    //$3->print(); cout << endl;
    $$=new SumOp($1,$3,NULL,"-");
  }
  | expression OR expression  {
    //$1->print(); cout << " -OR exp- ";
    //$3->print(); cout << endl;
    $$=new SumOp($1,$3,NULL,"||");
  }
  ;
  
  productOp: expression TIMES expression  {
    //$1->print(); cout << " -TIMES exp- ";
    //$3->print(); cout << endl;
    $$=new ProductOp($1,$3,NULL,"*");
  }
  | expression DIV expression  {
    //$1->print(); cout << " -DIV exp- ";
    //$3->print(); cout << endl;
    $$=new ProductOp($1,$3,NULL,"/");
  }
  | expression MOD expression  {
    //$1->print(); cout << " -MOD exp- ";
    //$3->print(); cout << endl;
    $$=new ProductOp($1,$3,NULL,"%");
  }
  | expression AND expression  {
    //$1->print(); cout << " -AND exp- ";
    //$3->print(); cout << endl;
    $$=new ProductOp($1,$3,NULL,"&&");
  }
  ;
  
  bracketexp: LBRACK expression RBRACK {
    $$ = new BracketExp($2,NULL,NULL);
  }
  | bracketexp LBRACK expression RBRACK {
    $$ = new BracketExp($1,$3,NULL);
  }
  ;
  
  multibrackets: LBRACK RBRACK {
    $$ = new MultiBracket(NULL,NULL,"[","]");
  }
  | multibrackets LBRACK RBRACK {
    $$ = new MultiBracket($1,NULL,"[","]");
  }
  ;
  
  %%