// @generated
/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         Compiler5parse
#define yylex           Compiler5lex
#define yyerror         Compiler5error
#define yydebug         Compiler5debug
#define yynerrs         Compiler5nerrs


/* Copy the first part of user declarations.  */
#line 1 "hphp.y" /* yacc.c:339  */


/* By default this grammar is set up to be used by HPHP's compile parser.
 * However, it can be used to make parsers for different purposes by
 * making a Parser implementation with the same interface as
 * HPHP::Compiler::Parser in a header file specified by
 * PARSER_DEFINITIONS_HEADER, and specifying an alternate namespace with
 * HPHP_PARSER_NS.
 */

// macros for bison
#define YYSTYPE HPHP::HPHP_PARSER_NS::Token
#define YYSTYPE_IS_TRIVIAL false
#define YYLTYPE HPHP::Location
#define YYLTYPE_IS_TRIVIAL true
#define YYERROR_VERBOSE
#define YYINITDEPTH 500
#define YYLEX_PARAM _p

#ifdef PARSER_DEFINITIONS_HEADER
#include PARSER_DEFINITIONS_HEADER
#else
#include "hphp/compiler/parser/parser.h"
#endif

#include <folly/Conv.h>
#include <folly/String.h>

#include "hphp/util/logger.h"

#define line0 r.line0
#define char0 r.char0
#define line1 r.line1
#define char1 r.char1

#ifdef yyerror
#undef yyerror
#endif
#define yyerror(loc,p,msg) p->parseFatal(loc,msg)

#ifdef YYLLOC_DEFAULT
# undef YYLLOC_DEFAULT
#endif
#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
  do                                                                    \
    if (N) {                                                            \
      (Current).first(YYRHSLOC (Rhs, 1));                               \
      (Current).last (YYRHSLOC (Rhs, N));                               \
    } else {                                                            \
      (Current).line0 = (Current).line1 = YYRHSLOC (Rhs, 0).line1;\
      (Current).char0 = (Current).char1 = YYRHSLOC (Rhs, 0).char1;\
    }                                                                   \
  while (0);                                                            \
  _p->setRuleLocation(&Current);

#define YYCOPY(To, From, Count)                  \
  do {                                           \
    YYSIZE_T yyi;                                \
    for (yyi = 0; yyi < (Count); yyi++) {        \
      (To)[yyi] = (From)[yyi];                   \
    }                                            \
    if (From != From ## a) {                     \
      YYSTACK_FREE (From);                       \
    }                                            \
  }                                              \
  while (0)

#define YYCOPY_RESET(To, From, Count)           \
  do                                            \
    {                                           \
      YYSIZE_T yyi;                             \
      for (yyi = 0; yyi < (Count); yyi++) {     \
        (To)[yyi] = (From)[yyi];                \
        (From)[yyi].reset();                    \
      }                                         \
      if (From != From ## a) {                  \
        YYSTACK_FREE (From);                    \
      }                                         \
    }                                           \
  while (0)

#define YYTOKEN_RESET(From, Count)              \
  do                                            \
    {                                           \
      YYSIZE_T yyi;                             \
      for (yyi = 0; yyi < (Count); yyi++) {     \
        (From)[yyi].reset();                    \
      }                                         \
      if (From != From ## a) {                  \
        YYSTACK_FREE (From);                    \
      }                                         \
    }                                           \
  while (0)

# define YYSTACK_RELOCATE_RESET(Stack_alloc, Stack)                     \
  do                                                                    \
    {                                                                   \
      YYSIZE_T yynewbytes;                                              \
      YYCOPY_RESET (&yyptr->Stack_alloc, Stack, yysize);                \
      Stack = &yyptr->Stack_alloc;                                      \
      yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
      yyptr += yynewbytes / sizeof (*yyptr);                            \
    }                                                                   \
  while (0)

#define YYSTACK_CLEANUP                         \
  YYTOKEN_RESET (yyvs, yystacksize);            \
  if (yyvs != yyvsa) {                          \
    YYSTACK_FREE (yyvs);                        \
  }                                             \
  if (yyls != yylsa) {                          \
    YYSTACK_FREE (yyls);                        \
  }                                             \


// macros for rules
#define BEXP(...) _p->onBinaryOpExp(__VA_ARGS__);
#define UEXP(...) _p->onUnaryOpExp(__VA_ARGS__);

using namespace HPHP::HPHP_PARSER_NS;
using LS = Parser::LabelScopeKind;

using ParamMode = HPHP::ParamMode;

typedef HPHP::ClosureType ClosureType;

///////////////////////////////////////////////////////////////////////////////
// helpers

static void scalar_num(Parser *_p, Token &out, const char *num) {
  Token t;
  t.setText(num);
  _p->onScalar(out, T_LNUMBER, t);
}

static void scalar_num(Parser *_p, Token &out, int num) {
  Token t;
  t.setText(folly::to<std::string>(num));
  _p->onScalar(out, T_LNUMBER, t);
}

static void scalar_null(Parser *_p, Token &out) {
  Token tnull; tnull.setText("null");
  _p->onConstantValue(out, tnull);
}

static void scalar_file(Parser *_p, Token &out) {
  Token file; file.setText("__FILE__");
  _p->onScalar(out, T_FILE, file);
}

static void scalar_line(Parser *_p, Token &out) {
  Token line; line.setText("__LINE__");
  _p->onScalar(out, T_LINE, line);
}

///////////////////////////////////////////////////////////////////////////////

static void constant_ae(Parser *_p, Token &out, Token &value) {
  const std::string& valueStr = value.text();
  if (valueStr.size() < 3 || valueStr.size() > 5 ||
      (strcasecmp("true", valueStr.c_str()) != 0 &&
       strcasecmp("false", valueStr.c_str()) != 0 &&
       strcasecmp("null", valueStr.c_str()) != 0 &&
       strcasecmp("inf", valueStr.c_str()) != 0 &&
       strcasecmp("nan", valueStr.c_str()) != 0)) {
    HPHP_PARSER_ERROR("User-defined constants are not allowed in user "
                      "attribute expressions", _p);
  }
  _p->onConstantValue(out, value);
}

///////////////////////////////////////////////////////////////////////////////

/**
 * XHP functions: They are defined here, so different parsers don't have to
 * handle XHP rules at all.
 */

static void xhp_tag(Parser *_p, Token &out, Token &label, Token &body) {
  if (!body.text().empty() && body.text() != label.text()) {
    HPHP_PARSER_ERROR("XHP: mismatched tag: '%s' not the same as '%s'",
                      _p, body.text().c_str(), label.text().c_str());
  }

  _p->onXhpAttributesEnd();
  label.xhpLabel();
  Token name; _p->onName(name, label, Parser::StringName);
  _p->onNewObject(out, name, body);
}

static void xhp_attribute(Parser *_p, Token &out, Token &type, Token &label,
                          Token &def, Token &req) {
  /**
   * The bool, int, float, and string typenames are not given any special
   * treatment by the parser and are treated the same as regular class names
   * (which initially gets marked as type code 5). However, XHP wants to use
   * different type codes for bool, int, float, and string, so we need to fix
   * up the type code here to make XHP happy.
   */
  if (type.num() == 5) {
    auto* str = type.text().c_str();
    if (_p->scanner().isHHSyntaxEnabled()) {
      switch (type.text().size()) {
        case 6:
          if (!strcasecmp(str, "HH\\int")) {
            type.reset(); type.setNum(3);
          }
          break;
        case 7:
          if (!strcasecmp(str, "HH\\bool")) {
            type.reset(); type.setNum(2);
          }
          break;
        case 8:
          if (!strcasecmp(str, "HH\\float")) {
            type.reset(); type.setNum(8);
          } else if (!strcasecmp(str, "HH\\mixed")) {
            type.reset(); type.setNum(6);
          }
          break;
        case 9:
          if (!strcasecmp(str, "HH\\string")) {
            type.reset(); type.setNum(1);
          }
          break;
        default:
          break;
      }
    } else {
      switch (type.text().size()) {
        case 3:
          if (!strcasecmp(str, "int")) {
            type.reset(); type.setNum(3);
          }
          break;
        case 4:
          if (!strcasecmp(str, "bool")) {
            type.reset(); type.setNum(2);
          } else if (!strcasecmp(str, "real")) {
            type.reset(); type.setNum(8);
          }
          break;
        case 5:
          if (!strcasecmp(str, "float")) {
            type.reset(); type.setNum(8);
          } else if (!strcasecmp(str, "mixed")) {
            type.reset(); type.setNum(6);
          }
          break;
        case 6:
          if (!strcasecmp(str, "string")) {
            type.reset(); type.setNum(1);
          } else if (!strcasecmp(str, "double")) {
            type.reset(); type.setNum(8);
          }
          break;
        case 7:
          if (!strcasecmp(str, "integer")) {
            type.reset(); type.setNum(3);
          } else if (!strcasecmp(str, "boolean")) {
            type.reset(); type.setNum(2);
          }
          break;
        default:
          break;
      }
    }
  }

  Token num;  scalar_num(_p, num, type.num());
  Token arr1; _p->onExprListElem(arr1, nullptr, num);

  Token arr2;
  switch (type.num()) {
    case 5: /* class */ {
      Token cls; _p->onScalar(cls, T_CONSTANT_ENCAPSED_STRING, type);
      _p->onExprListElem(arr2, &arr1, cls);
      break;
    }
    case 7: /* enum */ {
      Token arr;   _p->onVArray(arr, type);
      _p->onExprListElem(arr2, &arr1, arr);
      break;
    }
    default: {
      Token tnull; scalar_null(_p, tnull);
      _p->onExprListElem(arr2, &arr1, tnull);
      break;
    }
  }

  Token arr3; _p->onExprListElem(arr3, &arr2, def);
  Token arr4; _p->onExprListElem(arr4, &arr3, req);
  _p->onVArray(out, arr4);
  out.setText(label);
}

static void xhp_attribute_list(Parser *_p, Token &out, Token *list,
                               Token &decl) {
  if (decl.num() == 0) {
    decl.xhpLabel();
    if (list) {
      out = *list;
      out.setText(list->text() + ":" + decl.text()); // avoiding vector<string>
    } else {
      out.setText(decl);
    }
  } else {
    Token name; _p->onScalar(name, T_CONSTANT_ENCAPSED_STRING, decl);
    _p->onArrayPair(out, list, &name, &decl, 0);
    if (list) {
      out.setText(list->text());
    } else {
      out.setText("");
    }
  }
}

static void xhp_attribute_stmt(Parser *_p, Token &out, Token &attributes) {
  Token modifiers;
  Token fname; fname.setText("__xhpAttributeDeclaration");
  {
    Token m;
    Token m1; m1.setNum(T_PROTECTED); _p->onMemberModifier(m, NULL, m1);
    Token m2; m2.setNum(T_STATIC);    _p->onMemberModifier(modifiers, &m, m2);
  }
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  std::vector<std::string> classes;
  folly::split(':', attributes.text(), classes, true);
  Token arrAttributes; _p->onDArray(arrAttributes, attributes);

  Token dummy;

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = null;
    Token null;    scalar_null(_p, null);
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &null);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // if ($_ === null) {
    //   $_ = __SystemLib\\merge_xhp_attr_declarations(
    //          parent::__xhpAttributeDeclaration(),
    //          attributes
    //        );
    // }
    Token parent;  parent.set(T_STRING, "parent");
    Token cls;     _p->onName(cls, parent, Parser::StringName);
    Token fname2;   fname2.setText("__xhpAttributeDeclaration");
    Token param1;  _p->onCall(param1, 0, fname2, dummy, &cls);
    Token params1; _p->onCallParam(params1, NULL, param1, ParamMode::In, false);

    for (unsigned int i = 0; i < classes.size(); i++) {
      Token parent2;  parent2.set(T_STRING, classes[i]);
      Token cls2;     _p->onName(cls2, parent2, Parser::StringName);
      Token fname3;   fname3.setText("__xhpAttributeDeclaration");
      Token param;   _p->onCall(param, 0, fname3, dummy, &cls2);

      Token params; _p->onCallParam(params, &params1, param, ParamMode::In,
                                    false);
      params1 = params;
    }

    Token params2; _p->onCallParam(params2, &params1, arrAttributes,
                                   ParamMode::In, false);

    Token name;    name.set(T_STRING, "__SystemLib\\merge_xhp_attr_declarations");
                   name = name.num() | 2; // WTH???
    Token call;    _p->onCall(call, 0, name, params2, NULL);
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token assign;  _p->onAssign(assign, var, call, 0);
    Token exp;     _p->onExpStatement(exp, assign);
    Token block;   _p->onBlock(block, exp);

    Token tvar2;   tvar2.set(T_VARIABLE, "_");
    Token var2;    _p->onSimpleVariable(var2, tvar2);
    Token null;    scalar_null(_p, null);
    Token cond;    BEXP(cond, var2, null, T_IS_IDENTICAL);
    Token dummy1, dummy2;
    Token sif;     _p->onIf(sif, cond, block, dummy1, dummy2);
    _p->addStatement(stmts2, stmts1, sif);
  }
  Token stmts3;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts3, stmts2, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts3);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 0;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, nullptr, false);
  }
}

static void xhp_collect_attributes(Parser *_p, Token &out, Token &stmts) {
  Token *attr = _p->xhpGetAttributes();
  if (attr) {
    Token stmt;
    xhp_attribute_stmt(_p, stmt, *attr);
    _p->onClassStatement(out, stmts, stmt);
  } else {
    out = stmts;
  }
}

static void xhp_category_stmt(Parser *_p, Token &out, Token &categories) {
  Token fname;     fname.setText("__xhpCategoryDeclaration");
  Token m1;        m1.setNum(T_PROTECTED);
  Token modifiers; _p->onMemberModifier(modifiers, 0, m1);
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = categories;
    Token arr;     _p->onDArray(arr, categories);
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &arr);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts2, stmts1, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts2);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 0;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, nullptr, false);
  }
}

static void xhp_children_decl_tag(Parser *_p, Token &arr, Token &tag) {
  Token num;  scalar_num(_p, num, tag.num());
  Token arr1; _p->onExprListElem(arr1, &arr, num);

  Token name;
  if (tag.num() == 3 || tag.num() == 4) {
    _p->onScalar(name, T_CONSTANT_ENCAPSED_STRING, tag);
  } else if (tag.num() >= 0) {
    scalar_null(_p, name);
  } else {
    HPHP_PARSER_ERROR("XHP: unknown children declaration", _p);
  }
  Token arr2; _p->onExprListElem(arr2, &arr1, name);
  arr = arr2;
}

static void xhp_children_decl(Parser *_p, Token &out, Token &op1, int op,
                              Token *op2) {
  Token num; scalar_num(_p, num, op);
  Token arr; _p->onExprListElem(arr, nullptr, num);

  if (op2) {
    Token arr1; _p->onExprListElem(arr1, &arr,  op1);
    Token arr2; _p->onExprListElem(arr2, &arr1, *op2);
    _p->onVArray(out, arr2);
  } else {
    xhp_children_decl_tag(_p, arr, op1);
    _p->onVArray(out, arr);
  }
}

static void xhp_children_paren(Parser *_p, Token &out, Token exp, int op) {
  Token num;  scalar_num(_p, num, op);
  Token arr1; _p->onExprListElem(arr1, nullptr, num);

  Token num5; scalar_num(_p, num5, 5);
  Token arr2; _p->onExprListElem(arr2, &arr1, num5);

  Token arr3; _p->onExprListElem(arr3, &arr2, exp);
  _p->onVArray(out, arr3);
}

static void xhp_children_stmt(Parser *_p, Token &out, Token &children) {
  Token fname;     fname.setText("__xhpChildrenDeclaration");
  Token m1;        m1.setNum(T_PROTECTED);
  Token modifiers; _p->onMemberModifier(modifiers, 0, m1);
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = children;
    Token arr;
    if (children.num() == 2) {
      arr = children;
    } else if (children.num() >= 0) {
      scalar_num(_p, arr, children.num());
    } else {
      HPHP_PARSER_ERROR("XHP: XHP unknown children declaration", _p);
    }
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &arr);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts2, stmts1, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts2);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 0;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, nullptr, false);
  }
}

static void only_in_hh_syntax(Parser *_p) {
  if (!_p->scanner().isHHSyntaxEnabled()) {
    HPHP_PARSER_ERROR(
      "Syntax only allowed in Hack files (<?hh) or with -v "
        "Eval.EnableHipHopSyntax=true",
      _p);
  }
}

static void validate_hh_variadic_variant(Parser* _p,
                                         Token& userAttrs, Token& typehint,
                                         Token* mod) {
  if (!userAttrs.text().empty() || !typehint.text().empty() ||
     (mod && !mod->text().empty())) {
    HPHP_PARSER_ERROR("Variadic '...' should be followed by a '$variable'", _p);
  }
  only_in_hh_syntax(_p);
}

// Shapes may not have leading integers in key names, considered as a
// parse time error.  This is because at runtime they are currently
// hphp arrays, which will treat leading integer keys as numbers.
static void validate_shape_keyname(Token& tok, Parser* _p) {
  if (tok.text().empty()) {
    HPHP_PARSER_ERROR("Shape key names may not be empty", _p);
  }
  if (isdigit(tok.text()[0])) {
    HPHP_PARSER_ERROR("Shape key names may not start with integers", _p);
  }
}

///////////////////////////////////////////////////////////////////////////////

static int yylex(YYSTYPE* token, HPHP::Location* loc, Parser* _p) {
  return _p->scan(token, loc);
}

#line 662 "hphp.5.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "hphp.5.tab.hpp".  */
#ifndef YY_YY_HPHP_Y_INCLUDED
# define YY_YY_HPHP_Y_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int Compiler5debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_INCLUDE = 258,
    T_INCLUDE_ONCE = 259,
    T_EVAL = 260,
    T_REQUIRE = 261,
    T_REQUIRE_ONCE = 262,
    T_LAMBDA_ARROW = 263,
    T_LOGICAL_OR = 264,
    T_LOGICAL_XOR = 265,
    T_LOGICAL_AND = 266,
    T_PRINT = 267,
    T_PLUS_EQUAL = 268,
    T_MINUS_EQUAL = 269,
    T_MUL_EQUAL = 270,
    T_DIV_EQUAL = 271,
    T_CONCAT_EQUAL = 272,
    T_MOD_EQUAL = 273,
    T_AND_EQUAL = 274,
    T_OR_EQUAL = 275,
    T_XOR_EQUAL = 276,
    T_SL_EQUAL = 277,
    T_SR_EQUAL = 278,
    T_POW_EQUAL = 279,
    T_AWAIT = 280,
    T_YIELD = 281,
    T_YIELD_FROM = 282,
    T_PIPE = 283,
    T_COALESCE = 284,
    T_BOOLEAN_OR = 285,
    T_BOOLEAN_AND = 286,
    T_IS_EQUAL = 287,
    T_IS_NOT_EQUAL = 288,
    T_IS_IDENTICAL = 289,
    T_IS_NOT_IDENTICAL = 290,
    T_IS_SMALLER_OR_EQUAL = 291,
    T_IS_GREATER_OR_EQUAL = 292,
    T_SPACESHIP = 293,
    T_SL = 294,
    T_SR = 295,
    T_INSTANCEOF = 296,
    T_INC = 297,
    T_DEC = 298,
    T_INT_CAST = 299,
    T_DOUBLE_CAST = 300,
    T_STRING_CAST = 301,
    T_ARRAY_CAST = 302,
    T_OBJECT_CAST = 303,
    T_BOOL_CAST = 304,
    T_UNSET_CAST = 305,
    T_POW = 306,
    T_NEW = 307,
    T_CLONE = 308,
    T_EXIT = 309,
    T_IF = 310,
    T_ELSEIF = 311,
    T_ELSE = 312,
    T_ENDIF = 313,
    T_LNUMBER = 314,
    T_DNUMBER = 315,
    T_ONUMBER = 316,
    T_STRING = 317,
    T_STRING_VARNAME = 318,
    T_VARIABLE = 319,
    T_PIPE_VAR = 320,
    T_NUM_STRING = 321,
    T_INLINE_HTML = 322,
    T_INOUT = 323,
    T_HASHBANG = 324,
    T_CHARACTER = 325,
    T_BAD_CHARACTER = 326,
    T_ENCAPSED_AND_WHITESPACE = 327,
    T_CONSTANT_ENCAPSED_STRING = 328,
    T_ECHO = 329,
    T_DO = 330,
    T_WHILE = 331,
    T_ENDWHILE = 332,
    T_FOR = 333,
    T_ENDFOR = 334,
    T_FOREACH = 335,
    T_ENDFOREACH = 336,
    T_DECLARE = 337,
    T_ENDDECLARE = 338,
    T_AS = 339,
    T_SUPER = 340,
    T_SWITCH = 341,
    T_ENDSWITCH = 342,
    T_CASE = 343,
    T_DEFAULT = 344,
    T_BREAK = 345,
    T_GOTO = 346,
    T_CONTINUE = 347,
    T_FUNCTION = 348,
    T_CONST = 349,
    T_RETURN = 350,
    T_TRY = 351,
    T_CATCH = 352,
    T_THROW = 353,
    T_USING = 354,
    T_USE = 355,
    T_GLOBAL = 356,
    T_STATIC = 357,
    T_ABSTRACT = 358,
    T_FINAL = 359,
    T_PRIVATE = 360,
    T_PROTECTED = 361,
    T_PUBLIC = 362,
    T_VAR = 363,
    T_UNSET = 364,
    T_ISSET = 365,
    T_EMPTY = 366,
    T_HALT_COMPILER = 367,
    T_CLASS = 368,
    T_INTERFACE = 369,
    T_EXTENDS = 370,
    T_IMPLEMENTS = 371,
    T_OBJECT_OPERATOR = 372,
    T_NULLSAFE_OBJECT_OPERATOR = 373,
    T_DOUBLE_ARROW = 374,
    T_LIST = 375,
    T_ARRAY = 376,
    T_DICT = 377,
    T_VEC = 378,
    T_VARRAY = 379,
    T_DARRAY = 380,
    T_KEYSET = 381,
    T_CALLABLE = 382,
    T_CLASS_C = 383,
    T_METHOD_C = 384,
    T_FUNC_C = 385,
    T_LINE = 386,
    T_FILE = 387,
    T_COMMENT = 388,
    T_DOC_COMMENT = 389,
    T_OPEN_TAG = 390,
    T_OPEN_TAG_WITH_ECHO = 391,
    T_CLOSE_TAG = 392,
    T_WHITESPACE = 393,
    T_START_HEREDOC = 394,
    T_END_HEREDOC = 395,
    T_DOLLAR_OPEN_CURLY_BRACES = 396,
    T_CURLY_OPEN = 397,
    T_DOUBLE_COLON = 398,
    T_NAMESPACE = 399,
    T_NS_C = 400,
    T_DIR = 401,
    T_NS_SEPARATOR = 402,
    T_XHP_LABEL = 403,
    T_XHP_TEXT = 404,
    T_XHP_ATTRIBUTE = 405,
    T_XHP_CATEGORY = 406,
    T_XHP_CATEGORY_LABEL = 407,
    T_XHP_CHILDREN = 408,
    T_ENUM = 409,
    T_XHP_REQUIRED = 410,
    T_TRAIT = 411,
    T_ELLIPSIS = 412,
    T_INSTEADOF = 413,
    T_TRAIT_C = 414,
    T_HH_ERROR = 415,
    T_FINALLY = 416,
    T_XHP_TAG_LT = 417,
    T_XHP_TAG_GT = 418,
    T_TYPELIST_LT = 419,
    T_TYPELIST_GT = 420,
    T_UNRESOLVED_LT = 421,
    T_COLLECTION = 422,
    T_SHAPE = 423,
    T_TUPLE = 424,
    T_TYPE = 425,
    T_UNRESOLVED_TYPE = 426,
    T_NEWTYPE = 427,
    T_UNRESOLVED_NEWTYPE = 428,
    T_COMPILER_HALT_OFFSET = 429,
    T_ASYNC = 430,
    T_LAMBDA_OP = 431,
    T_LAMBDA_CP = 432,
    T_UNRESOLVED_OP = 433,
    T_WHERE = 434
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int line0;
  int char0;
  int line1;
  int char1;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int Compiler5parse (HPHP::HPHP_PARSER_NS::Parser *_p);

#endif /* !YY_YY_HPHP_Y_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 906 "hphp.5.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
struct yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (struct yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   20144

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  209
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  314
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2099

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   434

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,   207,     2,   205,    55,    38,   208,
     199,   200,    53,    50,     9,    51,    52,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    32,   201,
      43,    14,    45,    31,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,   204,    37,     2,   206,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   202,    36,   203,    58,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,    10,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    33,    34,    35,    39,    40,    41,
      42,    44,    46,    47,    48,    49,    57,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    69,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   760,   760,   760,   769,   771,   774,   775,   776,   777,
     778,   779,   780,   783,   785,   785,   787,   787,   789,   792,
     797,   802,   805,   808,   812,   816,   820,   824,   828,   833,
     834,   835,   836,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   849,   850,   851,   852,   853,   854,   855,   856,
     857,   858,   859,   860,   861,   862,   863,   864,   865,   866,
     867,   868,   869,   870,   871,   872,   873,   874,   875,   876,
     877,   878,   879,   880,   881,   882,   883,   884,   885,   886,
     887,   888,   889,   890,   891,   892,   893,   894,   895,   896,
     897,   898,   899,   900,   901,   902,   903,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   913,   917,   918,   922,
     923,   927,   928,   933,   935,   940,   945,   946,   947,   949,
     954,   956,   961,   966,   968,   970,   975,   976,   980,   981,
     983,   987,   994,  1001,  1005,  1011,  1013,  1017,  1018,  1024,
    1026,  1030,  1032,  1037,  1038,  1039,  1040,  1043,  1044,  1048,
    1053,  1053,  1059,  1059,  1066,  1065,  1071,  1071,  1076,  1077,
    1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,
    1088,  1089,  1090,  1094,  1092,  1101,  1099,  1106,  1116,  1110,
    1120,  1118,  1122,  1126,  1130,  1134,  1138,  1142,  1146,  1151,
    1152,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1165,  1166,  1167,  1189,  1195,  1196,  1205,  1207,  1211,  1212,
    1213,  1217,  1218,  1222,  1222,  1227,  1233,  1237,  1237,  1245,
    1246,  1250,  1251,  1255,  1261,  1259,  1276,  1273,  1291,  1288,
    1306,  1305,  1314,  1312,  1324,  1323,  1342,  1340,  1359,  1358,
    1367,  1365,  1376,  1376,  1383,  1382,  1394,  1392,  1405,  1406,
    1410,  1413,  1416,  1417,  1418,  1421,  1422,  1425,  1427,  1430,
    1431,  1434,  1435,  1438,  1439,  1443,  1444,  1449,  1450,  1453,
    1454,  1455,  1459,  1460,  1464,  1465,  1469,  1470,  1474,  1475,
    1480,  1481,  1487,  1488,  1489,  1490,  1493,  1496,  1498,  1501,
    1502,  1506,  1508,  1511,  1514,  1517,  1518,  1521,  1522,  1526,
    1532,  1538,  1545,  1547,  1552,  1557,  1563,  1567,  1572,  1577,
    1582,  1588,  1594,  1600,  1606,  1612,  1619,  1629,  1634,  1639,
    1645,  1647,  1651,  1655,  1660,  1664,  1668,  1672,  1676,  1681,
    1686,  1691,  1696,  1701,  1707,  1716,  1717,  1718,  1722,  1724,
    1727,  1729,  1731,  1733,  1735,  1738,  1741,  1744,  1750,  1751,
    1754,  1755,  1756,  1760,  1761,  1763,  1764,  1768,  1770,  1773,
    1777,  1783,  1785,  1788,  1791,  1795,  1799,  1804,  1806,  1809,
    1812,  1810,  1827,  1824,  1839,  1841,  1843,  1845,  1847,  1849,
    1851,  1855,  1856,  1857,  1860,  1866,  1870,  1876,  1879,  1884,
    1886,  1891,  1896,  1900,  1901,  1905,  1906,  1908,  1910,  1916,
    1917,  1919,  1923,  1924,  1929,  1933,  1934,  1938,  1939,  1943,
    1945,  1951,  1956,  1957,  1959,  1963,  1964,  1965,  1966,  1970,
    1971,  1972,  1973,  1974,  1975,  1977,  1982,  1985,  1986,  1990,
    1991,  1995,  1996,  1999,  2000,  2003,  2004,  2007,  2008,  2012,
    2013,  2014,  2015,  2016,  2017,  2018,  2022,  2023,  2026,  2027,
    2028,  2031,  2033,  2035,  2036,  2039,  2041,  2050,  2052,  2056,
    2060,  2064,  2069,  2073,  2074,  2076,  2077,  2078,  2079,  2082,
    2083,  2087,  2088,  2092,  2093,  2094,  2095,  2099,  2103,  2108,
    2112,  2116,  2120,  2124,  2129,  2133,  2134,  2135,  2136,  2137,
    2141,  2145,  2147,  2148,  2149,  2152,  2153,  2154,  2155,  2156,
    2157,  2158,  2159,  2160,  2161,  2162,  2163,  2164,  2165,  2166,
    2167,  2168,  2169,  2170,  2171,  2172,  2173,  2174,  2175,  2176,
    2177,  2178,  2179,  2180,  2181,  2182,  2183,  2184,  2185,  2186,
    2187,  2188,  2189,  2190,  2191,  2192,  2193,  2194,  2195,  2197,
    2198,  2200,  2201,  2203,  2204,  2205,  2206,  2207,  2208,  2209,
    2210,  2211,  2212,  2213,  2214,  2215,  2216,  2217,  2218,  2219,
    2220,  2221,  2222,  2223,  2224,  2225,  2226,  2227,  2228,  2232,
    2236,  2241,  2240,  2256,  2254,  2273,  2272,  2293,  2292,  2312,
    2311,  2330,  2330,  2347,  2347,  2366,  2367,  2368,  2373,  2375,
    2379,  2383,  2389,  2393,  2399,  2401,  2405,  2407,  2411,  2415,
    2416,  2417,  2421,  2423,  2427,  2429,  2433,  2435,  2439,  2442,
    2447,  2449,  2453,  2456,  2461,  2465,  2469,  2473,  2477,  2481,
    2485,  2489,  2493,  2497,  2501,  2505,  2509,  2513,  2517,  2521,
    2525,  2529,  2533,  2535,  2539,  2541,  2545,  2547,  2551,  2558,
    2565,  2567,  2572,  2573,  2574,  2575,  2576,  2577,  2578,  2579,
    2580,  2581,  2583,  2584,  2588,  2589,  2590,  2591,  2595,  2601,
    2614,  2631,  2632,  2635,  2636,  2638,  2643,  2644,  2647,  2651,
    2654,  2657,  2664,  2665,  2669,  2670,  2672,  2677,  2678,  2679,
    2680,  2681,  2682,  2683,  2684,  2685,  2686,  2687,  2688,  2689,
    2690,  2691,  2692,  2693,  2694,  2695,  2696,  2697,  2698,  2699,
    2700,  2701,  2702,  2703,  2704,  2705,  2706,  2707,  2708,  2709,
    2710,  2711,  2712,  2713,  2714,  2715,  2716,  2717,  2718,  2719,
    2720,  2721,  2722,  2723,  2724,  2725,  2726,  2727,  2728,  2729,
    2730,  2731,  2732,  2733,  2734,  2735,  2736,  2737,  2738,  2739,
    2740,  2741,  2742,  2743,  2744,  2745,  2746,  2747,  2748,  2749,
    2750,  2751,  2752,  2753,  2754,  2755,  2756,  2757,  2758,  2759,
    2763,  2768,  2769,  2773,  2774,  2775,  2776,  2778,  2782,  2783,
    2794,  2795,  2797,  2799,  2811,  2812,  2813,  2817,  2818,  2819,
    2823,  2824,  2825,  2828,  2830,  2834,  2835,  2836,  2837,  2839,
    2840,  2841,  2842,  2843,  2844,  2845,  2846,  2847,  2848,  2851,
    2856,  2857,  2858,  2860,  2861,  2863,  2864,  2865,  2866,  2867,
    2868,  2869,  2870,  2871,  2872,  2874,  2876,  2878,  2880,  2882,
    2883,  2884,  2885,  2886,  2887,  2888,  2889,  2890,  2891,  2892,
    2893,  2894,  2895,  2896,  2897,  2898,  2900,  2902,  2904,  2906,
    2907,  2910,  2911,  2915,  2919,  2921,  2925,  2926,  2930,  2936,
    2939,  2943,  2944,  2945,  2946,  2947,  2948,  2949,  2954,  2956,
    2960,  2961,  2964,  2965,  2969,  2972,  2974,  2976,  2980,  2981,
    2982,  2983,  2986,  2990,  2991,  2992,  2993,  2997,  2999,  3006,
    3007,  3008,  3009,  3014,  3015,  3016,  3017,  3019,  3020,  3022,
    3023,  3024,  3025,  3026,  3027,  3031,  3033,  3037,  3039,  3042,
    3045,  3047,  3049,  3052,  3054,  3058,  3060,  3063,  3066,  3072,
    3074,  3077,  3078,  3083,  3086,  3090,  3090,  3095,  3098,  3099,
    3103,  3104,  3108,  3109,  3110,  3114,  3116,  3124,  3125,  3129,
    3131,  3139,  3140,  3144,  3146,  3147,  3152,  3154,  3159,  3170,
    3184,  3196,  3211,  3212,  3213,  3214,  3215,  3216,  3217,  3227,
    3236,  3238,  3240,  3244,  3248,  3249,  3250,  3251,  3252,  3268,
    3269,  3279,  3280,  3281,  3282,  3283,  3284,  3285,  3287,  3288,
    3290,  3292,  3297,  3301,  3302,  3306,  3309,  3313,  3320,  3324,
    3333,  3340,  3342,  3348,  3350,  3351,  3355,  3356,  3357,  3364,
    3365,  3370,  3371,  3376,  3377,  3378,  3379,  3390,  3393,  3396,
    3397,  3398,  3399,  3410,  3415,  3416,  3417,  3418,  3420,  3422,
    3424,  3425,  3429,  3431,  3435,  3437,  3440,  3442,  3443,  3444,
    3448,  3450,  3453,  3456,  3458,  3460,  3464,  3465,  3467,  3468,
    3474,  3475,  3477,  3487,  3489,  3491,  3494,  3495,  3496,  3500,
    3501,  3502,  3503,  3504,  3505,  3506,  3507,  3508,  3509,  3510,
    3514,  3515,  3519,  3521,  3529,  3531,  3535,  3539,  3544,  3548,
    3556,  3557,  3561,  3562,  3568,  3569,  3578,  3579,  3587,  3590,
    3594,  3597,  3602,  3607,  3610,  3613,  3615,  3617,  3619,  3623,
    3625,  3626,  3627,  3630,  3632,  3638,  3639,  3643,  3644,  3648,
    3649,  3653,  3654,  3657,  3662,  3663,  3667,  3670,  3672,  3676,
    3682,  3683,  3684,  3688,  3692,  3700,  3705,  3717,  3719,  3723,
    3726,  3728,  3733,  3738,  3744,  3747,  3752,  3757,  3759,  3766,
    3768,  3771,  3772,  3775,  3778,  3779,  3784,  3786,  3790,  3796,
    3806,  3807
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INCLUDE", "T_INCLUDE_ONCE", "T_EVAL",
  "T_REQUIRE", "T_REQUIRE_ONCE", "T_LAMBDA_ARROW", "','", "T_LOGICAL_OR",
  "T_LOGICAL_XOR", "T_LOGICAL_AND", "T_PRINT", "'='", "T_PLUS_EQUAL",
  "T_MINUS_EQUAL", "T_MUL_EQUAL", "T_DIV_EQUAL", "T_CONCAT_EQUAL",
  "T_MOD_EQUAL", "T_AND_EQUAL", "T_OR_EQUAL", "T_XOR_EQUAL", "T_SL_EQUAL",
  "T_SR_EQUAL", "T_POW_EQUAL", "T_AWAIT", "T_YIELD", "T_YIELD_FROM",
  "T_PIPE", "'?'", "':'", "\"??\"", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_EQUAL", "T_IS_NOT_EQUAL", "T_IS_IDENTICAL",
  "T_IS_NOT_IDENTICAL", "'<'", "T_IS_SMALLER_OR_EQUAL", "'>'",
  "T_IS_GREATER_OR_EQUAL", "T_SPACESHIP", "T_SL", "T_SR", "'+'", "'-'",
  "'.'", "'*'", "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "T_INC",
  "T_DEC", "T_INT_CAST", "T_DOUBLE_CAST", "T_STRING_CAST", "T_ARRAY_CAST",
  "T_OBJECT_CAST", "T_BOOL_CAST", "T_UNSET_CAST", "'@'", "T_POW", "'['",
  "T_NEW", "T_CLONE", "T_EXIT", "T_IF", "T_ELSEIF", "T_ELSE", "T_ENDIF",
  "T_LNUMBER", "T_DNUMBER", "T_ONUMBER", "T_STRING", "T_STRING_VARNAME",
  "T_VARIABLE", "T_PIPE_VAR", "T_NUM_STRING", "T_INLINE_HTML", "T_INOUT",
  "T_HASHBANG", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING", "T_ECHO",
  "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR", "T_ENDFOR", "T_FOREACH",
  "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE", "T_AS", "T_SUPER",
  "T_SWITCH", "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_GOTO",
  "T_CONTINUE", "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY", "T_CATCH",
  "T_THROW", "T_USING", "T_USE", "T_GLOBAL", "T_STATIC", "T_ABSTRACT",
  "T_FINAL", "T_PRIVATE", "T_PROTECTED", "T_PUBLIC", "T_VAR", "T_UNSET",
  "T_ISSET", "T_EMPTY", "T_HALT_COMPILER", "T_CLASS", "T_INTERFACE",
  "T_EXTENDS", "T_IMPLEMENTS", "T_OBJECT_OPERATOR",
  "T_NULLSAFE_OBJECT_OPERATOR", "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY",
  "T_DICT", "T_VEC", "T_VARRAY", "T_DARRAY", "T_KEYSET", "T_CALLABLE",
  "T_CLASS_C", "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG",
  "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_DOUBLE_COLON",
  "T_NAMESPACE", "T_NS_C", "T_DIR", "T_NS_SEPARATOR", "T_XHP_LABEL",
  "T_XHP_TEXT", "T_XHP_ATTRIBUTE", "T_XHP_CATEGORY",
  "T_XHP_CATEGORY_LABEL", "T_XHP_CHILDREN", "T_ENUM", "T_XHP_REQUIRED",
  "T_TRAIT", "\"...\"", "T_INSTEADOF", "T_TRAIT_C", "T_HH_ERROR",
  "T_FINALLY", "T_XHP_TAG_LT", "T_XHP_TAG_GT", "T_TYPELIST_LT",
  "T_TYPELIST_GT", "T_UNRESOLVED_LT", "T_COLLECTION", "T_SHAPE", "T_TUPLE",
  "T_TYPE", "T_UNRESOLVED_TYPE", "T_NEWTYPE", "T_UNRESOLVED_NEWTYPE",
  "T_COMPILER_HALT_OFFSET", "T_ASYNC", "T_LAMBDA_OP", "T_LAMBDA_CP",
  "T_UNRESOLVED_OP", "T_WHERE", "'('", "')'", "';'", "'{'", "'}'", "']'",
  "'$'", "'`'", "'\"'", "'\\''", "$accept", "start", "$@1",
  "top_statement_list", "top_statement", "$@2", "$@3",
  "ident_no_semireserved", "ident_for_class_const", "ident",
  "group_use_prefix", "non_empty_use_declarations", "use_declarations",
  "use_declaration", "non_empty_mixed_use_declarations",
  "mixed_use_declarations", "mixed_use_declaration", "namespace_name",
  "namespace_string", "namespace_string_typeargs",
  "class_namespace_string_typeargs", "constant_declaration",
  "function_statement_list", "function_statement", "inner_statement_list",
  "inner_statement_list_nonempty", "inner_statement", "statement", "$@4",
  "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "using_prologue",
  "opt_await", "using_expr_list", "using_expr", "using_statement_list",
  "try_statement_list", "$@12", "additional_catches",
  "finally_statement_list", "$@13", "optional_finally", "is_reference",
  "function_loc", "function_declaration_statement", "$@14", "$@15", "$@16",
  "enum_declaration_statement", "$@17", "$@18",
  "class_declaration_statement", "$@19", "$@20", "$@21", "$@22",
  "class_expression", "$@23", "trait_declaration_statement", "$@24",
  "$@25", "class_decl_name", "interface_decl_name", "trait_decl_name",
  "class_entry_type", "extends_from", "implements_list",
  "interface_extends_list", "interface_list", "trait_list",
  "foreach_optional_arg", "foreach_variable", "for_statement",
  "foreach_statement", "while_statement", "declare_statement",
  "declare_list", "switch_case_list", "case_list", "case_separator",
  "elseif_list", "new_elseif_list", "else_single", "new_else_single",
  "method_parameter_list", "non_empty_method_parameter_list",
  "parameter_list", "non_empty_parameter_list", "inout_variable",
  "function_call_parameter_list", "non_empty_fcall_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "enum_statement_list", "enum_statement", "enum_constant_declaration",
  "class_statement_list", "class_statement", "$@26", "$@27", "trait_rules",
  "trait_precedence_rule", "trait_alias_rule", "trait_alias_rule_method",
  "xhp_attribute_stmt", "xhp_attribute_decl",
  "xhp_nullable_attribute_decl_type", "xhp_attribute_decl_type",
  "non_empty_xhp_attribute_enum", "xhp_attribute_enum",
  "xhp_attribute_default", "xhp_attribute_is_required",
  "xhp_category_stmt", "xhp_category_decl", "xhp_children_stmt",
  "xhp_children_paren_expr", "xhp_children_decl_expr",
  "xhp_children_decl_tag", "function_body", "method_body",
  "variable_modifiers", "method_modifiers", "non_empty_member_modifiers",
  "member_modifier", "parameter_modifiers", "parameter_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "class_abstract_constant_declaration", "class_type_constant_declaration",
  "class_type_constant", "parenthesis_expr_with_parens",
  "expr_with_parens", "expr_list", "for_expr", "yield_expr",
  "yield_assign_expr", "yield_list_assign_expr", "yield_from_expr",
  "yield_from_assign_expr", "await_expr", "await_assign_expr",
  "await_list_assign_expr", "parenthesis_expr", "expr",
  "parenthesis_expr_no_variable", "expr_no_variable", "lambda_use_vars",
  "closure_expression", "$@28", "$@29", "lambda_expression", "$@30",
  "$@31", "$@32", "$@33", "$@34", "lambda_body", "shape_keyname",
  "non_empty_shape_pair_list", "non_empty_static_shape_pair_list",
  "shape_pair_list", "static_shape_pair_list", "shape_literal",
  "array_literal", "dict_pair_list", "non_empty_dict_pair_list",
  "static_dict_pair_list", "non_empty_static_dict_pair_list",
  "static_dict_pair_list_ae", "non_empty_static_dict_pair_list_ae",
  "dict_literal", "static_dict_literal", "static_dict_literal_ae",
  "vec_literal", "static_vec_literal", "static_vec_literal_ae",
  "keyset_literal", "static_keyset_literal", "static_keyset_literal_ae",
  "tuple_literal", "static_tuple_literal", "static_tuple_literal_ae",
  "varray_literal", "static_varray_literal", "static_varray_literal_ae",
  "darray_literal", "static_darray_literal", "static_darray_literal_ae",
  "vec_ks_expr_list", "static_vec_ks_expr_list",
  "static_vec_ks_expr_list_ae", "collection_literal",
  "static_collection_literal", "dim_expr", "dim_expr_base",
  "lexical_var_list", "xhp_tag", "xhp_tag_body", "xhp_opt_end_label",
  "xhp_attributes", "xhp_children", "xhp_attribute_name",
  "xhp_attribute_value", "xhp_child", "xhp_label_ws", "xhp_bareword",
  "simple_function_call", "fully_qualified_class_name",
  "static_class_name_base", "static_class_name_no_calls",
  "static_class_name", "class_name_reference", "exit_expr",
  "backticks_expr", "ctor_arguments", "common_scalar", "static_expr",
  "static_expr_list", "static_class_class_constant",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "hh_possible_comma",
  "non_empty_static_array_pair_list", "common_scalar_ae",
  "static_numeric_scalar_ae", "static_string_expr_ae", "static_scalar_ae",
  "static_scalar_ae_list", "static_array_pair_list_ae",
  "non_empty_static_array_pair_list_ae", "non_empty_static_scalar_list_ae",
  "static_shape_pair_list_ae", "non_empty_static_shape_pair_list_ae",
  "static_scalar_list_ae", "attribute_static_scalar_list",
  "non_empty_user_attribute_list", "user_attribute_list", "$@35",
  "non_empty_user_attributes", "optional_user_attributes",
  "object_operator", "object_property_name_no_variables",
  "object_property_name", "object_method_name_no_variables",
  "object_method_name", "array_access", "dimmable_variable_access",
  "dimmable_variable_no_calls_access", "object_property_access_on_expr",
  "object_property_access_on_expr_no_variables", "variable",
  "parenthesis_variable", "dimmable_variable_no_parens",
  "callable_variable", "lambda_or_closure_with_parens",
  "lambda_or_closure", "object_method_call", "class_method_call",
  "variable_no_objects", "reference_variable", "compound_variable",
  "dim_offset", "simple_indirect_reference", "variable_no_calls",
  "dimmable_variable_no_calls", "array_pair_list", "collection_init",
  "non_empty_collection_init", "static_collection_init",
  "non_empty_static_collection_init", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions", "variable_list",
  "class_constant", "hh_opt_constraint", "hh_type_alias_statement",
  "hh_name_with_type", "hh_constname_with_type", "hh_name_with_typevar",
  "hh_name_no_semireserved_with_typevar", "hh_typeargs_opt",
  "hh_non_empty_type_list", "hh_type_list", "hh_non_empty_func_type_list",
  "hh_func_type_list", "opt_type_constraint_where_clause",
  "non_empty_constraint_list", "hh_generalised_constraint",
  "opt_return_type", "hh_constraint", "hh_typevar_list",
  "hh_non_empty_constraint_list", "hh_non_empty_typevar_list",
  "hh_typevar_variance", "hh_shape_member_type",
  "hh_non_empty_shape_member_list", "hh_shape_member_list",
  "hh_shape_type", "hh_access_type_start", "hh_access_type",
  "array_typelist", "hh_type", "hh_type_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,    44,
     264,   265,   266,   267,    61,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,    63,    58,   284,   285,   286,   124,    94,    38,   287,
     288,   289,   290,    60,   291,    62,   292,   293,   294,   295,
      43,    45,    46,    42,    47,    37,    33,   296,   126,   297,
     298,   299,   300,   301,   302,   303,   304,   305,    64,   306,
      91,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,    40,
      41,    59,   123,   125,    93,    36,    96,    34,    39
};
# endif

#define YYPACT_NINF -1789

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1789)))

#define YYTABLE_NINF -1132

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1132)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1789,   185, -1789, -1789,  5624, 14932, 14932,    -8, 14932, 14932,
   14932, 14932, 12533, 14932, -1789, 14932, 14932, 14932, 14932, 18423,
   18423, 14932, 14932, 14932, 14932, 14932, 14932, 14932, 14932, 12712,
   19161, 14932,    -3,    15, -1789, -1789, -1789,   177, -1789,   273,
   -1789, -1789, -1789,   224, 14932, -1789,    15,   170,   262,   307,
   -1789,    15, 12891, 15868, 13070, -1789, 15796, 11396,    95, 14932,
    4648,   153,   109,   505,    73, -1789, -1789, -1789,   349,   369,
     391,   397, -1789, 15868,   433,   437,   461,   515,   576,   586,
     591, -1789, -1789, -1789, -1789, -1789, 14932,   666,  4182, -1789,
   -1789, 15868, -1789, -1789, -1789, -1789, 15868, -1789, 15868, -1789,
     359,   442,   464, 15868, 15868, -1789,    51, -1789, -1789, 13276,
   -1789, -1789,   481,   542,   751,   751, -1789,   634,   519,   559,
     499, -1789,    87, -1789,   545,   572,   691, -1789, -1789, -1789,
   -1789,  5245,   615, -1789,   229, -1789,   562,   578,   606,   623,
     629,   632,   646,   652, 17307, -1789, -1789, -1789, -1789, -1789,
     101,   676,   690,   792,   795,   816,   822, -1789,   832,   840,
   -1789,   217,   553, -1789,   694,    20, -1789,  1210,   157, -1789,
   -1789,  2991,   229,   229,   715,    99, -1789,   169,   199,   718,
     204, -1789,    91, -1789,   849, -1789,   763, -1789, -1789,   757,
   -1789, 14932, -1789,   691,   615, 19634,   147,  3504, 19634, 14932,
   19634, 19634, 16345, 16345,   727, 18596, 19634,   886, 15868,   873,
     873,   753,   873, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789,    93, 14932,   768, -1789, -1789,   793,   767,   583,
     778,   583,   873,   873,   873,   873,   873,   873,   873,   873,
   18423, 18644,    81,   763, -1789, 14932,   768, -1789,   794, -1789,
     823,   785, -1789,   242, -1789, -1789, -1789,   583,   229, -1789,
   13455, -1789, -1789, 14932, 10160,   978,    90, 19634, 11190, -1789,
   14932, 14932, 15868, -1789, -1789, 17355,   787, -1789, 17406, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, 17859,
   -1789, 17859, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789,    89,   116,   757, -1789, -1789, -1789, -1789,   788, -1789,
   17715,   122, -1789, -1789,   828,   977, -1789,   837, 16537, 14932,
   -1789,   799,   800, 17476, -1789,    61, 17524, 15510, 15510, 15510,
   15868, 15510,   806,  1000,   810, -1789,    84, -1789, 18242,   102,
   -1789,   998,   105,   889, -1789,   890, -1789, 18423, 14932, 14932,
     818,   841, -1789, -1789, 12712, 12712, 14932, 14932, 14932, 14932,
   14932,   112,   532,   491, -1789, 15111, 18423,   700, -1789, 15868,
   -1789,   549,   519, -1789, -1789, -1789, -1789, 19263, 14932,  1013,
     930, -1789, -1789, -1789,   119, 14932,   836,   838, 19634,   842,
     779,   844,  6246, 14932,   544,   834,   786,   544,   521,   517,
   -1789, 15868, 17859,   846, 11575, 15796, -1789, 13661,   839,   839,
     839,   839, -1789, -1789,  3939, -1789, -1789, -1789, -1789, -1789,
     691, -1789, 14932, 14932, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, 14932, 14932, 14932, 14932, 13840, 14932, 14932,
   14932, 14932, 14932, 14932, 14932, 14932, 14932, 14932, 14932, 14932,
   14932, 14932, 14932, 14932, 14932, 14932, 14932, 14932, 14932, 14932,
   14932, 19339, 14932, -1789, 11951, 14932, 14932, 14932,  5396, 15868,
   15868, 15868, 15868, 15868,  5245,   934,  1347,  5134, 14932, 14932,
   14932, 14932, 14932, 14932, 14932, 14932, 14932, 14932, 14932, 14932,
   -1789, -1789, -1789, -1789,  2665, -1789, -1789, 11575, 11575, 14932,
   14932,   481,   326,   850,   691, 14932, 14019, 17575, -1789, 14932,
   -1789,   851,  1039,   894,   854,   855, 15284,   583, 14198, 14377,
   -1789,   785,   860,   862,  2479, -1789,   159, 11575, -1789,  2897,
   -1789, -1789, 17645, -1789, -1789, 12148, -1789, 14932, -1789,   972,
   10366,  1060,   870, 19512,  1058,   128,    80, -1789, -1789, -1789,
     891, -1789, -1789, -1789, 17859, -1789,  2531,   876,  1069, 18090,
   15868, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
     892, -1789, -1789,   883,   888,   895,   899,   902,   905,   272,
     915,   918,  4841, 15689, -1789, -1789, 15868, 15868, 14932,   583,
     153, -1789, 18090,  1033, -1789, -1789, -1789,   583,   134,   143,
     920,   922,  2572,    63,   924,   925,   672,   994,   144,   148,
   18705,   926,  1120,  1122,   928,   931,   932,   933, -1789,  4858,
   15868, -1789, -1789,  1070,  3930,    70, -1789, -1789, -1789,   519,
   -1789, -1789, -1789,  1107,  1007,   963,   195,   984, 14932,   481,
    1010,  1142,   952, -1789,   991, -1789,   326, -1789,   954, 17859,
   17859,  1141,   978,   119, -1789,   961,  1149, -1789, 17763,   367,
   -1789,   439,   241, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
    1172,  4109, -1789, -1789, -1789, -1789,  1150,   980, -1789, 18423,
     685, 14932,   965,  1157, 19634,  1153,   151,  1159,   969,   973,
     974, 19634,   975,  2627,  6452, -1789, -1789, -1789, -1789, -1789,
   -1789,  1042,  4436, 19634,   981,  4382, 19773, 19864, 16345, 16166,
   14932, 19586, 19937, 15285,  3785, 20075,  3855, 15797, 15976, 15976,
   15976, 15976,  1644,  1644,  1644,  1644,  1644,  1690,  1690,   914,
     914,   914,   753,   753,   753, -1789,   873, -1789, -1789, 16345,
     983,   985, 18753,   988,  1168,    16, 14932,   226,   768,    39,
     326, -1789, -1789, -1789,  1170,   930, -1789,   691, 18347, -1789,
   -1789, -1789, 16345, 16345, 16345, 16345, 16345, 16345, 16345, 16345,
   16345, 16345, 16345, 16345, 16345, -1789, 14932,   456,   340, -1789,
   -1789,   768,   488,   992,   995,   990,  4866,   989, -1789, 19634,
   18166, -1789, 15868, -1789,   583,    76, 18423, 19634, 18423, 18814,
    1042,   371,   583,   341,  1035,  1004, 14932, -1789,   354, -1789,
   -1789, -1789,  6658,   712, -1789, -1789, 19634, 19634,    15, -1789,
   -1789, -1789, 14932,  1095, 18014, 18090, 15868, 10572,  1005,  1008,
   -1789,  1199,  4959,  1072, -1789,  1049, -1789,  1204,  1015,  3411,
   17859, 18090, 18090, 18090, 18090, 18090,  1018,  1152,  1154,  1156,
    1158,  1160,  1021,  1028, 18090,   409, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789,    14, -1789, 19728, -1789, -1789,   271, -1789,
    6864,  5444,  1030, 15689, -1789, 15689, -1789, 15689, -1789, 15868,
   15868, 15689, -1789, 15689, 15689, 15868, -1789,  1225,  1032, -1789,
     299, -1789, -1789,  5324, -1789, 19728,  1222, 18423,  1040, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,  1061,  1233,
   15868,  5444,  1045, -1789, -1789, 14932, -1789, 14932, -1789, 14932,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,  1044, -1789,
   14932, -1789, -1789,  5834, -1789, 17859,  5444,  1051, -1789, -1789,
   -1789, -1789,  1075,  1240,  1055, 14932, 19263, -1789, -1789,  5396,
   -1789,  1066, -1789, 17859, -1789,  1073,  7070,  1236,   145, -1789,
   17859, -1789,   173,  2665,  2665, -1789, 17859, -1789, -1789,   583,
   -1789, -1789,  1200, 19634, -1789, 11754, -1789, 18090, 13661,   839,
   13661, -1789,   839,   839, -1789, 12354, -1789, -1789,  7276, -1789,
     133,  1077,  5444,  1007, -1789, -1789, -1789, -1789, 19937, 14932,
   -1789, -1789, 14932, -1789, 14932, -1789, 17016,  1079, 11575,   994,
    1247,  1007, 17859,  1267,  1042, 15868, 19339,   583, 17064,  1087,
     250,  1089, -1789, -1789,  4365,  4365, 18166, -1789, -1789, -1789,
    1237,  1092,  1230,  1238,  1239,  1242,  1243,    98,  1104,  1108,
     569, -1789, -1789, -1789, -1789, -1789, -1789,  1144, -1789, -1789,
   -1789, -1789,  1307,  1117,   851,   583,   583, 14556,  1007,  2897,
   -1789,  2897, -1789, 17112,   761,    15, 11190, -1789,  7482,  1118,
    7688,  1119, 18014, 18423,  1180,  1123,   583, 19728,  1309, -1789,
   -1789, -1789, -1789,   825, -1789,   327, 17859,  1140,  1188,  1165,
   17859, 15868,  3574, -1789, -1789, 17859,  1320,  1138,  1174,  1176,
    1150,   797,   797,  1275,  1275,  4183,  1163,  1339, 18090, 18090,
   18090, 18090, 18090, 18090, 19263, 18090,  3419, 16691, 18090, 18090,
   18090, 18090, 17938, 18090, 18090, 18090, 18090, 18090, 18090, 18090,
   18090, 18090, 18090, 18090, 18090, 18090, 18090, 18090, 18090, 18090,
   18090, 18090, 18090, 18090, 18090, 18090, 15868, -1789, -1789,  1270,
   -1789, -1789,  1155,  1167,  1171, -1789,  1175, -1789, -1789,   301,
    4841, -1789,  1162, -1789, 18090,   583, -1789, -1789,   171, -1789,
     740,  1351, -1789, -1789, 19634, 18862, -1789,  2922, -1789,  6040,
     930,  1351, -1789,   396, 14932,   213, -1789, 19634,  1218,  1178,
   -1789,  1179,  1236, -1789, -1789, -1789, 14753, 17859,   978, 17811,
    1278,   274,  1357,  1292,   357, -1789,   768,   386, -1789,   768,
   -1789, 14932, 18423,   685, 14932, 19634, 19728, -1789, -1789, -1789,
    4031, -1789, -1789, -1789, -1789, -1789, -1789,  1181,   133, -1789,
    1182,   133,  1183, 19937, 19634, 18923,  1190, 11575,  1187,  1189,
   17859,  1191,  1193, 17859,  1007, -1789,   785,   560, 11575, -1789,
   -1789, -1789, -1789, -1789, -1789,  1252,  1192,  1386,  1305, 18166,
   18166, 18166, 18166, 18166, 18166,  1241, -1789, 19263, 18166,    92,
   18166, -1789, -1789, -1789, 18423, 19634,  1201, -1789,    15,  1370,
    1335, 11190, -1789, -1789, -1789,  1212, 14932,  1180,   583, 18014,
    1215, 18090,  7894,   833,  1220, 14932,    85,   486, -1789,  1244,
   -1789, 17859, 15868, -1789,  1288, -1789, -1789, -1789, 17565, -1789,
    1398, -1789,  1235, 18090, -1789, 18090, -1789,  1249,  1229,  1427,
   18971,  1246, 19728,  1428,  1250,  1251,  1254,  1303,  1433,  1253,
    1256, -1789, -1789, -1789, 19031,  1248,  1435, 19820, 16533, 19900,
   18090, 19682, 20008, 20042, 18022, 15618, 18430, 19346, 19346, 19346,
   19346,  3086,  3086,  3086,  3086,  3086,  1499,  1499,   797,   797,
     797,  1275,  1275,  1275,  1275, -1789,  1259, -1789,  1261,  1263,
    1264,  1265, -1789, -1789, 19728, 15868, 17859, 17859, -1789,   740,
    5444,   107, 14932,  1272, -1789,  1274,   651, -1789,   360, 14932,
   -1789, -1789, 17160, -1789, 14932, -1789, 14932, -1789,   978, 13661,
    1277,   389,   839,   389,   356, -1789, -1789, 17859,   187, -1789,
    1465,  1397, 14932, -1789,  1283,  1285,  1281,   583,  1200, 19634,
    1236,  1293, -1789,  1294,   133, 14932, 11575,  1296, -1789, -1789,
     930, -1789, -1789,  1298,  1299,  1301, -1789,  1302, 18166, -1789,
   18166, -1789, -1789,  1306,  1304,  1494,  1369,  1312, -1789,  1501,
    1315,  1316,  1318, -1789,  1373,  1313,  1514,  1324, -1789, -1789,
     583, -1789,  1493, -1789,  1325, -1789, -1789,  1328,  1330, -1789,
   -1789, 19728,  1331,  1333, -1789,  3136, -1789, -1789, -1789, -1789,
   -1789, -1789,  1400, 17859, 17859,  1174,  1360, 17859, -1789, 19728,
   19077, -1789, -1789, 18090, -1789, 18090, -1789, 18090, -1789, -1789,
   -1789, -1789, 18090, 19263, -1789, -1789, -1789, 18090, -1789, 18090,
   -1789, 19973, 18090,  1337,  8100, -1789, -1789, -1789, -1789,   740,
   -1789, -1789, -1789, -1789,   736, 15975,  5444,  1429, -1789,  2344,
    1372,  3219, -1789, -1789,  1457,   934,  4526,   123,   129,  1343,
     930,  1347, 19634, -1789, -1789, -1789,  1378, 17211, -1789, 17259,
   19634, -1789,  2800, -1789,  6452,  1464,   284,  1534,  1475, 14932,
   -1789, 19634, 11575, 11575, -1789,  1441,  1236,  1814,  1236,  1361,
   19634,  1362, -1789,  2131,  1367,  2186, -1789, -1789,   133, -1789,
   -1789,  1432, -1789, -1789, 18166, -1789, 18166, -1789, 18166, -1789,
   -1789, -1789, -1789, 18166, -1789, 19263, -1789, -1789,  2289, -1789,
    8306, -1789, -1789, -1789, 10778, -1789, -1789, -1789,  6658, 17859,
   -1789, -1789, -1789,  1371, 18090, 19137, 19728, 19728, 19728,  1434,
   19728, 19183, 19973, -1789, -1789,   740,  5444,  5444, 15868, -1789,
    1559, 16845,    82, -1789, 15975,   930,  4514, -1789,  1391, -1789,
     130,  1375,   131, -1789, 16344, -1789, -1789, -1789,   135, -1789,
   -1789,  2614, -1789,  1377, -1789,  1565,   136,   691,  1457, 16165,
   -1789, 16165, -1789, -1789,  1567,   934, 17636, 15438, -1789, -1789,
   -1789, -1789,  3206, -1789,  1569,  1502, 14932, -1789, 19634,  1387,
    1388,  1392,  1236,  1394, -1789,  1441,  1236, -1789, -1789, -1789,
   -1789,  2353,  1390, 18166,  1455, -1789, -1789, -1789,  1458, -1789,
    6658, 10984, 10778, -1789, -1789, -1789,  6658, -1789, -1789, 19728,
   18090, 18090, 18090,  8512,  1399,  1402, -1789, 18090, -1789,  5444,
   -1789, -1789, -1789, -1789, -1789, 17859,  1340,  2344, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789,   679, -1789,  1372, -1789, -1789, -1789, -1789, -1789,
     118,   530, -1789, 18090,  1512, -1789, 16537,   137,  1585, -1789,
   17859,   691,   138,  1457, -1789, -1789,  1403,  1592, 14932, -1789,
   19634, -1789, -1789,   165,  1405, 17859,   678,  1236,  1394, 15617,
   -1789,  1236, -1789, 18166, 18166, -1789, -1789, -1789, -1789,  8718,
   19728, 19728, 19728, -1789, -1789, -1789, 19728, -1789,   731,  1599,
    1600,  1408, -1789, -1789, 18090, 16344, 16344,  1544, -1789,  2614,
    2614,   703, -1789, -1789, -1789, 19728,  1601,  1430,  1415, -1789,
   18090, -1789, 16537, -1789,   139, -1789, 18090, 19634,  1533, -1789,
    1608, -1789,  1610, -1789,   156, -1789, -1789, -1789,  1418,   678,
   -1789,   678, -1789, -1789,  8924,  1420,  1507, -1789,  1521,  1463,
   -1789, -1789,  1523, 17859,  1443,  1340, -1789, -1789, 19728, -1789,
   -1789,  1454, -1789,  1593, -1789, -1789, -1789, -1789, 18090,   672,
   -1789, 19728,  1431, -1789, 19728, -1789,   380,  1437,  9130, 17859,
   -1789, 17859, -1789,  9336, -1789, -1789, -1789,  1438, -1789,  1444,
    1467, 15868,  1347,  1461, -1789, -1789, -1789, 19728,  1468,   150,
   -1789,  1568, -1789, -1789, -1789, -1789, -1789, -1789,  9542, -1789,
    5444,  1030, -1789,  1476, 15868,   872, -1789, -1789,  1456,  1646,
     571,   150, -1789, -1789,  1574, -1789,  5444,  1460, -1789,  1236,
     152, -1789, 17859, -1789, -1789, -1789, 17859, -1789,  1459,  1462,
     141, -1789,  1394,   660,  1575,   197,  1236,  1470, -1789,   682,
   17859, 17859, -1789,   329,  1649,  1582,  1394, -1789, -1789, -1789,
   -1789,  1583,   206,  1653,  1587, 14932, -1789,   682,  9748,  9954,
   -1789,   334,  1660,  1595, 14932, -1789, 19634, -1789, -1789, -1789,
    1661,  1597, 14932, -1789, 19634, 14932, -1789, 19634, 19634
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     5,     1,     3,     0,     0,     0,     0,     0,
       0,   204,   473,     0,   915,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1013,
     999,     0,   779,     0,   785,   786,   787,    29,   852,   986,
     987,   171,   172,   788,     0,   152,     0,     0,     0,     0,
      30,     0,     0,     0,     0,   223,     0,     0,     0,     0,
       0,     0,   442,   443,   444,   441,   440,   439,     0,     0,
       0,     0,   252,     0,     0,     0,    37,    38,    40,    41,
      39,   792,   794,   795,   789,   790,     0,     0,     0,   796,
     791,     0,   762,    32,    33,    34,    36,    35,     0,   793,
       0,     0,     0,     0,     0,   797,   445,   583,    31,     0,
     170,   140,   991,   780,     0,     0,     4,   126,   128,   851,
       0,   761,     0,     6,     0,     0,   222,     7,     9,     8,
      10,     0,     0,   437,   968,   487,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   543,   485,   973,   974,   565,
     558,   559,   560,   561,   564,   562,   563,   468,   568,     0,
     467,   943,   763,   770,     0,   854,   557,   436,   946,   947,
     959,   486,     0,     0,     0,   489,   488,   944,   945,   942,
     981,   985,     0,   547,   853,    11,   442,   443,   444,     0,
      36,     0,   126,   222,     0,  1045,   558,   486,  1046,     0,
    1048,  1049,   567,   481,     0,   474,   479,     0,     0,   529,
     530,   531,   532,    29,   986,   788,   765,    37,    38,    40,
      41,    39,     0,     0,  1069,   964,   763,     0,   764,   508,
       0,   510,   548,   549,   550,   551,   552,   553,   554,   556,
       0,  1007,     0,   775,   242,     0,  1069,   465,   774,   768,
       0,   784,   764,   994,   995,  1001,   993,   776,     0,   466,
       0,   778,   555,     0,   205,     0,     0,   470,   205,   150,
     472,     0,     0,   156,   158,     0,     0,   160,     0,    75,
      76,    82,    83,    67,    68,    59,    80,    91,    92,     0,
      62,     0,    66,    74,    72,    94,    86,    85,    57,   108,
      81,   101,   102,    58,    97,    55,    98,    56,    99,    54,
     103,    90,    95,   100,    87,    88,    61,    89,    93,    53,
      84,    69,   104,    77,   106,    70,    60,    47,    48,    49,
      50,    51,    52,    71,   107,   105,   110,    64,    45,    46,
      73,  1122,  1123,    65,  1127,    44,    63,    96,     0,    79,
       0,   126,   109,  1060,  1121,     0,  1124,     0,     0,     0,
     162,     0,     0,     0,   213,     0,     0,     0,     0,     0,
       0,     0,     0,   863,     0,   114,   116,   350,     0,     0,
     349,   355,     0,     0,   253,     0,   256,     0,     0,     0,
       0,  1066,   238,   250,  1013,  1013,   603,   633,   633,   603,
     633,     0,  1030,     0,   799,     0,     0,     0,  1028,     0,
      16,     0,   130,   230,   244,   251,   663,   595,   633,     0,
    1054,   575,   577,   579,   919,   473,   487,     0,     0,   485,
     486,   488,   205,     0,   781,     0,   782,     0,     0,     0,
     202,     0,     0,   132,   339,     0,    28,     0,     0,     0,
       0,     0,   203,   221,     0,   249,   234,   248,   442,   445,
     222,   438,   990,     0,   935,   192,   193,   194,   195,   196,
     198,   199,   201,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   999,     0,   191,     0,   990,   990,  1015,     0,     0,
       0,     0,     0,     0,     0,     0,   435,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     507,   509,   920,   921,     0,   934,   933,   339,   339,   990,
       0,   992,   982,     0,   222,     0,     0,     0,   164,     0,
     917,   912,   861,     0,   487,   485,     0,  1006,     0,  1012,
     600,   784,   487,   485,   486,   132,     0,   339,   464,     0,
     936,   777,     0,   140,   292,     0,   582,     0,   167,     0,
     205,   471,     0,     0,     0,     0,     0,   159,   190,   161,
    1122,  1123,  1119,  1120,     0,  1126,  1112,     0,     0,     0,
       0,    78,    43,    65,    42,  1061,   197,   200,   163,   140,
       0,   180,   189,     0,     0,     0,     0,     0,     0,   117,
       0,     0,     0,   862,   115,    18,     0,   111,     0,   351,
       0,   165,     0,     0,   166,   254,   255,  1050,     0,     0,
     487,   485,   486,   489,   488,     0,  1102,   262,     0,     0,
       0,     0,   861,   861,     0,     0,     0,     0,   168,     0,
       0,   798,  1029,   852,     0,     0,  1027,   857,  1026,   129,
       5,    13,    14,     0,   260,     0,     0,   588,     0,     0,
       0,   861,     0,   772,     0,   771,   766,   589,     0,     0,
       0,     0,     0,   919,   136,     0,   863,   918,  1131,   463,
     476,   490,   952,   972,   147,   139,   143,   144,   145,   146,
     436,     0,   566,   855,   856,   127,   861,     0,  1070,     0,
       0,     0,     0,   863,   340,     0,     0,     0,   487,   209,
     210,   208,   485,   486,   205,   184,   182,   183,   185,   571,
     224,   258,     0,   989,     0,     0,   513,   515,   514,   526,
       0,     0,   546,   511,   512,   516,   518,   517,   535,   536,
     533,   534,   537,   538,   539,   540,   541,   527,   528,   520,
     521,   519,   522,   523,   525,   542,   524,   478,   483,   491,
       0,     0,  1019,     0,   861,  1053,     0,  1052,  1069,   949,
     981,   240,   232,   246,     0,  1054,   236,   222,     0,   477,
     480,   482,   492,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   923,     0,   922,   925,   948,
     929,  1069,   926,     0,     0,     0,     0,     0,  1047,   475,
     910,   914,   860,   916,   462,   767,     0,  1005,     0,  1011,
     258,     0,   767,   998,   997,     0,     0,   922,   925,   996,
     926,   484,   294,   296,   136,   586,   585,   469,     0,   140,
     276,   151,   472,     0,     0,     0,     0,   205,   288,   288,
     157,   861,     0,     0,  1111,     0,  1108,   861,     0,  1082,
       0,     0,     0,     0,     0,   859,     0,    37,    38,    40,
      41,    39,     0,     0,     0,   801,   805,   806,   807,   810,
     808,   809,   812,     0,   800,   134,   850,   811,  1069,  1125,
     205,     0,     0,     0,    21,     0,    22,     0,    19,     0,
     112,     0,    20,     0,     0,     0,   123,   863,     0,   121,
     116,   113,   118,     0,   348,   356,   353,     0,     0,  1039,
    1044,  1041,  1040,  1043,  1042,    12,  1100,  1101,     0,   861,
       0,     0,     0,   601,   599,     0,   614,   860,   602,   860,
     632,   617,   626,   629,   620,  1038,  1037,  1036,     0,  1032,
       0,  1033,  1035,   205,     5,     0,     0,     0,   658,   659,
     668,   667,     0,     0,   485,     0,   860,   594,   598,     0,
     623,     0,  1055,     0,   576,     0,   205,  1089,   919,   320,
    1131,  1130,     0,     0,     0,   988,   860,  1072,  1068,   342,
     336,   337,   341,   343,   760,   862,   338,     0,     0,     0,
       0,   462,     0,     0,   490,     0,   953,   212,   205,   142,
     919,     0,     0,   260,   573,   226,   931,   932,   545,     0,
     640,   641,     0,   638,   860,  1014,     0,     0,   339,   262,
       0,   260,     0,     0,   258,     0,   999,   493,     0,     0,
     950,   951,   983,   984,     0,     0,   898,   868,   869,   870,
     877,     0,    37,    38,    40,    41,    39,     0,     0,     0,
     883,   889,   890,   891,   894,   892,   893,     0,   881,   879,
     880,   904,   861,     0,   912,  1004,  1010,     0,   260,     0,
     937,     0,   783,     0,   298,     0,   205,   148,   205,     0,
     205,     0,     0,     0,   268,   271,   269,   280,     0,   140,
     278,   177,   288,     0,   288,     0,   860,     0,     0,     0,
       0,     0,   860,  1110,  1113,  1078,   861,     0,  1073,     0,
     861,   833,   834,   831,   832,   867,     0,   861,   859,   607,
     635,   635,   607,   635,   597,   635,     0,     0,  1021,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1116,   214,     0,
     217,   181,     0,     0,     0,   119,     0,   124,   125,   117,
     862,   122,     0,   352,     0,  1051,   169,  1067,  1102,  1093,
    1097,   261,   263,   362,   605,     0,  1031,     0,    17,   205,
    1054,   259,   362,     0,     0,     0,   767,   591,     0,   773,
    1056,     0,  1089,   580,   135,   137,     0,     0,     0,  1131,
       0,     0,   325,   323,   925,   938,  1069,   925,   939,  1069,
    1071,   990,     0,     0,     0,   344,   133,   207,   209,   210,
     486,   188,   206,   186,   187,   211,   141,     0,   919,   257,
       0,   919,     0,   544,  1018,  1017,     0,   339,     0,     0,
       0,     0,     0,     0,   260,   228,   784,   924,   339,   873,
     874,   875,   876,   884,   885,   902,     0,   861,     0,   898,
     611,   637,   637,   611,   637,     0,   872,   906,   637,     0,
     860,   909,   911,   913,     0,  1008,     0,   924,     0,     0,
       0,   205,   295,   587,   153,     0,   472,   268,   270,     0,
       0,     0,   205,     0,     0,     0,     0,     0,   282,     0,
    1117,     0,     0,  1103,     0,  1109,  1107,  1074,   860,  1080,
       0,  1081,     0,     0,   803,   860,   858,     0,     0,   861,
       0,     0,   847,   861,     0,     0,     0,     0,   861,     0,
       0,   813,   848,   849,  1025,     0,   861,   816,   818,   817,
       0,     0,   814,   815,   819,   821,   820,   837,   838,   835,
     836,   839,   840,   841,   842,   843,   828,   829,   823,   824,
     822,   825,   826,   827,   830,  1115,     0,   140,     0,     0,
       0,     0,   120,    23,   354,     0,     0,     0,  1094,  1099,
       0,   436,     0,     0,    15,     0,   436,   671,     0,     0,
     673,   666,     0,   669,     0,   665,     0,  1058,     0,     0,
       0,   968,   543,     0,   489,  1090,   584,  1131,     0,   326,
     327,     0,     0,   321,     0,     0,     0,   346,   347,   345,
    1089,     0,   362,     0,   919,     0,   339,     0,   979,   362,
    1054,   362,  1057,     0,     0,     0,   494,     0,     0,   887,
     860,   897,   878,     0,     0,   861,     0,     0,   896,   861,
       0,     0,     0,   871,     0,     0,   861,     0,   882,   903,
    1009,   362,     0,   140,     0,   291,   277,     0,     0,   267,
     173,   281,     0,     0,   284,     0,   289,   290,   140,   283,
    1118,  1104,     0,     0,  1077,  1076,     0,     0,  1129,   866,
     865,   802,   615,   860,   606,     0,   618,   860,   634,   627,
     630,   621,     0,   860,   596,   804,   624,     0,   639,   860,
    1020,   845,     0,     0,   205,    24,    25,    26,    27,  1096,
    1091,  1092,  1095,   264,     0,     0,     0,   443,   434,     0,
       0,     0,   239,   361,     0,     0,   433,     0,     0,     0,
    1054,   436,   604,  1034,   358,   245,   661,     0,   664,     0,
     590,   578,   486,   138,   205,     0,     0,   330,   319,     0,
     322,   329,   339,   339,   335,   570,  1089,   436,  1089,     0,
    1016,     0,   978,   436,     0,   436,  1059,   362,   919,   975,
     901,   900,   886,   616,   860,   610,     0,   619,   860,   636,
     628,   631,   622,     0,   888,   860,   905,   625,   436,   140,
     205,   149,   154,   175,   205,   279,   285,   140,   287,     0,
    1105,  1075,  1079,     0,     0,     0,   609,   846,   593,     0,
    1024,  1023,   844,   140,   218,  1098,     0,     0,     0,  1062,
       0,     0,     0,   265,     0,  1054,     0,   399,   395,   401,
     762,    36,     0,   389,     0,   394,   398,   411,     0,   409,
     414,     0,   413,     0,   412,   453,     0,   222,     0,     0,
     367,     0,   368,   369,     0,     0,   435,     0,   662,   660,
     672,   670,     0,   331,   332,     0,     0,   317,   328,     0,
       0,     0,  1089,  1083,   235,   570,  1089,   980,   241,   358,
     247,   436,     0,     0,     0,   613,   895,   908,     0,   243,
     293,   205,   205,   140,   274,   174,   286,  1106,  1128,   864,
       0,     0,     0,   205,     0,     0,   461,     0,  1063,     0,
     379,   383,   458,   459,   393,     0,     0,     0,   374,   721,
     722,   720,   723,   724,   741,   743,   742,   712,   684,   682,
     683,   702,   717,   718,   678,   689,   690,   692,   691,   759,
     711,   695,   693,   694,   696,   697,   698,   699,   700,   701,
     703,   704,   705,   706,   707,   708,   710,   709,   679,   680,
     681,   685,   686,   688,   758,   726,   727,   731,   732,   733,
     734,   735,   736,   719,   738,   728,   729,   730,   713,   714,
     715,   716,   739,   740,   744,   746,   745,   747,   748,   725,
     750,   749,   752,   754,   753,   687,   757,   755,   756,   751,
     737,   677,   406,   674,     0,   375,   427,   428,   426,   419,
       0,   420,   376,     0,     0,   363,     0,     0,     0,   457,
       0,   222,     0,     0,   231,   357,     0,     0,     0,   318,
     334,   976,   977,     0,     0,     0,     0,  1089,  1083,     0,
     237,  1089,   899,     0,     0,   140,   272,   155,   176,   205,
     608,   592,  1022,   216,   377,   378,   456,   266,     0,   861,
     861,     0,   402,   390,     0,     0,     0,   408,   410,     0,
       0,   415,   422,   423,   421,   454,   451,  1064,     0,   364,
       0,   460,     0,   365,     0,   359,     0,   333,     0,   656,
     863,   136,   863,  1085,     0,   429,   136,   225,     0,     0,
     233,     0,   612,   907,   205,     0,   178,   380,   126,     0,
     381,   382,     0,   860,     0,   860,   404,   400,   405,   675,
     676,     0,   391,   424,   425,   417,   418,   416,     0,  1102,
     370,   455,     0,   366,   360,   657,   862,     0,   205,   862,
    1084,     0,  1088,   205,   136,   227,   229,     0,   275,     0,
     220,     0,   436,     0,   396,   403,   407,   452,     0,   919,
     372,     0,   654,   569,   572,  1086,  1087,   430,   205,   273,
       0,     0,   179,   387,     0,   435,   397,  1065,     0,   863,
     447,   919,   655,   574,     0,   219,     0,     0,   386,  1089,
     919,   302,  1131,   450,   449,   448,  1131,   446,     0,     0,
       0,   385,  1083,   447,     0,     0,  1089,     0,   384,     0,
    1131,  1131,   308,     0,   307,   305,  1083,   140,   431,   136,
     371,     0,     0,   309,     0,     0,   303,     0,   205,   205,
     313,     0,   312,   301,     0,   304,   311,   373,   215,   432,
     314,     0,     0,   299,   310,     0,   300,   316,   315
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1789, -1789, -1789,  -575, -1789, -1789, -1789,   106,  -478,   -42,
     446, -1789,  -203,  -516, -1789, -1789,   482,  1196,  1745, -1789,
    3066, -1789,  -808, -1789,  -540, -1789,  -703,    41, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789,  -930, -1789, -1789,  -932,
    -331, -1789, -1789, -1789,  -338, -1789, -1789,  -168,   449,    46,
   -1789, -1789, -1789, -1789, -1789, -1789,    55, -1789, -1789, -1789,
   -1789, -1789, -1789,    58, -1789, -1789,  1198,  1177,  1173,  -100,
    -746,  -949,   653,   728,  -330,   378, -1027, -1789,   -35, -1789,
   -1789, -1789, -1789,  -795,   200, -1789, -1789, -1789, -1789,  -321,
   -1789,  -601, -1789,   465,  -459, -1789, -1789,  1090, -1789,   -12,
   -1789, -1789, -1039, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789,   -48, -1789,    47, -1789, -1789, -1789, -1789, -1789,  -133,
   -1789,   155, -1024, -1789, -1342,  -353, -1789,  -158,   154,  -130,
    -328, -1789, -1526, -1789, -1789, -1789,   160,   -95,   -82,   -16,
    -790,    33, -1789, -1789,    32, -1789,    78,  -346, -1789,    10,
      -5,   -80,   -94,     3, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789,  -632,  -909, -1789, -1789, -1789, -1789, -1789,
     645,  1334, -1789,   577, -1789,   434, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1789, -1789, -1789,  -210,  -233,  -415, -1789, -1789,
   -1789, -1789, -1789,   513, -1789, -1789, -1789, -1789, -1789, -1789,
   -1789, -1789, -1017,  -383,  2707,    28, -1789,   402,  -430, -1789,
   -1789,  -504,  3690,  3913, -1789,   332, -1789, -1789,   590,   -22,
    -660, -1789, -1789,   687,   458,   535, -1789,   467, -1789, -1789,
   -1789, -1789, -1789,   669, -1789, -1789, -1789,    31,  -950,  -134,
    -447,  -441, -1789,   -97,  -132, -1789, -1789,    38,    45,   812,
     -73, -1789, -1789,   962,   -67, -1789,  -364,   436,    79, -1789,
    -423, -1789, -1789, -1789,   554, -1789, -1789, -1789, -1789,   861,
     523, -1789, -1789, -1789,  -362,  -722, -1789,  1323, -1314,  -162,
     -66,  -141,   893, -1789, -1789, -1789, -1788, -1789,  -218, -1009,
   -1339,  -207,   219, -1789,   568,   647, -1789, -1789, -1789, -1789,
     598, -1789,  2793,  -803
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,   116,   974,   670,   192,   352,   788,
     372,   373,   374,   375,   927,   928,   929,   118,   119,   120,
     121,   122,   996,  1234,   432,  1028,   705,   706,   580,   268,
    1741,   586,  1644,  1742,  2000,   912,   124,   125,   726,   727,
     735,   365,   609,  1956,  1191,  1407,  2022,   454,   193,   707,
    1031,  1272,  1475,   128,   673,  1050,   708,   741,  1054,   647,
    1049,   247,   561,   709,   674,  1051,   456,   392,   414,   131,
    1033,   977,   952,  1211,  1672,  1330,  1114,  1897,  1745,   861,
    1121,   585,   870,  1123,  1518,   853,  1104,  1107,  1320,  2028,
    2029,   695,   696,  1012,   722,   723,   379,   380,   382,  1707,
    1875,  1876,  1421,  1573,  2009,  2031,  1908,  1960,  1961,  1962,
    1682,  1683,  1684,  1685,  1910,  1911,  1917,  1972,  1688,  1689,
    1693,  1859,  1860,  1861,  1947,  2070,  1574,  1575,   194,   133,
    2046,  2047,  1696,  1577,  1578,  1579,  1580,   134,   135,   653,
     582,   136,   137,   138,   139,   140,   141,   142,   143,   261,
     144,   145,   146,  1722,   147,  1030,  1271,   148,   692,   693,
     694,   265,   424,   576,   680,   681,  1368,   682,  1369,   149,
     196,   651,   652,  1358,  1359,  1484,  1485,   151,   896,  1081,
     152,   897,  1082,   153,   898,  1083,   154,   899,  1084,   155,
     900,  1085,   156,   901,  1086,   654,  1361,  1487,   157,   902,
     158,   159,  1940,   160,   675,  1709,   676,  1223,   983,  1435,
    1431,  1852,  1853,   161,   162,   163,   250,   164,   251,   262,
     435,   568,   165,  1362,  1363,   906,   907,   166,  1146,   833,
     624,  1147,  1089,  1293,  1090,  1488,  1489,  1296,  1297,  1092,
    1495,  1496,  1093,   831,   552,   207,   208,   710,   698,   534,
    1244,  1245,   820,   821,   464,   168,   253,   169,   170,   197,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     744,   182,   257,   258,   242,   783,   784,  1375,  1376,   407,
     408,   968,   183,   638,   184,   691,   185,   355,  1877,  1928,
     393,   443,   716,   717,  1136,  1137,  1886,  1942,  1943,  1238,
    1418,   948,  1419,   949,   950,   876,   877,   878,   356,   357,
     909,   595,  1001,  1002
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     195,   198,   461,   200,   201,   202,   203,   205,   206,   515,
     209,   210,   211,   212,   353,   429,   232,   233,   234,   235,
     236,   237,   238,   239,   241,   543,   259,   426,   266,   448,
     787,  1029,   415,   852,   683,   167,   999,   419,   420,   267,
     535,   536,   431,   264,   449,   123,  1108,   275,  1239,   278,
     127,   450,   363,   685,   366,   687,   269,   840,   249,   129,
     994,   273,   130,  1016,   461,   457,  1236,   514,   254,   910,
     401,   775,  1111,  1053,  1125,   255,  1139,  1228,   823,   824,
    1562,   267,   780,   781,  1270,  1327,  1257,   818,  1262,   361,
     559,  1759,   995,   819,  1098,   973,   445,   429,   -78,   577,
    1949,   730,  1281,   -78,   428,   565,   926,   931,   845,   426,
     117,   630,   868,  1564,   633,   504,   825,  1516,   736,   737,
     738,   577,   848,   569,   431,   -43,   570,  1919,   849,   555,
     -43,   -42,  1699,  -650,   421,   362,   -42,   866,  1701,  -392,
    1767,   554,   427,   937,  1854,  1864,  1864,  1864,  1864,  1316,
    1759,   563,   577,   559,  1920,    14,   431,   559,   132,   276,
    1018,   545,   351,   562,   614,   616,   618,    14,   621,  -650,
    1991,  -642,  1867,  1498,   214,    40,  1157,   610,  1236,   391,
    1872,    14,  -764,  1426,   553,     3,   428,   626,   655,  1305,
     657,   199,   381,    14,   547,   385,   260,  1240,    14,  -110,
      14,  -773,   413,  1938,   391,   386,   532,   533,   688,   391,
     391,  1241,   532,   533,   263,  -110,  1158,  -642,   428,  -965,
    1565,   946,   947,  1438,  1372,  1596,  1566,  -957,   458,  1567,
     188,    65,    66,    67,  1568,  2063,   377,   391,  1048,  -955,
     428,   611,   214,    40,  2081,  1367,   422,  -653,  1939,   979,
     627,  1670,   404,   423,   581,   572,  1242,  1306,   572,  1416,
    1417,   542,   538,   943,  2059,   267,   583,  1201,   660,  -956,
    1597,  -765,   594,   972,   539,  -967,  1569,  1570,  2077,  1571,
    2064,  -581,   869,  1760,  1761,   560,  1517,  -954,   446,  2082,
     -78,   578,   742,  1235,  -651,   641,   541,   364,   538,   462,
    -964,   459,  1509,   631,  1440,   574,   634,   640,  1284,   579,
    1572,  -953, -1000,   658,   551,  -324,   605,   -43,  1921,  1110,
    -960,   516,   644,   -42,  1700,  1266,  1562,  1333,   867,  1337,
    1702,  -392,  1768,  -324,   938,  1474,  1855,  1865,  1929,  1933,
    1983,  -862,  2058,   939,   953,  -862,  -964,  1934,   954,  1243,
    -306,  1019,  -862,   732,   203,  -860,  -962,  1450,   378,  -957,
    1762,  -771,   980,  1598,   112,   728,  -766,  1714,  -969,   270,
     117,  -955,   639,  2065,   117,   919,   827,   981,   584,  -772,
     431,  1433,  2083,   267,   428,  1868,   461,  1869,   740,   241,
     241,   650,   267,   267,   650,   267,   539,   982,  1494,  1219,
     664,  -956,   626,   353,   919,  1235,   540,  1197,  1198,  -109,
    -958, -1003,  2073,   267,  1586,  1434,  -963,  2090,  2011,  -954,
     205,   227,   227,  1607, -1002,  -109,  -650,  -940,   711,  1267,
    1613,   463,  1615,  1186,  1335,  1336,  1448,  -462,   920,   724,
    -966,   462,   731,  -953, -1000,   415,   794,   795,   457,  -971,
    1451,  1605,  -960,   126,   442,   697,  -941,   743,   745,   462,
    1715,   271,  1638,  2012,   604,   441,   256,   441,   746,   747,
     748,   749,   751,   752,   753,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   686,   776,  1425,   779,
     743,   743,   782,   532,   533,  2074,   272,   532,   533,  -652,
    2091,   787,   802,   803,   804,   805,   806,   807,   808,   809,
     810,   811,   812,   813,   814,   729,   416,   416,   540,   249,
    1338,   396,   724,   724,   743,   826,  1507,   777,   117,   254,
     779,   802,  -958, -1003,   829,  1526,   255,   715,   387,   800,
     799,   351,   515,   837,   839,   538, -1002,  1247,   734,  -940,
     391,  1922,   724,  1248,  1427,  1003,  -462,  1004,   388,  -462,
     856, -1069,   857,   463,   402,   532,   533,  1428,  1731,  1332,
    1923,   460,   778,  1924,   984,   397,   132,   790,  -941,  1278,
     389,  1594,   442,  1335,  1336,   801,   390,  1723,  1429,  1725,
     402,  -767,   659,   683,   402,  1992,  1446,  1995,   666,  1996,
     514, -1069,   666,   790,   604,   391,   792,   391,   391,   391,
     391,   860,   685,   933,   687,   402,  1286,   402,   383,  1055,
     958,   960,   394,   434,  1659,   790,   395,   384,  -967,  -927,
     817,   417,   227,   544,  1595,   790,   398,  1047,   790,   150,
     661,   405,   406,   855,  1247,  -927,   399,  1564,  2042,   987,
    1248,   400,   604,   418,   225,   225,   440,  1461,   532,   533,
    1463,  -930,  1259,   428,  1259,   847,  1035,   405,   406,  1373,
    1059,   405,   406,   433,   926,   441,   117,  -930,  1261,  1519,
     452,  1263,  1264,  1914,  1007,  2043,  2044,  2045,   444,    14,
    1003,  1004,   405,   406,   405,   406,   908,  1099,  1101,  1100,
    1192,  1915,  1193,  1884,  1194,   441,  1013,  1888,  1196,   532,
     533, -1069,   946,   947,   697,   714,  1738,    55,   713,   453,
    1916,  -126,   932,   715,  1975,  -126,   458,   187,   188,    65,
      66,    67,   442,  -928,   447,  1038,  -643,  2060,  1614,   402,
     671,   672,  -126,  1976,   565,   507,  1977,   403, -1069,  -928,
    -644, -1069,  1045,   465,  1565,   967,   969,  1187,  1010,  1011,
    1566,   683,   458,  1567,   188,    65,    66,    67,  1568,   466,
     227,  1046,  1476,   402,  2043,  2044,  2045,  1105,  1106,   227,
     685,   666,   687,   546,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,  1591,   467,   227,   459,
     501,  1058,   213,   613,   615,   617,   171,   620,  1467,   684,
    1569,  1570,   502,  1571,   468,   404,   405,   406,  1456,  1477,
     469,   229,   231,   470,   402,    50,  1318,  1319,   530,   531,
     117,  1103,   437,  1416,  1417,   459,   581,   471,   391,  1127,
    1182,  1183,  1184,   472,  1585,  1133,   508,   267,  1704,   667,
     405,   406,  -645,  1609,   516,  -648,  1185,  1554,  1109,   402,
    1666,  1667,   217,   218,   219,   220,   221,   666,  1948,  1945,
    1946,   126,  1951,  2068,  2069,   225,  -646,  1490,   132,  1492,
    1259,  1029,  -647,  1497,   189,  1973,  1974,    91,  1969,  1970,
      93,    94,   505,    95,   190,    97,  1246,  1249,  1120,   150,
     506,   405,   406,   150,   537,   532,   533,  -961,  1364,  -649,
    1366,   430,  1370,   409,   683,  -765,   662,  1209,   548,   108,
     668,  1334,  1335,  1336,  1957,   550,  1080,   256,  1094,  1513,
    1335,  1336,   502,   685,   789,   687,   405,   406,   648,   649,
    1214,   442,  1215,  1763,   857,   556,  -763,   662,   117,   668,
     662,   668,   668,  1640,   797,  1217,  -965,   498,   499,   500,
     822,   501,  1118,   117,   436,   438,   439,   538,  1648,   702,
    1227,   230,   230,   502,   567,   566,   575,   596,   588,  1285,
   -1114,   599,   789,   458,   187,   188,    65,    66,    67,   600,
     606,   607,   844,   430,   167,   850,   132,  1611,   622,   623,
    1255,   625,   632,   731,   123,   731,   117,  1732,   645,   127,
     802,   635,   636,   225,   646,  1195,   715,   689,   129,   697,
    2052,   130,   225,   690,  1273,   430,   699,  1274,   700,  1275,
     712,   734,   701,   724,   703,  -131,    55,  2066,   832,   739,
     830,   225,   557,   661,   834,   835,  1210,   564,  1236,  2030,
     841,   697,   842,  1236,   132,   686,   459,   858,   790,   577,
    1311,   862,   865,  2038,   594,   879,   171,   150,   880,   117,
     171,  2030,   790,   790,   249,   913,   451,  1669,  1236,   914,
    2053,   911,  1315,   730,   254,   604,  1258,   915,  1258,  1740,
     916,   255,   117,   801,   917,  1454,   918,  1746,  1455,   817,
     817,   736,   737,   738,  1349,  1321,   936,   921,  1352,   922,
     940,   227,   941,  1753,   944,  1356,   945,   132,   951,   957,
     956,   959,   961,  1988,   117,   962,   963,   964,  1993,   975,
     970,  1441,   976,  1719,  1720,   978,  -788,  1322,   985,  1236,
     132,   986,   988,   989,   990,   993,  1442,   997,   998,  1006,
     683,   391,  1088,  1443,  1008,  1014,  1015,  1017,  1020,  1021,
    1292,  1292,  1080,  1022,  1023,  1024,  1032,  1044,   790,   685,
     790,   687,   132,   126,  1052,  1036,  2018,  1040,  1034,  1041,
     629,  1043,  1060,  1758,  1062,  1061,  1669,  -769,  1112,   637,
     227,   642,   230,  1899,  1102,   847,  1122,   847,  1126,  1124,
    1130,  1131,   117,  1132,   117,  1134,   117,  1148,   665,  1432,
    1154,  1669,  1149,  1669,  1150,   150,  1151,  1155,  1152,  1669,
    1153,   731,  1190,   686,  1200,  1202,  1204,  1344,   227,  2054,
     227,  1206,  1208,  2055,   171,  1207,   743,  1213,  1216,  1459,
     167,  1224,   683,  1222,  1225,  1226,   376,  2071,  2072,   733,
     123,  2079,   132,   604,   132,   127,   227,  1230,  1237,  1232,
    1251,   685,   724,   687,   129,  1481,  1268,   130,  1277,  1280,
    1987,  1283,  1990,   724,   411,  1235,  1288,   412,  -970,  1298,
    1235,  1299,   908,   458,    63,    64,    65,    66,    67,   697,
    1300,   126,   697,  1307,    72,   509,  1309,  1308,  1301,  1302,
     581,   535,  1303,  1304,  1258,  1235,  1310,  1312,  1329,  1324,
    1326,   267,  -964,  1331,  1340,   117,  1341,  1342,  1502,  1348,
    1515,   458,    63,    64,    65,    66,    67,  1534,  1350,   227,
     230,  1538,    72,   509,  1185,   429,  1544,   511,  1355,   230,
   -1130,   643,  1351,  1406,  1550,  1954,  1436,   426,  1408,   126,
    1420,  1449,  1505,  1413,   225,  1091,   459,  1354,   230,  2041,
    1409,  1452,   431,   132,  1410,  1453,  1235,  1048,  1411,   150,
    1437,  1460,  1464,   510,  1462,   511,   686,  1468,   684,  1466,
    1478,  1469,   171,  1471,  1472,  1480,  1479,  1070,  1088,   512,
    1493,   513,  1503,  1501,   459,  1080,  1080,  1080,  1080,  1080,
    1080,  1669,  1504,  1506,  1080,  1510,  1080,  1582,    34,    35,
      36,  1514,   126,  1705,  1587,  1229,  1523,   117,  1520,  1589,
    1527,  1590,   215,  1532,   731,  1528,  1533,  1537,   117,   822,
     822,  1542,  1543,   225,  1549,   126,   461,  1601,  1522,  1531,
    1536,  1548,  1581,  1545,  1539,  1540,  1546,  1581,  1541,  1553,
    1610,   724,  1555,  1625,  1556,  1557,  1558,  1629,   458,   187,
     188,    65,    66,    67,  1636,  1583,  1584,   126,  1593,  1599,
    1600,   225,  1602,   225,  1603,  1604,   132,    81,    82,    83,
      84,    85,   256,  1606,  1608,   697,  1612,   150,   222,  1616,
    1618,  1617,  1619,  1624,    89,    90,  1622,  1626,  1623,  1115,
    1628,  1633,   150,  1634,   227,   227,  1627,   729,    99,  1630,
    1631,  1559,  1632,  1635,  1637,  1639,  1641,  2078,  1642,  1866,
    1643,  1009,  1645,   105,  1646,   850,  1652,   850,  1649,  1663,
    1695,   459,  1674,  1687,  1703,  1708,   171,  1713,  1716,  1179,
    1180,  1181,  1182,  1183,  1184,   150,   684,   126,  1717,   126,
    1721,  1726,  1727,   376,   376,   376,   619,   376,  1185,  1729,
    1733,  1748,  1751,  1757,  1765,  1576,   461,  1766,  1862,  1863,
    1576,  1870,   225,  1878,  1080,  1879,  1080,  1881,  1882,  1712,
    1891,  1883,  1885,  1893,  1718,  1926,  1894,   724,   724,  1930,
    1904,  1295,  1756,  1905,  1935,   669,  1936,  1941,  1963,  1965,
    1057,  1967,  1971,  1979,  1980,  1978,  1985,  1986,   150,  1989,
    1994,  1998,   686,  1999,  -388,  2001,  2002,  2004,  2006,  1920,
    2010,  1088,  1088,  1088,  1088,  1088,  1088,  2013,  1581,  2019,
    1088,   150,  1088,  2020,  1581,  2026,  1581,  2021,  1095,   697,
    1096,  2032,  2027,  2036,   227,  2040,  2039,  2049,  2062,  2056,
     117,  2051,  2057,  2075,   171,  2076,  2080,  2084,   126,  1581,
    2085,   351,  2067,   150,  2092,  2095,  1116,  1692,  2093,   171,
    2096,   230,  1412,  2035,   793,  1744,   791, -1132, -1132, -1132,
   -1132, -1132,   493,   494,   495,   496,   497,   498,   499,   500,
     117,   501,  1279,  1932,  1221,  1508,  2050,  1898,   132,   684,
    2048,  1880,   796,   502,   686,  1647,   227,  1889,  1458,  1913,
     934,  1918,   171,  1764,  2087,  2061,  1694,  1675,  1887,  1365,
    1080,   227,  1080,   656,  1080,  1706,  1430,  1491,  1357,  1080,
     495,   496,   497,   498,   499,   500,   117,   501,   132,  1205,
     117,   150,  1294,   150,   117,   150,  1482,  1115,   225,   502,
     230,  1576,  1581,  1313,   224,   224,  1483,  1576,   725,  1576,
    1982,  2015,  2008,  1140,   391,   246,  1415,   604,  1665,  1346,
     351,   126,  1896,  1744,  1405,   171,     0,     0,     0,     0,
    1851,     0,  1576,     0,   132,     0,     0,  1858,   230,     0,
     230,   246,   132,     0,     0,   351,     0,   351,   171,     0,
    1088,     0,  1088,   351,     0,     0,     0,     0,   930,   930,
    1564,     0,     0,     0,  1927,     0,   230,     0,     0,     0,
    1260,     0,  1260,     0,  1295,  1486,     0,     0,  1486,  1080,
     171,     0,     0,     0,  2024,  1499,   117,   117,   117,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,   117,
       0,     0,    14,     0,   150,     0,     0,     0,     0,     0,
       0,     0,     0,  1937,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1576,     0,  1964,  1966,     0,
    1927,     0,     0,     0,   132,   461,     0,   225,     0,   230,
     132,     0,     0,     0,     0,     0,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,     0,
     171,     0,   171,     0,  1116,  1328,     0,  1565,     0,     0,
       0,     0,     0,  1566,     0,   458,  1567,   188,    65,    66,
      67,  1568,     0,     0,     0,   684,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1088,     0,  1088,   225,
    1088,     0,     0,     0,     0,  1088,   150,     0,     0,     0,
       0,     0,   604,     0,  1115,     0,     0,   150,     0,     0,
       0,     0,     0,  1569,  1570,   224,  1571,     0,     0,     0,
       0,     0,     0,     0,     0,   351,     0,     0,     0,  1080,
    1080,     0,     0,   126,     0,   117,     0,     0,   459,     0,
       0,     0,     0,  1620,  1958,  1621,     0,  1724,     0,     0,
       0,  1851,  1851,     0,  1697,  1858,  1858,     0,     0,     0,
       0,   171,     0,     0,   246,     0,   246,   684,   604,     0,
     697,     0,     0,   126,     0,     0,     0,     0,  1260,     0,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
     117,     0,   697,     0,  1457,  1088,     0,     0,     0,     0,
    2086,   697,     0,     0,   230,   230,     0,     0,     0,  2094,
       0,     0,     0,     0,     0,     0,     0,  2097,     0,   126,
    2098,     0,     0,     0,   117,   246,     0,   126,     0,   117,
       0,     0,     0,     0,     0,     0,     0,  2023,   132,   930,
       0,   930,     0,   930,     0,     0,     0,   930,     0,   930,
     930,  1199,     0,   224,   117,     0,  1500,     0,     0,     0,
    2037,     0,   224,   171,     0,     0,     0,  1564,     0,     0,
       0,  1116,   132,     0,   171,     0,     0,   132,     0,     0,
       0,   224,     0,     0,  1871,     0,  2025,     0,     0,  1734,
       0,  1735,   224,  1736,     0,     0,     0,     0,  1737,     0,
       0,     0,   132,     0,     0,     0,     0,     0,     0,    14,
       0,     0,     0,     0,   117,   117,     0,   246,     0,   126,
     246,     0,  1564,     0,     0,   126,     0,     0,  1444,   150,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   230,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1088,  1088,     0,     0,     0,
       0,     0,   132,   132,    14,     0,     0,     0,     0,   150,
       0,     0,     0,     0,  1565,     0,   246,     0,     0,     0,
    1566,  1592,   458,  1567,   188,    65,    66,    67,  1568,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1892,     0,
       0,     0,     0,     0,     0,     0,   230,     0,     0,     0,
       0,     0,     0,     0,     0,   150,     0,     0,     0,   150,
       0,   230,     0,   150,     0,  1564,     0,     0,     0,  1565,
    1569,  1570,     0,  1571,     0,  1566,     0,   458,  1567,   188,
      65,    66,    67,  1568,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   459,     0,     0,     0,     0,
       0,     0,     0,     0,  1728,     0,     0,    14,     0,   246,
       0,   246,     0,     0,   895,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,  1569,  1570,     0,  1571,  1564,
       0,     0,     0,     0,     0,     0,   171,     0,     0,     0,
       0,     0,     0,     0,     0,  1676,     0,   895,     0,     0,
     459,     0,     0,     0,     0,   150,   150,   150,     0,  1730,
       0,   150,     0,     0,     0,     0,   930,     0,   150,     0,
       0,    14,  1565,   126,     0,     0,   171,     0,  1566,     0,
     458,  1567,   188,    65,    66,    67,  1568,     0,     0,     0,
       0,     0,     0,     0,     0,   213,     0,     0,  1952,  1953,
       0,     0,     0,     0,   246,   246,     0,   126,     0,     0,
       0,     0,   126,   246,     0,     0,     0,     0,    50,     0,
       0,     0,   171,     0,     0,     0,   171,     0,  1569,  1570,
     171,  1571,     0,     0,   224,     0,  1565,   126,     0,     0,
       0,  1677,  1566,     0,   458,  1567,   188,    65,    66,    67,
    1568,     0,     0,   459,  1678,   217,   218,   219,   220,   221,
    1679,     0,  1739,   546,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,     0,   189,     0,     0,
      91,  1680,     0,    93,    94,     0,    95,  1681,    97,     0,
       0,     0,  1569,  1570,     0,  1571,     0,   126,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   530,   531,
       0,     0,   108,   224,   150,     0,     0,   459,     0,     0,
       0,     0,   171,   171,   171,     0,  1890,     0,   171,     0,
       0,     0,   872,     0,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,     0,     0,     0,     0,
       0,   224,     0,   224,     0,     0,   546,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   150,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     895,     0,   213,     0,     0,   532,   533,   246,     0,     0,
       0,     0,     0,   873,   246,   246,   895,   895,   895,   895,
     895,   530,   531,   150,     0,    50,     0,     0,   150,   895,
       0,  1025,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,     0,     0,   246,     0,     0,     0,
       0,     0,     0,   150,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   218,   219,   220,   221,     0,     0,   843,
       0,     0,   224,     0,     0,     0,   530,   531,     0,     0,
       0,     0,     0,     0,   189,   213,   246,    91,     0,     0,
      93,    94,     0,    95,   190,    97,     0,   874,   532,   533,
       0,   171,     0,     0,     0,     0,     0,     0,    50,     0,
     246,   246,     0,   150,   150,     0,   226,   226,     0,   108,
       0,   224,     0,     0,     0,     0,     0,   248,   246,     0,
       0,     0,     0,     0,     0,   246,   213,     0,   214,    40,
       0,   246,     0,     0,     0,   217,   218,   219,   220,   221,
       0,     0,   895,   532,   533,     0,   171,     0,     0,    50,
       0,     0,   942,     0,     0,     0,     0,   246,     0,     0,
       0,  1856,     0,    93,    94,  1857,    95,   190,    97,     0,
       0,     0,     0,     0,     0,     0,     0,   246,     0,     0,
     171,   246,     0,     0,     0,   171,   217,   218,   219,   220,
     221,   246,   108,  1691,  1025,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,  1026,     0,     0,
     171,     0,   815,     0,    93,    94,     0,    95,   190,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   358,
       0,     0,     0,     0,     0,     0,     0,   224,   224,   530,
     531,     0,     0,   108,     0,     0,     0,   816,     0,     0,
     112,   246,     0,     0,     0,   246,     0,   246,     0,     0,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     171,   171,     0,   895,   895,   895,   895,   895,   895,   224,
     895,     0,     0,   895,   895,   895,   895,   895,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   895,
     895,     0,   473,   474,   475,     0,   532,   533,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   226,     0,   895,
       0,     0,   476,   477,     0,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   213,   501,
     214,    40,   246,     0,   246,     0,     0,     0,     0,     0,
       0,   502,     0,     0,     0,     0,     0,   224,     0,     0,
     702,    50,     0,     0,     0,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,     0,     0,
       0,     0,     0,     0,     0,   246,     0,     0,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,   218,
     219,   220,   221,     0,   246,   246,   246,   246,   246,   246,
     530,   531,   224,   246,     0,   246,     0,     0,     0,   224,
       0,     0,     0,     0,   815,     0,    93,    94,     0,    95,
     190,    97,     0,     0,   224,     0,   895,     0,     0,     0,
       0,     0,   592,     0,   593,   226,   246,     0,     0,     0,
       0,     0,     0,   246,   226,   108,     0,     0,   895,   846,
     895,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,     0,     0,     0,     0,     0,     0,
       0,     0,   354,     0,   226,   895,  1423,   532,   533, -1132,
   -1132, -1132, -1132, -1132,  1177,  1178,  1179,  1180,  1181,  1182,
    1183,  1184,     0,   598,     0,     0,   473,   474,   475,     0,
       0,     0,     0,     0,     0,  1185,     0,     0,     0,     0,
       0,   246,   246,     0,     0,   246,   476,   477,  1516,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   246,   501,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   502,     0,     0,   248,     0,
       0,     0,     0,     0,     0,     0,   473,   474,   475,     0,
       0,     0,     0,   246,     0,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   718,   476,   477,   358,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,     0,     0,     0,     0,   246,   246,
       0,     0,   246,     0,     0,   502,     0,     0,   895,     0,
     895,     0,   895,     0,     0,     0,     0,   895,   224,     0,
       0,     0,   895,     0,   895,     0,     0,   895,     0,     0,
     213,     0,     0,     0,     0,     0,   903,     0,     0,     0,
     246,   246,     0,     0,   246,     0,     0,     0,     0,     0,
       0,   246,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1517,     0,   903,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1690,
       0,     0,     0,     0,     0,   354,     0,   354,     0,     0,
     217,   218,   219,   220,   221,     0,     0,     0,     0,   246,
       0,   246,     0,   246,     0,     0,     0,     0,   246,     0,
     224,     0,     0,     0,     0,     0,     0,   871,    93,    94,
       0,    95,   190,    97,   246,     0,     0,     0,     0,   895,
       0,     0,     0,     0,     0,     0,     0,   503,     0,  1037,
       0,   246,   246,     0,     0,     0,   354,   108,  1691,   246,
       0,   246,     0,     0,     0,     0,   226,     0,     0,  1159,
    1160,  1161,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   289,     0,   246,     0,   246,     0,     0,     0,
    1162,   246,   246,  1163,  1164,  1165,  1166,  1167,  1168,  1169,
    1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,
    1180,  1181,  1182,  1183,  1184,     0,     0,     0,   246,   291,
       0,     0,   991,   992,     0,     0,     0,     0,  1185,     0,
       0,     0,   213,     0,     0,   895,   895,   895,  1135,     0,
       0,     0,   895,     0,   246,   226,     0,     0,   354,     0,
     246,   354,   246,     0,     0,    50,     0,     0,   546,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,     0,     0,     0,     0,     0,     0,  1087,     0,     0,
       0,     0,     0,   226,     0,   226,     0,     0,     0,     0,
       0,   590,   217,   218,   219,   220,   221,   591,     0,     0,
       0,     0,     0,   530,   531,     0,     0,     0,     0,     0,
       0,   226,   903,     0,   189,     0,     0,    91,   344,     0,
      93,    94,     0,    95,   190,    97,     0, -1131,   903,   903,
     903,   903,   903,     0,     0,     0,     0,     0,   348,     0,
       0,   903,     0,     0,     0,   872,     0,     0,   895,   108,
     350,     0,     0,     0,     0,   246,     0,     0,  1189,  1371,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,     0,     0,     0,   246,     0,     0,     0,   246,   246,
     532,   533,     0,     0,   226,     0,     0,     0,     0,     0,
       0,     0,     0,   246,     0,   213,     0,     0,  1212,   895,
     354,     0,   875,     0,     0,     0,   873,     0,     0,     0,
       0,     0,  1138,   718,     0,   895,     0,     0,    50,     0,
       0,   895,     0,  1212,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,   228,
     228,     0,     0,     0,     0,   217,   218,   219,   220,   221,
     252,     0,     0,   895,   903,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     0,   246,   189,     0,  1269,
      91,     0,     0,    93,    94,     0,    95,   190,    97,     0,
    1345,     0,     0,     0,     0,   354,   354,     0,     0,     0,
       0,     0,     0,   248,   354,   246,     0,     0,  1220,     0,
       0,     0,   108,  1087,     0,     0,     0,     0,     0,     0,
       0,   246,     0,     0,     0,     0,  1231,   246,     0,     0,
       0,   246,     0,     0,     0,     0,     0,     0,     0,  1250,
       0,     0,     0,     0,     0,   246,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   226,
     226,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,     0,     0,  1282,     0,     0,     0,     0,
       0,     0,     0,     0,   502,   903,   903,   903,   903,   903,
     903,   226,   903,     0,     0,   903,   903,   903,   903,   903,
     903,   903,   903,   903,   903,   903,   903,   903,   903,   903,
     903,   903,   903,   903,   903,   903,   903,   903,   903,   903,
     903,   903,   903,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   903,   501,     0,     0,     0,     0,     0,     0,  1339,
       0,     0,     0,  1343,   502,     0,     0,     0,  1347,     0,
     228,     0,     0,     0,     0,     0,     0,     0,  1129,     0,
     473,   474,   475,     0,     0,   354,   354,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   226,
     476,   477,     0,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   502,
       0,     0,     0,     0,     0,     0,  1087,  1087,  1087,  1087,
    1087,  1087,     0,     0,   226,  1087,     0,  1087,     0,     0,
     213,   226,     0,     0,     0,     0,     0,     0,     0,     0,
    1445,     0,     0,     0,     0,     0,   226,     0,   903,     0,
       0,   354,     0,    50,     0,  1025,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,     0,   354,
     903,     0,   903,     0,     0,     0,   354,     0,   228,     0,
       0,     0,   354,  1470,     0,     0,  1473,   228,     0,     0,
     217,   218,   219,   220,   221,     0,     0,   903,     0,     0,
     530,   531,     0,     0,     0,     0,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   252,    93,    94,
       0,    95,   190,    97,     0,     0,     0,     0,   354,   473,
     474,   475,     0,     0,     0,     0,     0,  1563,     0,     0,
       0,     0,     0,   971,  1521,     0,     0,   108,   739,   476,
     477,  1525,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,   501,   532,   533,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   502,     0,
       0,     0,     0,     0,     0,  1087,     0,  1087,     0,     0,
       0,   252,   354,  1159,  1160,  1161,   354,     0,   875,     0,
       0,   354,     0,     0,     0,     0,     0,     0,     0,  1560,
    1561,     0,     0,     0,  1162,     0,     0,  1163,  1164,  1165,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,
    1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,     0,
     903,     0,   903,     0,   903,     0,     0,     0,     0,   903,
     226,     0,  1185,     0,   903,     0,   903,     0,     0,   903,
       0,     0,     0,   213,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1673,     0,     0,  1686,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,   904,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,     0,   354,     0,     0,     0,     0,
       0,     0,  1005,     0,     0,     0,  1650,  1651,     0,     0,
    1653,  1353,   904,   217,   218,   219,   220,   221,     0,     0,
       0,  1087,     0,  1087,     0,  1087,     0,     0,     0,     0,
    1087,     0,   226,     0,     0,     0,   354,     0,   409,   354,
       0,    93,    94,     0,    95,   190,    97,     0,  1671,     0,
       0,   903,     0,     0,     0,     0,     0,     0,     0,  1698,
       0,     0,     0,  1754,  1755,     0,     0,     0,     0,     0,
     108,     0,     0,  1686,   410,     0,     0,     0,     0,     0,
       0,     0,   473,   474,   475,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,     0,   228,
       0,     0,   476,   477,   354,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
    1087,     0,  1747,  1289,  1290,  1291,   213,     0,     0,     0,
       0,   502,     0,     0,     0,     0,     0,   903,   903,   903,
       0,     0,     0,     0,   903,     0,  1907,  1671,     0,    50,
       0,     0,     0,     0,  1686,     0,     0,     0,     0,     0,
       0,     0,   354,   354,     0,     0,     0,     0,   228,     0,
       0,     0,  1671,     0,  1671,     0,     0,     0,     0,  1873,
    1671,     0,     0,     0,     0,     0,   217,   218,   219,   220,
     221,     0,   905,   354,     0,     0,     0,   213,     0,     0,
       0,     0,     0,     0,     0,     0,   228,     0,   228,     0,
       0,     0,     0,     0,    93,    94,     0,    95,   190,    97,
      50,     0,     0,     0,     0,   935,     0,     0,     0,     0,
       0,     0,     0,     0,   228,   904,     0,   289,  1909,     0,
       0,     0,     0,   108,     0,     0,     0,     0,     0,     0,
     903,   904,   904,   904,   904,   904,     0,   217,   218,   219,
     220,   221,     0,     0,   904,  1037,     0,     0,     0,   354,
     354,     0,     0,   354,   291,   213,     0,     0,     0,     0,
    1087,  1087,     0,     0,     0,    93,    94,   213,    95,   190,
      97,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,   903,     0,     0,     0,     0,     0,   228,     0,     0,
      50,   354,     0,     0,   108,  1034,     0,   903,  -435,     0,
       0,  1677,   354,   903,     0,     0,     0,   458,   187,   188,
      65,    66,    67,     0,  1678,   217,   218,   219,   220,   221,
    1679,     0,     0,  1931,     0,     0,   590,   217,   218,   219,
     220,   221,   591,     0,     0,     0,   252,   189,  1944,     0,
      91,    92,  1671,    93,    94,   903,    95,  1681,    97,   189,
       0,     0,    91,   344,     0,    93,    94,     0,    95,   190,
      97,     0,     0,     0,     0,     0,     0,   904,     0,     0,
       0,     0,   108,   348,     0,   354,     0,     0,     0,     0,
     459,     0,     0,     0,   108,   350,     0,  2034,     0,   213,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,     0,     0,  1673,     0,     0,   252,     0,     0,     0,
       0,     0,    50,     0,     0,     0,  2003,     0,     0,     0,
     367,   368,     0,     0,     0,   354,     0,   354,     0,     0,
       0,     0,   354,   354,     0,     0,     0,     0,  1117,     0,
       0,     0,  1944,     0,  2016,     0,     0,     0,     0,   217,
     218,   219,   220,   221,  1141,  1142,  1143,  1144,  1145,     0,
       0,     0,   228,   228,     0,     0,     0,  1156,     0,     0,
       0,   369,     0,     0,   370,     0,     0,    93,    94,     0,
      95,   190,    97,     0,     0,     0,     0,     0,     0,     0,
       0,   354,     0,     0,     0,     0,     0,   371,   904,   904,
     904,   904,   904,   904,   252,   904,   108,     0,   904,   904,
     904,   904,   904,   904,   904,   904,   904,   904,   904,   904,
     904,   904,   904,   904,   904,   904,   904,   904,   904,   904,
     904,   904,   904,   904,   904,   904,   473,   474,   475,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   904,     0,   476,   477,     0,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   213,   501,     0,     0,     0,     0,     0,     0,
    1256,     0,     0,     0,     0,   502,   354,     0,     0,   213,
       0,   965,   228,   966,     0,    50,     0,     0,     0,     0,
       0,   354,     0,   923,   924,   354,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1959,     0,     0,     0,     0,     0,
       0,     0,   217,   218,   219,   220,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,   217,
     218,   219,   220,   221,   228,     0,     0,   925,     0,     0,
      93,    94,     0,    95,   190,    97,     0,     0,     0,   228,
       0,   904,     0,     0,     0,     0,     0,    93,    94,   354,
      95,   190,    97,     0,     0,     0,     0,     0,     0,   108,
     213,     0,     0,   904,     0,   904,     0,     0,     0,     0,
       0,  1128,     0,     0,     0,   354,   108,   354,     0,     0,
       0,  1145,  1360,    50,     0,  1360,     0,     0,     0,  1063,
     904,  1374,  1377,  1378,  1379,  1381,  1382,  1383,  1384,  1385,
    1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,  1394,  1395,
    1396,  1397,  1398,  1399,  1400,  1401,  1402,  1403,  1404,     0,
     217,   218,   219,   220,   221,     0,     0,     0,   354,     0,
       0,     0,   354,     0,     0,     0,     0,  1414,     0,     0,
       0,     0,   189,     0,     0,    91,   354,   354,    93,    94,
       0,    95,   190,    97,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,     0,     0,
       0,   359,   425,    13,     0,     0,     0,     0,     0,     0,
       0,     0,   798,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,     0,     0,     0,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,    31,    32,     0,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,     0,
       0,     0,     0,   904,     0,   904,    43,   904,     0,     0,
       0,     0,   904,   252,     0,     0,     0,   904,    50,   904,
       0,     0,   904,     0,  1511,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,   186,   187,   188,    65,    66,
      67,     0,     0,    69,    70,     0,  1529,     0,  1530,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,    87,  1551,     0,     0,     0,   189,    89,    90,
      91,    92,     0,    93,    94,     0,    95,   190,    97,     0,
       0,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,   101,   102,     0,     0,   252,   213,   105,   106,   107,
       0,     0,   108,   109,   473,   474,   475,     0,     0,   112,
     113,   114,   115,     0,   904,     0,     0,     0,     0,    50,
       0,     0,     0,     0,   476,   477,     0,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,     0,     0,     0,     0,   217,   218,   219,   220,
     221,     0,     0,   502,     0,     0,     0,     0,     0,   279,
     280,     0,   281,   282,     0,     0,   283,   284,   285,   286,
       0,     0,   455,     0,    93,    94,     0,    95,   190,    97,
       0,     0,     0,     0,   287,   288,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     904,   904,   904,   108,     0,     0,  1655,   904,  1656,     0,
    1657,     0,     0,   290,     0,  1658,  1912,     0,     0,     0,
    1660,     0,  1661,     0,     0,  1662,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   213,     0,   214,
      40,     0,     0,   299,     0,     0,     0,     0,     0,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
      50,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   213,   335,  1203,   785,   337,
     338,   339,     0,     0,     0,   340,   601,   217,   218,   219,
     220,   221,   602,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,   904,     0,     0,     0,     0,     0,   603,
       0,     0,     0,     0,     0,    93,    94,  1749,    95,   190,
      97,   345,     0,   346,     0,     0,   347,     0,     0,     0,
       0,     0,     0,     0,   349,   217,   218,   219,   220,   221,
       0,     0,     0,     0,   108,     0,     0,     0,   786,     0,
       0,   112,     0,     0,   904,     0,     0,   189,     0,     0,
      91,    92,     0,    93,    94,     0,    95,   190,    97,     0,
     904,     0,     0,     0,     0,     0,   904,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,     0,  2005,     0,     0,     0,     0,
       0,     0,     0,  1900,  1901,  1902,     0,     0,   904,     0,
    1906,     0,    14,     0,    15,    16,     0,     0,     0,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,    31,    32,    33,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,     0,
      41,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    47,     0,    48,     0,    49,     0,     0,    50,    51,
       0,     0,     0,    52,    53,    54,    55,    56,    57,    58,
       0,    59,  -205,    60,    61,    62,    63,    64,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,    85,  1925,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,    93,    94,     0,    95,    96,    97,    98,
       0,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,   101,   102,   103,     0,   104,     0,   105,   106,   107,
       0,     0,   108,   109,     0,   110,   111,  1968,     0,   112,
     113,   114,   115,     0,     0,     0,     0,     5,     6,     7,
       8,     9,     0,  1981,     0,     0,     0,    10,     0,  1984,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,    15,    16,     0,     0,     0,     0,
      17,  2007,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,    31,    32,    33,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,     0,
      41,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    47,     0,    48,     0,    49,     0,     0,    50,    51,
       0,     0,     0,    52,    53,    54,    55,    56,    57,    58,
       0,    59,     0,    60,    61,    62,    63,    64,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,    85,     0,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,    93,    94,     0,    95,    96,    97,    98,
       0,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,   101,   102,   103,     0,   104,     0,   105,   106,   107,
       0,     0,   108,   109,     0,   110,   111,  1218,     0,   112,
     113,   114,   115,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      15,    16,     0,     0,     0,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,    30,    31,    32,    33,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,     0,    41,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    47,     0,    48,
       0,    49,     0,     0,    50,    51,     0,     0,     0,    52,
      53,    54,    55,    56,    57,    58,     0,    59,     0,    60,
      61,    62,    63,    64,    65,    66,    67,     0,    68,    69,
      70,    71,    72,    73,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      84,    85,     0,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,    93,
      94,     0,    95,    96,    97,    98,     0,     0,    99,     0,
       0,   100,     0,     0,     0,     0,     0,   101,   102,   103,
       0,   104,     0,   105,   106,   107,     0,     0,   108,   109,
       0,   110,   111,  1424,     0,   112,   113,   114,   115,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,    15,    16,     0,     0,
       0,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,    29,    30,    31,    32,
      33,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,     0,    41,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    47,     0,    48,     0,    49,     0,     0,
      50,    51,     0,     0,     0,    52,    53,    54,    55,     0,
      57,    58,     0,    59,     0,     0,    61,    62,    63,    64,
      65,    66,    67,     0,    68,    69,    70,     0,    72,    73,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    83,    84,    85,     0,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,   189,
      89,    90,    91,    92,     0,    93,    94,     0,    95,   190,
      97,    98,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,   101,   102,     0,     0,     0,     0,   105,
     106,   107,     0,     0,   108,   109,     0,   110,   111,   704,
       0,   112,   113,   114,   115,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,    15,    16,     0,     0,     0,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,    29,    30,    31,    32,    33,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,     0,    41,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    47,
       0,    48,     0,    49,     0,     0,    50,    51,     0,     0,
       0,    52,    53,    54,    55,     0,    57,    58,     0,    59,
       0,     0,    61,    62,    63,    64,    65,    66,    67,     0,
      68,    69,    70,     0,    72,    73,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,    85,     0,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,   189,    89,    90,    91,    92,
       0,    93,    94,     0,    95,   190,    97,    98,     0,     0,
      99,     0,     0,   100,     0,     0,     0,     0,     0,   101,
     102,     0,     0,     0,     0,   105,   106,   107,     0,     0,
     108,   109,     0,   110,   111,  1027,     0,   112,   113,   114,
     115,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    15,    16,
       0,     0,     0,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,    33,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,     0,    41,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    47,     0,    48,     0,    49,
       0,     0,    50,    51,     0,     0,     0,    52,    53,    54,
      55,     0,    57,    58,     0,    59,  -205,     0,    61,    62,
      63,    64,    65,    66,    67,     0,    68,    69,    70,     0,
      72,    73,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,     0,    81,    82,    83,    84,    85,
       0,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,   189,    89,    90,    91,    92,     0,    93,    94,     0,
      95,   190,    97,    98,     0,     0,    99,     0,     0,   100,
       0,     0,     0,     0,     0,   101,   102,     0,     0,     0,
       0,   105,   106,   107,     0,     0,   108,   109,     0,   110,
     111,     0,     0,   112,   113,   114,   115,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,    15,    16,     0,     0,     0,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,    31,    32,    33,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,     0,
      41,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    47,     0,    48,     0,    49,     0,     0,    50,    51,
       0,     0,     0,    52,    53,    54,    55,     0,    57,    58,
       0,    59,     0,     0,    61,    62,    63,    64,    65,    66,
      67,     0,    68,    69,    70,     0,    72,    73,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,    85,     0,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,   189,    89,    90,
      91,    92,     0,    93,    94,     0,    95,   190,    97,    98,
       0,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,   101,   102,     0,     0,     0,     0,   105,   106,   107,
       0,     0,   108,   109,     0,   110,   111,  1188,     0,   112,
     113,   114,   115,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      15,    16,     0,     0,     0,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,    30,    31,    32,    33,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,     0,    41,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    47,     0,    48,
       0,    49,     0,     0,    50,    51,     0,     0,     0,    52,
      53,    54,    55,     0,    57,    58,     0,    59,     0,     0,
      61,    62,    63,    64,    65,    66,    67,     0,    68,    69,
      70,     0,    72,    73,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      84,    85,     0,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,   189,    89,    90,    91,    92,     0,    93,
      94,     0,    95,   190,    97,    98,     0,     0,    99,     0,
       0,   100,     0,     0,     0,     0,     0,   101,   102,     0,
       0,     0,     0,   105,   106,   107,     0,     0,   108,   109,
       0,   110,   111,  1233,     0,   112,   113,   114,   115,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,    15,    16,     0,     0,
       0,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,    29,    30,    31,    32,
      33,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,     0,    41,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    47,     0,    48,     0,    49,     0,     0,
      50,    51,     0,     0,     0,    52,    53,    54,    55,     0,
      57,    58,     0,    59,     0,     0,    61,    62,    63,    64,
      65,    66,    67,     0,    68,    69,    70,     0,    72,    73,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    83,    84,    85,     0,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,   189,
      89,    90,    91,    92,     0,    93,    94,     0,    95,   190,
      97,    98,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,   101,   102,     0,     0,     0,     0,   105,
     106,   107,     0,     0,   108,   109,     0,   110,   111,  1265,
       0,   112,   113,   114,   115,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,    15,    16,     0,     0,     0,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,    29,    30,    31,    32,    33,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,     0,    41,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    47,
       0,    48,     0,    49,     0,     0,    50,    51,     0,     0,
       0,    52,    53,    54,    55,     0,    57,    58,     0,    59,
       0,     0,    61,    62,    63,    64,    65,    66,    67,     0,
      68,    69,    70,     0,    72,    73,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,    85,     0,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,   189,    89,    90,    91,    92,
       0,    93,    94,     0,    95,   190,    97,    98,     0,     0,
      99,     0,     0,   100,     0,     0,     0,     0,     0,   101,
     102,     0,     0,     0,     0,   105,   106,   107,     0,     0,
     108,   109,     0,   110,   111,  1323,     0,   112,   113,   114,
     115,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    15,    16,
       0,     0,     0,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,    33,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,     0,    41,     0,    42,     0,     0,     0,
      43,    44,    45,    46,  1325,    47,     0,    48,     0,    49,
       0,     0,    50,    51,     0,     0,     0,    52,    53,    54,
      55,     0,    57,    58,     0,    59,     0,     0,    61,    62,
      63,    64,    65,    66,    67,     0,    68,    69,    70,     0,
      72,    73,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,     0,    81,    82,    83,    84,    85,
       0,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,   189,    89,    90,    91,    92,     0,    93,    94,     0,
      95,   190,    97,    98,     0,     0,    99,     0,     0,   100,
       0,     0,     0,     0,     0,   101,   102,     0,     0,     0,
       0,   105,   106,   107,     0,     0,   108,   109,     0,   110,
     111,     0,     0,   112,   113,   114,   115,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,    15,    16,     0,     0,     0,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,    31,    32,    33,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,     0,
      41,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    47,     0,    48,     0,    49,  1512,     0,    50,    51,
       0,     0,     0,    52,    53,    54,    55,     0,    57,    58,
       0,    59,     0,     0,    61,    62,    63,    64,    65,    66,
      67,     0,    68,    69,    70,     0,    72,    73,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,    85,     0,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,   189,    89,    90,
      91,    92,     0,    93,    94,     0,    95,   190,    97,    98,
       0,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,   101,   102,     0,     0,     0,     0,   105,   106,   107,
       0,     0,   108,   109,     0,   110,   111,     0,     0,   112,
     113,   114,   115,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      15,    16,     0,     0,     0,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,    30,    31,    32,    33,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,     0,    41,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    47,     0,    48,
       0,    49,     0,     0,    50,    51,     0,     0,     0,    52,
      53,    54,    55,     0,    57,    58,     0,    59,     0,     0,
      61,    62,    63,    64,    65,    66,    67,     0,    68,    69,
      70,     0,    72,    73,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      84,    85,     0,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,   189,    89,    90,    91,    92,     0,    93,
      94,     0,    95,   190,    97,    98,     0,     0,    99,     0,
       0,   100,     0,     0,     0,     0,     0,   101,   102,     0,
       0,     0,     0,   105,   106,   107,     0,     0,   108,   109,
       0,   110,   111,  1664,     0,   112,   113,   114,   115,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,    15,    16,     0,     0,
       0,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,    29,    30,    31,    32,
      33,     0,     0,  -297,    34,    35,    36,    37,    38,    39,
      40,     0,    41,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    47,     0,    48,     0,    49,     0,     0,
      50,    51,     0,     0,     0,    52,    53,    54,    55,     0,
      57,    58,     0,    59,     0,     0,    61,    62,    63,    64,
      65,    66,    67,     0,    68,    69,    70,     0,    72,    73,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    83,    84,    85,     0,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,   189,
      89,    90,    91,    92,     0,    93,    94,     0,    95,   190,
      97,    98,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,   101,   102,     0,     0,     0,     0,   105,
     106,   107,     0,     0,   108,   109,     0,   110,   111,     0,
       0,   112,   113,   114,   115,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,    15,    16,     0,     0,     0,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,    29,    30,    31,    32,    33,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,     0,    41,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    47,
       0,    48,     0,    49,     0,     0,    50,    51,     0,     0,
       0,    52,    53,    54,    55,     0,    57,    58,     0,    59,
       0,     0,    61,    62,    63,    64,    65,    66,    67,     0,
      68,    69,    70,     0,    72,    73,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,    85,     0,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,   189,    89,    90,    91,    92,
       0,    93,    94,     0,    95,   190,    97,    98,     0,     0,
      99,     0,     0,   100,     0,     0,     0,     0,     0,   101,
     102,     0,     0,     0,     0,   105,   106,   107,     0,     0,
     108,   109,     0,   110,   111,  1903,     0,   112,   113,   114,
     115,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    15,    16,
       0,     0,     0,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,    33,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,     0,    41,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    47,     0,    48,  1955,    49,
       0,     0,    50,    51,     0,     0,     0,    52,    53,    54,
      55,     0,    57,    58,     0,    59,     0,     0,    61,    62,
      63,    64,    65,    66,    67,     0,    68,    69,    70,     0,
      72,    73,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,     0,    81,    82,    83,    84,    85,
       0,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,   189,    89,    90,    91,    92,     0,    93,    94,     0,
      95,   190,    97,    98,     0,     0,    99,     0,     0,   100,
       0,     0,     0,     0,     0,   101,   102,     0,     0,     0,
       0,   105,   106,   107,     0,     0,   108,   109,     0,   110,
     111,     0,     0,   112,   113,   114,   115,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,    15,    16,     0,     0,     0,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,    31,    32,    33,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,     0,
      41,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    47,  1997,    48,     0,    49,     0,     0,    50,    51,
       0,     0,     0,    52,    53,    54,    55,     0,    57,    58,
       0,    59,     0,     0,    61,    62,    63,    64,    65,    66,
      67,     0,    68,    69,    70,     0,    72,    73,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,    85,     0,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,   189,    89,    90,
      91,    92,     0,    93,    94,     0,    95,   190,    97,    98,
       0,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,   101,   102,     0,     0,     0,     0,   105,   106,   107,
       0,     0,   108,   109,     0,   110,   111,     0,     0,   112,
     113,   114,   115,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      15,    16,     0,     0,     0,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,    30,    31,    32,    33,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,     0,    41,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    47,     0,    48,
       0,    49,     0,     0,    50,    51,     0,     0,     0,    52,
      53,    54,    55,     0,    57,    58,     0,    59,     0,     0,
      61,    62,    63,    64,    65,    66,    67,     0,    68,    69,
      70,     0,    72,    73,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      84,    85,     0,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,   189,    89,    90,    91,    92,     0,    93,
      94,     0,    95,   190,    97,    98,     0,     0,    99,     0,
       0,   100,     0,     0,     0,     0,     0,   101,   102,     0,
       0,     0,     0,   105,   106,   107,     0,     0,   108,   109,
       0,   110,   111,  2014,     0,   112,   113,   114,   115,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,    15,    16,     0,     0,
       0,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,    29,    30,    31,    32,
      33,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,     0,    41,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    47,     0,    48,     0,    49,     0,     0,
      50,    51,     0,     0,     0,    52,    53,    54,    55,     0,
      57,    58,     0,    59,     0,     0,    61,    62,    63,    64,
      65,    66,    67,     0,    68,    69,    70,     0,    72,    73,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    83,    84,    85,     0,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,   189,
      89,    90,    91,    92,     0,    93,    94,     0,    95,   190,
      97,    98,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,   101,   102,     0,     0,     0,     0,   105,
     106,   107,     0,     0,   108,   109,     0,   110,   111,  2017,
       0,   112,   113,   114,   115,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,    15,    16,     0,     0,     0,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,    29,    30,    31,    32,    33,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,     0,    41,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    47,
       0,    48,     0,    49,     0,     0,    50,    51,     0,     0,
       0,    52,    53,    54,    55,     0,    57,    58,     0,    59,
       0,     0,    61,    62,    63,    64,    65,    66,    67,     0,
      68,    69,    70,     0,    72,    73,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,    85,     0,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,   189,    89,    90,    91,    92,
       0,    93,    94,     0,    95,   190,    97,    98,     0,     0,
      99,     0,     0,   100,     0,     0,     0,     0,     0,   101,
     102,     0,     0,     0,     0,   105,   106,   107,     0,     0,
     108,   109,     0,   110,   111,  2033,     0,   112,   113,   114,
     115,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    15,    16,
       0,     0,     0,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,    33,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,     0,    41,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    47,     0,    48,     0,    49,
       0,     0,    50,    51,     0,     0,     0,    52,    53,    54,
      55,     0,    57,    58,     0,    59,     0,     0,    61,    62,
      63,    64,    65,    66,    67,     0,    68,    69,    70,     0,
      72,    73,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,     0,    81,    82,    83,    84,    85,
       0,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,   189,    89,    90,    91,    92,     0,    93,    94,     0,
      95,   190,    97,    98,     0,     0,    99,     0,     0,   100,
       0,     0,     0,     0,     0,   101,   102,     0,     0,     0,
       0,   105,   106,   107,     0,     0,   108,   109,     0,   110,
     111,  2088,     0,   112,   113,   114,   115,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,    15,    16,     0,     0,     0,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,    31,    32,    33,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,     0,
      41,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    47,     0,    48,     0,    49,     0,     0,    50,    51,
       0,     0,     0,    52,    53,    54,    55,     0,    57,    58,
       0,    59,     0,     0,    61,    62,    63,    64,    65,    66,
      67,     0,    68,    69,    70,     0,    72,    73,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,    85,     0,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,   189,    89,    90,
      91,    92,     0,    93,    94,     0,    95,   190,    97,    98,
       0,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,   101,   102,     0,     0,     0,     0,   105,   106,   107,
       0,     0,   108,   109,     0,   110,   111,  2089,     0,   112,
     113,   114,   115,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
       0,     0,   573,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,     0,     0,     0,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,    30,    31,    32,    33,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,     0,    41,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    47,     0,    48,
       0,    49,     0,     0,    50,    51,     0,     0,     0,    52,
      53,    54,    55,     0,    57,    58,     0,    59,     0,     0,
      61,    62,   187,   188,    65,    66,    67,     0,    68,    69,
      70,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      84,    85,     0,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,   189,    89,    90,    91,    92,     0,    93,
      94,     0,    95,   190,    97,     0,     0,     0,    99,     0,
       0,   100,     0,     0,     0,     0,     0,   101,   102,     0,
       0,     0,     0,   105,   106,   107,     0,     0,   108,   109,
       0,   110,   111,     0,     0,   112,   113,   114,   115,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,    13,     0,     0,   859,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,     0,     0,
       0,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,    29,    30,    31,    32,
      33,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,     0,    41,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    47,     0,    48,     0,    49,     0,     0,
      50,    51,     0,     0,     0,    52,    53,    54,    55,     0,
      57,    58,     0,    59,     0,     0,    61,    62,   187,   188,
      65,    66,    67,     0,    68,    69,    70,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    83,    84,    85,     0,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,   189,
      89,    90,    91,    92,     0,    93,    94,     0,    95,   190,
      97,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,   101,   102,     0,     0,     0,     0,   105,
     106,   107,     0,     0,   108,   109,     0,   110,   111,     0,
       0,   112,   113,   114,   115,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    13,     0,     0,  1119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,     0,     0,     0,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,    29,    30,    31,    32,    33,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,     0,    41,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    47,
       0,    48,     0,    49,     0,     0,    50,    51,     0,     0,
       0,    52,    53,    54,    55,     0,    57,    58,     0,    59,
       0,     0,    61,    62,   187,   188,    65,    66,    67,     0,
      68,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,    85,     0,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,   189,    89,    90,    91,    92,
       0,    93,    94,     0,    95,   190,    97,     0,     0,     0,
      99,     0,     0,   100,     0,     0,     0,     0,     0,   101,
     102,     0,     0,     0,     0,   105,   106,   107,     0,     0,
     108,   109,     0,   110,   111,     0,     0,   112,   113,   114,
     115,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    13,     0,     0,
    1743,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
       0,     0,     0,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,    33,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,     0,    41,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    47,     0,    48,     0,    49,
       0,     0,    50,    51,     0,     0,     0,    52,    53,    54,
      55,     0,    57,    58,     0,    59,     0,     0,    61,    62,
     187,   188,    65,    66,    67,     0,    68,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,     0,    81,    82,    83,    84,    85,
       0,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,   189,    89,    90,    91,    92,     0,    93,    94,     0,
      95,   190,    97,     0,     0,     0,    99,     0,     0,   100,
       0,     0,     0,     0,     0,   101,   102,     0,     0,     0,
       0,   105,   106,   107,     0,     0,   108,   109,     0,   110,
     111,     0,     0,   112,   113,   114,   115,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,     0,     0,  1895,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,     0,     0,     0,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,    31,    32,    33,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,     0,
      41,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    47,     0,    48,     0,    49,     0,     0,    50,    51,
       0,     0,     0,    52,    53,    54,    55,     0,    57,    58,
       0,    59,     0,     0,    61,    62,   187,   188,    65,    66,
      67,     0,    68,    69,    70,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,    85,     0,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,   189,    89,    90,
      91,    92,     0,    93,    94,     0,    95,   190,    97,     0,
       0,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,   101,   102,     0,     0,     0,     0,   105,   106,   107,
       0,     0,   108,   109,     0,   110,   111,     0,     0,   112,
     113,   114,   115,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,     0,     0,     0,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,    30,    31,    32,    33,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,     0,    41,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    47,     0,    48,
       0,    49,     0,     0,    50,    51,     0,     0,     0,    52,
      53,    54,    55,     0,    57,    58,     0,    59,     0,     0,
      61,    62,   187,   188,    65,    66,    67,     0,    68,    69,
      70,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      84,    85,     0,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,   189,    89,    90,    91,    92,     0,    93,
      94,     0,    95,   190,    97,     0,     0,     0,    99,     0,
       0,   100,     0,     0,     0,     0,     0,   101,   102,     0,
       0,     0,     0,   105,   106,   107,     0,     0,   108,   109,
       0,   110,   111,     0,     0,   112,   113,   114,   115,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   359,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,     0,     0,
       0,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,    29,    30,    31,    32,
       0,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,   186,   187,   188,
      65,    66,    67,     0,     0,    69,    70,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,   189,
      89,    90,    91,    92,     0,    93,    94,     0,    95,   190,
      97,     0,     0,     0,    99,     0,     0,   100,     5,     6,
       7,     8,     9,   101,   102,     0,     0,     0,    10,   105,
     106,   107,     0,     0,   108,   191,     0,   360,     0,     0,
       0,   112,   113,   114,   115,     0,     0,     0,     0,     0,
       0,     0,     0,   719,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,     0,     0,     0,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,    29,    30,    31,    32,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
       0,     0,   720,     0,     0,     0,     0,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,   186,   187,   188,    65,
      66,    67,     0,     0,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      80,     0,    81,    82,    83,    84,    85,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,   189,    89,
      90,    91,    92,     0,    93,    94,     0,    95,   190,    97,
       0,   721,     0,    99,     0,     0,   100,     5,     6,     7,
       8,     9,   101,   102,     0,     0,     0,    10,   105,   106,
     107,     0,     0,   108,   191,     0,     0,     0,     0,     0,
     112,   113,   114,   115,     0,     0,     0,     0,     0,     0,
       0,     0,  1252,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,     0,     0,     0,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,    31,    32,     0,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,     0,
       0,  1253,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,   186,   187,   188,    65,    66,
      67,     0,     0,    69,    70,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,   189,    89,    90,
      91,    92,     0,    93,    94,     0,    95,   190,    97,     0,
    1254,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,   101,   102,     0,     0,     0,     0,   105,   106,   107,
       0,     0,   108,   191,     5,     6,     7,     8,     9,   112,
     113,   114,   115,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   359,   425,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,    29,    30,    31,    32,     0,     0,     0,     0,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,   186,   187,   188,    65,    66,    67,     0,     0,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,     0,    81,    82,
      83,    84,    85,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,   189,    89,    90,    91,    92,     0,
      93,    94,     0,    95,   190,    97,     0,     0,     0,    99,
       0,     0,   100,     0,     0,     0,     0,     0,   101,   102,
       0,     0,     0,     0,   105,   106,   107,     0,     0,   108,
     109,     5,     6,     7,     8,     9,   112,   113,   114,   115,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   359,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
       0,     0,     0,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,     0,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,   186,
     187,   188,    65,    66,    67,     0,     0,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,     0,    81,    82,    83,    84,    85,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,   189,    89,    90,    91,    92,     0,    93,    94,     0,
      95,   190,    97,     0,     0,     0,    99,     0,     0,   100,
       0,     0,     0,     0,     0,   101,   102,     0,     0,     0,
       0,   105,   106,   107,     0,     0,   108,   191,     0,     0,
     854,     0,     0,   112,   113,   114,   115,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   359,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   798,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,     0,     0,     0,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,    31,    32,     0,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,   186,   187,   188,    65,    66,
      67,     0,     0,    69,    70,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,   189,    89,    90,
      91,    92,     0,    93,    94,     0,    95,   190,    97,     0,
       0,     0,    99,     0,     0,   100,     5,     6,     7,     8,
       9,   101,   102,     0,     0,     0,    10,   105,   106,   107,
       0,     0,   108,   191,     0,     0,     0,     0,     0,   112,
     113,   114,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    16,     0,     0,     0,     0,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,    29,    30,    31,    32,     0,     0,     0,
       0,    34,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,   204,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,   186,   187,   188,    65,    66,    67,
       0,     0,    69,    70,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    80,     0,
      81,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,   189,    89,    90,    91,
      92,     0,    93,    94,     0,    95,   190,    97,     0,     0,
       0,    99,     0,     0,   100,     5,     6,     7,     8,     9,
     101,   102,     0,     0,     0,    10,   105,   106,   107,     0,
       0,   108,   191,     0,     0,     0,     0,     0,   112,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
     240,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,     0,     0,     0,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,    29,    30,    31,    32,     0,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,   186,   187,   188,    65,    66,    67,     0,
       0,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,   189,    89,    90,    91,    92,
       0,    93,    94,     0,    95,   190,    97,     0,     0,     0,
      99,     0,     0,   100,     5,     6,     7,     8,     9,   101,
     102,     0,     0,     0,    10,   105,   106,   107,     0,     0,
     108,   191,     0,     0,     0,     0,     0,   112,   113,   114,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,    29,    30,    31,    32,     0,     0,     0,     0,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,   186,   187,   188,    65,    66,    67,     0,     0,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,     0,    81,    82,
      83,    84,    85,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,   189,    89,    90,    91,    92,     0,
      93,    94,     0,    95,   190,    97,     0,     0,     0,    99,
       0,     0,   100,     5,     6,     7,     8,     9,   101,   102,
       0,     0,     0,    10,   105,   106,   107,     0,     0,   108,
     191,     0,   274,     0,     0,     0,   112,   113,   114,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,     0,     0,     0,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,    30,    31,    32,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,   186,   187,   188,    65,    66,    67,     0,     0,    69,
      70,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      84,    85,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,   189,    89,    90,    91,    92,     0,    93,
      94,     0,    95,   190,    97,     0,     0,     0,    99,     0,
       0,   100,     0,     0,     0,     0,     0,   101,   102,     0,
       0,     0,     0,   105,   106,   107,     0,     0,   108,   191,
       0,   277,     0,     0,     0,   112,   113,   114,   115,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   425,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,     0,     0,
       0,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,    29,    30,    31,    32,
       0,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,   186,   187,   188,
      65,    66,    67,     0,     0,    69,    70,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,   189,
      89,    90,    91,    92,     0,    93,    94,     0,    95,   190,
      97,     0,     0,     0,    99,     0,     0,   100,     5,     6,
       7,     8,     9,   101,   102,     0,     0,     0,    10,   105,
     106,   107,     0,     0,   108,   109,     0,     0,     0,     0,
       0,   112,   113,   114,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,     0,     0,     0,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,    29,    30,    31,    32,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,     0,     0,     0,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,   186,   187,   188,    65,
      66,    67,     0,     0,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      80,     0,    81,    82,    83,    84,    85,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,   189,    89,
      90,    91,    92,     0,    93,    94,     0,    95,   190,    97,
       0,     0,     0,    99,     0,     0,   100,     0,     0,     0,
       0,     0,   101,   102,     0,     0,     0,     0,   105,   106,
     107,     0,     0,   108,   191,   571,     0,     0,     0,     0,
     112,   113,   114,   115,     5,     6,     7,     8,     9,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   359,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,    29,    30,    31,    32,     0,     0,     0,     0,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,   186,   187,   188,    65,    66,    67,     0,     0,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,     0,    81,    82,
      83,    84,    85,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,   189,    89,    90,    91,    92,     0,
      93,    94,     0,    95,   190,    97,     0,     0,     0,    99,
       0,     0,   100,     5,     6,     7,     8,     9,   101,   102,
       0,     0,     0,    10,   105,   106,   107,     0,     0,   108,
     191,     0,     0,     0,     0,     0,   112,   113,   114,   115,
       0,     0,   750,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,     0,     0,     0,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,    30,    31,    32,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,   186,   187,   188,    65,    66,    67,     0,     0,    69,
      70,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      84,    85,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,   189,    89,    90,    91,    92,     0,    93,
      94,     0,    95,   190,    97,     0,     0,     0,    99,     0,
       0,   100,     5,     6,     7,     8,     9,   101,   102,     0,
       0,     0,    10,   105,   106,   107,     0,     0,   108,   191,
       0,     0,     0,     0,     0,   112,   113,   114,   115,     0,
       0,     0,     0,     0,     0,     0,     0,   798,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      16,     0,     0,     0,     0,    17,     0,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,    29,
      30,    31,    32,     0,     0,     0,     0,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
     186,   187,   188,    65,    66,    67,     0,     0,    69,    70,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    80,     0,    81,    82,    83,    84,
      85,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,   189,    89,    90,    91,    92,     0,    93,    94,
       0,    95,   190,    97,     0,     0,     0,    99,     0,     0,
     100,     5,     6,     7,     8,     9,   101,   102,     0,     0,
       0,    10,   105,   106,   107,     0,     0,   108,   191,     0,
       0,     0,     0,     0,   112,   113,   114,   115,     0,     0,
       0,     0,     0,     0,     0,     0,   836,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
       0,     0,     0,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,     0,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,   186,
     187,   188,    65,    66,    67,     0,     0,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,     0,    81,    82,    83,    84,    85,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,   189,    89,    90,    91,    92,     0,    93,    94,     0,
      95,   190,    97,     0,     0,     0,    99,     0,     0,   100,
       5,     6,     7,     8,     9,   101,   102,     0,     0,     0,
      10,   105,   106,   107,     0,     0,   108,   191,     0,     0,
       0,     0,     0,   112,   113,   114,   115,     0,     0,     0,
       0,     0,     0,     0,     0,   838,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    16,     0,
       0,     0,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,    29,    30,    31,
      32,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,     0,     0,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,   186,   187,
     188,    65,    66,    67,     0,     0,    69,    70,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    80,     0,    81,    82,    83,    84,    85,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
     189,    89,    90,    91,    92,     0,    93,    94,     0,    95,
     190,    97,     0,     0,     0,    99,     0,     0,   100,     5,
       6,     7,     8,     9,   101,   102,     0,     0,     0,    10,
     105,   106,   107,     0,     0,   108,   191,     0,     0,     0,
       0,     0,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,  1314,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,     0,     0,
       0,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,    29,    30,    31,    32,
       0,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,   186,   187,   188,
      65,    66,    67,     0,     0,    69,    70,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,   189,
      89,    90,    91,    92,     0,    93,    94,     0,    95,   190,
      97,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,   101,   102,     0,     0,     0,     0,   105,
     106,   107,     0,     0,   108,   191,     5,     6,     7,     8,
       9,   112,   113,   114,   115,     0,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    16,     0,     0,     0,     0,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,    29,    30,    31,    32,     0,     0,     0,
       0,    34,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,   186,   187,   188,    65,    66,    67,
       0,     0,    69,    70,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    80,     0,
      81,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,   189,    89,    90,    91,
      92,     0,    93,    94,     0,    95,   190,    97,     0,     0,
       0,    99,     0,     0,   100,     5,     6,     7,     8,     9,
     101,   102,     0,     0,     0,    10,   105,   106,   107,     0,
       0,   108,  1439,     0,     0,     0,     0,     0,   112,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,     0,     0,     0,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,    29,    30,    31,    32,     0,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,   186,   187,   188,    65,    66,    67,     0,
       0,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,   189,    89,    90,    91,    92,
       0,    93,    94,     0,    95,   190,    97,     0,     0,     0,
      99,     0,     0,   100,     5,     6,     7,     8,     9,   101,
     102,     0,     0,     0,    10,   105,   106,   107,     0,     0,
     108,   191,     0,     0,     0,     0,     0,   112,   113,   114,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,    29,    30,    31,    32,     0,     0,     0,     0,    34,
      35,    36,    37,   663,    39,    40,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,   186,   187,   188,    65,    66,    67,     0,     0,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,     0,    81,    82,
      83,    84,    85,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,   189,    89,    90,    91,    92,     0,
      93,    94,     0,    95,   190,    97,     0,   279,   280,    99,
     281,   282,   100,     0,   283,   284,   285,   286,   101,   102,
       0,     0,     0,     0,   105,   106,   107,     0,     0,   108,
     191,     0,   287,   288,     0,     0,   112,   113,   114,   115,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   290,   501,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   502,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   213,     0,   214,    40,     0,
       0,   299,     0,     0,     0,     0,     0,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,    50,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,     0,   335,     0,   336,   337,   338,   339,
       0,     0,     0,   340,   601,   217,   218,   219,   220,   221,
     602,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   279,   280,     0,   281,   282,     0,   603,   283,   284,
     285,   286,     0,    93,    94,     0,    95,   190,    97,   345,
       0,   346,     0,     0,   347,     0,   287,   288,     0,   289,
       0,     0,   349,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   108,     0,     0,     0,   786,     0,     0,   112,
       0,     0,     0,     0,     0,   290,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   213,
       0,     0,     0,     0,     0,   299,     0,     0,     0,     0,
       0,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,    50,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,     0,   335,     0,
       0,   337,   338,   339,     0,     0,     0,   340,   341,   217,
     218,   219,   220,   221,   342,     0,     0,     0,     0,     0,
       0,   213,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   343,     0,     0,    91,   344,     0,    93,    94,     0,
      95,   190,    97,   345,    50,   346,     0,     0,   347,     0,
     279,   280,     0,   281,   282,   348,   349,   283,   284,   285,
     286,     0,     0,     0,     0,     0,   108,   350,     0,     0,
       0,  1874,     0,     0,     0,   287,   288,     0,   289,     0,
       0,   217,   218,   219,   220,   221,  1167,  1168,  1169,  1170,
    1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,
    1181,  1182,  1183,  1184,   290,     0,   370,     0,     0,    93,
      94,     0,    95,   190,    97,   291,     0,  1185,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   213,     0,
       0,     0,     0,     0,   299,     0,     0,     0,   108,     0,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,    50,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,     0,   335,     0,     0,
     337,   338,   339,     0,     0,     0,   340,   341,   217,   218,
     219,   220,   221,   342,     0,     0,     0,     0,     0,     0,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,     0,     0,    91,   344,     0,    93,    94,     0,    95,
     190,    97,   345,    50,   346,     0,     0,   347,     0,   279,
     280,     0,   281,   282,   348,   349,   283,   284,   285,   286,
       0,     0,     0,     0,     0,   108,   350,     0,     0,     0,
    1950,     0,     0,     0,   287,   288,     0,   289,     0,     0,
     217,   218,   219,   220,   221,     0,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   290,   501,   925,     0,     0,    93,    94,
       0,    95,   190,    97,   291,     0,   502,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   213,     0,     0,
       0,     0,     0,   299,     0,     0,     0,   108,     0,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
      50,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,     0,   335,     0,   336,   337,
     338,   339,     0,     0,     0,   340,   341,   217,   218,   219,
     220,   221,   342,     0,     0,     0,     0,     0,     0,   213,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
       0,     0,    91,   344,     0,    93,    94,     0,    95,   190,
      97,   345,    50,   346,     0,     0,   347,     0,   279,   280,
       0,   281,   282,   348,   349,   283,   284,   285,   286,     0,
       0,     0,     0,     0,   108,   350,     0,     0,     0,     0,
       0,     0,     0,   287,   288,     0,   289,     0,     0,   217,
     218,   219,   220,   221,     0, -1132, -1132, -1132, -1132,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   290,   501,     0,     0,     0,    93,    94,     0,
      95,   190,    97,   291,     0,   502,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   213,     0,     0,     0,
       0,     0,   299,     0,     0,     0,   108,     0,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,    50,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,     0,   335,     0,     0,   337,   338,
     339,     0,     0,     0,   340,   341,   217,   218,   219,   220,
     221,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,     0,
       0,    91,   344,     0,    93,    94,     0,    95,   190,    97,
     345,     0,   346,     0,     0,   347,     0,     0,     0,     0,
       0,     0,   348,   349,  1668,     0,     0,     0,   279,   280,
       0,   281,   282,   108,   350,   283,   284,   285,   286,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   287,   288,     0,   289,   477,     0,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   290,   501,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   291,     0,   502,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   213,     0,     0,     0,
       0,     0,   299,     0,     0,     0,     0,     0,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,    50,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,     0,   335,     0,     0,   337,   338,
     339,     0,     0,     0,   340,   341,   217,   218,   219,   220,
     221,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,     0,
       0,    91,   344,     0,    93,    94,     0,    95,   190,    97,
     345,     0,   346,     0,     0,   347,     0,  1769,  1770,  1771,
    1772,  1773,   348,   349,  1774,  1775,  1776,  1777,     0,     0,
       0,     0,     0,   108,   350,     0,     0,     0,     0,     0,
       0,  1778,  1779,  1780,     0,   476,   477,     0,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,  1781,   501,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   502,  1782,  1783,  1784,  1785,  1786,
    1787,  1788,     0,     0,     0,   213,     0,     0,     0,     0,
       0,  1789,     0,     0,     0,     0,     0,  1790,  1791,  1792,
    1793,  1794,  1795,  1796,  1797,  1798,  1799,  1800,    50,  1801,
    1802,  1803,  1804,  1805,  1806,  1807,  1808,  1809,  1810,  1811,
    1812,  1813,  1814,  1815,  1816,  1817,  1818,  1819,  1820,  1821,
    1822,  1823,  1824,  1825,  1826,  1827,  1828,  1829,  1830,  1831,
       0,     0,     0,  1832,  1833,   217,   218,   219,   220,   221,
       0,  1834,  1835,  1836,  1837,  1838,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1839,  1840,  1841,
       0,     0,     0,    93,    94,     0,    95,   190,    97,  1842,
       0,  1843,  1844,     0,  1845,     0,     0,     0,     0,     0,
       0,  1846,     0,  1847,     0,  1848,     0,  1849,  1850,     0,
     279,   280,   108,   281,   282,  1161,     0,   283,   284,   285,
     286,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1162,   287,   288,  1163,  1164,  1165,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,
    1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,     0,
       0,     0,     0,     0,   290,     0,     0,     0,     0,     0,
       0,     0,  1185,     0,     0,     0,     0,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   213,     0,
       0,     0,     0,     0,   299,     0,     0,     0,     0,     0,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,    50,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,     0,   335,     0,   336,
     337,   338,   339,     0,     0,     0,   340,   601,   217,   218,
     219,   220,   221,   602,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   279,   280,     0,   281,   282,     0,
     603,   283,   284,   285,   286,     0,    93,    94,     0,    95,
     190,    97,   345,     0,   346,     0,     0,   347,     0,   287,
     288,     0,     0,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   290,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   213,     0,     0,     0,     0,     0,   299,     0,
       0,     0,     0,     0,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,    50,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
       0,   335,     0,  1372,   337,   338,   339,     0,     0,     0,
     340,   601,   217,   218,   219,   220,   221,   602,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   279,   280,
       0,   281,   282,     0,   603,   283,   284,   285,   286,     0,
      93,    94,     0,    95,   190,    97,   345,     0,   346,     0,
       0,   347,     0,   287,   288,     0,     0,     0,     0,   349,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   290,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   213,     0,     0,     0,
       0,     0,   299,     0,     0,     0,     0,     0,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,    50,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,     0,   335,     0,     0,   337,   338,
     339,     0,     0,     0,   340,   601,   217,   218,   219,   220,
     221,   602,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   603,     0,
       0,     0,     0,     0,    93,    94,     0,    95,   190,    97,
     345,     0,   346,     0,     0,   347,   473,   474,   475,     0,
       0,     0,     0,   349,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,     0,   476,   477,     0,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,   473,   474,   475,     0,     0,     0,
       0,     0,     0,     0,     0,   502,     0,     0,     0,     0,
       0,     0,     0,     0,   476,   477,     0,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,   473,   474,   475,     0,     0,     0,     0,     0,
       0,     0,     0,   502,     0,     0,     0,     0,     0,     0,
       0,     0,   476,   477,     0,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
     473,   474,   475,     0,     0,     0,     0,     0,     0,     0,
       0,   502,     0,     0,     0,     0,     0,     0,     0,     0,
     476,   477,     0,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,     0,  1276,
       0,   473,   474,   475,     0,     0,     0,     0,     0,   502,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   476,   477,     0,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,  1287,   501,   473,
     474,   475,     0,     0,     0,     0,     0,     0,     0,     0,
     502,     0,     0,     0,     0,     0,     0,     0,     0,   476,
     477,     0,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,  1317,   501,   473,   474,   475,
       0,     0,     0,     0,     0,     0,     0,     0,   502,     0,
       0,     0,     0,     0,     0,     0,     0,   476,   477,     0,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,  1588,   501,   473,   474,   475,     0,     0,
       0,     0,     0,     0,     0,     0,   502,     0,     0,     0,
       0,     0,     0,     0,     0,   476,   477,     0,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,     0,  1710,     0,   473,   474,   475,     0,
       0,     0,     0,     0,   502,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   476,   477,     0,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,  1711,   501,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   502,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   473,   474,   475,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   476,   477,   503,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,   473,   474,   475,     0,     0,     0,
       0,     0,     0,     0,     0,   502,     0,     0,     0,     0,
       0,     0,     0,     0,   476,   477,   587,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,     0,     0,     0,   473,   474,   475,     0,     0,
       0,     0,     0,   502,     0,     0,   289,     0,     0,     0,
       0,     0,     0,     0,     0,   476,   477,   589,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,   291,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   502,     0,   213,     0,     0,     0,
       0,     0,  1524,     0,     0,   473,   474,   475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   289,     0,    50,
       0,     0,     0,     0,     0,   476,   477,   608,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,     0,   291,   590,   217,   218,   219,   220,
     221,   591,     0,     0,   502,     0,     0,   213,     0,  1695,
       0,     0,     0,     0,     0,   612,     0,     0,   189,     0,
       0,    91,   344,     0,    93,    94,     0,    95,   190,    97,
      50, -1131,     0,     0,     0,     0,   289,     0,     0,     0,
       0,     0,   348,     0,     0,     0,     0,   458,   187,   188,
      65,    66,    67,   108,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   828,   590,   217,   218,   219,
     220,   221,   591,   291,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   289,     0,   213,     0,     0,   189,
       0,     0,    91,   344,     0,    93,    94,     0,    95,   190,
      97,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,   348,     0,     0,     0,   597,     0,     0,
     459,   291,     0,     0,   108,   350,     0,     0,     0,     0,
       0,     0,   289,     0,   213,   851,     0,     0,     0,     0,
    1000,     0,     0,     0,     0,   590,   217,   218,   219,   220,
     221,   591,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   291,
       0,    91,   344,     0,    93,    94,     0,    95,   190,    97,
     289,     0,   213,     0,     0,     0,     0,     0,  1447,     0,
       0,     0,   348,   590,   217,   218,   219,   220,   221,   591,
       0,     0,     0,   108,   350,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   189,   291,     0,    91,
     344,     0,    93,    94,     0,    95,   190,    97,     0,     0,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     348,   590,   217,   218,   219,   220,   221,   591,     0,     0,
       0,   108,   350,    50,     0,     0,     0,     0,     0,     0,
    1380,     0,     0,     0,   189,     0,     0,    91,   344,     0,
      93,    94,     0,    95,   190,    97,     0,     0,   881,   882,
       0,     0,     0,     0,   883,     0,   884,     0,   348,   590,
     217,   218,   219,   220,   221,   591,     0,     0,   885,   108,
     350,     0,     0,     0,     0,     0,    34,    35,    36,   213,
       0,     0,   189,     0,     0,    91,   344,     0,    93,    94,
     215,    95,   190,    97,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,   348,     0,     0,     0,
       0,     0,  1113,     0,     0,     0,     0,   108,   350,  1166,
    1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,
    1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,   886,   887,
     888,   889,   890,   891,    29,    81,    82,    83,    84,    85,
       0,  1185,    34,    35,    36,   213,   222,   214,    40,     0,
       0,   189,    89,    90,    91,    92,   215,    93,    94,     0,
      95,   190,    97,     0,     0,     0,    99,     0,    50,     0,
       0,     0,     0,     0,     0,   892,   893,     0,     0,     0,
       0,   105,     0,     0,     0,   216,   108,   894,     0,     0,
     881,   882,     0,     0,     0,     0,   883,     0,   884,     0,
       0,     0,     0,    74,    75,   217,   218,   219,   220,   221,
     885,    81,    82,    83,    84,    85,     0,     0,    34,    35,
      36,   213,   222,     0,     0,     0,     0,   189,    89,    90,
      91,    92,   215,    93,    94,     0,    95,   190,    97,     0,
       0,     0,    99,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     0,     0,
       0,     0,   108,   223,     0,     0,  1064,  1065,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     886,   887,   888,   889,   890,   891,  1066,    81,    82,    83,
      84,    85,     0,     0,  1067,  1068,  1069,   213,   222,     0,
       0,     0,     0,   189,    89,    90,    91,    92,  1070,    93,
      94,     0,    95,   190,    97,     0,     0,     0,    99,     0,
      50,     0,     0,     0,     0,     0,     0,   892,   893,     0,
       0,     0,     0,   105,     0,     0,     0,     0,   108,   894,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1071,  1072,  1073,  1074,
    1075,  1076,    29,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,   213,  1077,   214,    40,     0,     0,   189,
       0,     0,    91,    92,   215,    93,    94,     0,    95,   190,
      97,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     0,     0,  1078,  1079,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,   217,   218,   219,   220,   221,     0,    81,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
     222,     0,     0,     0,     0,   189,    89,    90,    91,    92,
       0,    93,    94,     0,    95,   190,    97,    29,  1056,     0,
      99,     0,     0,     0,     0,    34,    35,    36,   213,     0,
     214,    40,     0,     0,     0,   105,     0,     0,     0,   215,
     108,   223,     0,     0,   628,     0,     0,   112,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,  1168,
    1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,
    1179,  1180,  1181,  1182,  1183,  1184,    74,    75,   217,   218,
     219,   220,   221,    29,    81,    82,    83,    84,    85,  1185,
       0,    34,    35,    36,   213,   222,   214,    40,     0,     0,
     189,    89,    90,    91,    92,   215,    93,    94,     0,    95,
     190,    97,     0,     0,     0,    99,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,     0,     0,   216,   108,   223,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,   217,   218,   219,   220,   221,     0,
      81,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,   222,     0,     0,     0,     0,   189,    89,    90,    91,
      92,     0,    93,    94,     0,    95,   190,    97,     0,     0,
       0,    99,     0,     0,     0,     0,   473,   474,   475,     0,
       0,     0,     0,     0,     0,     0,   105,     0,     0,     0,
       0,   108,   223,     0,     0,     0,   476,   477,   112,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,   473,   474,   475,     0,     0,     0,
       0,     0,     0,     0,     0,   502,     0,     0,     0,     0,
       0,     0,     0,     0,   476,   477,     0,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   502,     0,   473,   474,   475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   549,   476,   477,     0,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,   473,   474,   475,     0,     0,     0,     0,
       0,     0,     0,     0,   502,     0,     0,     0,     0,     0,
       0,     0,   558,   476,   477,     0,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   502,     0,   473,   474,   475,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   955,   476,   477,     0,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,   473,   474,   475,     0,     0,     0,     0,     0,
       0,     0,     0,   502,     0,     0,     0,     0,     0,     0,
       0,  1042,   476,   477,     0,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   502,     0,   473,   474,   475,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1097,   476,   477,     0,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,  1159,  1160,  1161,     0,     0,     0,     0,     0,     0,
       0,     0,   502,     0,     0,     0,     0,     0,     0,     0,
    1422,     0,  1162,     0,     0,  1163,  1164,  1165,  1166,  1167,
    1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,
    1178,  1179,  1180,  1181,  1182,  1183,  1184,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1185,  1159,  1160,  1161,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1465,  1162,     0,     0,  1163,  1164,  1165,  1166,  1167,
    1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,
    1178,  1179,  1180,  1181,  1182,  1183,  1184,  1159,  1160,  1161,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1185,     0,     0,     0,     0,     0,     0,     0,  1162,  1535,
       0,  1163,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,
    1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,
    1182,  1183,  1184,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1185,  1159,  1160,  1161,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1162,  1547,
       0,  1163,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,
    1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,
    1182,  1183,  1184,  1159,  1160,  1161,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1185,     0,     0,     0,
       0,     0,     0,     0,  1162,  1654,     0,  1163,  1164,  1165,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,
    1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,    34,
      35,    36,   213,     0,   214,    40,     0,     0,     0,     0,
       0,     0,  1185,   215,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1750,     0,     0,     0,     0,
       0,     0,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   244,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   218,   219,   220,   221,     0,    81,    82,
      83,    84,    85,     0,     0,     0,     0,     0,     0,   222,
       0,  1752,     0,     0,   189,    89,    90,    91,    92,     0,
      93,    94,     0,    95,   190,    97,     0,     0,     0,    99,
       0,    34,    35,    36,   213,     0,   214,    40,     0,     0,
       0,     0,     0,     0,   105,   677,     0,     0,     0,   108,
     245,     0,     0,     0,     0,     0,   112,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216, -1132, -1132, -1132, -1132,  1172,
    1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,
    1183,  1184,     0,     0,   217,   218,   219,   220,   221,     0,
      81,    82,    83,    84,    85,  1185,     0,    34,    35,    36,
     213,   222,   214,    40,     0,     0,   189,    89,    90,    91,
      92,   215,    93,    94,     0,    95,   190,    97,     0,     0,
       0,    99,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,     0,     0,     0,
     243,   108,   678,     0,     0,     0,     0,     0,   679,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,   218,   219,   220,   221,     0,    81,    82,    83,    84,
      85,     0,     0,     0,     0,     0,     0,   222,     0,     0,
       0,     0,   189,    89,    90,    91,    92,     0,    93,    94,
       0,    95,   190,    97,     0,     0,     0,    99,     0,     0,
       0,     0,   473,   474,   475,     0,     0,     0,     0,     0,
       0,     0,   105,     0,     0,     0,     0,   108,   245,   863,
       0,     0,   476,   477,   112,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   502,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   473,   474,   475,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   864,   476,   477,  1039,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,   473,   474,   475,     0,     0,     0,
       0,     0,     0,     0,     0,   502,     0,     0,     0,     0,
       0,     0,     0,     0,   476,   477,     0,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,  1159,  1160,  1161,     0,     0,     0,     0,     0,
       0,     0,     0,   502,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1162,  1552,     0,  1163,  1164,  1165,  1166,
    1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,
    1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,  1159,  1160,
    1161,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1185,     0,     0,     0,     0,     0,     0,     0,  1162,
       0,     0,  1163,  1164,  1165,  1166,  1167,  1168,  1169,  1170,
    1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,
    1181,  1182,  1183,  1184,   474,   475,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1185,     0,     0,
       0,     0,     0,   476,   477,     0,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,  1160,  1161,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   502,     0,     0,     0,     0,     0,     0,     0,
       0,  1162,     0,     0,  1163,  1164,  1165,  1166,  1167,  1168,
    1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,
    1179,  1180,  1181,  1182,  1183,  1184,   475,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1185,
       0,     0,     0,     0,   476,   477,     0,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1162,     0,   502,  1163,  1164,  1165,  1166,  1167,  1168,
    1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,
    1179,  1180,  1181,  1182,  1183,  1184,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1185,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,   501,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   502,  1163,  1164,  1165,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,
    1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1185,  1164,  1165,  1166,  1167,  1168,  1169,  1170,
    1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,
    1181,  1182,  1183,  1184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1185,  1165,  1166,
    1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,
    1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1185,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   502
};

static const yytype_int16 yycheck[] =
{
       5,     6,   132,     8,     9,    10,    11,    12,    13,   167,
      15,    16,    17,    18,    56,   109,    21,    22,    23,    24,
      25,    26,    27,    28,    29,   193,    31,   109,    44,   124,
     508,   734,    98,   573,   417,     4,   696,   103,   104,    44,
     172,   173,   109,    33,   124,     4,   854,    52,   998,    54,
       4,   124,    57,   417,    59,   417,    46,   561,    30,     4,
     692,    51,     4,   723,   194,   131,   996,   167,    30,   609,
      86,   501,   862,   795,   869,    30,   879,   986,   537,   538,
    1419,    86,   505,   506,  1033,  1112,  1018,   534,  1020,    57,
       9,     9,   693,   534,   840,   670,     9,   191,     9,     9,
    1888,   447,  1051,    14,   109,   246,   622,   623,   567,   191,
       4,     9,    32,     6,     9,    14,   539,    32,   449,   450,
     451,     9,   569,   257,   191,     9,   258,     9,   569,   223,
      14,     9,     9,    70,    83,    57,    14,     9,     9,     9,
       9,   223,   109,     9,     9,     9,     9,     9,     9,  1098,
       9,   245,     9,     9,    36,    48,   223,     9,     4,    53,
       9,    14,    56,   245,   367,   368,   369,    48,   371,    70,
      14,    70,  1698,    81,    83,    84,   162,   116,  1108,    73,
    1706,    48,   162,  1222,    91,     0,   191,   103,   398,    91,
     400,   199,    83,    48,   199,   122,   199,  1000,    48,   183,
      48,   162,    96,    38,    98,   132,   136,   137,   418,   103,
     104,    38,   136,   137,   199,   199,   202,    70,   223,   199,
     113,    50,    51,  1232,   132,    38,   119,    70,   121,   122,
     123,   124,   125,   126,   127,    38,    83,   131,   199,    70,
     245,   180,    83,    84,    38,  1154,   195,    70,    83,    54,
     166,  1565,   159,   202,   270,   260,    83,   159,   263,   103,
     104,   182,   199,   200,  2052,   270,   271,   927,   402,    70,
      83,   162,   183,   203,    70,   199,   169,   170,  2066,   172,
      83,     8,   202,   201,   202,   204,   201,    70,   201,    83,
     201,   201,   460,   996,    70,   389,   205,   202,   199,    70,
     199,   194,  1329,   201,  1236,   264,   201,   389,  1054,   268,
     203,    70,    70,   201,   208,   196,   358,   201,   200,   859,
      70,   167,   389,   201,   201,  1028,  1665,  1122,   200,  1124,
     201,   201,   201,   200,   200,  1284,   201,   201,   201,   201,
     201,   196,   201,   200,   200,   200,   199,  1873,   200,   176,
     200,   200,   200,   447,   359,   184,   199,    83,   205,   202,
    1674,   162,   167,   176,   205,   447,   162,    83,   199,   199,
     264,   202,   388,   176,   268,   103,   544,   182,   272,   162,
     447,   168,   176,   388,   389,  1699,   516,  1701,   454,   394,
     395,   396,   397,   398,   399,   400,    70,   202,  1307,   974,
     405,   202,   103,   445,   103,  1108,   202,   923,   924,   183,
      70,    70,    83,   418,    54,   202,   199,    83,    38,   202,
     425,    19,    20,  1462,    70,   199,    70,    70,   433,  1030,
    1469,   202,  1471,   162,   107,   108,  1239,    70,   166,   444,
     199,    70,   447,   202,   202,   511,   512,   513,   514,   199,
     176,  1460,   202,     4,   183,   424,    70,   462,   463,    70,
     176,   199,  1501,    83,   358,   166,    30,   166,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   417,   502,  1220,   504,
     505,   506,   507,   136,   137,   176,   199,   136,   137,    70,
     176,   989,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   447,   167,   167,   202,   501,
     203,    70,   537,   538,   539,   540,  1326,   504,   432,   501,
     545,   546,   202,   202,   549,  1348,   501,   441,   199,   517,
     517,   445,   710,   558,   559,   199,   202,  1004,   202,   202,
     454,    31,   567,  1004,   168,   699,   199,   701,   199,   202,
     575,   162,   577,   202,    83,   136,   137,   181,  1617,  1119,
      50,   132,   504,    53,   678,    70,   432,   508,   202,  1048,
     199,   202,   183,   107,   108,   517,   199,  1606,   202,  1608,
      83,   162,    70,   986,    83,  1944,  1238,  1949,    91,  1951,
     710,   202,    91,   534,   508,   509,   510,   511,   512,   513,
     514,   580,   986,   628,   986,    83,  1056,    83,   123,   797,
     652,   653,   199,    91,  1543,   556,   199,   132,   199,   183,
     534,   199,   240,   194,  1447,   566,    70,   788,   569,     4,
     159,   160,   161,   575,  1101,   199,    70,     6,    87,   681,
    1101,    70,   556,   199,    19,    20,    32,  1268,   136,   137,
    1271,   183,  1018,   678,  1020,   569,   742,   160,   161,  1157,
     821,   160,   161,   202,  1200,   166,   580,   199,  1019,   203,
     118,  1022,  1023,    14,   716,   124,   125,   126,   199,    48,
     834,   835,   160,   161,   160,   161,   600,   841,   842,   841,
     913,    32,   915,  1722,   917,   166,   721,  1726,   921,   136,
     137,   162,    50,    51,   693,   208,  1635,   112,   207,    38,
      51,   162,   626,   627,    31,   166,   121,   122,   123,   124,
     125,   126,   183,   183,   199,   750,    70,    87,  1470,    83,
     201,   202,   183,    50,   895,   202,    53,    91,   199,   199,
      70,   202,   784,   201,   113,   659,   660,   908,    83,    84,
     119,  1154,   121,   122,   123,   124,   125,   126,   127,   201,
     378,   786,  1286,    83,   124,   125,   126,    75,    76,   387,
    1154,    91,  1154,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,  1438,   201,   406,   194,
      57,   816,    81,   367,   368,   369,     4,   371,  1277,   417,
     169,   170,    69,   172,   201,   159,   160,   161,  1251,  1288,
     201,    19,    20,   201,    83,   104,    75,    76,    59,    60,
     734,   846,    91,   103,   104,   194,   862,   201,   742,   871,
      53,    54,    55,   201,   203,   877,   162,   862,  1580,   159,
     160,   161,    70,  1464,   710,    70,    69,  1407,   858,    83,
     134,   135,   141,   142,   143,   144,   145,    91,  1887,   201,
     202,   432,  1891,   201,   202,   240,    70,  1302,   734,  1304,
    1236,  1594,    70,  1308,   163,  1919,  1920,   166,  1915,  1916,
     169,   170,    70,   172,   173,   174,  1003,  1004,   867,   264,
      70,   160,   161,   268,   199,   136,   137,   199,  1151,    70,
    1153,   109,  1155,   166,  1307,   162,   403,   949,   201,   198,
     407,   106,   107,   108,   203,    49,   830,   501,   832,   106,
     107,   108,    69,  1307,   508,  1307,   160,   161,   394,   395,
     955,   183,   957,  1675,   959,   162,   162,   434,   852,   436,
     437,   438,   439,  1503,   515,   970,   199,    53,    54,    55,
     534,    57,   866,   867,   113,   114,   115,   199,  1518,   200,
     985,    19,    20,    69,   199,   162,     8,   199,   201,  1055,
     162,    14,   556,   121,   122,   123,   124,   125,   126,   162,
     201,   201,   566,   191,   973,   569,   852,  1466,   202,     9,
    1015,   201,    14,  1018,   973,  1020,   910,  1618,   200,   973,
    1025,   132,   132,   378,   183,   919,   920,    14,   973,   998,
    2039,   973,   387,   103,  1039,   223,   200,  1042,   200,  1044,
     206,   202,   200,  1048,   200,   199,   112,  2056,     9,   199,
     199,   406,   240,   159,   200,   200,   950,   245,  1988,  2009,
     200,  1030,   200,  1993,   910,   986,   194,    95,   989,     9,
    1092,   201,    14,   201,   183,   199,   264,   432,     9,   973,
     268,  2031,  1003,  1004,  1056,   202,   124,  1565,  2018,   201,
    2040,   199,  1097,  1439,  1056,   989,  1018,   202,  1020,  1639,
     201,  1056,   996,  1025,   202,  1246,   201,  1647,  1249,  1003,
    1004,  1442,  1443,  1444,  1136,  1105,    83,   202,  1140,   201,
     200,   719,   200,  1663,   200,  1147,   201,   973,   134,     9,
     204,     9,   204,  1941,  1028,   204,   204,   204,  1946,    32,
      70,  1236,   135,  1602,  1603,   182,   162,  1106,   138,  2079,
     996,     9,   200,   162,   200,    14,  1236,   196,     9,     9,
    1543,  1055,   830,  1236,   184,   200,     9,    14,     9,   200,
    1064,  1065,  1066,   200,   200,   200,   134,     9,  1099,  1543,
    1101,  1543,  1028,   734,    14,   204,  1994,   204,   199,   204,
     378,   203,   200,  1671,   204,   200,  1674,   162,   103,   387,
     798,   389,   240,  1743,   200,  1099,   201,  1101,     9,   201,
     138,   162,  1106,     9,  1108,   200,  1110,   199,   406,  1224,
     199,  1699,    70,  1701,    70,   580,    70,   199,    70,  1707,
      70,  1236,   202,  1154,     9,   203,    14,  1131,   836,  2042,
     838,   201,     9,  2046,   432,   184,  1251,   202,   204,  1254,
    1219,   176,  1635,   202,    14,   200,    60,  2060,  2061,   447,
    1219,  2069,  1108,  1157,  1110,  1219,   864,   201,    32,   196,
      70,  1635,  1277,  1635,  1219,  1297,   199,  1219,   199,    32,
    1940,    14,  1942,  1288,    88,  1988,   199,    91,   199,    52,
    1993,   199,  1186,   121,   122,   123,   124,   125,   126,  1268,
      70,   852,  1271,   199,   132,   133,   162,   199,    70,    70,
    1326,  1443,    70,    70,  1236,  2018,     9,   200,   138,   201,
     201,  1326,   199,    14,   184,  1219,   138,   162,  1318,     9,
    1335,   121,   122,   123,   124,   125,   126,  1359,   200,   937,
     378,  1363,   132,   133,    69,  1439,  1368,   175,     9,   387,
     176,   389,   176,    83,  1376,  1895,   138,  1439,   203,   910,
       9,    83,  1321,   201,   719,   830,   194,   204,   406,  2029,
     203,    14,  1439,  1219,   203,    83,  2079,   199,   203,   734,
     201,   200,   199,   173,   202,   175,  1307,   200,   986,   199,
     138,   202,   580,   202,   201,     9,   204,    92,  1066,   189,
     159,   191,    32,   202,   194,  1299,  1300,  1301,  1302,  1303,
    1304,  1889,    77,   201,  1308,   200,  1310,  1422,    78,    79,
      80,   201,   973,  1581,  1429,   989,   138,  1321,   184,  1434,
      32,  1436,    92,   204,  1439,   200,     9,     9,  1332,  1003,
    1004,   138,     9,   798,     9,   996,  1576,  1452,  1342,   200,
     204,   203,  1421,   200,   204,   204,   200,  1426,   204,   200,
    1465,  1466,   201,  1485,   201,   201,   201,  1489,   121,   122,
     123,   124,   125,   126,  1496,   203,   202,  1028,   201,    14,
      83,   836,   199,   838,   199,   204,  1332,   147,   148,   149,
     150,   151,  1056,   200,   200,  1464,   200,   852,   158,   201,
     199,   202,   200,     9,   164,   165,   200,   138,   204,   864,
       9,   138,   867,   200,  1112,  1113,   204,  1439,   178,   204,
     204,  1415,   204,     9,   200,    32,   201,  2067,   200,  1697,
     200,   719,   201,   193,   201,  1099,   176,  1101,   138,   202,
      83,   194,   113,   171,   201,   167,   734,    83,    14,    50,
      51,    52,    53,    54,    55,   910,  1154,  1108,    83,  1110,
     119,   200,   200,   367,   368,   369,   370,   371,    69,   202,
     138,   200,   138,    14,   183,  1421,  1706,   202,   201,    14,
    1426,    14,   937,    14,  1478,    83,  1480,   200,   200,  1594,
     200,   199,   198,   138,  1599,    83,   138,  1602,  1603,    14,
     201,  1066,  1668,   201,   201,   409,    14,   202,     9,     9,
     798,   203,    68,   183,   199,    14,    83,     9,   973,     9,
     202,   201,  1543,   116,   103,   162,   103,   184,   174,    36,
     199,  1299,  1300,  1301,  1302,  1303,  1304,   200,  1607,   201,
    1308,   996,  1310,   199,  1613,   184,  1615,   180,   836,  1618,
     838,    83,   184,   177,  1252,     9,   200,    83,    83,   200,
    1554,   201,   200,    14,   852,    83,    83,    14,  1219,  1638,
      83,  1565,   202,  1028,    14,    14,   864,  1571,    83,   867,
      83,   719,  1200,  2021,   511,  1644,   509,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    1594,    57,  1049,  1871,   976,  1327,  2036,  1742,  1554,  1307,
    2031,  1716,   514,    69,  1635,  1515,  1314,  1729,  1253,  1767,
     630,  1854,   910,  1676,  2077,  2053,  1571,  1567,  1725,  1152,
    1624,  1329,  1626,   399,  1628,  1581,  1223,  1303,  1148,  1633,
      50,    51,    52,    53,    54,    55,  1640,    57,  1594,   937,
    1644,  1106,  1065,  1108,  1648,  1110,  1298,  1112,  1113,    69,
     798,  1607,  1731,  1094,    19,    20,  1299,  1613,   445,  1615,
    1932,  1989,  1979,   880,  1668,    30,  1208,  1671,  1559,  1132,
    1674,  1332,  1741,  1742,  1186,   973,    -1,    -1,    -1,    -1,
    1684,    -1,  1638,    -1,  1640,    -1,    -1,  1691,   836,    -1,
     838,    56,  1648,    -1,    -1,  1699,    -1,  1701,   996,    -1,
    1478,    -1,  1480,  1707,    -1,    -1,    -1,    -1,   622,   623,
       6,    -1,    -1,    -1,  1866,    -1,   864,    -1,    -1,    -1,
    1018,    -1,  1020,    -1,  1299,  1300,    -1,    -1,  1303,  1733,
    1028,    -1,    -1,    -1,  2002,  1310,  1740,  1741,  1742,    -1,
      -1,    -1,  1746,    -1,    -1,    -1,    -1,    -1,    -1,  1753,
      -1,    -1,    48,    -1,  1219,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1878,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1731,    -1,  1909,  1910,    -1,
    1932,    -1,    -1,    -1,  1740,  2025,    -1,  1252,    -1,   937,
    1746,    -1,    -1,    -1,    -1,    -1,    -1,  1753,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1106,    -1,
    1108,    -1,  1110,    -1,  1112,  1113,    -1,   113,    -1,    -1,
      -1,    -1,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,  1543,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1624,    -1,  1626,  1314,
    1628,    -1,    -1,    -1,    -1,  1633,  1321,    -1,    -1,    -1,
      -1,    -1,  1866,    -1,  1329,    -1,    -1,  1332,    -1,    -1,
      -1,    -1,    -1,   169,   170,   240,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1889,    -1,    -1,    -1,  1893,
    1894,    -1,    -1,  1554,    -1,  1899,    -1,    -1,   194,    -1,
      -1,    -1,    -1,  1478,  1908,  1480,    -1,   203,    -1,    -1,
      -1,  1915,  1916,    -1,  1575,  1919,  1920,    -1,    -1,    -1,
      -1,  1219,    -1,    -1,   289,    -1,   291,  1635,  1932,    -1,
    2009,    -1,    -1,  1594,    -1,    -1,    -1,    -1,  1236,    -1,
      -1,    -1,    -1,  1899,    -1,    -1,    -1,    -1,    -1,    -1,
    1954,    -1,  2031,    -1,  1252,  1733,    -1,    -1,    -1,    -1,
    2075,  2040,    -1,    -1,  1112,  1113,    -1,    -1,    -1,  2084,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2092,    -1,  1640,
    2095,    -1,    -1,    -1,  1988,   350,    -1,  1648,    -1,  1993,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2001,  1954,   913,
      -1,   915,    -1,   917,    -1,    -1,    -1,   921,    -1,   923,
     924,   925,    -1,   378,  2018,    -1,  1314,    -1,    -1,    -1,
    2024,    -1,   387,  1321,    -1,    -1,    -1,     6,    -1,    -1,
      -1,  1329,  1988,    -1,  1332,    -1,    -1,  1993,    -1,    -1,
      -1,   406,    -1,    -1,  1705,    -1,  2002,    -1,    -1,  1624,
      -1,  1626,   417,  1628,    -1,    -1,    -1,    -1,  1633,    -1,
      -1,    -1,  2018,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,  2078,  2079,    -1,   442,    -1,  1740,
     445,    -1,     6,    -1,    -1,  1746,    -1,    -1,  1236,  1554,
      -1,    -1,  1753,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1252,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1893,  1894,    -1,    -1,    -1,
      -1,    -1,  2078,  2079,    48,    -1,    -1,    -1,    -1,  1594,
      -1,    -1,    -1,    -1,   113,    -1,   501,    -1,    -1,    -1,
     119,  1439,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1733,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1314,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1640,    -1,    -1,    -1,  1644,
      -1,  1329,    -1,  1648,    -1,     6,    -1,    -1,    -1,   113,
     169,   170,    -1,   172,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    48,    -1,   594,
      -1,   596,    -1,    -1,   599,    -1,    -1,    -1,  1899,    -1,
      -1,    -1,    -1,    -1,    -1,   169,   170,    -1,   172,     6,
      -1,    -1,    -1,    -1,    -1,    -1,  1554,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,   632,    -1,    -1,
     194,    -1,    -1,    -1,    -1,  1740,  1741,  1742,    -1,   203,
      -1,  1746,    -1,    -1,    -1,    -1,  1200,    -1,  1753,    -1,
      -1,    48,   113,  1954,    -1,    -1,  1594,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,  1893,  1894,
      -1,    -1,    -1,    -1,   689,   690,    -1,  1988,    -1,    -1,
      -1,    -1,  1993,   698,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,  1640,    -1,    -1,    -1,  1644,    -1,   169,   170,
    1648,   172,    -1,    -1,   719,    -1,   113,  2018,    -1,    -1,
      -1,   127,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,   194,   140,   141,   142,   143,   144,   145,
     146,    -1,   203,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,   163,    -1,    -1,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,    -1,
      -1,    -1,   169,   170,    -1,   172,    -1,  2078,  2079,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,   198,   798,  1899,    -1,    -1,   194,    -1,    -1,
      -1,    -1,  1740,  1741,  1742,    -1,   203,    -1,  1746,    -1,
      -1,    -1,    31,    -1,    -1,  1753,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   830,    -1,    -1,    -1,    -1,
      -1,   836,    -1,   838,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,  1954,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   864,
     865,    -1,    81,    -1,    -1,   136,   137,   872,    -1,    -1,
      -1,    -1,    -1,    92,   879,   880,   881,   882,   883,   884,
     885,    59,    60,  1988,    -1,   104,    -1,    -1,  1993,   894,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,   911,    -1,    -1,    -1,
      -1,    -1,    -1,  2018,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,   200,
      -1,    -1,   937,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,   163,    81,   951,   166,    -1,    -1,
     169,   170,    -1,   172,   173,   174,    -1,   176,   136,   137,
      -1,  1899,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
     975,   976,    -1,  2078,  2079,    -1,    19,    20,    -1,   198,
      -1,   986,    -1,    -1,    -1,    -1,    -1,    30,   993,    -1,
      -1,    -1,    -1,    -1,    -1,  1000,    81,    -1,    83,    84,
      -1,  1006,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,  1017,   136,   137,    -1,  1954,    -1,    -1,   104,
      -1,    -1,   200,    -1,    -1,    -1,    -1,  1032,    -1,    -1,
      -1,   167,    -1,   169,   170,   171,   172,   173,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1052,    -1,    -1,
    1988,  1056,    -1,    -1,    -1,  1993,   141,   142,   143,   144,
     145,  1066,   198,   199,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   200,    -1,    -1,
    2018,    -1,   167,    -1,   169,   170,    -1,   172,   173,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1112,  1113,    59,
      60,    -1,    -1,   198,    -1,    -1,    -1,   202,    -1,    -1,
     205,  1126,    -1,    -1,    -1,  1130,    -1,  1132,    -1,    -1,
    1135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2078,  2079,    -1,  1148,  1149,  1150,  1151,  1152,  1153,  1154,
    1155,    -1,    -1,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,
    1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,
    1185,    -1,    10,    11,    12,    -1,   136,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,  1204,
      -1,    -1,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    81,    57,
      83,    84,  1237,    -1,  1239,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,  1252,    -1,    -1,
     200,   104,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1280,    -1,    -1,  1283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,  1299,  1300,  1301,  1302,  1303,  1304,
      59,    60,  1307,  1308,    -1,  1310,    -1,    -1,    -1,  1314,
      -1,    -1,    -1,    -1,   167,    -1,   169,   170,    -1,   172,
     173,   174,    -1,    -1,  1329,    -1,  1331,    -1,    -1,    -1,
      -1,    -1,   289,    -1,   291,   378,  1341,    -1,    -1,    -1,
      -1,    -1,    -1,  1348,   387,   198,    -1,    -1,  1353,   202,
    1355,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,   417,  1380,   204,   136,   137,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,   350,    -1,    -1,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,  1416,  1417,    -1,    -1,  1420,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,  1447,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,   501,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    -1,
      -1,    -1,    -1,  1478,    -1,  1480,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   442,    30,    31,   445,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    -1,    -1,    -1,    -1,  1523,  1524,
      -1,    -1,  1527,    -1,    -1,    69,    -1,    -1,  1533,    -1,
    1535,    -1,  1537,    -1,    -1,    -1,    -1,  1542,  1543,    -1,
      -1,    -1,  1547,    -1,  1549,    -1,    -1,  1552,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,   599,    -1,    -1,    -1,
    1565,  1566,    -1,    -1,  1569,    -1,    -1,    -1,    -1,    -1,
      -1,  1576,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,   632,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
      -1,    -1,    -1,    -1,    -1,   289,    -1,   291,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,  1624,
      -1,  1626,    -1,  1628,    -1,    -1,    -1,    -1,  1633,    -1,
    1635,    -1,    -1,    -1,    -1,    -1,    -1,   594,   169,   170,
      -1,   172,   173,   174,  1649,    -1,    -1,    -1,    -1,  1654,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,   203,
      -1,  1666,  1667,    -1,    -1,    -1,   350,   198,   199,  1674,
      -1,  1676,    -1,    -1,    -1,    -1,   719,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,  1699,    -1,  1701,    -1,    -1,    -1,
      31,  1706,  1707,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,  1733,    68,
      -1,    -1,   689,   690,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    81,    -1,    -1,  1750,  1751,  1752,    87,    -1,
      -1,    -1,  1757,    -1,  1759,   798,    -1,    -1,   442,    -1,
    1765,   445,  1767,    -1,    -1,   104,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,   830,    -1,    -1,
      -1,    -1,    -1,   836,    -1,   838,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,   864,   865,    -1,   163,    -1,    -1,   166,   167,    -1,
     169,   170,    -1,   172,   173,   174,    -1,   176,   881,   882,
     883,   884,   885,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,   894,    -1,    -1,    -1,    31,    -1,    -1,  1863,   198,
     199,    -1,    -1,    -1,    -1,  1870,    -1,    -1,   911,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1885,    -1,    -1,    -1,  1889,    -1,    -1,    -1,  1893,  1894,
     136,   137,    -1,    -1,   937,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1908,    -1,    81,    -1,    -1,   951,  1914,
     594,    -1,   596,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,   879,   880,    -1,  1930,    -1,    -1,   104,    -1,
      -1,  1936,    -1,   976,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   986,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1963,    19,
      20,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      30,    -1,    -1,  1978,  1017,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1989,    -1,  1991,   163,    -1,  1032,
     166,    -1,    -1,   169,   170,    -1,   172,   173,   174,    -1,
     176,    -1,    -1,    -1,    -1,   689,   690,    -1,    -1,    -1,
      -1,    -1,    -1,  1056,   698,  2020,    -1,    -1,   975,    -1,
      -1,    -1,   198,  1066,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2036,    -1,    -1,    -1,    -1,   993,  2042,    -1,    -1,
      -1,  2046,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1006,
      -1,    -1,    -1,    -1,    -1,  2060,  2061,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1112,
    1113,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    -1,    -1,  1052,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,  1148,  1149,  1150,  1151,  1152,
    1153,  1154,  1155,    -1,    -1,  1158,  1159,  1160,  1161,  1162,
    1163,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,
    1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,
    1183,  1184,  1185,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,  1204,    57,    -1,    -1,    -1,    -1,    -1,    -1,  1126,
      -1,    -1,    -1,  1130,    69,    -1,    -1,    -1,  1135,    -1,
     240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   872,    -1,
      10,    11,    12,    -1,    -1,   879,   880,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1252,
      30,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,  1299,  1300,  1301,  1302,
    1303,  1304,    -1,    -1,  1307,  1308,    -1,  1310,    -1,    -1,
      81,  1314,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1237,    -1,    -1,    -1,    -1,    -1,  1329,    -1,  1331,    -1,
      -1,   975,    -1,   104,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,   993,
    1353,    -1,  1355,    -1,    -1,    -1,  1000,    -1,   378,    -1,
      -1,    -1,  1006,  1280,    -1,    -1,  1283,   387,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,  1380,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,   406,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,   169,   170,
      -1,   172,   173,   174,    -1,    -1,    -1,    -1,  1052,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,  1420,    -1,    -1,
      -1,    -1,    -1,   203,  1341,    -1,    -1,   198,   199,    30,
      31,  1348,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,   136,   137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,  1478,    -1,  1480,    -1,    -1,
      -1,   501,  1126,    10,    11,    12,  1130,    -1,  1132,    -1,
      -1,  1135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1416,
    1417,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
    1533,    -1,  1535,    -1,  1537,    -1,    -1,    -1,    -1,  1542,
    1543,    -1,    69,    -1,  1547,    -1,  1549,    -1,    -1,  1552,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1566,    -1,    -1,  1569,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,   599,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1237,    -1,  1239,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,    -1,  1523,  1524,    -1,    -1,
    1527,   138,   632,   141,   142,   143,   144,   145,    -1,    -1,
      -1,  1624,    -1,  1626,    -1,  1628,    -1,    -1,    -1,    -1,
    1633,    -1,  1635,    -1,    -1,    -1,  1280,    -1,   166,  1283,
      -1,   169,   170,    -1,   172,   173,   174,    -1,  1565,    -1,
      -1,  1654,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1576,
      -1,    -1,    -1,  1666,  1667,    -1,    -1,    -1,    -1,    -1,
     198,    -1,    -1,  1676,   202,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1341,    -1,   719,
      -1,    -1,    30,    31,  1348,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
    1733,    -1,  1649,    78,    79,    80,    81,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,  1750,  1751,  1752,
      -1,    -1,    -1,    -1,  1757,    -1,  1759,  1674,    -1,   104,
      -1,    -1,    -1,    -1,  1767,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1416,  1417,    -1,    -1,    -1,    -1,   798,    -1,
      -1,    -1,  1699,    -1,  1701,    -1,    -1,    -1,    -1,  1706,
    1707,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,    -1,   599,  1447,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   836,    -1,   838,    -1,
      -1,    -1,    -1,    -1,   169,   170,    -1,   172,   173,   174,
     104,    -1,    -1,    -1,    -1,   632,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   864,   865,    -1,    31,  1765,    -1,
      -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,
    1863,   881,   882,   883,   884,   885,    -1,   141,   142,   143,
     144,   145,    -1,    -1,   894,   203,    -1,    -1,    -1,  1523,
    1524,    -1,    -1,  1527,    68,    81,    -1,    -1,    -1,    -1,
    1893,  1894,    -1,    -1,    -1,   169,   170,    81,   172,   173,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,  1914,    -1,    -1,    -1,    -1,    -1,   937,    -1,    -1,
     104,  1565,    -1,    -1,   198,   199,    -1,  1930,   112,    -1,
      -1,   127,  1576,  1936,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,   140,   141,   142,   143,   144,   145,
     146,    -1,    -1,  1870,    -1,    -1,   140,   141,   142,   143,
     144,   145,   146,    -1,    -1,    -1,   986,   163,  1885,    -1,
     166,   167,  1889,   169,   170,  1978,   172,   173,   174,   163,
      -1,    -1,   166,   167,    -1,   169,   170,    -1,   172,   173,
     174,    -1,    -1,    -1,    -1,    -1,    -1,  1017,    -1,    -1,
      -1,    -1,   198,   187,    -1,  1649,    -1,    -1,    -1,    -1,
     194,    -1,    -1,    -1,   198,   199,    -1,  2020,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1674,    -1,    -1,  2036,    -1,    -1,  1056,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,  1963,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,  1699,    -1,  1701,    -1,    -1,
      -1,    -1,  1706,  1707,    -1,    -1,    -1,    -1,   865,    -1,
      -1,    -1,  1989,    -1,  1991,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,   145,   881,   882,   883,   884,   885,    -1,
      -1,    -1,  1112,  1113,    -1,    -1,    -1,   894,    -1,    -1,
      -1,   163,    -1,    -1,   166,    -1,    -1,   169,   170,    -1,
     172,   173,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1765,    -1,    -1,    -1,    -1,    -1,   189,  1148,  1149,
    1150,  1151,  1152,  1153,  1154,  1155,   198,    -1,  1158,  1159,
    1160,  1161,  1162,  1163,  1164,  1165,  1166,  1167,  1168,  1169,
    1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,
    1180,  1181,  1182,  1183,  1184,  1185,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1204,    -1,    30,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    81,    57,    -1,    -1,    -1,    -1,    -1,    -1,
    1017,    -1,    -1,    -1,    -1,    69,  1870,    -1,    -1,    81,
      -1,    83,  1252,    85,    -1,   104,    -1,    -1,    -1,    -1,
      -1,  1885,    -1,   112,   113,  1889,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1908,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1307,    -1,   141,
     142,   143,   144,   145,  1314,    -1,    -1,   166,    -1,    -1,
     169,   170,    -1,   172,   173,   174,    -1,    -1,    -1,  1329,
      -1,  1331,    -1,    -1,    -1,    -1,    -1,   169,   170,  1963,
     172,   173,   174,    -1,    -1,    -1,    -1,    -1,    -1,   198,
      81,    -1,    -1,  1353,    -1,  1355,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,  1989,   198,  1991,    -1,    -1,
      -1,  1148,  1149,   104,    -1,  1152,    -1,    -1,    -1,   203,
    1380,  1158,  1159,  1160,  1161,  1162,  1163,  1164,  1165,  1166,
    1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,
    1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,  1185,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,  2042,    -1,
      -1,    -1,  2046,    -1,    -1,    -1,    -1,  1204,    -1,    -1,
      -1,    -1,   163,    -1,    -1,   166,  2060,  2061,   169,   170,
      -1,   172,   173,   174,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,  1533,    -1,  1535,    92,  1537,    -1,    -1,
      -1,    -1,  1542,  1543,    -1,    -1,    -1,  1547,   104,  1549,
      -1,    -1,  1552,    -1,  1331,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,    -1,    -1,   129,   130,    -1,  1353,    -1,  1355,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,   158,  1380,    -1,    -1,    -1,   163,   164,   165,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,    -1,
      -1,    -1,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,   187,   188,    -1,    -1,  1635,    81,   193,   194,   195,
      -1,    -1,   198,   199,    10,    11,    12,    -1,    -1,   205,
     206,   207,   208,    -1,  1654,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,    -1,    -1,    10,    11,    12,    13,
      -1,    -1,   167,    -1,   169,   170,    -1,   172,   173,   174,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1750,  1751,  1752,   198,    -1,    -1,  1533,  1757,  1535,    -1,
    1537,    -1,    -1,    57,    -1,  1542,  1766,    -1,    -1,    -1,
    1547,    -1,  1549,    -1,    -1,  1552,    -1,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    81,   130,   203,   132,   133,
     134,   135,    -1,    -1,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,  1863,    -1,    -1,    -1,    -1,    -1,   163,
      -1,    -1,    -1,    -1,    -1,   169,   170,  1654,   172,   173,
     174,   175,    -1,   177,    -1,    -1,   180,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,   202,    -1,
      -1,   205,    -1,    -1,  1914,    -1,    -1,   163,    -1,    -1,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,    -1,
    1930,    -1,    -1,    -1,    -1,    -1,  1936,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,  1965,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1750,  1751,  1752,    -1,    -1,  1978,    -1,
    1757,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      86,    -1,    88,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,  1863,    -1,    -1,   155,
      -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,   175,
      -1,    -1,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,   187,   188,   189,    -1,   191,    -1,   193,   194,   195,
      -1,    -1,   198,   199,    -1,   201,   202,  1914,    -1,   205,
     206,   207,   208,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,  1930,    -1,    -1,    -1,    13,    -1,  1936,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    -1,
      56,  1978,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      86,    -1,    88,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,   155,
      -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,   175,
      -1,    -1,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,   187,   188,   189,    -1,   191,    -1,   193,   194,   195,
      -1,    -1,   198,   199,    -1,   201,   202,   203,    -1,   205,
     206,   207,   208,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,   144,   145,    -1,   147,   148,   149,
     150,   151,    -1,    -1,    -1,   155,    -1,    -1,   158,    -1,
      -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,   169,
     170,    -1,   172,   173,   174,   175,    -1,    -1,   178,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,   187,   188,   189,
      -1,   191,    -1,   193,   194,   195,    -1,    -1,   198,   199,
      -1,   201,   202,   203,    -1,   205,   206,   207,   208,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    -1,    86,    -1,    88,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,    -1,
     114,   115,    -1,   117,    -1,    -1,   120,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,    -1,   132,   133,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
     144,   145,    -1,   147,   148,   149,   150,   151,    -1,    -1,
      -1,   155,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,
     164,   165,   166,   167,    -1,   169,   170,    -1,   172,   173,
     174,   175,    -1,    -1,   178,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,
     194,   195,    -1,    -1,   198,   199,    -1,   201,   202,   203,
      -1,   205,   206,   207,   208,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    97,
      -1,    99,    -1,   101,    -1,    -1,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,    -1,   114,   115,    -1,   117,
      -1,    -1,   120,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,   144,   145,    -1,   147,
     148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,    -1,
     158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,
      -1,   169,   170,    -1,   172,   173,   174,   175,    -1,    -1,
     178,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,   187,
     188,    -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,
     198,   199,    -1,   201,   202,   203,    -1,   205,   206,   207,
     208,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    86,    -1,    88,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    97,    -1,    99,    -1,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,    -1,   114,   115,    -1,   117,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,    -1,
     132,   133,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,   144,   145,    -1,   147,   148,   149,   150,   151,
      -1,    -1,    -1,   155,    -1,    -1,   158,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,   167,    -1,   169,   170,    -1,
     172,   173,   174,   175,    -1,    -1,   178,    -1,    -1,   181,
      -1,    -1,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
      -1,   193,   194,   195,    -1,    -1,   198,   199,    -1,   201,
     202,    -1,    -1,   205,   206,   207,   208,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      86,    -1,    88,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,    -1,   132,   133,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,   155,
      -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,   175,
      -1,    -1,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,   187,   188,    -1,    -1,    -1,    -1,   193,   194,   195,
      -1,    -1,   198,   199,    -1,   201,   202,   203,    -1,   205,
     206,   207,   208,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,    -1,   114,   115,    -1,   117,    -1,    -1,
     120,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,    -1,   132,   133,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,   144,   145,    -1,   147,   148,   149,
     150,   151,    -1,    -1,    -1,   155,    -1,    -1,   158,    -1,
      -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,   169,
     170,    -1,   172,   173,   174,   175,    -1,    -1,   178,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,   187,   188,    -1,
      -1,    -1,    -1,   193,   194,   195,    -1,    -1,   198,   199,
      -1,   201,   202,   203,    -1,   205,   206,   207,   208,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    -1,    86,    -1,    88,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,    -1,
     114,   115,    -1,   117,    -1,    -1,   120,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,    -1,   132,   133,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
     144,   145,    -1,   147,   148,   149,   150,   151,    -1,    -1,
      -1,   155,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,
     164,   165,   166,   167,    -1,   169,   170,    -1,   172,   173,
     174,   175,    -1,    -1,   178,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,
     194,   195,    -1,    -1,   198,   199,    -1,   201,   202,   203,
      -1,   205,   206,   207,   208,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    97,
      -1,    99,    -1,   101,    -1,    -1,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,    -1,   114,   115,    -1,   117,
      -1,    -1,   120,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,   144,   145,    -1,   147,
     148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,    -1,
     158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,
      -1,   169,   170,    -1,   172,   173,   174,   175,    -1,    -1,
     178,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,   187,
     188,    -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,
     198,   199,    -1,   201,   202,   203,    -1,   205,   206,   207,
     208,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    86,    -1,    88,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    97,    -1,    99,    -1,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,    -1,   114,   115,    -1,   117,    -1,    -1,   120,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,    -1,
     132,   133,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,   144,   145,    -1,   147,   148,   149,   150,   151,
      -1,    -1,    -1,   155,    -1,    -1,   158,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,   167,    -1,   169,   170,    -1,
     172,   173,   174,   175,    -1,    -1,   178,    -1,    -1,   181,
      -1,    -1,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
      -1,   193,   194,   195,    -1,    -1,   198,   199,    -1,   201,
     202,    -1,    -1,   205,   206,   207,   208,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      86,    -1,    88,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    97,    -1,    99,    -1,   101,   102,    -1,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,    -1,   132,   133,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,   155,
      -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,   175,
      -1,    -1,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,   187,   188,    -1,    -1,    -1,    -1,   193,   194,   195,
      -1,    -1,   198,   199,    -1,   201,   202,    -1,    -1,   205,
     206,   207,   208,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,    -1,   114,   115,    -1,   117,    -1,    -1,
     120,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,    -1,   132,   133,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,   144,   145,    -1,   147,   148,   149,
     150,   151,    -1,    -1,    -1,   155,    -1,    -1,   158,    -1,
      -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,   169,
     170,    -1,   172,   173,   174,   175,    -1,    -1,   178,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,   187,   188,    -1,
      -1,    -1,    -1,   193,   194,   195,    -1,    -1,   198,   199,
      -1,   201,   202,   203,    -1,   205,   206,   207,   208,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,    86,    -1,    88,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,    -1,
     114,   115,    -1,   117,    -1,    -1,   120,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,    -1,   132,   133,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
     144,   145,    -1,   147,   148,   149,   150,   151,    -1,    -1,
      -1,   155,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,
     164,   165,   166,   167,    -1,   169,   170,    -1,   172,   173,
     174,   175,    -1,    -1,   178,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,
     194,   195,    -1,    -1,   198,   199,    -1,   201,   202,    -1,
      -1,   205,   206,   207,   208,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    97,
      -1,    99,    -1,   101,    -1,    -1,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,    -1,   114,   115,    -1,   117,
      -1,    -1,   120,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,   144,   145,    -1,   147,
     148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,    -1,
     158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,
      -1,   169,   170,    -1,   172,   173,   174,   175,    -1,    -1,
     178,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,   187,
     188,    -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,
     198,   199,    -1,   201,   202,   203,    -1,   205,   206,   207,
     208,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    86,    -1,    88,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,    -1,   114,   115,    -1,   117,    -1,    -1,   120,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,    -1,
     132,   133,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,   144,   145,    -1,   147,   148,   149,   150,   151,
      -1,    -1,    -1,   155,    -1,    -1,   158,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,   167,    -1,   169,   170,    -1,
     172,   173,   174,   175,    -1,    -1,   178,    -1,    -1,   181,
      -1,    -1,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
      -1,   193,   194,   195,    -1,    -1,   198,   199,    -1,   201,
     202,    -1,    -1,   205,   206,   207,   208,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      86,    -1,    88,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,    -1,   132,   133,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,   155,
      -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,   175,
      -1,    -1,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,   187,   188,    -1,    -1,    -1,    -1,   193,   194,   195,
      -1,    -1,   198,   199,    -1,   201,   202,    -1,    -1,   205,
     206,   207,   208,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,    -1,   114,   115,    -1,   117,    -1,    -1,
     120,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,    -1,   132,   133,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,   144,   145,    -1,   147,   148,   149,
     150,   151,    -1,    -1,    -1,   155,    -1,    -1,   158,    -1,
      -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,   169,
     170,    -1,   172,   173,   174,   175,    -1,    -1,   178,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,   187,   188,    -1,
      -1,    -1,    -1,   193,   194,   195,    -1,    -1,   198,   199,
      -1,   201,   202,   203,    -1,   205,   206,   207,   208,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    -1,    86,    -1,    88,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,    -1,
     114,   115,    -1,   117,    -1,    -1,   120,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,    -1,   132,   133,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
     144,   145,    -1,   147,   148,   149,   150,   151,    -1,    -1,
      -1,   155,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,
     164,   165,   166,   167,    -1,   169,   170,    -1,   172,   173,
     174,   175,    -1,    -1,   178,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,
     194,   195,    -1,    -1,   198,   199,    -1,   201,   202,   203,
      -1,   205,   206,   207,   208,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    97,
      -1,    99,    -1,   101,    -1,    -1,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,    -1,   114,   115,    -1,   117,
      -1,    -1,   120,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,   144,   145,    -1,   147,
     148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,    -1,
     158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,
      -1,   169,   170,    -1,   172,   173,   174,   175,    -1,    -1,
     178,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,   187,
     188,    -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,
     198,   199,    -1,   201,   202,   203,    -1,   205,   206,   207,
     208,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    86,    -1,    88,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    97,    -1,    99,    -1,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,    -1,   114,   115,    -1,   117,    -1,    -1,   120,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,    -1,
     132,   133,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,   144,   145,    -1,   147,   148,   149,   150,   151,
      -1,    -1,    -1,   155,    -1,    -1,   158,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,   167,    -1,   169,   170,    -1,
     172,   173,   174,   175,    -1,    -1,   178,    -1,    -1,   181,
      -1,    -1,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
      -1,   193,   194,   195,    -1,    -1,   198,   199,    -1,   201,
     202,   203,    -1,   205,   206,   207,   208,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      86,    -1,    88,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,    -1,   132,   133,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,   155,
      -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,   175,
      -1,    -1,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,   187,   188,    -1,    -1,    -1,    -1,   193,   194,   195,
      -1,    -1,   198,   199,    -1,   201,   202,   203,    -1,   205,
     206,   207,   208,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,    -1,   114,   115,    -1,   117,    -1,    -1,
     120,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,   144,   145,    -1,   147,   148,   149,
     150,   151,    -1,    -1,    -1,   155,    -1,    -1,   158,    -1,
      -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,   169,
     170,    -1,   172,   173,   174,    -1,    -1,    -1,   178,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,   187,   188,    -1,
      -1,    -1,    -1,   193,   194,   195,    -1,    -1,   198,   199,
      -1,   201,   202,    -1,    -1,   205,   206,   207,   208,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    -1,    86,    -1,    88,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,    -1,
     114,   115,    -1,   117,    -1,    -1,   120,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
     144,   145,    -1,   147,   148,   149,   150,   151,    -1,    -1,
      -1,   155,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,
     164,   165,   166,   167,    -1,   169,   170,    -1,   172,   173,
     174,    -1,    -1,    -1,   178,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,
     194,   195,    -1,    -1,   198,   199,    -1,   201,   202,    -1,
      -1,   205,   206,   207,   208,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    97,
      -1,    99,    -1,   101,    -1,    -1,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,    -1,   114,   115,    -1,   117,
      -1,    -1,   120,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,   144,   145,    -1,   147,
     148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,    -1,
     158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,
      -1,   169,   170,    -1,   172,   173,   174,    -1,    -1,    -1,
     178,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,   187,
     188,    -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,
     198,   199,    -1,   201,   202,    -1,    -1,   205,   206,   207,
     208,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    86,    -1,    88,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    97,    -1,    99,    -1,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,    -1,   114,   115,    -1,   117,    -1,    -1,   120,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,   144,   145,    -1,   147,   148,   149,   150,   151,
      -1,    -1,    -1,   155,    -1,    -1,   158,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,   167,    -1,   169,   170,    -1,
     172,   173,   174,    -1,    -1,    -1,   178,    -1,    -1,   181,
      -1,    -1,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
      -1,   193,   194,   195,    -1,    -1,   198,   199,    -1,   201,
     202,    -1,    -1,   205,   206,   207,   208,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      86,    -1,    88,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,   155,
      -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,    -1,
      -1,    -1,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,   187,   188,    -1,    -1,    -1,    -1,   193,   194,   195,
      -1,    -1,   198,   199,    -1,   201,   202,    -1,    -1,   205,
     206,   207,   208,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,    -1,   114,   115,    -1,   117,    -1,    -1,
     120,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,   144,   145,    -1,   147,   148,   149,
     150,   151,    -1,    -1,    -1,   155,    -1,    -1,   158,    -1,
      -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,   169,
     170,    -1,   172,   173,   174,    -1,    -1,    -1,   178,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,   187,   188,    -1,
      -1,    -1,    -1,   193,   194,   195,    -1,    -1,   198,   199,
      -1,   201,   202,    -1,    -1,   205,   206,   207,   208,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
     144,   145,    -1,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,
     164,   165,   166,   167,    -1,   169,   170,    -1,   172,   173,
     174,    -1,    -1,    -1,   178,    -1,    -1,   181,     3,     4,
       5,     6,     7,   187,   188,    -1,    -1,    -1,    13,   193,
     194,   195,    -1,    -1,   198,   199,    -1,   201,    -1,    -1,
      -1,   205,   206,   207,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,    -1,    -1,   129,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,   144,
     145,    -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   164,
     165,   166,   167,    -1,   169,   170,    -1,   172,   173,   174,
      -1,   176,    -1,   178,    -1,    -1,   181,     3,     4,     5,
       6,     7,   187,   188,    -1,    -1,    -1,    13,   193,   194,
     195,    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,    -1,
     205,   206,   207,   208,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,    -1,    -1,   129,   130,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,    -1,
     176,    -1,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,   187,   188,    -1,    -1,    -1,    -1,   193,   194,   195,
      -1,    -1,   198,   199,     3,     4,     5,     6,     7,   205,
     206,   207,   208,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,    -1,    -1,
     129,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,   144,   145,    -1,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,
     169,   170,    -1,   172,   173,   174,    -1,    -1,    -1,   178,
      -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,   187,   188,
      -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,   198,
     199,     3,     4,     5,     6,     7,   205,   206,   207,   208,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,    -1,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,   144,   145,    -1,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,   167,    -1,   169,   170,    -1,
     172,   173,   174,    -1,    -1,    -1,   178,    -1,    -1,   181,
      -1,    -1,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
      -1,   193,   194,   195,    -1,    -1,   198,   199,    -1,    -1,
     202,    -1,    -1,   205,   206,   207,   208,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,    -1,    -1,   129,   130,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,   167,    -1,   169,   170,    -1,   172,   173,   174,    -1,
      -1,    -1,   178,    -1,    -1,   181,     3,     4,     5,     6,
       7,   187,   188,    -1,    -1,    -1,    13,   193,   194,   195,
      -1,    -1,   198,   199,    -1,    -1,    -1,    -1,    -1,   205,
     206,   207,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,   109,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,
     167,    -1,   169,   170,    -1,   172,   173,   174,    -1,    -1,
      -1,   178,    -1,    -1,   181,     3,     4,     5,     6,     7,
     187,   188,    -1,    -1,    -1,    13,   193,   194,   195,    -1,
      -1,   198,   199,    -1,    -1,    -1,    -1,    -1,   205,   206,
     207,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,    -1,
      -1,   129,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,   144,   145,    -1,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,
      -1,   169,   170,    -1,   172,   173,   174,    -1,    -1,    -1,
     178,    -1,    -1,   181,     3,     4,     5,     6,     7,   187,
     188,    -1,    -1,    -1,    13,   193,   194,   195,    -1,    -1,
     198,   199,    -1,    -1,    -1,    -1,    -1,   205,   206,   207,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,    -1,    -1,
     129,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,   144,   145,    -1,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,
     169,   170,    -1,   172,   173,   174,    -1,    -1,    -1,   178,
      -1,    -1,   181,     3,     4,     5,     6,     7,   187,   188,
      -1,    -1,    -1,    13,   193,   194,   195,    -1,    -1,   198,
     199,    -1,   201,    -1,    -1,    -1,   205,   206,   207,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,   144,   145,    -1,   147,   148,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,   169,
     170,    -1,   172,   173,   174,    -1,    -1,    -1,   178,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,   187,   188,    -1,
      -1,    -1,    -1,   193,   194,   195,    -1,    -1,   198,   199,
      -1,   201,    -1,    -1,    -1,   205,   206,   207,   208,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
     144,   145,    -1,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,
     164,   165,   166,   167,    -1,   169,   170,    -1,   172,   173,
     174,    -1,    -1,    -1,   178,    -1,    -1,   181,     3,     4,
       5,     6,     7,   187,   188,    -1,    -1,    -1,    13,   193,
     194,   195,    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,
      -1,   205,   206,   207,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,    -1,    -1,   129,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,   144,
     145,    -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   164,
     165,   166,   167,    -1,   169,   170,    -1,   172,   173,   174,
      -1,    -1,    -1,   178,    -1,    -1,   181,    -1,    -1,    -1,
      -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,   194,
     195,    -1,    -1,   198,   199,   200,    -1,    -1,    -1,    -1,
     205,   206,   207,   208,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,    -1,    -1,
     129,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,   144,   145,    -1,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,
     169,   170,    -1,   172,   173,   174,    -1,    -1,    -1,   178,
      -1,    -1,   181,     3,     4,     5,     6,     7,   187,   188,
      -1,    -1,    -1,    13,   193,   194,   195,    -1,    -1,   198,
     199,    -1,    -1,    -1,    -1,    -1,   205,   206,   207,   208,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,   144,   145,    -1,   147,   148,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,   169,
     170,    -1,   172,   173,   174,    -1,    -1,    -1,   178,    -1,
      -1,   181,     3,     4,     5,     6,     7,   187,   188,    -1,
      -1,    -1,    13,   193,   194,   195,    -1,    -1,   198,   199,
      -1,    -1,    -1,    -1,    -1,   205,   206,   207,   208,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,    -1,    -1,   129,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,   144,   145,    -1,   147,   148,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      -1,    -1,   163,   164,   165,   166,   167,    -1,   169,   170,
      -1,   172,   173,   174,    -1,    -1,    -1,   178,    -1,    -1,
     181,     3,     4,     5,     6,     7,   187,   188,    -1,    -1,
      -1,    13,   193,   194,   195,    -1,    -1,   198,   199,    -1,
      -1,    -1,    -1,    -1,   205,   206,   207,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,    -1,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,   144,   145,    -1,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,   167,    -1,   169,   170,    -1,
     172,   173,   174,    -1,    -1,    -1,   178,    -1,    -1,   181,
       3,     4,     5,     6,     7,   187,   188,    -1,    -1,    -1,
      13,   193,   194,   195,    -1,    -1,   198,   199,    -1,    -1,
      -1,    -1,    -1,   205,   206,   207,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,    -1,    -1,   129,   130,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,   144,   145,    -1,   147,   148,   149,   150,   151,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,
     163,   164,   165,   166,   167,    -1,   169,   170,    -1,   172,
     173,   174,    -1,    -1,    -1,   178,    -1,    -1,   181,     3,
       4,     5,     6,     7,   187,   188,    -1,    -1,    -1,    13,
     193,   194,   195,    -1,    -1,   198,   199,    -1,    -1,    -1,
      -1,    -1,   205,   206,   207,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
     144,   145,    -1,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,
     164,   165,   166,   167,    -1,   169,   170,    -1,   172,   173,
     174,    -1,    -1,    -1,   178,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,
     194,   195,    -1,    -1,   198,   199,     3,     4,     5,     6,
       7,   205,   206,   207,   208,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,
     167,    -1,   169,   170,    -1,   172,   173,   174,    -1,    -1,
      -1,   178,    -1,    -1,   181,     3,     4,     5,     6,     7,
     187,   188,    -1,    -1,    -1,    13,   193,   194,   195,    -1,
      -1,   198,   199,    -1,    -1,    -1,    -1,    -1,   205,   206,
     207,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,    -1,
      -1,   129,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,   144,   145,    -1,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,
      -1,   169,   170,    -1,   172,   173,   174,    -1,    -1,    -1,
     178,    -1,    -1,   181,     3,     4,     5,     6,     7,   187,
     188,    -1,    -1,    -1,    13,   193,   194,   195,    -1,    -1,
     198,   199,    -1,    -1,    -1,    -1,    -1,   205,   206,   207,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,    -1,    -1,
     129,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,   144,   145,    -1,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,
     169,   170,    -1,   172,   173,   174,    -1,     3,     4,   178,
       6,     7,   181,    -1,    10,    11,    12,    13,   187,   188,
      -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,   198,
     199,    -1,    28,    29,    -1,    -1,   205,   206,   207,   208,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    57,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,   130,    -1,   132,   133,   134,   135,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,   163,    10,    11,
      12,    13,    -1,   169,   170,    -1,   172,   173,   174,   175,
      -1,   177,    -1,    -1,   180,    -1,    28,    29,    -1,    31,
      -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   198,    -1,    -1,    -1,   202,    -1,    -1,   205,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,   130,    -1,
      -1,   133,   134,   135,    -1,    -1,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   163,    -1,    -1,   166,   167,    -1,   169,   170,    -1,
     172,   173,   174,   175,   104,   177,    -1,    -1,   180,    -1,
       3,     4,    -1,     6,     7,   187,   188,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,   198,   199,    -1,    -1,
      -1,   203,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      -1,   141,   142,   143,   144,   145,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    57,    -1,   166,    -1,    -1,   169,
     170,    -1,   172,   173,   174,    68,    -1,    69,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,   198,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,   130,    -1,    -1,
     133,   134,   135,    -1,    -1,    -1,   139,   140,   141,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,    -1,    -1,   166,   167,    -1,   169,   170,    -1,   172,
     173,   174,   175,   104,   177,    -1,    -1,   180,    -1,     3,
       4,    -1,     6,     7,   187,   188,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    57,    57,   166,    -1,    -1,   169,   170,
      -1,   172,   173,   174,    68,    -1,    69,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,   198,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,   130,    -1,   132,   133,
     134,   135,    -1,    -1,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,   169,   170,    -1,   172,   173,
     174,   175,   104,   177,    -1,    -1,   180,    -1,     3,     4,
      -1,     6,     7,   187,   188,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    -1,   141,
     142,   143,   144,   145,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    57,    57,    -1,    -1,    -1,   169,   170,    -1,
     172,   173,   174,    68,    -1,    69,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,   198,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,   130,    -1,    -1,   133,   134,
     135,    -1,    -1,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,   169,   170,    -1,   172,   173,   174,
     175,    -1,   177,    -1,    -1,   180,    -1,    -1,    -1,    -1,
      -1,    -1,   187,   188,   189,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,   198,   199,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    31,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    57,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    69,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,   130,    -1,    -1,   133,   134,
     135,    -1,    -1,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,   169,   170,    -1,   172,   173,   174,
     175,    -1,   177,    -1,    -1,   180,    -1,     3,     4,     5,
       6,     7,   187,   188,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    57,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,   169,   170,    -1,   172,   173,   174,   175,
      -1,   177,   178,    -1,   180,    -1,    -1,    -1,    -1,    -1,
      -1,   187,    -1,   189,    -1,   191,    -1,   193,   194,    -1,
       3,     4,   198,     6,     7,    12,    -1,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    28,    29,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,   130,    -1,   132,
     133,   134,   135,    -1,    -1,    -1,   139,   140,   141,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,
     163,    10,    11,    12,    13,    -1,   169,   170,    -1,   172,
     173,   174,   175,    -1,   177,    -1,    -1,   180,    -1,    28,
      29,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,   130,    -1,   132,   133,   134,   135,    -1,    -1,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,   163,    10,    11,    12,    13,    -1,
     169,   170,    -1,   172,   173,   174,   175,    -1,   177,    -1,
      -1,   180,    -1,    28,    29,    -1,    -1,    -1,    -1,   188,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,   130,    -1,    -1,   133,   134,
     135,    -1,    -1,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,
      -1,    -1,    -1,    -1,   169,   170,    -1,   172,   173,   174,
     175,    -1,   177,    -1,    -1,   180,    10,    11,    12,    -1,
      -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   198,    -1,    -1,    30,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    -1,   203,
      -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,   203,    57,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   203,    57,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   203,    57,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    -1,   203,    -1,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,   203,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,   201,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,   201,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    -1,    -1,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,   201,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    30,    31,   201,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    -1,    68,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,    69,    -1,    -1,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,   169,   170,    -1,   172,   173,   174,
     104,   176,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   198,   199,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   200,   140,   141,   142,   143,
     144,   145,   146,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    81,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,   169,   170,    -1,   172,   173,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,   187,    -1,    -1,    -1,   112,    -1,    -1,
     194,    68,    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    81,   200,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    68,
      -1,   166,   167,    -1,   169,   170,    -1,   172,   173,   174,
      31,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,   187,   140,   141,   142,   143,   144,   145,   146,
      -1,    -1,    -1,   198,   199,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   163,    68,    -1,   166,
     167,    -1,   169,   170,    -1,   172,   173,   174,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     187,   140,   141,   142,   143,   144,   145,   146,    -1,    -1,
      -1,   198,   199,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
     169,   170,    -1,   172,   173,   174,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    56,    -1,    58,    -1,   187,   140,
     141,   142,   143,   144,   145,   146,    -1,    -1,    70,   198,
     199,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    -1,   163,    -1,    -1,   166,   167,    -1,   169,   170,
      92,   172,   173,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,   187,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,   198,   199,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   140,   141,
     142,   143,   144,   145,    70,   147,   148,   149,   150,   151,
      -1,    69,    78,    79,    80,    81,   158,    83,    84,    -1,
      -1,   163,   164,   165,   166,   167,    92,   169,   170,    -1,
     172,   173,   174,    -1,    -1,    -1,   178,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
      -1,   193,    -1,    -1,    -1,   121,   198,   199,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,   144,   145,
      70,   147,   148,   149,   150,   151,    -1,    -1,    78,    79,
      80,    81,   158,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,   167,    92,   169,   170,    -1,   172,   173,   174,    -1,
      -1,    -1,   178,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,
      -1,    -1,   198,   199,    -1,    -1,    50,    51,    -1,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,   142,   143,   144,   145,    70,   147,   148,   149,
     150,   151,    -1,    -1,    78,    79,    80,    81,   158,    -1,
      -1,    -1,    -1,   163,   164,   165,   166,   167,    92,   169,
     170,    -1,   172,   173,   174,    -1,    -1,    -1,   178,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,   187,   188,    -1,
      -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,   198,   199,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,   145,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,   158,    83,    84,    -1,    -1,   163,
      -1,    -1,   166,   167,    92,   169,   170,    -1,   172,   173,
     174,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,   144,   145,    -1,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,
      -1,   169,   170,    -1,   172,   173,   174,    70,    71,    -1,
     178,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      83,    84,    -1,    -1,    -1,   193,    -1,    -1,    -1,    92,
     198,   199,    -1,    -1,   202,    -1,    -1,   205,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,   139,   140,   141,   142,
     143,   144,   145,    70,   147,   148,   149,   150,   151,    69,
      -1,    78,    79,    80,    81,   158,    83,    84,    -1,    -1,
     163,   164,   165,   166,   167,    92,   169,   170,    -1,   172,
     173,   174,    -1,    -1,    -1,   178,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,    -1,    -1,    -1,   121,   198,   199,    -1,    -1,    -1,
      -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,
     167,    -1,   169,   170,    -1,   172,   173,   174,    -1,    -1,
      -1,   178,    -1,    -1,    -1,    -1,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,
      -1,   198,   199,    -1,    -1,    -1,    30,    31,   205,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,    30,    31,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,    30,    31,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,   138,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,   138,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,   138,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    78,
      79,    80,    81,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,
      -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,    -1,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,   138,    -1,    -1,   163,   164,   165,   166,   167,    -1,
     169,   170,    -1,   172,   173,   174,    -1,    -1,    -1,   178,
      -1,    78,    79,    80,    81,    -1,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,   193,    92,    -1,    -1,    -1,   198,
     199,    -1,    -1,    -1,    -1,    -1,   205,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    69,    -1,    78,    79,    80,
      81,   158,    83,    84,    -1,    -1,   163,   164,   165,   166,
     167,    92,   169,   170,    -1,   172,   173,   174,    -1,    -1,
      -1,   178,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,
     121,   198,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,   147,   148,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      -1,    -1,   163,   164,   165,   166,   167,    -1,   169,   170,
      -1,   172,   173,   174,    -1,    -1,    -1,   178,    -1,    -1,
      -1,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,    -1,    -1,    -1,    -1,   198,   199,    27,
      -1,    -1,    30,    31,   205,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    69,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   210,   211,     0,   212,     3,     4,     5,     6,     7,
      13,    27,    28,    29,    48,    50,    51,    56,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    70,
      71,    72,    73,    74,    78,    79,    80,    81,    82,    83,
      84,    86,    88,    92,    93,    94,    95,    97,    99,   101,
     104,   105,   109,   110,   111,   112,   113,   114,   115,   117,
     119,   120,   121,   122,   123,   124,   125,   126,   128,   129,
     130,   131,   132,   133,   139,   140,   141,   142,   143,   144,
     145,   147,   148,   149,   150,   151,   155,   158,   163,   164,
     165,   166,   167,   169,   170,   172,   173,   174,   175,   178,
     181,   187,   188,   189,   191,   193,   194,   195,   198,   199,
     201,   202,   205,   206,   207,   208,   213,   216,   226,   227,
     228,   229,   230,   236,   245,   246,   257,   258,   262,   265,
     272,   278,   337,   338,   346,   347,   350,   351,   352,   353,
     354,   355,   356,   357,   359,   360,   361,   363,   366,   378,
     379,   386,   389,   392,   395,   398,   401,   407,   409,   410,
     412,   422,   423,   424,   426,   431,   436,   456,   464,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   480,   491,   493,   495,   121,   122,   123,   163,
     173,   199,   216,   257,   337,   359,   379,   468,   359,   199,
     359,   359,   359,   359,   109,   359,   359,   454,   455,   359,
     359,   359,   359,    81,    83,    92,   121,   141,   142,   143,
     144,   145,   158,   199,   227,   379,   423,   426,   431,   468,
     472,   468,   359,   359,   359,   359,   359,   359,   359,   359,
      38,   359,   483,   121,   132,   199,   227,   270,   423,   424,
     425,   427,   431,   465,   466,   467,   476,   481,   482,   359,
     199,   358,   428,   199,   358,   370,   348,   359,   238,   358,
     199,   199,   199,   358,   201,   359,   216,   201,   359,     3,
       4,     6,     7,    10,    11,    12,    13,    28,    29,    31,
      57,    68,    71,    72,    73,    74,    75,    76,    77,    87,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   130,   132,   133,   134,   135,
     139,   140,   146,   163,   167,   175,   177,   180,   187,   188,
     199,   216,   217,   218,   229,   496,   517,   518,   521,    27,
     201,   353,   355,   359,   202,   250,   359,   112,   113,   163,
     166,   189,   219,   220,   221,   222,   226,    83,   205,   305,
     306,    83,   307,   123,   132,   122,   132,   199,   199,   199,
     199,   216,   276,   499,   199,   199,    70,    70,    70,    70,
      70,   348,    83,    91,   159,   160,   161,   488,   489,   166,
     202,   226,   226,   216,   277,   499,   167,   199,   199,   499,
     499,    83,   195,   202,   371,    28,   347,   350,   359,   361,
     468,   473,   233,   202,    91,   429,   488,    91,   488,   488,
      32,   166,   183,   500,   199,     9,   201,   199,   346,   360,
     469,   472,   118,    38,   256,   167,   275,   499,   121,   194,
     257,   338,    70,   202,   463,   201,   201,   201,   201,   201,
     201,   201,   201,    10,    11,    12,    30,    31,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    57,    69,   201,    14,    70,    70,   202,   162,   133,
     173,   175,   189,   191,   278,   336,   337,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      59,    60,   136,   137,   458,   463,   463,   199,   199,    70,
     202,   205,   477,   256,   257,    14,    14,   359,   201,   138,
      49,   216,   453,    91,   347,   361,   162,   468,   138,     9,
     204,   271,   347,   361,   468,   500,   162,   199,   430,   458,
     463,   200,   359,    32,   236,     8,   372,     9,   201,   236,
     237,   348,   349,   359,   216,   290,   240,   201,   201,   201,
     140,   146,   521,   521,   183,   520,   199,   112,   521,    14,
     162,   140,   146,   163,   216,   218,   201,   201,   201,   251,
     116,   180,   201,   219,   221,   219,   221,   219,   221,   226,
     219,   221,   202,     9,   439,   201,   103,   166,   202,   468,
       9,   201,    14,     9,   201,   132,   132,   468,   492,   348,
     347,   361,   468,   472,   473,   200,   183,   268,   483,   483,
     359,   380,   381,   348,   404,   404,   380,   404,   201,    70,
     458,   159,   489,    82,   359,   468,    91,   159,   489,   226,
     215,   201,   202,   263,   273,   413,   415,    92,   199,   205,
     373,   374,   376,   422,   426,   475,   477,   493,   404,    14,
     103,   494,   367,   368,   369,   300,   301,   456,   457,   200,
     200,   200,   200,   200,   203,   235,   236,   258,   265,   272,
     456,   359,   206,   207,   208,   216,   501,   502,   521,    38,
      87,   176,   303,   304,   359,   496,   247,   248,   347,   355,
     356,   359,   361,   468,   202,   249,   249,   249,   249,   199,
     499,   266,   256,   359,   479,   359,   359,   359,   359,   359,
      32,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   427,   359,   350,   355,   359,
     479,   479,   359,   484,   485,   132,   202,   217,   218,   476,
     477,   276,   216,   277,   499,   499,   275,   257,    38,   350,
     353,   355,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   167,   202,   216,   459,   460,
     461,   462,   476,   303,   303,   479,   359,   256,   200,   359,
     199,   452,     9,   438,   200,   200,    38,   359,    38,   359,
     430,   200,   200,   200,   476,   303,   202,   216,   459,   460,
     476,   200,   233,   294,   202,   355,   359,   359,    95,    32,
     236,   288,   201,    27,   103,    14,     9,   200,    32,   202,
     291,   521,    31,    92,   176,   229,   514,   515,   516,   199,
       9,    50,    51,    56,    58,    70,   140,   141,   142,   143,
     144,   145,   187,   188,   199,   227,   387,   390,   393,   396,
     399,   402,   408,   423,   431,   432,   434,   435,   216,   519,
     233,   199,   244,   202,   201,   202,   201,   202,   201,   103,
     166,   202,   201,   112,   113,   166,   222,   223,   224,   225,
     226,   222,   216,   359,   306,   432,    83,     9,   200,   200,
     200,   200,   200,   200,   200,   201,    50,    51,   510,   512,
     513,   134,   281,   200,   200,   138,   204,     9,   438,     9,
     438,   204,   204,   204,   204,    83,    85,   216,   490,   216,
      70,   203,   203,   212,   214,    32,   135,   280,   182,    54,
     167,   182,   202,   417,   361,   138,     9,   438,   200,   162,
     200,   521,   521,    14,   372,   300,   231,   196,     9,   439,
      87,   521,   522,   458,   458,   203,     9,   438,   184,   468,
      83,    84,   302,   359,   200,     9,   439,    14,     9,   200,
       9,   200,   200,   200,   200,    14,   200,   203,   234,   235,
     364,   259,   134,   279,   199,   499,   204,   203,   359,    32,
     204,   204,   138,   203,     9,   438,   359,   500,   199,   269,
     264,   274,    14,   494,   267,   256,    71,   468,   359,   500,
     200,   200,   204,   203,    50,    51,    70,    78,    79,    80,
      92,   140,   141,   142,   143,   144,   145,   158,   187,   188,
     216,   388,   391,   394,   397,   400,   403,   423,   434,   441,
     443,   444,   448,   451,   216,   468,   468,   138,   279,   458,
     463,   458,   200,   359,   295,    75,    76,   296,   231,   358,
     233,   349,   103,    38,   285,   379,   468,   432,   216,    32,
     236,   289,   201,   292,   201,   292,     9,   438,    92,   229,
     138,   162,     9,   438,   200,    87,   503,   504,   521,   522,
     501,   432,   432,   432,   432,   432,   437,   440,   199,    70,
      70,    70,    70,    70,   199,   199,   432,   162,   202,    10,
      11,    12,    31,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    69,   162,   500,   203,   423,
     202,   253,   221,   221,   221,   216,   221,   222,   222,   226,
       9,   439,   203,   203,    14,   468,   201,   184,     9,   438,
     216,   282,   423,   202,   359,   359,   204,   359,   203,   212,
     521,   282,   202,   416,   176,    14,   200,   359,   373,   476,
     201,   521,   196,   203,   232,   235,   245,    32,   508,   457,
     522,    38,    83,   176,   459,   460,   462,   459,   460,   462,
     521,    70,    38,    87,   176,   359,   432,   248,   355,   356,
     468,   249,   248,   249,   249,   203,   235,   300,   199,   423,
     280,   365,   260,   359,   359,   359,   203,   199,   303,   281,
      32,   280,   521,    14,   279,   499,   427,   203,   199,    78,
      79,    80,   216,   442,   442,   444,   446,   447,    52,   199,
      70,    70,    70,    70,    70,    91,   159,   199,   199,   162,
       9,   438,   200,   452,    38,   359,   280,   203,    75,    76,
     297,   358,   236,   203,   201,    96,   201,   285,   468,   138,
     284,    14,   233,   292,   106,   107,   108,   292,   203,   521,
     184,   138,   162,   521,   216,   176,   514,   521,     9,   438,
     200,   176,   438,   138,   204,     9,   438,   437,   382,   383,
     432,   405,   432,   433,   405,   382,   405,   373,   375,   377,
     405,   200,   132,   217,   432,   486,   487,   432,   432,   432,
      32,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   519,    83,   254,   203,   203,
     203,   203,   225,   201,   432,   513,   103,   104,   509,   511,
       9,   311,   138,   204,   203,   494,   311,   168,   181,   202,
     412,   419,   359,   168,   202,   418,   138,   201,   508,   199,
     248,   346,   360,   469,   472,   521,   372,    87,   522,    83,
      83,   176,    14,    83,   500,   500,   479,   468,   302,   359,
     200,   300,   202,   300,   199,   138,   199,   303,   200,   202,
     521,   202,   201,   521,   280,   261,   430,   303,   138,   204,
       9,   438,   443,   446,   384,   385,   444,   406,   444,   445,
     406,   384,   406,   159,   373,   449,   450,   406,    81,   444,
     468,   202,   358,    32,    77,   236,   201,   349,   284,   285,
     200,   432,   102,   106,   201,   359,    32,   201,   293,   203,
     184,   521,   216,   138,    87,   521,   522,    32,   200,   432,
     432,   200,   204,     9,   438,   138,   204,     9,   438,   204,
     204,   204,   138,     9,   438,   200,   200,   138,   203,     9,
     438,   432,    32,   200,   233,   201,   201,   201,   201,   216,
     521,   521,   509,   423,     6,   113,   119,   122,   127,   169,
     170,   172,   203,   312,   335,   336,   337,   342,   343,   344,
     345,   456,   359,   203,   202,   203,    54,   359,   203,   359,
     359,   372,   468,   201,   202,   522,    38,    83,   176,    14,
      83,   359,   199,   199,   204,   508,   200,   311,   200,   300,
     359,   303,   200,   311,   494,   311,   201,   202,   199,   200,
     444,   444,   200,   204,     9,   438,   138,   204,     9,   438,
     204,   204,   204,   138,   200,     9,   438,   200,   311,    32,
     233,   201,   200,   200,   241,   201,   201,   293,   233,   138,
     521,   521,   176,   521,   138,   432,   432,   432,   432,   373,
     432,   432,   432,   202,   203,   511,   134,   135,   189,   217,
     497,   521,   283,   423,   113,   345,    31,   127,   140,   146,
     167,   173,   319,   320,   321,   322,   423,   171,   327,   328,
     130,   199,   216,   329,   330,    83,   341,   257,   521,     9,
     201,     9,   201,   201,   494,   336,   337,   308,   167,   414,
     203,   203,   359,    83,    83,   176,    14,    83,   359,   303,
     303,   119,   362,   508,   203,   508,   200,   200,   203,   202,
     203,   311,   300,   138,   444,   444,   444,   444,   373,   203,
     233,   239,   242,    32,   236,   287,   233,   521,   200,   432,
     138,   138,   138,   233,   423,   423,   499,    14,   217,     9,
     201,   202,   497,   494,   322,   183,   202,     9,   201,     3,
       4,     5,     6,     7,    10,    11,    12,    13,    27,    28,
      29,    57,    71,    72,    73,    74,    75,    76,    77,    87,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   139,   140,   147,   148,   149,   150,   151,   163,
     164,   165,   175,   177,   178,   180,   187,   189,   191,   193,
     194,   216,   420,   421,     9,   201,   167,   171,   216,   330,
     331,   332,   201,    14,     9,   201,   256,   341,   497,   497,
      14,   257,   341,   521,   203,   309,   310,   497,    14,    83,
     359,   200,   200,   199,   508,   198,   505,   362,   508,   308,
     203,   200,   444,   138,   138,    32,   236,   286,   287,   233,
     432,   432,   432,   203,   201,   201,   432,   423,   315,   521,
     323,   324,   431,   320,    14,    32,    51,   325,   328,     9,
      36,   200,    31,    50,    53,   432,    83,   218,   498,   201,
      14,   521,   256,   201,   341,   201,    14,   359,    38,    83,
     411,   202,   506,   507,   521,   201,   202,   333,   508,   505,
     203,   508,   444,   444,   233,   100,   252,   203,   216,   229,
     316,   317,   318,     9,   438,     9,   438,   203,   432,   421,
     421,    68,   326,   331,   331,    31,    50,    53,    14,   183,
     199,   432,   498,   201,   432,    83,     9,   439,   231,     9,
     439,    14,   509,   231,   202,   333,   333,    98,   201,   116,
     243,   162,   103,   521,   184,   431,   174,   432,   510,   313,
     199,    38,    83,   200,   203,   507,   521,   203,   231,   201,
     199,   180,   255,   216,   336,   337,   184,   184,   298,   299,
     457,   314,    83,   203,   423,   253,   177,   216,   201,   200,
       9,   439,    87,   124,   125,   126,   339,   340,   298,    83,
     283,   201,   508,   457,   522,   522,   200,   200,   201,   505,
      87,   339,    83,    38,    83,   176,   508,   202,   201,   202,
     334,   522,   522,    83,   176,    14,    83,   505,   233,   231,
      83,    38,    83,   176,    14,    83,   359,   334,   203,   203,
      83,   176,    14,    83,   359,    14,    83,   359,   359
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   209,   211,   210,   212,   212,   213,   213,   213,   213,
     213,   213,   213,   213,   214,   213,   215,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   218,
     218,   219,   219,   220,   220,   221,   222,   222,   222,   222,
     223,   223,   224,   225,   225,   225,   226,   226,   227,   227,
     227,   228,   229,   230,   230,   231,   231,   232,   232,   233,
     233,   234,   234,   235,   235,   235,   235,   236,   236,   236,
     237,   236,   238,   236,   239,   236,   240,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   241,   236,   242,   236,   236,   243,   236,
     244,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   245,   246,   246,   247,   247,   248,   248,
     248,   249,   249,   251,   250,   252,   252,   254,   253,   255,
     255,   256,   256,   257,   259,   258,   260,   258,   261,   258,
     263,   262,   264,   262,   266,   265,   267,   265,   268,   265,
     269,   265,   271,   270,   273,   272,   274,   272,   275,   275,
     276,   277,   278,   278,   278,   278,   278,   279,   279,   280,
     280,   281,   281,   282,   282,   283,   283,   284,   284,   285,
     285,   285,   286,   286,   287,   287,   288,   288,   289,   289,
     290,   290,   291,   291,   291,   291,   292,   292,   292,   293,
     293,   294,   294,   295,   295,   296,   296,   297,   297,   298,
     298,   298,   298,   298,   298,   298,   298,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   300,   300,   300,
     300,   300,   300,   300,   300,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   302,   302,   302,   303,   303,
     304,   304,   304,   304,   304,   304,   304,   304,   305,   305,
     306,   306,   306,   307,   307,   307,   307,   308,   308,   309,
     310,   311,   311,   312,   312,   312,   312,   312,   312,   312,
     313,   312,   314,   312,   312,   312,   312,   312,   312,   312,
     312,   315,   315,   315,   316,   317,   317,   318,   318,   319,
     319,   320,   320,   321,   321,   322,   322,   322,   322,   322,
     322,   322,   323,   323,   324,   325,   325,   326,   326,   327,
     327,   328,   329,   329,   329,   330,   330,   330,   330,   331,
     331,   331,   331,   331,   331,   331,   332,   332,   332,   333,
     333,   334,   334,   335,   335,   336,   336,   337,   337,   338,
     338,   338,   338,   338,   338,   338,   339,   339,   340,   340,
     340,   341,   341,   341,   341,   342,   342,   343,   343,   344,
     344,   345,   346,   347,   347,   347,   347,   347,   347,   348,
     348,   349,   349,   350,   350,   350,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   359,   359,   359,   359,
     360,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   362,
     362,   364,   363,   365,   363,   367,   366,   368,   366,   369,
     366,   370,   366,   371,   366,   372,   372,   372,   373,   373,
     374,   374,   375,   375,   376,   376,   377,   377,   378,   379,
     379,   379,   380,   380,   381,   381,   382,   382,   383,   383,
     384,   384,   385,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   404,   405,   405,   406,   406,   407,   408,
     409,   409,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   411,   411,   411,   411,   412,   413,
     413,   414,   414,   415,   415,   415,   416,   416,   417,   418,
     418,   419,   419,   419,   420,   420,   420,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     422,   423,   423,   424,   424,   424,   424,   424,   425,   425,
     426,   426,   426,   426,   427,   427,   427,   428,   428,   428,
     429,   429,   429,   430,   430,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   433,   433,   434,   435,
     435,   436,   436,   436,   436,   436,   436,   436,   437,   437,
     438,   438,   439,   439,   440,   440,   440,   440,   441,   441,
     441,   441,   441,   442,   442,   442,   442,   443,   443,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   445,   445,   446,   446,   447,
     447,   447,   447,   448,   448,   449,   449,   450,   450,   451,
     451,   452,   452,   453,   453,   455,   454,   456,   457,   457,
     458,   458,   459,   459,   459,   460,   460,   461,   461,   462,
     462,   463,   463,   464,   464,   464,   465,   465,   466,   466,
     467,   467,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   469,   470,   470,   470,   470,   470,   470,
     470,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   472,   473,   473,   474,   474,   474,   475,   475,
     475,   476,   476,   477,   477,   477,   478,   478,   478,   479,
     479,   480,   480,   481,   481,   481,   481,   481,   481,   482,
     482,   482,   482,   482,   483,   483,   483,   483,   483,   483,
     483,   483,   483,   483,   484,   484,   485,   485,   485,   485,
     486,   486,   487,   487,   487,   487,   488,   488,   488,   488,
     489,   489,   489,   489,   489,   489,   490,   490,   490,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     492,   492,   493,   493,   494,   494,   495,   495,   495,   495,
     496,   496,   497,   497,   498,   498,   499,   499,   500,   500,
     501,   501,   502,   503,   503,   503,   503,   503,   503,   504,
     504,   504,   504,   505,   505,   506,   506,   507,   507,   508,
     508,   509,   509,   510,   511,   511,   512,   512,   512,   512,
     513,   513,   513,   514,   514,   514,   514,   515,   515,   516,
     516,   516,   516,   517,   518,   519,   519,   520,   520,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     522,   522
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     1,     1,     1,     1,
       1,     1,     4,     3,     0,     6,     0,     5,     3,     4,
       4,     4,     4,     6,     7,     7,     7,     7,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     1,     2,     1,     2,     3,     4,
       3,     1,     2,     1,     2,     2,     1,     3,     1,     3,
       2,     2,     2,     5,     4,     2,     0,     1,     3,     2,
       0,     2,     1,     1,     1,     1,     1,     3,     5,     8,
       0,     4,     0,     6,     0,    10,     0,     4,     2,     3,
       2,     3,     2,     3,     3,     3,     3,     3,     3,     5,
       1,     1,     1,     0,     9,     0,    10,     5,     0,    13,
       0,     5,     3,     3,     3,     3,     5,     5,     5,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     2,     2,
       3,     2,     2,     2,     1,     0,     3,     3,     1,     1,
       1,     3,     2,     0,     4,     9,     0,     0,     4,     2,
       0,     1,     0,     1,     0,    10,     0,    11,     0,    11,
       0,     9,     0,    10,     0,     8,     0,     9,     0,     7,
       0,     8,     0,     8,     0,     7,     0,     8,     1,     1,
       1,     1,     1,     2,     3,     3,     2,     2,     0,     2,
       0,     2,     0,     1,     3,     1,     3,     2,     0,     1,
       2,     1,     1,     4,     1,     4,     1,     4,     1,     4,
       3,     5,     3,     4,     4,     5,     5,     4,     0,     1,
       1,     4,     0,     5,     0,     2,     0,     3,     0,     7,
       8,     6,     2,     5,     6,     4,     0,     4,     4,     5,
       7,     6,     6,     6,     7,     9,     8,     6,     7,     5,
       2,     4,     5,     3,     0,     3,     4,     4,     6,     5,
       5,     6,     6,     8,     7,     4,     1,     1,     2,     0,
       1,     2,     2,     2,     3,     4,     4,     4,     3,     1,
       1,     2,     4,     3,     5,     1,     3,     2,     0,     2,
       3,     2,     0,     3,     4,     4,     5,     2,     2,     2,
       0,    11,     0,    12,     3,     3,     3,     4,     4,     3,
       5,     2,     2,     0,     6,     5,     4,     3,     1,     1,
       3,     4,     1,     2,     1,     1,     5,     6,     1,     1,
       4,     1,     1,     3,     2,     2,     0,     2,     0,     1,
       3,     1,     1,     1,     1,     3,     4,     4,     4,     1,
       1,     2,     2,     2,     3,     3,     1,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     3,     5,     1,     3,     5,     4,     3,     3,     3,
       4,     3,     3,     3,     3,     2,     2,     1,     1,     3,
       1,     1,     0,     1,     2,     4,     3,     3,     3,     2,
       3,     2,     3,     3,     3,     1,     1,     1,     1,     1,
       3,     3,     3,     4,     6,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     5,     4,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     5,
       0,     0,    12,     0,    13,     0,     4,     0,     7,     0,
       5,     0,     3,     0,     6,     2,     2,     4,     1,     1,
       5,     3,     5,     3,     2,     0,     2,     0,     4,     4,
       3,     4,     2,     0,     5,     3,     2,     0,     5,     3,
       2,     0,     5,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     2,     0,     2,     0,     2,     0,     4,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     4,     1,     2,     4,     2,
       6,     0,     1,     0,     5,     4,     2,     0,     1,     1,
       3,     1,     3,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     2,     1,     0,
       0,     1,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     4,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     4,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     3,     3,     3,     2,     0,
       1,     0,     1,     0,     5,     3,     3,     1,     1,     1,
       1,     3,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     2,     2,     4,     3,     4,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     0,     5,
       3,     3,     1,     3,     1,     2,     0,     5,     3,     2,
       0,     3,     0,     4,     2,     0,     3,     3,     1,     0,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     3,     3,     2,     2,     2,     2,     4,     5,     5,
       5,     5,     1,     1,     1,     1,     1,     1,     3,     3,
       4,     4,     3,     3,     1,     1,     1,     1,     3,     1,
       4,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       4,     4,     3,     1,     1,     7,     9,     9,     7,     6,
       8,     1,     2,     4,     4,     1,     1,     1,     4,     1,
       0,     1,     2,     1,     1,     1,     3,     3,     3,     0,
       1,     1,     3,     3,     4,     3,     2,     1,     5,     6,
       4,     3,     2,     0,     2,     0,     5,     3,     3,     1,
       2,     0,     5,     3,     3,     1,     2,     2,     1,     2,
       1,     4,     3,     3,     6,     3,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     2,     2,     4,     2,     2,
       1,     3,     3,     3,     0,     2,     5,     6,     6,     7,
       1,     2,     1,     2,     1,     4,     1,     4,     3,     0,
       1,     3,     2,     1,     2,     4,     3,     3,     1,     4,
       2,     2,     0,     0,     3,     1,     3,     3,     2,     0,
       2,     2,     2,     2,     1,     2,     4,     2,     5,     3,
       1,     1,     0,     3,     4,     5,     6,     3,     1,     3,
       2,     1,     0,     4,     1,     3,     2,     4,     5,     2,
       2,     1,     1,     1,     1,     3,     2,     1,     8,     6,
       1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, _p, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).line0   = YYRHSLOC (Rhs, 1).line0;        \
          (Current).char0 = YYRHSLOC (Rhs, 1).char0;      \
          (Current).line1    = YYRHSLOC (Rhs, N).line1;         \
          (Current).char1  = YYRHSLOC (Rhs, N).char1;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).line0   = (Current).line1   =              \
            YYRHSLOC (Rhs, 0).line1;                                \
          (Current).char0 = (Current).char1 =              \
            YYRHSLOC (Rhs, 0).char1;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->char1 ? yylocp->char1 - 1 : 0;
  if (0 <= yylocp->line0)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->line0);
      if (0 <= yylocp->char0)
        res += YYFPRINTF (yyo, ".%d", yylocp->char0);
    }
  if (0 <= yylocp->line1)
    {
      if (yylocp->line0 < yylocp->line1)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->line1);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->char0 < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, _p); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (_p);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, _p);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, HPHP::HPHP_PARSER_NS::Parser *_p)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , _p);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, _p); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (_p);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (HPHP::HPHP_PARSER_NS::Parser *_p)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        struct yyalloc *yyptr =
          (struct yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
      memset(yyptr, 0, YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE_RESET (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, _p);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 760 "hphp.y" /* yacc.c:1646  */
    { _p->onNewLabelScope(true);
                                         _p->initParseTree();}
#line 7317 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 763 "hphp.y" /* yacc.c:1646  */
    { _p->popLabelInfo();
                                         _p->finiParseTree();
                                         _p->onCompleteLabelScope(true);}
#line 7325 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 770 "hphp.y" /* yacc.c:1646  */
    { _p->addTopStatement((yyvsp[0]));}
#line 7331 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 771 "hphp.y" /* yacc.c:1646  */
    { }
#line 7337 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 774 "hphp.y" /* yacc.c:1646  */
    { _p->nns((yyvsp[0]).num(), (yyvsp[0]).text()); (yyval) = (yyvsp[0]);}
#line 7343 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 775 "hphp.y" /* yacc.c:1646  */
    { _p->nns(); (yyval) = (yyvsp[0]);}
#line 7349 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 776 "hphp.y" /* yacc.c:1646  */
    { _p->nns(); (yyval) = (yyvsp[0]);}
#line 7355 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 777 "hphp.y" /* yacc.c:1646  */
    { _p->nns(); (yyval) = (yyvsp[0]);}
#line 7361 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 778 "hphp.y" /* yacc.c:1646  */
    { _p->nns(); (yyval) = (yyvsp[0]);}
#line 7367 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 779 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7373 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 780 "hphp.y" /* yacc.c:1646  */
    { _p->onHaltCompiler();
                                         _p->finiParseTree();
                                         YYACCEPT;}
#line 7381 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 783 "hphp.y" /* yacc.c:1646  */
    { _p->onNamespaceStart((yyvsp[-1]).text(), true);
                                         (yyval).reset();}
#line 7388 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 785 "hphp.y" /* yacc.c:1646  */
    { _p->onNamespaceStart((yyvsp[-1]).text());}
#line 7394 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 786 "hphp.y" /* yacc.c:1646  */
    { _p->onNamespaceEnd(); (yyval) = (yyvsp[-1]);}
#line 7400 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 787 "hphp.y" /* yacc.c:1646  */
    { _p->onNamespaceStart("");}
#line 7406 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 788 "hphp.y" /* yacc.c:1646  */
    { _p->onNamespaceEnd(); (yyval) = (yyvsp[-1]);}
#line 7412 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 789 "hphp.y" /* yacc.c:1646  */
    { _p->onUse((yyvsp[-1]),
                                           &Parser::useClassAndNamespace);
                                         _p->nns(T_USE); (yyval).reset();}
#line 7420 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 793 "hphp.y" /* yacc.c:1646  */
    {
                                         only_in_hh_syntax(_p);
                                         _p->onUse((yyvsp[-1]), &Parser::useNamespace);
                                         _p->nns(T_USE); (yyval).reset();}
#line 7429 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 798 "hphp.y" /* yacc.c:1646  */
    {
                                         only_in_hh_syntax(_p);
                                         _p->onUse((yyvsp[-1]), &Parser::useClass);
                                         _p->nns(T_USE); (yyval).reset();}
#line 7438 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 803 "hphp.y" /* yacc.c:1646  */
    { _p->onUse((yyvsp[-1]), &Parser::useFunction);
                                         _p->nns(T_USE); (yyval).reset();}
#line 7445 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 806 "hphp.y" /* yacc.c:1646  */
    { _p->onUse((yyvsp[-1]), &Parser::useConst);
                                         _p->nns(T_USE); (yyval).reset();}
#line 7452 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 809 "hphp.y" /* yacc.c:1646  */
    { _p->onGroupUse((yyvsp[-4]).text(), (yyvsp[-2]),
                                           nullptr);
                                         _p->nns(T_USE); (yyval).reset();}
#line 7460 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 813 "hphp.y" /* yacc.c:1646  */
    { _p->onGroupUse((yyvsp[-4]).text(), (yyvsp[-2]),
                                           &Parser::useFunction);
                                         _p->nns(T_USE); (yyval).reset();}
#line 7468 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 817 "hphp.y" /* yacc.c:1646  */
    { _p->onGroupUse((yyvsp[-4]).text(), (yyvsp[-2]),
                                           &Parser::useConst);
                                         _p->nns(T_USE); (yyval).reset();}
#line 7476 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 821 "hphp.y" /* yacc.c:1646  */
    { _p->onGroupUse((yyvsp[-4]).text(), (yyvsp[-2]),
                                           &Parser::useNamespace);
                                         _p->nns(T_USE); (yyval).reset();}
#line 7484 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 825 "hphp.y" /* yacc.c:1646  */
    { _p->onGroupUse((yyvsp[-4]).text(), (yyvsp[-2]),
                                           &Parser::useClass);
                                         _p->nns(T_USE); (yyval).reset();}
#line 7492 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 828 "hphp.y" /* yacc.c:1646  */
    { _p->nns();
                                         _p->finishStatement((yyval), (yyvsp[-1])); (yyval) = 1;}
#line 7499 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 833 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7505 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 834 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7511 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 835 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7517 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 836 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7523 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 837 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7529 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 838 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7535 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 839 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7541 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 840 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7547 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 841 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7553 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 842 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7559 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 843 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7565 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 844 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7571 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 845 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7577 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 927 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 7583 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 929 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 7589 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 934 "hphp.y" /* yacc.c:1646  */
    { _p->addStatement((yyval),(yyvsp[-2]),(yyvsp[0]));}
#line 7595 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 935 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();
                                         _p->addStatement((yyval),(yyval),(yyvsp[0]));}
#line 7602 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 941 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 7608 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 945 "hphp.y" /* yacc.c:1646  */
    { _p->onUseDeclaration((yyval), (yyvsp[0]).text(),"");}
#line 7614 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 946 "hphp.y" /* yacc.c:1646  */
    { _p->onUseDeclaration((yyval), (yyvsp[0]).text(),"");}
#line 7620 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 948 "hphp.y" /* yacc.c:1646  */
    { _p->onUseDeclaration((yyval), (yyvsp[-2]).text(),(yyvsp[0]).text());}
#line 7626 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 950 "hphp.y" /* yacc.c:1646  */
    { _p->onUseDeclaration((yyval), (yyvsp[-2]).text(),(yyvsp[0]).text());}
#line 7632 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 955 "hphp.y" /* yacc.c:1646  */
    { _p->addStatement((yyval),(yyvsp[-2]),(yyvsp[0]));}
#line 7638 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 956 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();
                                         _p->addStatement((yyval),(yyval),(yyvsp[0]));}
#line 7645 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 962 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 7651 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 966 "hphp.y" /* yacc.c:1646  */
    { _p->onMixedUseDeclaration((yyval), (yyvsp[0]),
                                           &Parser::useClassAndNamespace);}
#line 7658 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 968 "hphp.y" /* yacc.c:1646  */
    { _p->onMixedUseDeclaration((yyval), (yyvsp[0]),
                                           &Parser::useFunction);}
#line 7665 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 970 "hphp.y" /* yacc.c:1646  */
    { _p->onMixedUseDeclaration((yyval), (yyvsp[0]),
                                           &Parser::useConst);}
#line 7672 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 975 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7678 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 977 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]); (yyval) = (yyvsp[-2]).num() | 2;}
#line 7684 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 980 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = (yyval).num() | 1;}
#line 7690 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 982 "hphp.y" /* yacc.c:1646  */
    { (yyval).set((yyvsp[0]).num() | 2, _p->nsDecl((yyvsp[0]).text()));}
#line 7696 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 983 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = (yyval).num() | 2;}
#line 7702 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 988 "hphp.y" /* yacc.c:1646  */
    { if ((yyvsp[-1]).num() & 1) {
                                           (yyvsp[-1]).setText(_p->resolve((yyvsp[-1]).text(),0));
                                         }
                                         (yyval) = (yyvsp[-1]);}
#line 7711 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 995 "hphp.y" /* yacc.c:1646  */
    { if ((yyvsp[-1]).num() & 1) {
                                           (yyvsp[-1]).setText(_p->resolve((yyvsp[-1]).text(),1));
                                         }
                                         _p->onTypeAnnotation((yyval), (yyvsp[-1]), (yyvsp[0]));}
#line 7720 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1003 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[-2]).setText(_p->nsDecl((yyvsp[-2]).text()));
                                         _p->onConst((yyval),(yyvsp[-2]),(yyvsp[0]));}
#line 7727 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1006 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[-2]).setText(_p->nsDecl((yyvsp[-2]).text()));
                                         _p->onConst((yyval),(yyvsp[-2]),(yyvsp[0]));}
#line 7734 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1012 "hphp.y" /* yacc.c:1646  */
    { _p->addStatement((yyval),(yyvsp[-1]),(yyvsp[0])); }
#line 7740 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1013 "hphp.y" /* yacc.c:1646  */
    { _p->onStatementListStart((yyval)); }
#line 7746 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1018 "hphp.y" /* yacc.c:1646  */
    {
                                         _p->onUsing((yyval), (yyvsp[-2]), true, (yyvsp[-1]), nullptr);
                                       }
#line 7754 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1025 "hphp.y" /* yacc.c:1646  */
    { _p->addStatement((yyval),(yyvsp[-1]),(yyvsp[0]));}
#line 7760 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1026 "hphp.y" /* yacc.c:1646  */
    { _p->onStatementListStart((yyval));}
#line 7766 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1031 "hphp.y" /* yacc.c:1646  */
    { _p->addStatement((yyval), (yyvsp[-1]), (yyvsp[0])); }
#line 7772 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1032 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();
                                         _p->addStatement((yyval), (yyval), (yyvsp[0])); }
#line 7779 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1037 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7785 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1038 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7791 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1039 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7797 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1040 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 7803 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1043 "hphp.y" /* yacc.c:1646  */
    { _p->onBlock((yyval), (yyvsp[-1]));}
#line 7809 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1047 "hphp.y" /* yacc.c:1646  */
    { _p->onIf((yyval),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 7815 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1052 "hphp.y" /* yacc.c:1646  */
    { _p->onIf((yyval),(yyvsp[-6]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]));}
#line 7821 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1053 "hphp.y" /* yacc.c:1646  */
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope(LS::LoopSwitch);}
#line 7828 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1055 "hphp.y" /* yacc.c:1646  */
    { _p->popLabelScope();
                                         _p->onWhile((yyval),(yyvsp[-2]),(yyvsp[0]));
                                         _p->onCompleteLabelScope(false);}
#line 7836 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1059 "hphp.y" /* yacc.c:1646  */
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope(LS::LoopSwitch);}
#line 7843 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1062 "hphp.y" /* yacc.c:1646  */
    { _p->popLabelScope();
                                         _p->onDo((yyval),(yyvsp[-3]),(yyvsp[-1]));
                                         _p->onCompleteLabelScope(false);}
#line 7851 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1066 "hphp.y" /* yacc.c:1646  */
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope(LS::LoopSwitch);}
#line 7858 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1068 "hphp.y" /* yacc.c:1646  */
    { _p->popLabelScope();
                                         _p->onFor((yyval),(yyvsp[-7]),(yyvsp[-5]),(yyvsp[-3]),(yyvsp[0]));
                                         _p->onCompleteLabelScope(false);}
#line 7866 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1071 "hphp.y" /* yacc.c:1646  */
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope(LS::LoopSwitch);}
#line 7873 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1073 "hphp.y" /* yacc.c:1646  */
    { _p->popLabelScope();
                                         _p->onSwitch((yyval),(yyvsp[-2]),(yyvsp[0]));
                                         _p->onCompleteLabelScope(false);}
#line 7881 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1076 "hphp.y" /* yacc.c:1646  */
    { _p->onBreakContinue((yyval), true, NULL);}
#line 7887 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1077 "hphp.y" /* yacc.c:1646  */
    { _p->onBreakContinue((yyval), true, &(yyvsp[-1]));}
#line 7893 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1078 "hphp.y" /* yacc.c:1646  */
    { _p->onBreakContinue((yyval), false, NULL);}
#line 7899 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1079 "hphp.y" /* yacc.c:1646  */
    { _p->onBreakContinue((yyval), false, &(yyvsp[-1]));}
#line 7905 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1080 "hphp.y" /* yacc.c:1646  */
    { _p->onReturn((yyval), NULL);}
#line 7911 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1081 "hphp.y" /* yacc.c:1646  */
    { _p->onReturn((yyval), &(yyvsp[-1]));}
#line 7917 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1082 "hphp.y" /* yacc.c:1646  */
    { _p->onYieldBreak((yyval));}
#line 7923 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1083 "hphp.y" /* yacc.c:1646  */
    { _p->onGlobal((yyval), (yyvsp[-1]));}
#line 7929 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1084 "hphp.y" /* yacc.c:1646  */
    { _p->onStatic((yyval), (yyvsp[-1]));}
#line 7935 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1085 "hphp.y" /* yacc.c:1646  */
    { _p->onEcho((yyval), (yyvsp[-1]), 0);}
#line 7941 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1086 "hphp.y" /* yacc.c:1646  */
    { _p->onEcho((yyval), (yyvsp[-1]), 0);}
#line 7947 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1087 "hphp.y" /* yacc.c:1646  */
    { _p->onUnset((yyval), (yyvsp[-2]));}
#line 7953 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1088 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); (yyval) = ';';}
#line 7959 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1089 "hphp.y" /* yacc.c:1646  */
    { _p->onEcho((yyval), (yyvsp[0]), 1);}
#line 7965 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1090 "hphp.y" /* yacc.c:1646  */
    { _p->onHashBang((yyval), (yyvsp[0]));
                                         (yyval) = T_HASHBANG;}
#line 7972 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1094 "hphp.y" /* yacc.c:1646  */
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope(LS::LoopSwitch);}
#line 7979 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1096 "hphp.y" /* yacc.c:1646  */
    { _p->popLabelScope();
                                         _p->onForEach((yyval),(yyvsp[-6]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[0]), false);
                                         _p->onCompleteLabelScope(false);}
#line 7987 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1101 "hphp.y" /* yacc.c:1646  */
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope(LS::LoopSwitch);}
#line 7994 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1103 "hphp.y" /* yacc.c:1646  */
    { _p->popLabelScope();
                                         _p->onForEach((yyval),(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[0]), true);
                                         _p->onCompleteLabelScope(false);}
#line 8002 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1107 "hphp.y" /* yacc.c:1646  */
    { _p->onDeclare((yyvsp[-2]), (yyvsp[0]));
                                         (yyval) = (yyvsp[-2]);
                                         (yyval) = T_DECLARE;}
#line 8010 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1116 "hphp.y" /* yacc.c:1646  */
    { _p->onCompleteLabelScope(false);}
#line 8016 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1117 "hphp.y" /* yacc.c:1646  */
    { _p->onTry((yyval),(yyvsp[-11]),(yyvsp[-8]),(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 8022 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1120 "hphp.y" /* yacc.c:1646  */
    { _p->onCompleteLabelScope(false); }
#line 8028 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1121 "hphp.y" /* yacc.c:1646  */
    { _p->onTry((yyval), (yyvsp[-3]), (yyvsp[0]));}
#line 8034 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1123 "hphp.y" /* yacc.c:1646  */
    { _p->onUsing((yyval), (yyvsp[-2]), false, (yyvsp[-1]), &(yyvsp[0]));
                                         _p->onCompleteLabelScope(false);
                                         _p->popLabelScope(); }
#line 8042 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1127 "hphp.y" /* yacc.c:1646  */
    { _p->onUsing((yyval), (yyvsp[-2]), false, (yyvsp[-1]), &(yyvsp[0]));
                                         _p->onCompleteLabelScope(false);
                                         _p->popLabelScope(); }
#line 8050 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1131 "hphp.y" /* yacc.c:1646  */
    { _p->onUsing((yyval), (yyvsp[-2]), false, (yyvsp[-1]), &(yyvsp[0]));
                                         _p->onCompleteLabelScope(false);
                                         _p->popLabelScope(); }
#line 8058 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1135 "hphp.y" /* yacc.c:1646  */
    { _p->onUsing((yyval), (yyvsp[-2]), false, (yyvsp[-1]), &(yyvsp[0]));
                                         _p->onCompleteLabelScope(false);
                                         _p->popLabelScope(); }
#line 8066 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1139 "hphp.y" /* yacc.c:1646  */
    { _p->onUsing((yyval), (yyvsp[-4]), false, (yyvsp[-2]), &(yyvsp[0]));
                                         _p->onCompleteLabelScope(false);
                                         _p->popLabelScope(); }
#line 8074 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1143 "hphp.y" /* yacc.c:1646  */
    { _p->onUsing((yyval), (yyvsp[-4]), false, (yyvsp[-2]), &(yyvsp[0]));
                                         _p->onCompleteLabelScope(false);
                                         _p->popLabelScope(); }
#line 8082 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1148 "hphp.y" /* yacc.c:1646  */
    { _p->onUsing((yyval), (yyvsp[-4]), false, (yyvsp[-2]), &(yyvsp[0]));
                                         _p->onCompleteLabelScope(false);
                                         _p->popLabelScope(); }
#line 8090 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1151 "hphp.y" /* yacc.c:1646  */
    { _p->onThrow((yyval), (yyvsp[-1]));}
#line 8096 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1152 "hphp.y" /* yacc.c:1646  */
    { _p->onGoto((yyval), (yyvsp[-1]), true);
                                         _p->addGoto((yyvsp[-1]).text(),
                                                     _p->getRange(),
                                                     &(yyval));}
#line 8105 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1156 "hphp.y" /* yacc.c:1646  */
    { _p->onExpStatement((yyval), (yyvsp[-1]));}
#line 8111 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1157 "hphp.y" /* yacc.c:1646  */
    { _p->onExpStatement((yyval), (yyvsp[-1]));}
#line 8117 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1158 "hphp.y" /* yacc.c:1646  */
    { _p->onExpStatement((yyval), (yyvsp[-1]));}
#line 8123 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1159 "hphp.y" /* yacc.c:1646  */
    { _p->onExpStatement((yyval), (yyvsp[-1]));}
#line 8129 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1160 "hphp.y" /* yacc.c:1646  */
    { _p->onExpStatement((yyval), (yyvsp[-1]));}
#line 8135 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1161 "hphp.y" /* yacc.c:1646  */
    { _p->onExpStatement((yyval), (yyvsp[-1]));}
#line 8141 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1162 "hphp.y" /* yacc.c:1646  */
    { _p->onReturn((yyval), &(yyvsp[-1]));}
#line 8147 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1163 "hphp.y" /* yacc.c:1646  */
    { _p->onExpStatement((yyval), (yyvsp[-1]));}
#line 8153 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1164 "hphp.y" /* yacc.c:1646  */
    { _p->onExpStatement((yyval), (yyvsp[-1]));}
#line 8159 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1165 "hphp.y" /* yacc.c:1646  */
    { _p->onReturn((yyval), &(yyvsp[-1])); }
#line 8165 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1166 "hphp.y" /* yacc.c:1646  */
    { _p->onExpStatement((yyval), (yyvsp[-1]));}
#line 8171 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1167 "hphp.y" /* yacc.c:1646  */
    { _p->onLabel((yyval), (yyvsp[-1]));
                                         _p->addLabel((yyvsp[-1]).text(),
                                                      _p->getRange(),
                                                      &(yyval));
                                         _p->onScopeLabel((yyval), (yyvsp[-1]));}
#line 8181 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1189 "hphp.y" /* yacc.c:1646  */
    { _p->pushLabelScope(LS::Using);
                                         _p->onNewLabelScope(false);
                                         (yyval) = (yyvsp[-1]); }
#line 8189 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1195 "hphp.y" /* yacc.c:1646  */
    { (yyval) = 1; }
#line 8195 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1196 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 8201 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1205 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval), nullptr, (yyvsp[-2]));
                                         _p->onExprListElem((yyval), &(yyval), (yyvsp[0])); }
#line 8208 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1207 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval), &(yyvsp[-2]), (yyvsp[0])); }
#line 8214 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1217 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 8220 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1218 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 8226 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1222 "hphp.y" /* yacc.c:1646  */
    { _p->onNewLabelScope(false); }
#line 8232 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1223 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 8238 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1232 "hphp.y" /* yacc.c:1646  */
    { _p->onCatch((yyval), (yyvsp[-8]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-1]));}
#line 8244 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1233 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8250 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1237 "hphp.y" /* yacc.c:1646  */
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope(LS::Finally);}
#line 8257 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1239 "hphp.y" /* yacc.c:1646  */
    { _p->onFinally((yyval), (yyvsp[-1]));
                                         _p->popLabelScope();
                                         _p->onCompleteLabelScope(false);}
#line 8265 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1245 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 8271 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1246 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8277 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1250 "hphp.y" /* yacc.c:1646  */
    { (yyval) = 1;}
#line 8283 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1251 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8289 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1255 "hphp.y" /* yacc.c:1646  */
    { _p->pushFuncLocation(); }
#line 8295 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1261 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).setText(_p->nsDecl((yyvsp[0]).text()));
                                         _p->onNewLabelScope(true);
                                         _p->onFunctionStart((yyvsp[0]));
                                         _p->pushLabelInfo();}
#line 8304 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1268 "hphp.y" /* yacc.c:1646  */
    { _p->onFunction((yyval),nullptr,(yyvsp[-2]),(yyvsp[-8]),(yyvsp[-7]),(yyvsp[-4]),(yyvsp[0]),nullptr);
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->popTypeScope();
                                         _p->onCompleteLabelScope(true);}
#line 8314 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1276 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).setText(_p->nsDecl((yyvsp[0]).text()));
                                         _p->onNewLabelScope(true);
                                         _p->onFunctionStart((yyvsp[0]));
                                         _p->pushLabelInfo();}
#line 8323 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1283 "hphp.y" /* yacc.c:1646  */
    { _p->onFunction((yyval),&(yyvsp[-10]),(yyvsp[-2]),(yyvsp[-8]),(yyvsp[-7]),(yyvsp[-4]),(yyvsp[0]),nullptr);
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->popTypeScope();
                                         _p->onCompleteLabelScope(true);}
#line 8333 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1291 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).setText(_p->nsDecl((yyvsp[0]).text()));
                                         _p->onNewLabelScope(true);
                                         _p->onFunctionStart((yyvsp[0]));
                                         _p->pushLabelInfo();}
#line 8342 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1297 "hphp.y" /* yacc.c:1646  */
    { _p->onFunction((yyval),&(yyvsp[-9]),(yyvsp[-1]),(yyvsp[-7]),(yyvsp[-6]),(yyvsp[-3]),(yyvsp[0]),&(yyvsp[-10]));
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->popTypeScope();
                                         _p->onCompleteLabelScope(true);}
#line 8352 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1306 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).setText(_p->nsClassDecl((yyvsp[0]).text()));
                                         _p->onClassStart(T_ENUM,(yyvsp[0]));}
#line 8359 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1310 "hphp.y" /* yacc.c:1646  */
    { _p->onEnum((yyval),(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-1]),0); }
#line 8365 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1314 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).setText(_p->nsClassDecl((yyvsp[0]).text()));
                                         _p->onClassStart(T_ENUM,(yyvsp[0]));}
#line 8372 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1318 "hphp.y" /* yacc.c:1646  */
    { _p->onEnum((yyval),(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-1]),&(yyvsp[-9])); }
#line 8378 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1324 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).setText(_p->nsClassDecl((yyvsp[0]).text()));
                                         _p->onClassStart((yyvsp[-1]).num(),(yyvsp[0]));}
#line 8385 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1327 "hphp.y" /* yacc.c:1646  */
    { Token stmts;
                                         if (_p->peekClass()) {
                                           xhp_collect_attributes(_p,stmts,(yyvsp[-1]));
                                         } else {
                                           stmts = (yyvsp[-1]);
                                         }
                                         _p->onClass((yyval),(yyvsp[-7]).num(),(yyvsp[-6]),(yyvsp[-4]),(yyvsp[-3]),
                                                     stmts,0,nullptr);
                                         if (_p->peekClass()) {
                                           _p->xhpResetAttributes();
                                         }
                                         _p->popClass();
                                         _p->popTypeScope();}
#line 8403 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1342 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).setText(_p->nsClassDecl((yyvsp[0]).text()));
                                         _p->onClassStart((yyvsp[-1]).num(),(yyvsp[0]));}
#line 8410 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1345 "hphp.y" /* yacc.c:1646  */
    { Token stmts;
                                         if (_p->peekClass()) {
                                           xhp_collect_attributes(_p,stmts,(yyvsp[-1]));
                                         } else {
                                           stmts = (yyvsp[-1]);
                                         }
                                         _p->onClass((yyval),(yyvsp[-7]).num(),(yyvsp[-6]),(yyvsp[-4]),(yyvsp[-3]),
                                                     stmts,&(yyvsp[-8]),nullptr);
                                         if (_p->peekClass()) {
                                           _p->xhpResetAttributes();
                                         }
                                         _p->popClass();
                                         _p->popTypeScope();}
#line 8428 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1359 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).setText(_p->nsClassDecl((yyvsp[0]).text()));
                                         _p->onClassStart(T_INTERFACE,(yyvsp[0]));}
#line 8435 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1362 "hphp.y" /* yacc.c:1646  */
    { _p->onInterface((yyval),(yyvsp[-5]),(yyvsp[-3]),(yyvsp[-1]),0);
                                         _p->popClass();
                                         _p->popTypeScope();}
#line 8443 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1367 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).setText(_p->nsClassDecl((yyvsp[0]).text()));
                                         _p->onClassStart(T_INTERFACE,(yyvsp[0]));}
#line 8450 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1370 "hphp.y" /* yacc.c:1646  */
    { _p->onInterface((yyval),(yyvsp[-5]),(yyvsp[-3]),(yyvsp[-1]),&(yyvsp[-7]));
                                         _p->popClass();
                                         _p->popTypeScope();}
#line 8458 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1376 "hphp.y" /* yacc.c:1646  */
    { _p->onClassExpressionStart(); }
#line 8464 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1379 "hphp.y" /* yacc.c:1646  */
    { _p->onClassExpression((yyval), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 8470 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1383 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).setText(_p->nsClassDecl((yyvsp[0]).text()));
                                         _p->onClassStart(T_TRAIT, (yyvsp[0]));}
#line 8477 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1386 "hphp.y" /* yacc.c:1646  */
    { Token t_ext;
                                         t_ext.reset();
                                         _p->onClass((yyval),T_TRAIT,(yyvsp[-5]),t_ext,(yyvsp[-3]),
                                                     (yyvsp[-1]), 0, nullptr);
                                         _p->popClass();
                                         _p->popTypeScope();}
#line 8488 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1394 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).setText(_p->nsClassDecl((yyvsp[0]).text()));
                                         _p->onClassStart(T_TRAIT, (yyvsp[0]));}
#line 8495 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1397 "hphp.y" /* yacc.c:1646  */
    { Token t_ext;
                                         t_ext.reset();
                                         _p->onClass((yyval),T_TRAIT,(yyvsp[-5]),t_ext,(yyvsp[-3]),
                                                     (yyvsp[-1]), &(yyvsp[-7]), nullptr);
                                         _p->popClass();
                                         _p->popTypeScope();}
#line 8506 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1405 "hphp.y" /* yacc.c:1646  */
    { _p->pushClass(false); (yyval) = (yyvsp[0]);}
#line 8512 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1406 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).xhpLabel(); _p->pushTypeScope();
                                            _p->pushClass(true); (yyval) = (yyvsp[0]);}
#line 8519 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1410 "hphp.y" /* yacc.c:1646  */
    { _p->pushClass(false); (yyval) = (yyvsp[0]);}
#line 8525 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1413 "hphp.y" /* yacc.c:1646  */
    { _p->pushClass(false); (yyval) = (yyvsp[0]);}
#line 8531 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1416 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_CLASS;}
#line 8537 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1417 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_ABSTRACT; }
#line 8543 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1418 "hphp.y" /* yacc.c:1646  */
    { only_in_hh_syntax(_p);
      /* hacky, but transforming to a single token is quite convenient */
      (yyval) = T_STATIC; }
#line 8551 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1421 "hphp.y" /* yacc.c:1646  */
    { only_in_hh_syntax(_p); (yyval) = T_STATIC; }
#line 8557 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1422 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_FINAL;}
#line 8563 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1426 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 8569 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1427 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8575 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1430 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 8581 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1431 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8587 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1434 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 8593 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1435 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8599 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1438 "hphp.y" /* yacc.c:1646  */
    { _p->onInterfaceName((yyval), NULL, (yyvsp[0]));}
#line 8605 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1440 "hphp.y" /* yacc.c:1646  */
    { _p->onInterfaceName((yyval), &(yyvsp[-2]), (yyvsp[0]));}
#line 8611 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1443 "hphp.y" /* yacc.c:1646  */
    { _p->onTraitName((yyval), NULL, (yyvsp[0]));}
#line 8617 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1445 "hphp.y" /* yacc.c:1646  */
    { _p->onTraitName((yyval), &(yyvsp[-2]), (yyvsp[0]));}
#line 8623 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1449 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 8629 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1450 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8635 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1453 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = 0;}
#line 8641 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1454 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = 1;}
#line 8647 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1455 "hphp.y" /* yacc.c:1646  */
    { _p->onListAssignment((yyval), (yyvsp[0]), NULL);}
#line 8653 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1459 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 8659 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1461 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]);}
#line 8665 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1464 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 8671 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1466 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]);}
#line 8677 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1469 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 8683 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1471 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]);}
#line 8689 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1474 "hphp.y" /* yacc.c:1646  */
    { _p->onBlock((yyval), (yyvsp[0]));}
#line 8695 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1476 "hphp.y" /* yacc.c:1646  */
    { _p->onBlock((yyval), (yyvsp[-2]));}
#line 8701 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1480 "hphp.y" /* yacc.c:1646  */
    {_p->onDeclareList((yyval), (yyvsp[-2]), (yyvsp[0]));}
#line 8707 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1482 "hphp.y" /* yacc.c:1646  */
    {_p->onDeclareList((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
                                           (yyval) = (yyvsp[-4]);}
#line 8714 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1487 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 8720 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1488 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 8726 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1489 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]);}
#line 8732 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1490 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]);}
#line 8738 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1495 "hphp.y" /* yacc.c:1646  */
    { _p->onCase((yyval),(yyvsp[-4]),&(yyvsp[-2]),(yyvsp[0]));}
#line 8744 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1497 "hphp.y" /* yacc.c:1646  */
    { _p->onCase((yyval),(yyvsp[-3]),NULL,(yyvsp[0]));}
#line 8750 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1498 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8756 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1501 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8762 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1502 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8768 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1507 "hphp.y" /* yacc.c:1646  */
    { _p->onElseIf((yyval),(yyvsp[-3]),(yyvsp[-1]),(yyvsp[0]));}
#line 8774 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1508 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8780 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1513 "hphp.y" /* yacc.c:1646  */
    { _p->onElseIf((yyval),(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 8786 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1514 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8792 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1517 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 8798 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1518 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8804 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1521 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 8810 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1522 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 8816 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1530 "hphp.y" /* yacc.c:1646  */
    { _p->onVariadicParam((yyval),&(yyvsp[-6]),(yyvsp[-2]),(yyvsp[0]),false,
                                                            &(yyvsp[-4]),&(yyvsp[-3])); }
#line 8823 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1536 "hphp.y" /* yacc.c:1646  */
    { _p->onVariadicParam((yyval),&(yyvsp[-7]),(yyvsp[-3]),(yyvsp[0]),true,
                                                            &(yyvsp[-5]),&(yyvsp[-4])); }
#line 8830 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1542 "hphp.y" /* yacc.c:1646  */
    { validate_hh_variadic_variant(
                                          _p, (yyvsp[-3]), (yyvsp[-1]), &(yyvsp[-2]));
                                        (yyval) = (yyvsp[-5]); }
#line 8838 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1546 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 8844 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1550 "hphp.y" /* yacc.c:1646  */
    { _p->onVariadicParam((yyval),NULL,(yyvsp[-2]),(yyvsp[0]),false,
                                                            &(yyvsp[-4]),&(yyvsp[-3])); }
#line 8851 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1555 "hphp.y" /* yacc.c:1646  */
    { _p->onVariadicParam((yyval),NULL,(yyvsp[-3]),(yyvsp[0]),true,
                                                            &(yyvsp[-5]),&(yyvsp[-4])); }
#line 8858 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1560 "hphp.y" /* yacc.c:1646  */
    { validate_hh_variadic_variant(
                                          _p, (yyvsp[-3]), (yyvsp[-1]), &(yyvsp[-2]));
                                        (yyval).reset(); }
#line 8866 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1563 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 8872 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1569 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),NULL,(yyvsp[-1]),(yyvsp[0]),
                                                     ParamMode::In,
                                                     NULL,&(yyvsp[-3]),&(yyvsp[-2]));}
#line 8880 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1574 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),NULL,(yyvsp[-1]),(yyvsp[0]),
                                                     ParamMode::InOut,
                                                     NULL,&(yyvsp[-3]),NULL);}
#line 8888 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1579 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),NULL,(yyvsp[-2]),(yyvsp[0]),
                                                     ParamMode::Ref,
                                                     NULL,&(yyvsp[-4]),&(yyvsp[-3]));}
#line 8896 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1585 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),NULL,(yyvsp[-4]),(yyvsp[-2]),
                                                     ParamMode::Ref,
                                                     &(yyvsp[0]),&(yyvsp[-6]),&(yyvsp[-5]));}
#line 8904 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1591 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),NULL,(yyvsp[-3]),(yyvsp[-2]),
                                                     ParamMode::In,
                                                     &(yyvsp[0]),&(yyvsp[-5]),&(yyvsp[-4]));}
#line 8912 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1597 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),&(yyvsp[-5]),(yyvsp[-1]),(yyvsp[0]),
                                                     ParamMode::In,
                                                     NULL,&(yyvsp[-3]),&(yyvsp[-2]));}
#line 8920 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1603 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),&(yyvsp[-5]),(yyvsp[-1]),(yyvsp[0]),
                                                     ParamMode::InOut,
                                                     NULL,&(yyvsp[-3]),NULL);}
#line 8928 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1609 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),&(yyvsp[-6]),(yyvsp[-2]),(yyvsp[0]),
                                                     ParamMode::Ref,
                                                     NULL,&(yyvsp[-4]),&(yyvsp[-3]));}
#line 8936 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1616 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),&(yyvsp[-8]),(yyvsp[-4]),(yyvsp[-2]),
                                                     ParamMode::Ref,
                                                     &(yyvsp[0]),&(yyvsp[-6]),&(yyvsp[-5]));}
#line 8944 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1623 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),&(yyvsp[-7]),(yyvsp[-3]),(yyvsp[-2]),
                                                     ParamMode::In,
                                                     &(yyvsp[0]),&(yyvsp[-5]),&(yyvsp[-4]));}
#line 8952 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1632 "hphp.y" /* yacc.c:1646  */
    { _p->onVariadicParam((yyval),&(yyvsp[-5]),(yyvsp[-2]),(yyvsp[0]),
                                        false,&(yyvsp[-3]),NULL); }
#line 8959 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1637 "hphp.y" /* yacc.c:1646  */
    { _p->onVariadicParam((yyval),&(yyvsp[-6]),(yyvsp[-3]),(yyvsp[0]),
                                        true,&(yyvsp[-4]),NULL); }
#line 8966 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1642 "hphp.y" /* yacc.c:1646  */
    { validate_hh_variadic_variant(
                                          _p, (yyvsp[-2]), (yyvsp[-1]), NULL);
                                        (yyval) = (yyvsp[-4]); }
#line 8974 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1646 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 8980 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1649 "hphp.y" /* yacc.c:1646  */
    { _p->onVariadicParam((yyval),NULL,(yyvsp[-2]),(yyvsp[0]),
                                                            false,&(yyvsp[-3]),NULL); }
#line 8987 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1653 "hphp.y" /* yacc.c:1646  */
    { _p->onVariadicParam((yyval),NULL,(yyvsp[-3]),(yyvsp[0]),
                                                            true,&(yyvsp[-4]),NULL); }
#line 8994 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1657 "hphp.y" /* yacc.c:1646  */
    { validate_hh_variadic_variant(
                                          _p, (yyvsp[-2]), (yyvsp[-1]), NULL);
                                        (yyval).reset(); }
#line 9002 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1660 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 9008 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1665 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),NULL,(yyvsp[-1]),(yyvsp[0]),
                                                     ParamMode::In,
                                                     NULL,&(yyvsp[-2]),NULL); }
#line 9016 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1669 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),NULL,(yyvsp[-1]),(yyvsp[0]),
                                                     ParamMode::InOut,
                                                     NULL,&(yyvsp[-3]),NULL); }
#line 9024 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1673 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),NULL,(yyvsp[-2]),(yyvsp[0]),
                                                     ParamMode::Ref,
                                                     NULL,&(yyvsp[-3]),NULL); }
#line 9032 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1678 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),NULL,(yyvsp[-4]),(yyvsp[-2]),
                                                     ParamMode::Ref,
                                                     &(yyvsp[0]),&(yyvsp[-5]),NULL); }
#line 9040 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1683 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),NULL,(yyvsp[-3]),(yyvsp[-2]),
                                                     ParamMode::In,
                                                     &(yyvsp[0]),&(yyvsp[-4]),NULL); }
#line 9048 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1688 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),&(yyvsp[-4]),(yyvsp[-1]),(yyvsp[0]),
                                                     ParamMode::In,
                                                     NULL,&(yyvsp[-2]),NULL); }
#line 9056 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1693 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),&(yyvsp[-5]),(yyvsp[-1]),(yyvsp[0]),
                                                     ParamMode::InOut,
                                                     NULL,&(yyvsp[-3]),NULL); }
#line 9064 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1698 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),&(yyvsp[-5]),(yyvsp[-2]),(yyvsp[0]),
                                                     ParamMode::Ref,
                                                     NULL,&(yyvsp[-3]),NULL); }
#line 9072 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1704 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),&(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-2]),
                                                     ParamMode::Ref,
                                                     &(yyvsp[0]),&(yyvsp[-5]),NULL); }
#line 9080 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1710 "hphp.y" /* yacc.c:1646  */
    { _p->onParam((yyval),&(yyvsp[-6]),(yyvsp[-3]),(yyvsp[-2]),
                                                     ParamMode::In,
                                                     &(yyvsp[0]),&(yyvsp[-4]),NULL); }
#line 9088 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1716 "hphp.y" /* yacc.c:1646  */
    { _p->onRefDim((yyval), (yyvsp[-3]), (yyvsp[-1]));}
#line 9094 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1717 "hphp.y" /* yacc.c:1646  */
    { _p->onSimpleVariable((yyval), (yyvsp[0]));}
#line 9100 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1718 "hphp.y" /* yacc.c:1646  */
    { _p->onPipeVariable((yyval));}
#line 9106 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1723 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 9112 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1724 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 9118 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1727 "hphp.y" /* yacc.c:1646  */
    { _p->onCallParam((yyval),NULL,(yyvsp[0]),
                                                       ParamMode::In,false);}
#line 9125 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1729 "hphp.y" /* yacc.c:1646  */
    { _p->onCallParam((yyval),NULL,(yyvsp[0]),
                                                       ParamMode::InOut,false);}
#line 9132 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1731 "hphp.y" /* yacc.c:1646  */
    { _p->onCallParam((yyval),NULL,(yyvsp[0]),
                                                       ParamMode::Ref,false);}
#line 9139 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1733 "hphp.y" /* yacc.c:1646  */
    { _p->onCallParam((yyval),NULL,(yyvsp[0]),
                                                       ParamMode::In,true);}
#line 9146 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1736 "hphp.y" /* yacc.c:1646  */
    { _p->onCallParam((yyval),&(yyvsp[-2]),(yyvsp[0]),
                                                     ParamMode::In,false);}
#line 9153 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1739 "hphp.y" /* yacc.c:1646  */
    { _p->onCallParam((yyval),&(yyvsp[-3]),(yyvsp[0]),
                                                     ParamMode::In,true);}
#line 9160 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1742 "hphp.y" /* yacc.c:1646  */
    { _p->onCallParam((yyval),&(yyvsp[-3]),(yyvsp[0]),
                                                     ParamMode::Ref,false);}
#line 9167 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1745 "hphp.y" /* yacc.c:1646  */
    { _p->onCallParam((yyval),&(yyvsp[-3]),(yyvsp[0]),
                                                     ParamMode::InOut,false);}
#line 9174 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1750 "hphp.y" /* yacc.c:1646  */
    { _p->onGlobalVar((yyval), &(yyvsp[-2]), (yyvsp[0]));}
#line 9180 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1751 "hphp.y" /* yacc.c:1646  */
    { _p->onGlobalVar((yyval), NULL, (yyvsp[0]));}
#line 9186 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1754 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 9192 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1755 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = 1;}
#line 9198 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1756 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); (yyval) = 1;}
#line 9204 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1760 "hphp.y" /* yacc.c:1646  */
    { _p->onStaticVariable((yyval),&(yyvsp[-2]),(yyvsp[0]),0);}
#line 9210 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1762 "hphp.y" /* yacc.c:1646  */
    { _p->onStaticVariable((yyval),&(yyvsp[-4]),(yyvsp[-2]),&(yyvsp[0]));}
#line 9216 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1763 "hphp.y" /* yacc.c:1646  */
    { _p->onStaticVariable((yyval),0,(yyvsp[0]),0);}
#line 9222 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1764 "hphp.y" /* yacc.c:1646  */
    { _p->onStaticVariable((yyval),0,(yyvsp[-2]),&(yyvsp[0]));}
#line 9228 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1769 "hphp.y" /* yacc.c:1646  */
    { _p->onClassStatement((yyval), (yyvsp[-1]), (yyvsp[0]));}
#line 9234 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1770 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 9240 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1773 "hphp.y" /* yacc.c:1646  */
    { _p->onClassVariableStart
                                         ((yyval),NULL,(yyvsp[-1]),NULL,NULL);}
#line 9247 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1778 "hphp.y" /* yacc.c:1646  */
    { _p->onClassConstant((yyval),0,(yyvsp[-2]),(yyvsp[0]));}
#line 9253 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1784 "hphp.y" /* yacc.c:1646  */
    { _p->onClassStatement((yyval), (yyvsp[-1]), (yyvsp[0]));}
#line 9259 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1785 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 9265 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1789 "hphp.y" /* yacc.c:1646  */
    { _p->onClassVariableStart
                                         ((yyval),&(yyvsp[-2]),(yyvsp[-1]),NULL,NULL);}
#line 9272 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1793 "hphp.y" /* yacc.c:1646  */
    { _p->onClassVariableStart
                                         ((yyval),&(yyvsp[-3]),(yyvsp[-1]),&(yyvsp[-2]),NULL);}
#line 9279 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1797 "hphp.y" /* yacc.c:1646  */
    { _p->onClassVariableStart
                                         ((yyval),&(yyvsp[-2]),(yyvsp[-1]),NULL,&(yyvsp[-3]));}
#line 9286 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 1802 "hphp.y" /* yacc.c:1646  */
    { _p->onClassVariableStart
                                         ((yyval),&(yyvsp[-3]),(yyvsp[-1]),&(yyvsp[-2]),&(yyvsp[-4]));}
#line 9293 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 1804 "hphp.y" /* yacc.c:1646  */
    { _p->onClassVariableStart
                                         ((yyval),NULL,(yyvsp[-1]),NULL,NULL);}
#line 9300 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 1807 "hphp.y" /* yacc.c:1646  */
    { _p->onClassVariableStart
                                         ((yyval),NULL,(yyvsp[-1]),NULL,NULL,true);}
#line 9307 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 1809 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 9313 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 1812 "hphp.y" /* yacc.c:1646  */
    { _p->onNewLabelScope(true);
                                         _p->onMethodStart((yyvsp[-1]), (yyvsp[-4]));
                                         _p->pushLabelInfo();}
#line 9321 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 1819 "hphp.y" /* yacc.c:1646  */
    { _p->onMethod((yyval),(yyvsp[-10]),(yyvsp[-2]),(yyvsp[-8]),(yyvsp[-7]),(yyvsp[-4]),(yyvsp[0]),nullptr);
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->popTypeScope();
                                         _p->onCompleteLabelScope(true);}
#line 9331 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 1827 "hphp.y" /* yacc.c:1646  */
    { _p->onNewLabelScope(true);
                                         _p->onMethodStart((yyvsp[-1]), (yyvsp[-4]));
                                         _p->pushLabelInfo();}
#line 9339 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 1834 "hphp.y" /* yacc.c:1646  */
    { _p->onMethod((yyval),(yyvsp[-10]),(yyvsp[-2]),(yyvsp[-8]),(yyvsp[-7]),(yyvsp[-4]),(yyvsp[0]),&(yyvsp[-11]));
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->popTypeScope();
                                         _p->onCompleteLabelScope(true);}
#line 9349 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 1840 "hphp.y" /* yacc.c:1646  */
    { _p->xhpSetAttributes((yyvsp[-1]));}
#line 9355 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 1842 "hphp.y" /* yacc.c:1646  */
    { xhp_category_stmt(_p,(yyval),(yyvsp[-1]));}
#line 9361 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 1844 "hphp.y" /* yacc.c:1646  */
    { xhp_children_stmt(_p,(yyval),(yyvsp[-1]));}
#line 9367 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 1846 "hphp.y" /* yacc.c:1646  */
    { _p->onClassRequire((yyval), (yyvsp[-1]), true); }
#line 9373 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 1848 "hphp.y" /* yacc.c:1646  */
    { _p->onClassRequire((yyval), (yyvsp[-1]), false); }
#line 9379 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 1849 "hphp.y" /* yacc.c:1646  */
    { Token t; t.reset();
                                         _p->onTraitUse((yyval),(yyvsp[-1]),t); }
#line 9386 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 1852 "hphp.y" /* yacc.c:1646  */
    { _p->onTraitUse((yyval),(yyvsp[-3]),(yyvsp[-1])); }
#line 9392 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 1855 "hphp.y" /* yacc.c:1646  */
    { _p->onTraitRule((yyval),(yyvsp[-1]),(yyvsp[0])); }
#line 9398 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 1856 "hphp.y" /* yacc.c:1646  */
    { _p->onTraitRule((yyval),(yyvsp[-1]),(yyvsp[0])); }
#line 9404 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 1857 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 9410 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 1863 "hphp.y" /* yacc.c:1646  */
    { _p->onTraitPrecRule((yyval),(yyvsp[-5]),(yyvsp[-3]),(yyvsp[-1]));}
#line 9416 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 1868 "hphp.y" /* yacc.c:1646  */
    { _p->onTraitAliasRuleModify((yyval),(yyvsp[-4]),(yyvsp[-2]),
                                                                    (yyvsp[-1]));}
#line 9423 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 1871 "hphp.y" /* yacc.c:1646  */
    { Token t; t.reset();
                                         _p->onTraitAliasRuleModify((yyval),(yyvsp[-3]),(yyvsp[-1]),
                                                                    t);}
#line 9431 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 1878 "hphp.y" /* yacc.c:1646  */
    { _p->onTraitAliasRuleStart((yyval),(yyvsp[-2]),(yyvsp[0]));}
#line 9437 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 1879 "hphp.y" /* yacc.c:1646  */
    { Token t; t.reset();
                                         _p->onTraitAliasRuleStart((yyval),t,(yyvsp[0]));}
#line 9444 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 1884 "hphp.y" /* yacc.c:1646  */
    { xhp_attribute_list(_p,(yyval),
                                         _p->xhpGetAttributes(),(yyvsp[0]));}
#line 9451 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 1887 "hphp.y" /* yacc.c:1646  */
    { xhp_attribute_list(_p,(yyval), &(yyvsp[-2]),(yyvsp[0]));}
#line 9457 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 1894 "hphp.y" /* yacc.c:1646  */
    { xhp_attribute(_p,(yyval),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
                                         (yyval) = 1;}
#line 9464 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 1896 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = 0;}
#line 9470 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 1900 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 9476 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 1905 "hphp.y" /* yacc.c:1646  */
    { (yyval) = 4;}
#line 9482 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 1907 "hphp.y" /* yacc.c:1646  */
    { (yyval) = 4;}
#line 9488 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 1909 "hphp.y" /* yacc.c:1646  */
    { (yyval) = 4;}
#line 9494 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 1910 "hphp.y" /* yacc.c:1646  */
    { /* This case handles all types other
                                            than "array", "var" and "enum".
                                            For now we just use type code 5;
                                            later xhp_attribute() will fix up
                                            the type code as appropriate. */
                                         (yyval) = 5; (yyval).setText((yyvsp[0]));}
#line 9505 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 1916 "hphp.y" /* yacc.c:1646  */
    { (yyval) = 6;}
#line 9511 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 1918 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); (yyval) = 7;}
#line 9517 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 1919 "hphp.y" /* yacc.c:1646  */
    { (yyval) = 9; }
#line 9523 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 1923 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval),nullptr,(yyvsp[0])); }
#line 9529 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 1925 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval),&(yyvsp[-2]),(yyvsp[0])); }
#line 9535 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 1930 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 9541 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 1933 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 9547 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 1934 "hphp.y" /* yacc.c:1646  */
    { scalar_null(_p, (yyval));}
#line 9553 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 1938 "hphp.y" /* yacc.c:1646  */
    { scalar_num(_p, (yyval), "1");}
#line 9559 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 1939 "hphp.y" /* yacc.c:1646  */
    { scalar_num(_p, (yyval), "0");}
#line 9565 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 1943 "hphp.y" /* yacc.c:1646  */
    { Token t; scalar_num(_p, t, "1");
                                         _p->onArrayPair((yyval),0,&(yyvsp[0]),&t,0);}
#line 9572 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 1946 "hphp.y" /* yacc.c:1646  */
    { Token t; scalar_num(_p, t, "1");
                                         _p->onArrayPair((yyval),&(yyvsp[-2]),&(yyvsp[0]),&t,0);}
#line 9579 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 1951 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[0]));}
#line 9586 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 1956 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = 2;}
#line 9592 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 1957 "hphp.y" /* yacc.c:1646  */
    { (yyval) = -1;
                                         if ((yyvsp[0]).same("any")) (yyval) = 1;}
#line 9599 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 1959 "hphp.y" /* yacc.c:1646  */
    { (yyval) = 0;}
#line 9605 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 1963 "hphp.y" /* yacc.c:1646  */
    { xhp_children_paren(_p, (yyval), (yyvsp[-1]), 0);}
#line 9611 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1964 "hphp.y" /* yacc.c:1646  */
    { xhp_children_paren(_p, (yyval), (yyvsp[-2]), 1);}
#line 9617 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 1965 "hphp.y" /* yacc.c:1646  */
    { xhp_children_paren(_p, (yyval), (yyvsp[-2]), 2);}
#line 9623 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 1966 "hphp.y" /* yacc.c:1646  */
    { xhp_children_paren(_p, (yyval), (yyvsp[-2]), 3);}
#line 9629 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1970 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 9635 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1971 "hphp.y" /* yacc.c:1646  */
    { xhp_children_decl(_p,(yyval),(yyvsp[0]),0,  0);}
#line 9641 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1972 "hphp.y" /* yacc.c:1646  */
    { xhp_children_decl(_p,(yyval),(yyvsp[-1]),1,  0);}
#line 9647 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 1973 "hphp.y" /* yacc.c:1646  */
    { xhp_children_decl(_p,(yyval),(yyvsp[-1]),2,  0);}
#line 9653 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1974 "hphp.y" /* yacc.c:1646  */
    { xhp_children_decl(_p,(yyval),(yyvsp[-1]),3,  0);}
#line 9659 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1976 "hphp.y" /* yacc.c:1646  */
    { xhp_children_decl(_p,(yyval),(yyvsp[-2]),4,&(yyvsp[0]));}
#line 9665 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1978 "hphp.y" /* yacc.c:1646  */
    { xhp_children_decl(_p,(yyval),(yyvsp[-2]),5,&(yyvsp[0]));}
#line 9671 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1982 "hphp.y" /* yacc.c:1646  */
    { (yyval) = -1;
                                         if ((yyvsp[0]).same("any")) (yyval) = 1; else
                                         if ((yyvsp[0]).same("pcdata")) (yyval) = 2;}
#line 9679 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1985 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).xhpLabel();  (yyval) = (yyvsp[0]); (yyval) = 3;}
#line 9685 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1986 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).xhpLabel(0); (yyval) = (yyvsp[0]); (yyval) = 4;}
#line 9691 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1990 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 9697 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1991 "hphp.y" /* yacc.c:1646  */
    { _p->finishStatement((yyval), (yyvsp[-1])); (yyval) = 1;}
#line 9703 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1995 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 9709 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1996 "hphp.y" /* yacc.c:1646  */
    { _p->finishStatement((yyval), (yyvsp[-1])); (yyval) = 1;}
#line 9715 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1999 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 9721 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2000 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 9727 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2003 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 9733 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2004 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 9739 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2007 "hphp.y" /* yacc.c:1646  */
    { _p->onMemberModifier((yyval),NULL,(yyvsp[0]));}
#line 9745 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2009 "hphp.y" /* yacc.c:1646  */
    { _p->onMemberModifier((yyval),&(yyvsp[-1]),(yyvsp[0]));}
#line 9751 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2012 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_PUBLIC;}
#line 9757 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2013 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_PROTECTED;}
#line 9763 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2014 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_PRIVATE;}
#line 9769 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2015 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_STATIC;}
#line 9775 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 2016 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_ABSTRACT;}
#line 9781 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2017 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_FINAL;}
#line 9787 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2018 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_ASYNC;}
#line 9793 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 2022 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 9799 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 2023 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 9805 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 2026 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_PUBLIC;}
#line 9811 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 2027 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_PROTECTED;}
#line 9817 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2028 "hphp.y" /* yacc.c:1646  */
    { (yyval) = T_PRIVATE;}
#line 9823 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 2032 "hphp.y" /* yacc.c:1646  */
    { _p->onClassVariable((yyval),&(yyvsp[-2]),(yyvsp[0]),0);}
#line 9829 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 2034 "hphp.y" /* yacc.c:1646  */
    { _p->onClassVariable((yyval),&(yyvsp[-4]),(yyvsp[-2]),&(yyvsp[0]));}
#line 9835 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 2035 "hphp.y" /* yacc.c:1646  */
    { _p->onClassVariable((yyval),0,(yyvsp[0]),0);}
#line 9841 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 2036 "hphp.y" /* yacc.c:1646  */
    { _p->onClassVariable((yyval),0,(yyvsp[-2]),&(yyvsp[0]));}
#line 9847 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 2040 "hphp.y" /* yacc.c:1646  */
    { _p->onClassConstant((yyval),&(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 9853 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 2042 "hphp.y" /* yacc.c:1646  */
    { _p->onClassConstant((yyval),0,(yyvsp[-2]),(yyvsp[0]));}
#line 9859 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 2051 "hphp.y" /* yacc.c:1646  */
    { _p->onClassAbstractConstant((yyval),&(yyvsp[-2]),(yyvsp[0]));}
#line 9865 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 2053 "hphp.y" /* yacc.c:1646  */
    { _p->onClassAbstractConstant((yyval),NULL,(yyvsp[0]));}
#line 9871 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 2057 "hphp.y" /* yacc.c:1646  */
    { Token t;
                                          _p->onClassTypeConstant((yyval), (yyvsp[-1]), t);
                                          _p->popTypeScope(); }
#line 9879 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 2061 "hphp.y" /* yacc.c:1646  */
    { _p->onClassTypeConstant((yyval), (yyvsp[-3]), (yyvsp[0]));
                                          _p->popTypeScope(); }
#line 9886 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 2065 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9892 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 2069 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 9898 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 2073 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 9904 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 2075 "hphp.y" /* yacc.c:1646  */
    { _p->onNewObject((yyval), (yyvsp[-1]), (yyvsp[0]));}
#line 9910 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 2076 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 9916 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 2077 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_CLONE,1);}
#line 9922 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 2078 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 9928 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 2079 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 9934 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 2082 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval), &(yyvsp[-2]), (yyvsp[0]));}
#line 9940 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 2083 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval), NULL, (yyvsp[0]));}
#line 9946 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 2087 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 9952 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 2088 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 9958 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 2092 "hphp.y" /* yacc.c:1646  */
    { _p->onYield((yyval), NULL);}
#line 9964 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 2093 "hphp.y" /* yacc.c:1646  */
    { _p->onYield((yyval), &(yyvsp[0]));}
#line 9970 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 2094 "hphp.y" /* yacc.c:1646  */
    { _p->onYieldPair((yyval), &(yyvsp[-2]), &(yyvsp[0]));}
#line 9976 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 2095 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 9982 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 2099 "hphp.y" /* yacc.c:1646  */
    { _p->onAssign((yyval), (yyvsp[-2]), (yyvsp[0]), 0, true);}
#line 9988 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 2104 "hphp.y" /* yacc.c:1646  */
    { _p->onListAssignment((yyval), (yyvsp[-2]), &(yyvsp[0]), true);}
#line 9994 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 2108 "hphp.y" /* yacc.c:1646  */
    { _p->onYieldFrom((yyval),&(yyvsp[0]));}
#line 10000 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 2112 "hphp.y" /* yacc.c:1646  */
    { _p->onAssign((yyval), (yyvsp[-2]), (yyvsp[0]), 0, true);}
#line 10006 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 2116 "hphp.y" /* yacc.c:1646  */
    { _p->onAwait((yyval), (yyvsp[0])); }
#line 10012 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 2120 "hphp.y" /* yacc.c:1646  */
    { _p->onAssign((yyval), (yyvsp[-2]), (yyvsp[0]), 0, true);}
#line 10018 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 2125 "hphp.y" /* yacc.c:1646  */
    { _p->onListAssignment((yyval), (yyvsp[-2]), &(yyvsp[0]), true);}
#line 10024 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 2129 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 10030 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 2133 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 10036 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 2134 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 10042 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 2135 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 10048 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 2136 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 10054 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 2137 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 10060 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 2141 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 10066 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 2146 "hphp.y" /* yacc.c:1646  */
    { _p->onListAssignment((yyval), (yyvsp[-2]), &(yyvsp[0]));}
#line 10072 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 2147 "hphp.y" /* yacc.c:1646  */
    { _p->onAssign((yyval), (yyvsp[-2]), (yyvsp[0]), 0);}
#line 10078 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 2148 "hphp.y" /* yacc.c:1646  */
    { _p->onAssign((yyval), (yyvsp[-3]), (yyvsp[0]), 1);}
#line 10084 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 2151 "hphp.y" /* yacc.c:1646  */
    { _p->onAssignNew((yyval),(yyvsp[-5]),(yyvsp[-1]),(yyvsp[0]));}
#line 10090 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 2152 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_PLUS_EQUAL);}
#line 10096 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 2153 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_MINUS_EQUAL);}
#line 10102 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 2154 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_MUL_EQUAL);}
#line 10108 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 2155 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_DIV_EQUAL);}
#line 10114 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 2156 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_CONCAT_EQUAL);}
#line 10120 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 2157 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_MOD_EQUAL);}
#line 10126 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 2158 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_AND_EQUAL);}
#line 10132 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 2159 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_OR_EQUAL);}
#line 10138 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 2160 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_XOR_EQUAL);}
#line 10144 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 2161 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_SL_EQUAL);}
#line 10150 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 2162 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_SR_EQUAL);}
#line 10156 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 2163 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_POW_EQUAL);}
#line 10162 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 2164 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[-1]),T_INC,0);}
#line 10168 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 2165 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_INC,1);}
#line 10174 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 2166 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[-1]),T_DEC,0);}
#line 10180 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 2167 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_DEC,1);}
#line 10186 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 2168 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_BOOLEAN_OR);}
#line 10192 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 2169 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_BOOLEAN_AND);}
#line 10198 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 2170 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_LOGICAL_OR);}
#line 10204 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 2171 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_LOGICAL_AND);}
#line 10210 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 2172 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_LOGICAL_XOR);}
#line 10216 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 2173 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'|');}
#line 10222 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 2174 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'&');}
#line 10228 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 2175 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'^');}
#line 10234 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 2176 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'.');}
#line 10240 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 2177 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'+');}
#line 10246 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 2178 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'-');}
#line 10252 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 2179 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'*');}
#line 10258 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 2180 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'/');}
#line 10264 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 2181 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_POW);}
#line 10270 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 2182 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'%');}
#line 10276 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 2183 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_PIPE);}
#line 10282 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 2184 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_SL);}
#line 10288 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 2185 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_SR);}
#line 10294 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 2186 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),'+',1);}
#line 10300 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 2187 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),'-',1);}
#line 10306 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 2188 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),'!',1);}
#line 10312 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 2189 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),'~',1);}
#line 10318 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 2190 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_IS_IDENTICAL);}
#line 10324 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 2191 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_IS_NOT_IDENTICAL);}
#line 10330 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 2192 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_IS_EQUAL);}
#line 10336 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 2193 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_IS_NOT_EQUAL);}
#line 10342 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 2194 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'<');}
#line 10348 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 2195 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),
                                              T_IS_SMALLER_OR_EQUAL);}
#line 10355 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 2197 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'>');}
#line 10361 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 2198 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),
                                              T_IS_GREATER_OR_EQUAL);}
#line 10368 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 2200 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_SPACESHIP);}
#line 10374 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 2202 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_INSTANCEOF);}
#line 10380 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 2203 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 10386 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 2204 "hphp.y" /* yacc.c:1646  */
    { _p->onQOp((yyval), (yyvsp[-4]), &(yyvsp[-2]), (yyvsp[0]));}
#line 10392 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 2205 "hphp.y" /* yacc.c:1646  */
    { _p->onQOp((yyval), (yyvsp[-3]),   0, (yyvsp[0]));}
#line 10398 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 2206 "hphp.y" /* yacc.c:1646  */
    { _p->onNullCoalesce((yyval), (yyvsp[-2]), (yyvsp[0]));}
#line 10404 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 2207 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 10410 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 2208 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_INT_CAST,1);}
#line 10416 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 2209 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_DOUBLE_CAST,1);}
#line 10422 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 2210 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_STRING_CAST,1);}
#line 10428 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 2211 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_ARRAY_CAST,1);}
#line 10434 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 2212 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_OBJECT_CAST,1);}
#line 10440 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 2213 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_BOOL_CAST,1);}
#line 10446 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 2214 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_UNSET_CAST,1);}
#line 10452 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 2215 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_EXIT,1);}
#line 10458 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 2216 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),'@',1);}
#line 10464 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 2217 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10470 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 2218 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10476 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 2219 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10482 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 2220 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10488 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 2221 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10494 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 2222 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10500 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 2223 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10506 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 2224 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10512 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 2225 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10518 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 2226 "hphp.y" /* yacc.c:1646  */
    { _p->onEncapsList((yyval),'`',(yyvsp[-1]));}
#line 10524 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 2227 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_PRINT,1);}
#line 10530 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 2228 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 10536 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 2235 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]);}
#line 10542 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 2236 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 10548 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 2241 "hphp.y" /* yacc.c:1646  */
    { Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo(); }
#line 10557 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 2247 "hphp.y" /* yacc.c:1646  */
    { _p->finishStatement((yyvsp[-1]), (yyvsp[-1])); (yyvsp[-1]) = 1;
                                         (yyval) = _p->onClosure(
                                           ClosureType::Long, nullptr,
                                           (yyvsp[-10]),(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-1]),(yyvsp[-5]),&(yyvsp[-3]));
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);}
#line 10569 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 2256 "hphp.y" /* yacc.c:1646  */
    { Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo(); }
#line 10578 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 2262 "hphp.y" /* yacc.c:1646  */
    { _p->finishStatement((yyvsp[-1]), (yyvsp[-1])); (yyvsp[-1]) = 1;
                                         (yyval) = _p->onClosure(
                                           ClosureType::Long, &(yyvsp[-12]),
                                           (yyvsp[-10]),(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-1]),(yyvsp[-5]),&(yyvsp[-3]));
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);}
#line 10590 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 2273 "hphp.y" /* yacc.c:1646  */
    { _p->pushFuncLocation();
                                         Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo();
                                         Token u;
                                         _p->onParam((yyvsp[0]),NULL,u,(yyvsp[0]),
                                                     ParamMode::In,
                                                     NULL,NULL,NULL);}
#line 10604 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 2282 "hphp.y" /* yacc.c:1646  */
    { Token v; Token w; Token x;
                                         (yyvsp[-3]) = T_ASYNC;
                                         _p->onMemberModifier((yyvsp[-3]), nullptr, (yyvsp[-3]));
                                         _p->finishStatement((yyvsp[0]), (yyvsp[0])); (yyvsp[0]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Short,
                                                            &(yyvsp[-3]),
                                                            v,(yyvsp[-2]),w,(yyvsp[0]),x);
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);}
#line 10619 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 2293 "hphp.y" /* yacc.c:1646  */
    { _p->pushFuncLocation();
                                         Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo();}
#line 10629 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 2301 "hphp.y" /* yacc.c:1646  */
    { Token u; Token v;
                                         (yyvsp[-6]) = T_ASYNC;
                                         _p->onMemberModifier((yyvsp[-6]), nullptr, (yyvsp[-6]));
                                         _p->finishStatement((yyvsp[0]), (yyvsp[0])); (yyvsp[0]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Short,
                                                            &(yyvsp[-6]),
                                                            u,(yyvsp[-3]),v,(yyvsp[0]),(yyvsp[-1]));
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);}
#line 10644 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 2312 "hphp.y" /* yacc.c:1646  */
    { _p->pushFuncLocation();
                                         Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo();}
#line 10654 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 2318 "hphp.y" /* yacc.c:1646  */
    { Token u; Token v; Token w; Token x;
                                         Token y;
                                         (yyvsp[-4]) = T_ASYNC;
                                         _p->onMemberModifier((yyvsp[-4]), nullptr, (yyvsp[-4]));
                                         _p->finishStatement((yyvsp[-1]), (yyvsp[-1])); (yyvsp[-1]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Short,
                                                            &(yyvsp[-4]),
                                                            u,v,w,(yyvsp[-1]),x);
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);
                                         _p->onCall((yyval),1,(yyval),y,NULL);}
#line 10671 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 2330 "hphp.y" /* yacc.c:1646  */
    { _p->pushFuncLocation();
                                         Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo();
                                         Token u;
                                         _p->onParam((yyvsp[0]),NULL,u,(yyvsp[0]),
                                                     ParamMode::In,
                                                     NULL,NULL,NULL);}
#line 10685 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 2339 "hphp.y" /* yacc.c:1646  */
    { Token v; Token w; Token x;
                                         _p->finishStatement((yyvsp[0]), (yyvsp[0])); (yyvsp[0]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Short,
                                                            nullptr,
                                                            v,(yyvsp[-2]),w,(yyvsp[0]),x);
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);}
#line 10698 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 2347 "hphp.y" /* yacc.c:1646  */
    { _p->pushFuncLocation();
                                         Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo();}
#line 10708 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 2355 "hphp.y" /* yacc.c:1646  */
    { Token u; Token v;
                                         _p->finishStatement((yyvsp[0]), (yyvsp[0])); (yyvsp[0]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Short,
                                                            nullptr,
                                                            u,(yyvsp[-3]),v,(yyvsp[0]),(yyvsp[-1]));
                                         _p->closeActiveUsings();
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);}
#line 10721 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 2366 "hphp.y" /* yacc.c:1646  */
    { (yyval) = _p->onExprForLambda((yyvsp[0]));}
#line 10727 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 2367 "hphp.y" /* yacc.c:1646  */
    { (yyval) = _p->onExprForLambda((yyvsp[0]));}
#line 10733 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 2369 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 10739 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 2373 "hphp.y" /* yacc.c:1646  */
    { validate_shape_keyname((yyvsp[0]), _p);
                                        _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyvsp[0])); }
#line 10746 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 2375 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10752 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 2382 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-4]),&(yyvsp[-2]),&(yyvsp[0]),0); }
#line 10758 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 2385 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-2]),&(yyvsp[0]),0); }
#line 10764 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 2392 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-4]),&(yyvsp[-2]),&(yyvsp[0]),0); }
#line 10770 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 2395 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-2]),&(yyvsp[0]),0); }
#line 10776 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 2400 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 10782 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 595:
#line 2401 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 10788 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 596:
#line 2406 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 10794 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 597:
#line 2407 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 10800 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 598:
#line 2411 "hphp.y" /* yacc.c:1646  */
    { _p->onDArray((yyval), (yyvsp[-1]));}
#line 10806 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 599:
#line 2415 "hphp.y" /* yacc.c:1646  */
    { _p->onArray((yyval),(yyvsp[-1]),T_ARRAY);}
#line 10812 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 600:
#line 2416 "hphp.y" /* yacc.c:1646  */
    { _p->onArray((yyval),(yyvsp[-1]),T_ARRAY);}
#line 10818 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 601:
#line 2417 "hphp.y" /* yacc.c:1646  */
    { _p->onArray((yyval),(yyvsp[-1]),T_ARRAY);}
#line 10824 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 602:
#line 2422 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 10830 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 603:
#line 2423 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 10836 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 604:
#line 2428 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-4]),&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 10842 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 605:
#line 2429 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 10848 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 606:
#line 2434 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 10854 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 607:
#line 2435 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 10860 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 608:
#line 2441 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-4]),&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 10866 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 609:
#line 2443 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 10872 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 610:
#line 2448 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 10878 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 611:
#line 2449 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 10884 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 612:
#line 2455 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-4]),&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 10890 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 613:
#line 2457 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 10896 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 614:
#line 2461 "hphp.y" /* yacc.c:1646  */
    { _p->onDict((yyval), (yyvsp[-1])); }
#line 10902 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 615:
#line 2465 "hphp.y" /* yacc.c:1646  */
    { _p->onDict((yyval), (yyvsp[-1])); }
#line 10908 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 616:
#line 2469 "hphp.y" /* yacc.c:1646  */
    { _p->onDict((yyval), (yyvsp[-1])); }
#line 10914 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 617:
#line 2473 "hphp.y" /* yacc.c:1646  */
    { _p->onVec((yyval), (yyvsp[-1])); }
#line 10920 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 618:
#line 2477 "hphp.y" /* yacc.c:1646  */
    { _p->onVec((yyval), (yyvsp[-1])); }
#line 10926 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 619:
#line 2481 "hphp.y" /* yacc.c:1646  */
    { _p->onVec((yyval), (yyvsp[-1])); }
#line 10932 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 620:
#line 2485 "hphp.y" /* yacc.c:1646  */
    { _p->onKeyset((yyval), (yyvsp[-1])); }
#line 10938 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 621:
#line 2489 "hphp.y" /* yacc.c:1646  */
    { _p->onKeyset((yyval), (yyvsp[-1])); }
#line 10944 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 622:
#line 2493 "hphp.y" /* yacc.c:1646  */
    { _p->onKeyset((yyval), (yyvsp[-1])); }
#line 10950 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 623:
#line 2497 "hphp.y" /* yacc.c:1646  */
    { _p->onVArray((yyval),(yyvsp[-1])); }
#line 10956 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 624:
#line 2501 "hphp.y" /* yacc.c:1646  */
    { _p->onVArray((yyval),(yyvsp[-1])); }
#line 10962 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 625:
#line 2505 "hphp.y" /* yacc.c:1646  */
    { _p->onVArray((yyval),(yyvsp[-1])); }
#line 10968 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 626:
#line 2509 "hphp.y" /* yacc.c:1646  */
    { _p->onVArray((yyval),(yyvsp[-1])); }
#line 10974 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 627:
#line 2513 "hphp.y" /* yacc.c:1646  */
    { _p->onVArray((yyval),(yyvsp[-1])); }
#line 10980 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 628:
#line 2517 "hphp.y" /* yacc.c:1646  */
    { _p->onVArray((yyval),(yyvsp[-1])); }
#line 10986 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 629:
#line 2521 "hphp.y" /* yacc.c:1646  */
    { _p->onDArray((yyval),(yyvsp[-1])); }
#line 10992 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 630:
#line 2525 "hphp.y" /* yacc.c:1646  */
    { _p->onDArray((yyval),(yyvsp[-1])); }
#line 10998 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 631:
#line 2529 "hphp.y" /* yacc.c:1646  */
    { _p->onDArray((yyval),(yyvsp[-1])); }
#line 11004 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 632:
#line 2534 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 11010 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 633:
#line 2535 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 11016 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 634:
#line 2540 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 11022 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 635:
#line 2541 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 11028 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 636:
#line 2546 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 11034 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 637:
#line 2547 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 11040 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 638:
#line 2552 "hphp.y" /* yacc.c:1646  */
    { Token t;
                                         _p->onName(t,(yyvsp[-3]),Parser::StringName);
                                         BEXP((yyval),t,(yyvsp[-1]),T_COLLECTION);}
#line 11048 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 639:
#line 2559 "hphp.y" /* yacc.c:1646  */
    { Token t;
                                         _p->onName(t,(yyvsp[-3]),Parser::StringName);
                                         BEXP((yyval),t,(yyvsp[-1]),T_COLLECTION);}
#line 11056 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 640:
#line 2566 "hphp.y" /* yacc.c:1646  */
    { _p->onRefDim((yyval), (yyvsp[-3]), (yyvsp[-1]));}
#line 11062 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 641:
#line 2568 "hphp.y" /* yacc.c:1646  */
    { _p->onRefDim((yyval), (yyvsp[-3]), (yyvsp[-1]));}
#line 11068 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 642:
#line 2572 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11074 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 643:
#line 2573 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11080 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 644:
#line 2574 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11086 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 645:
#line 2575 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11092 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 646:
#line 2576 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11098 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 647:
#line 2577 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11104 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 648:
#line 2578 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11110 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 649:
#line 2579 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11116 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 650:
#line 2580 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11122 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 651:
#line 2581 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[0])); }
#line 11129 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 652:
#line 2583 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 11135 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 653:
#line 2584 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11141 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 654:
#line 2588 "hphp.y" /* yacc.c:1646  */
    { _p->onClosureParam((yyval),&(yyvsp[-2]),(yyvsp[0]),0);}
#line 11147 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 655:
#line 2589 "hphp.y" /* yacc.c:1646  */
    { _p->onClosureParam((yyval),&(yyvsp[-3]),(yyvsp[0]),1);}
#line 11153 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 656:
#line 2590 "hphp.y" /* yacc.c:1646  */
    { _p->onClosureParam((yyval),  0,(yyvsp[0]),0);}
#line 11159 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 657:
#line 2591 "hphp.y" /* yacc.c:1646  */
    { _p->onClosureParam((yyval),  0,(yyvsp[0]),1);}
#line 11165 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 658:
#line 2598 "hphp.y" /* yacc.c:1646  */
    { xhp_tag(_p,(yyval),(yyvsp[-2]),(yyvsp[-1]));}
#line 11171 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 659:
#line 2601 "hphp.y" /* yacc.c:1646  */
    { Token t1; _p->onDArray(t1,(yyvsp[-1]));
                                         Token t2; _p->onVArray(t2,(yyvsp[0]));
                                         Token file; scalar_file(_p, file);
                                         Token line; scalar_line(_p, line);
                                         _p->onCallParam((yyvsp[-1]),NULL,t1,
                                                         ParamMode::In,0);
                                         _p->onCallParam((yyval), &(yyvsp[-1]),t2,
                                                         ParamMode::In,0);
                                         _p->onCallParam((yyvsp[-1]), &(yyvsp[-1]),file,
                                                         ParamMode::In,0);
                                         _p->onCallParam((yyvsp[-1]), &(yyvsp[-1]),line,
                                                         ParamMode::In,0);
                                         (yyval).setText("");}
#line 11189 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 660:
#line 2616 "hphp.y" /* yacc.c:1646  */
    { Token file; scalar_file(_p, file);
                                         Token line; scalar_line(_p, line);
                                         _p->onDArray((yyvsp[-2]),(yyvsp[-5]));
                                         _p->onVArray((yyvsp[-1]),(yyvsp[-3]));
                                         _p->onCallParam((yyvsp[-4]),NULL,(yyvsp[-2]),
                                                         ParamMode::In,0);
                                         _p->onCallParam((yyval), &(yyvsp[-4]),(yyvsp[-1]),
                                                         ParamMode::In,0);
                                         _p->onCallParam((yyvsp[-4]), &(yyvsp[-4]),file,
                                                         ParamMode::In,0);
                                         _p->onCallParam((yyvsp[-4]), &(yyvsp[-4]),line,
                                                         ParamMode::In,0);
                                         (yyval).setText((yyvsp[0]).text());}
#line 11207 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 661:
#line 2631 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); (yyval).setText("");}
#line 11213 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 662:
#line 2632 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); (yyval).setText((yyvsp[0]));}
#line 11219 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 663:
#line 2635 "hphp.y" /* yacc.c:1646  */
    { _p->onXhpAttributesStart(); (yyval).reset();}
#line 11225 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 664:
#line 2637 "hphp.y" /* yacc.c:1646  */
    { _p->onXhpAttributeSpread((yyval), &(yyvsp[-4]), (yyvsp[-1]));}
#line 11231 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 665:
#line 2640 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-3]),&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 11237 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 666:
#line 2643 "hphp.y" /* yacc.c:1646  */
    { _p->onOptExprListElem((yyval), &(yyvsp[-1]), (yyvsp[0])); }
#line 11243 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 667:
#line 2644 "hphp.y" /* yacc.c:1646  */
    {  (yyval).reset();}
#line 11249 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 668:
#line 2647 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[0]));}
#line 11256 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 669:
#line 2651 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).xhpDecode();
                                         _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[0]));}
#line 11264 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 670:
#line 2654 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 11270 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 671:
#line 2657 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();
                                         if ((yyvsp[0]).htmlTrim()) {
                                           (yyvsp[0]).xhpDecode();
                                           _p->onScalar((yyval),
                                           T_CONSTANT_ENCAPSED_STRING, (yyvsp[0]));
                                         }
                                       }
#line 11282 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 672:
#line 2664 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 11288 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 673:
#line 2665 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11294 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 674:
#line 2669 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11300 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 675:
#line 2671 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + ":" + (yyvsp[0]);}
#line 11306 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 676:
#line 2673 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + "-" + (yyvsp[0]);}
#line 11312 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 677:
#line 2677 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11318 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 678:
#line 2678 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11324 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 679:
#line 2679 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11330 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 680:
#line 2680 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11336 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 681:
#line 2681 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11342 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 682:
#line 2682 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11348 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 683:
#line 2683 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11354 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 684:
#line 2684 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11360 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 685:
#line 2685 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11366 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 686:
#line 2686 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11372 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 687:
#line 2687 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11378 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 688:
#line 2688 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11384 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 689:
#line 2689 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11390 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 690:
#line 2690 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11396 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 691:
#line 2691 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11402 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 692:
#line 2692 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11408 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 693:
#line 2693 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11414 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 694:
#line 2694 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11420 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 695:
#line 2695 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11426 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 696:
#line 2696 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11432 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 697:
#line 2697 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11438 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 698:
#line 2698 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11444 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 699:
#line 2699 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11450 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 700:
#line 2700 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11456 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 701:
#line 2701 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11462 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 702:
#line 2702 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11468 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 703:
#line 2703 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11474 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 704:
#line 2704 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11480 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 705:
#line 2705 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11486 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 706:
#line 2706 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11492 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 707:
#line 2707 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11498 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 708:
#line 2708 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11504 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 709:
#line 2709 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11510 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 710:
#line 2710 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11516 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 711:
#line 2711 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11522 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 712:
#line 2712 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11528 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 713:
#line 2713 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11534 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 714:
#line 2714 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11540 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 715:
#line 2715 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11546 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 716:
#line 2716 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11552 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 717:
#line 2717 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11558 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 718:
#line 2718 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11564 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 719:
#line 2719 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11570 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 720:
#line 2720 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11576 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 721:
#line 2721 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11582 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 722:
#line 2722 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11588 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 723:
#line 2723 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11594 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 724:
#line 2724 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11600 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 725:
#line 2725 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11606 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 726:
#line 2726 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11612 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 727:
#line 2727 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11618 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 728:
#line 2728 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11624 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 729:
#line 2729 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11630 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 730:
#line 2730 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11636 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 731:
#line 2731 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11642 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 732:
#line 2732 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11648 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 733:
#line 2733 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11654 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 734:
#line 2734 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11660 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 735:
#line 2735 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11666 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 736:
#line 2736 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11672 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 737:
#line 2737 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11678 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 738:
#line 2738 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11684 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 739:
#line 2739 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11690 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 740:
#line 2740 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11696 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 741:
#line 2741 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11702 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 742:
#line 2742 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11708 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 743:
#line 2743 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11714 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 744:
#line 2744 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11720 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 745:
#line 2745 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11726 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 746:
#line 2746 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11732 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 747:
#line 2747 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11738 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 748:
#line 2748 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11744 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 749:
#line 2749 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11750 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 750:
#line 2750 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11756 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 751:
#line 2751 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11762 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 752:
#line 2752 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11768 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 753:
#line 2753 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11774 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 754:
#line 2754 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11780 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 755:
#line 2755 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11786 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 756:
#line 2756 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11792 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 757:
#line 2757 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11798 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 758:
#line 2758 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11804 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 759:
#line 2759 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11810 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 760:
#line 2764 "hphp.y" /* yacc.c:1646  */
    { _p->onCall((yyval),0,(yyvsp[-3]),(yyvsp[-1]),NULL);}
#line 11816 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 761:
#line 2768 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11822 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 762:
#line 2769 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).xhpLabel(); (yyval) = (yyvsp[0]);}
#line 11828 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 763:
#line 2773 "hphp.y" /* yacc.c:1646  */
    { _p->onName((yyval),(yyvsp[0]),Parser::StringName);}
#line 11834 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 764:
#line 2774 "hphp.y" /* yacc.c:1646  */
    { _p->onName((yyval),(yyvsp[0]),Parser::StringName);}
#line 11840 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 765:
#line 2775 "hphp.y" /* yacc.c:1646  */
    { _p->onName((yyval),(yyvsp[0]),Parser::StaticName);}
#line 11846 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 766:
#line 2776 "hphp.y" /* yacc.c:1646  */
    { _p->onName((yyval),(yyvsp[0]),
                                         Parser::StaticClassExprName);}
#line 11853 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 767:
#line 2778 "hphp.y" /* yacc.c:1646  */
    { _p->onName((yyval),(yyvsp[-1]),
                                         Parser::StaticClassExprName);}
#line 11860 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 768:
#line 2782 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11866 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 769:
#line 2791 "hphp.y" /* yacc.c:1646  */
    { _p->onStaticMember((yyval),(yyvsp[-2]),(yyvsp[0]));}
#line 11872 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 770:
#line 2794 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11878 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 771:
#line 2795 "hphp.y" /* yacc.c:1646  */
    { _p->onName((yyval),(yyvsp[0]),
                                         Parser::StaticClassExprName);}
#line 11885 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 772:
#line 2797 "hphp.y" /* yacc.c:1646  */
    { _p->onName((yyval), (yyvsp[0]),
                                         Parser::StaticClassExprName);}
#line 11892 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 773:
#line 2807 "hphp.y" /* yacc.c:1646  */
    { _p->onStaticMember((yyval),(yyvsp[-2]),(yyvsp[0]));}
#line 11898 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 774:
#line 2811 "hphp.y" /* yacc.c:1646  */
    { _p->onName((yyval),(yyvsp[0]),Parser::StringName);}
#line 11904 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 775:
#line 2812 "hphp.y" /* yacc.c:1646  */
    { _p->onName((yyval),(yyvsp[0]),Parser::StaticName);}
#line 11910 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 776:
#line 2813 "hphp.y" /* yacc.c:1646  */
    { _p->onName((yyval),(yyvsp[0]),Parser::ExprName);}
#line 11916 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 777:
#line 2817 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 11922 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 778:
#line 2818 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11928 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 779:
#line 2819 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 11934 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 780:
#line 2823 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 11940 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 781:
#line 2824 "hphp.y" /* yacc.c:1646  */
    { _p->addEncap((yyval), NULL, (yyvsp[0]), 0);}
#line 11946 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 782:
#line 2825 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 11952 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 783:
#line 2829 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 11958 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 784:
#line 2830 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 11964 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 785:
#line 2834 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_LNUMBER,  (yyvsp[0]));}
#line 11970 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 786:
#line 2835 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_DNUMBER,  (yyvsp[0]));}
#line 11976 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 787:
#line 2836 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_ONUMBER,  (yyvsp[0]));}
#line 11982 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 788:
#line 2837 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING,  (yyvsp[0]));}
#line 11989 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 789:
#line 2839 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_LINE,     (yyvsp[0]));}
#line 11995 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 790:
#line 2840 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_FILE,     (yyvsp[0]));}
#line 12001 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 791:
#line 2841 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_DIR,      (yyvsp[0]));}
#line 12007 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 792:
#line 2842 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_CLASS_C,  (yyvsp[0]));}
#line 12013 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 793:
#line 2843 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_TRAIT_C,  (yyvsp[0]));}
#line 12019 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 794:
#line 2844 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_METHOD_C, (yyvsp[0]));}
#line 12025 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 795:
#line 2845 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_FUNC_C,   (yyvsp[0]));}
#line 12031 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 796:
#line 2846 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_NS_C,  (yyvsp[0]));}
#line 12037 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 797:
#line 2847 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_COMPILER_HALT_OFFSET, (yyvsp[0]));}
#line 12043 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 798:
#line 2850 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyvsp[-1]));}
#line 12049 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 799:
#line 2852 "hphp.y" /* yacc.c:1646  */
    { (yyval).setText(""); _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyval));}
#line 12055 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 800:
#line 2856 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12061 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 801:
#line 2857 "hphp.y" /* yacc.c:1646  */
    { _p->onConstantValue((yyval), (yyvsp[0]));}
#line 12067 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 802:
#line 2859 "hphp.y" /* yacc.c:1646  */
    { _p->onArray((yyval),(yyvsp[-1]),T_ARRAY); }
#line 12073 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 803:
#line 2860 "hphp.y" /* yacc.c:1646  */
    { _p->onArray((yyval),(yyvsp[-1]),T_ARRAY); }
#line 12079 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 804:
#line 2862 "hphp.y" /* yacc.c:1646  */
    { _p->onDArray((yyval),(yyvsp[-1]));}
#line 12085 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 805:
#line 2863 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12091 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 806:
#line 2864 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12097 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 807:
#line 2865 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12103 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 808:
#line 2866 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12109 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 809:
#line 2867 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12115 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 810:
#line 2868 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12121 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 811:
#line 2869 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12127 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 812:
#line 2870 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12133 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 813:
#line 2871 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 12139 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 814:
#line 2873 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_BOOLEAN_OR);}
#line 12145 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 815:
#line 2875 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_BOOLEAN_AND);}
#line 12151 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 816:
#line 2877 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_LOGICAL_OR);}
#line 12157 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 817:
#line 2879 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_LOGICAL_AND);}
#line 12163 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 818:
#line 2881 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_LOGICAL_XOR);}
#line 12169 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 819:
#line 2882 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'|');}
#line 12175 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 820:
#line 2883 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'&');}
#line 12181 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 821:
#line 2884 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'^');}
#line 12187 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 822:
#line 2885 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'.');}
#line 12193 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 823:
#line 2886 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'+');}
#line 12199 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 824:
#line 2887 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'-');}
#line 12205 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 825:
#line 2888 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'*');}
#line 12211 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 826:
#line 2889 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'/');}
#line 12217 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 827:
#line 2890 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'%');}
#line 12223 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 828:
#line 2891 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_SL);}
#line 12229 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 829:
#line 2892 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_SR);}
#line 12235 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 830:
#line 2893 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_POW);}
#line 12241 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 831:
#line 2894 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),'!',1);}
#line 12247 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 832:
#line 2895 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),'~',1);}
#line 12253 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 833:
#line 2896 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),'+',1);}
#line 12259 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 834:
#line 2897 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),'-',1);}
#line 12265 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 835:
#line 2899 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_IS_IDENTICAL);}
#line 12271 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 836:
#line 2901 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_IS_NOT_IDENTICAL);}
#line 12277 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 837:
#line 2903 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_IS_EQUAL);}
#line 12283 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 838:
#line 2905 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_IS_NOT_EQUAL);}
#line 12289 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 839:
#line 2906 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'<');}
#line 12295 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 840:
#line 2908 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),
                                              T_IS_SMALLER_OR_EQUAL);}
#line 12302 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 841:
#line 2910 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),'>');}
#line 12308 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 842:
#line 2913 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),
                                              T_IS_GREATER_OR_EQUAL);}
#line 12315 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 843:
#line 2917 "hphp.y" /* yacc.c:1646  */
    { BEXP((yyval),(yyvsp[-2]),(yyvsp[0]),T_SPACESHIP);}
#line 12321 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 844:
#line 2920 "hphp.y" /* yacc.c:1646  */
    { _p->onQOp((yyval), (yyvsp[-4]), &(yyvsp[-2]), (yyvsp[0]));}
#line 12327 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 845:
#line 2921 "hphp.y" /* yacc.c:1646  */
    { _p->onQOp((yyval), (yyvsp[-3]),   0, (yyvsp[0]));}
#line 12333 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 846:
#line 2925 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval), &(yyvsp[-2]), (yyvsp[0]));}
#line 12339 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 847:
#line 2926 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval), NULL, (yyvsp[0]));}
#line 12345 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 848:
#line 2932 "hphp.y" /* yacc.c:1646  */
    { _p->onClassClass((yyval), (yyvsp[-2]), (yyvsp[0]), 1);}
#line 12351 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 849:
#line 2938 "hphp.y" /* yacc.c:1646  */
    { _p->onClassConst((yyval), (yyvsp[-2]), (yyvsp[0]), 1);}
#line 12357 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 850:
#line 2939 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12363 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 851:
#line 2943 "hphp.y" /* yacc.c:1646  */
    { _p->onConstantValue((yyval), (yyvsp[0]));}
#line 12369 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 852:
#line 2944 "hphp.y" /* yacc.c:1646  */
    { _p->onConstantValue((yyval), (yyvsp[0]));}
#line 12375 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 853:
#line 2945 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12381 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 854:
#line 2946 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12387 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 855:
#line 2947 "hphp.y" /* yacc.c:1646  */
    { _p->onEncapsList((yyval),'"',(yyvsp[-1]));}
#line 12393 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 856:
#line 2948 "hphp.y" /* yacc.c:1646  */
    { _p->onEncapsList((yyval),'\'',(yyvsp[-1]));}
#line 12399 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 857:
#line 2950 "hphp.y" /* yacc.c:1646  */
    { _p->onEncapsList((yyval),T_START_HEREDOC,
                                                          (yyvsp[-1]));}
#line 12406 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 858:
#line 2955 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 12412 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 859:
#line 2956 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 12418 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 860:
#line 2960 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 12424 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 861:
#line 2961 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 12430 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 862:
#line 2964 "hphp.y" /* yacc.c:1646  */
    { only_in_hh_syntax(_p); (yyval).reset();}
#line 12436 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 863:
#line 2965 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 12442 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 864:
#line 2971 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-4]),&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 12448 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 865:
#line 2973 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-2]),  0,&(yyvsp[0]),0);}
#line 12454 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 866:
#line 2975 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 12460 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 867:
#line 2976 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,  0,&(yyvsp[0]),0);}
#line 12466 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 868:
#line 2980 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_LNUMBER,  (yyvsp[0]));}
#line 12472 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 869:
#line 2981 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_DNUMBER,  (yyvsp[0]));}
#line 12478 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 870:
#line 2982 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_ONUMBER,  (yyvsp[0]));}
#line 12484 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 871:
#line 2985 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyvsp[-1]));}
#line 12490 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 872:
#line 2987 "hphp.y" /* yacc.c:1646  */
    { (yyval).setText(""); _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyval));}
#line 12496 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 873:
#line 2990 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval),T_LNUMBER,(yyvsp[0]));}
#line 12502 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 874:
#line 2991 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval),T_DNUMBER,(yyvsp[0]));}
#line 12508 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 875:
#line 2992 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval),T_ONUMBER,(yyvsp[0]));}
#line 12514 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 876:
#line 2993 "hphp.y" /* yacc.c:1646  */
    { constant_ae(_p,(yyval),(yyvsp[0]));}
#line 12520 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 877:
#line 2997 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING,(yyvsp[0]));}
#line 12527 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 878:
#line 3000 "hphp.y" /* yacc.c:1646  */
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING,
                                         (yyvsp[-2]) + (yyvsp[0]));}
#line 12535 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 880:
#line 3007 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12541 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 881:
#line 3008 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12547 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 882:
#line 3011 "hphp.y" /* yacc.c:1646  */
    { HPHP_PARSER_ERROR("User-defined "
                                        "constants are not allowed in "
                                        "user attribute expressions", _p);}
#line 12555 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 883:
#line 3014 "hphp.y" /* yacc.c:1646  */
    { constant_ae(_p,(yyval),(yyvsp[0]));}
#line 12561 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 884:
#line 3015 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),'+',1);}
#line 12567 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 885:
#line 3016 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),'-',1);}
#line 12573 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 886:
#line 3018 "hphp.y" /* yacc.c:1646  */
    { _p->onArray((yyval),(yyvsp[-1]),T_ARRAY);}
#line 12579 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 887:
#line 3019 "hphp.y" /* yacc.c:1646  */
    { _p->onArray((yyval),(yyvsp[-1]),T_ARRAY);}
#line 12585 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 888:
#line 3021 "hphp.y" /* yacc.c:1646  */
    { _p->onDArray((yyval),(yyvsp[-1]));}
#line 12591 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 889:
#line 3022 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12597 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 890:
#line 3023 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12603 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 891:
#line 3024 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12609 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 892:
#line 3025 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12615 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 893:
#line 3026 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12621 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 894:
#line 3027 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12627 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 895:
#line 3032 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval), &(yyvsp[-2]), (yyvsp[0]));}
#line 12633 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 896:
#line 3033 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval), NULL, (yyvsp[0]));}
#line 12639 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 897:
#line 3038 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 12645 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 898:
#line 3039 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 12651 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 899:
#line 3044 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-4]),&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 12657 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 900:
#line 3046 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-2]),  0,&(yyvsp[0]),0);}
#line 12663 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 901:
#line 3048 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 12669 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 902:
#line 3049 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,  0,&(yyvsp[0]),0);}
#line 12675 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 903:
#line 3053 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-2]),  0,&(yyvsp[0]),0);}
#line 12681 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 904:
#line 3054 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,  0,&(yyvsp[0]),0);}
#line 12687 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 905:
#line 3059 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 12693 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 906:
#line 3060 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 12699 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 907:
#line 3065 "hphp.y" /* yacc.c:1646  */
    {  _p->onArrayPair((yyval),&(yyvsp[-4]),&(yyvsp[-2]),&(yyvsp[0]),0); }
#line 12705 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 908:
#line 3068 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-2]),&(yyvsp[0]),0); }
#line 12711 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 909:
#line 3073 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 12717 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 910:
#line 3074 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 12723 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 911:
#line 3077 "hphp.y" /* yacc.c:1646  */
    { _p->onArray((yyval),(yyvsp[-1]),T_ARRAY);}
#line 12729 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 912:
#line 3078 "hphp.y" /* yacc.c:1646  */
    { Token t; t.reset();
                                         _p->onArray((yyval),t,T_ARRAY);}
#line 12736 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 913:
#line 3085 "hphp.y" /* yacc.c:1646  */
    { _p->onUserAttribute((yyval),&(yyvsp[-3]),(yyvsp[-1]),(yyvsp[0]));}
#line 12742 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 914:
#line 3087 "hphp.y" /* yacc.c:1646  */
    { _p->onUserAttribute((yyval),  0,(yyvsp[-1]),(yyvsp[0]));}
#line 12748 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 915:
#line 3090 "hphp.y" /* yacc.c:1646  */
    { only_in_hh_syntax(_p);}
#line 12754 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 916:
#line 3092 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 12760 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 917:
#line 3095 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 12766 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 918:
#line 3098 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12772 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 919:
#line 3099 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 12778 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 920:
#line 3103 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = 0;}
#line 12784 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 921:
#line 3104 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = 1;}
#line 12790 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 922:
#line 3108 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = HPHP::ObjPropNormal;}
#line 12796 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 923:
#line 3109 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = HPHP::ObjPropXhpAttr;}
#line 12802 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 924:
#line 3110 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); (yyval) = HPHP::ObjPropNormal;}
#line 12808 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 925:
#line 3114 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12814 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 926:
#line 3116 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = HPHP::ObjPropNormal;}
#line 12820 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 927:
#line 3124 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12826 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 928:
#line 3125 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 12832 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 929:
#line 3129 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12838 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 930:
#line 3131 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12844 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 931:
#line 3139 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 12850 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 932:
#line 3140 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 12856 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 933:
#line 3145 "hphp.y" /* yacc.c:1646  */
    { _p->onRefDim((yyval), (yyvsp[-1]), (yyvsp[0]));}
#line 12862 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 934:
#line 3146 "hphp.y" /* yacc.c:1646  */
    { _p->onRefDim((yyval), (yyvsp[-1]), (yyvsp[0]));}
#line 12868 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 935:
#line 3148 "hphp.y" /* yacc.c:1646  */
    { _p->onRefDim((yyval), (yyvsp[-1]), (yyvsp[0]));}
#line 12874 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 936:
#line 3153 "hphp.y" /* yacc.c:1646  */
    { _p->onRefDim((yyval), (yyvsp[-1]), (yyvsp[0]));}
#line 12880 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 937:
#line 3155 "hphp.y" /* yacc.c:1646  */
    { _p->onRefDim((yyval), (yyvsp[-2]), (yyvsp[0]));}
#line 12886 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 938:
#line 3161 "hphp.y" /* yacc.c:1646  */
    { _p->onObjectProperty(
                                        (yyval),
                                        (yyvsp[-3]),
                                        !(yyvsp[-1]).num()
                                          ? HPHP::PropAccessType::Normal
                                          : HPHP::PropAccessType::NullSafe,
                                        (yyvsp[0])
                                      );
                                    }
#line 12900 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 939:
#line 3172 "hphp.y" /* yacc.c:1646  */
    { _p->onObjectProperty(
                                        (yyval),
                                        (yyvsp[-3]),
                                        !(yyvsp[-1]).num()
                                          ? HPHP::PropAccessType::Normal
                                          : HPHP::PropAccessType::NullSafe,
                                        (yyvsp[0])
                                      );
                                    }
#line 12914 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 940:
#line 3187 "hphp.y" /* yacc.c:1646  */
    { _p->onObjectProperty(
                                        (yyval),
                                        (yyvsp[-3]),
                                        !(yyvsp[-1]).num()
                                          ? HPHP::PropAccessType::Normal
                                          : HPHP::PropAccessType::NullSafe,
                                        (yyvsp[0])
                                      );
                                    }
#line 12928 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 941:
#line 3199 "hphp.y" /* yacc.c:1646  */
    { _p->onObjectProperty(
                                        (yyval),
                                        (yyvsp[-3]),
                                        !(yyvsp[-1]).num()
                                          ? HPHP::PropAccessType::Normal
                                          : HPHP::PropAccessType::NullSafe,
                                        (yyvsp[0])
                                      );
                                    }
#line 12942 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 942:
#line 3211 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12948 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 943:
#line 3212 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12954 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 944:
#line 3213 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12960 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 945:
#line 3214 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12966 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 946:
#line 3215 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12972 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 947:
#line 3216 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 12978 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 948:
#line 3218 "hphp.y" /* yacc.c:1646  */
    { _p->onObjectProperty(
                                        (yyval),
                                        (yyvsp[-2]),
                                        !(yyvsp[-1]).num()
                                          ? HPHP::PropAccessType::Normal
                                          : HPHP::PropAccessType::NullSafe,
                                        (yyvsp[0])
                                      );
                                    }
#line 12992 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 949:
#line 3235 "hphp.y" /* yacc.c:1646  */
    { _p->onStaticMember((yyval),(yyvsp[-2]),(yyvsp[0]));}
#line 12998 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 950:
#line 3237 "hphp.y" /* yacc.c:1646  */
    { _p->onCall((yyval),1,(yyvsp[-3]),(yyvsp[-1]),NULL);}
#line 13004 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 951:
#line 3239 "hphp.y" /* yacc.c:1646  */
    { _p->onCall((yyval),1,(yyvsp[-3]),(yyvsp[-1]),NULL);}
#line 13010 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 952:
#line 3240 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 13016 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 953:
#line 3244 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 13022 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 954:
#line 3248 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13028 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 955:
#line 3249 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13034 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 956:
#line 3250 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13040 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 957:
#line 3251 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13046 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 958:
#line 3259 "hphp.y" /* yacc.c:1646  */
    { _p->onObjectProperty(
                                        (yyval),
                                        (yyvsp[-2]),
                                        !(yyvsp[-1]).num()
                                          ? HPHP::PropAccessType::Normal
                                          : HPHP::PropAccessType::NullSafe,
                                        (yyvsp[0])
                                      );
                                    }
#line 13060 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 959:
#line 3268 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13066 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 960:
#line 3270 "hphp.y" /* yacc.c:1646  */
    { _p->onCall((yyval),1,(yyvsp[-3]),(yyvsp[-1]),NULL);}
#line 13072 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 961:
#line 3279 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13078 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 962:
#line 3280 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13084 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 963:
#line 3281 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13090 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 964:
#line 3282 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13096 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 965:
#line 3283 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13102 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 966:
#line 3284 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 13108 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 967:
#line 3285 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 13114 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 968:
#line 3287 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13120 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 969:
#line 3288 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13126 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 970:
#line 3291 "hphp.y" /* yacc.c:1646  */
    { _p->onCall((yyval),1,(yyvsp[-3]),(yyvsp[-1]),NULL);}
#line 13132 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 971:
#line 3293 "hphp.y" /* yacc.c:1646  */
    { _p->onCall((yyval),1,(yyvsp[-3]),(yyvsp[-1]),NULL);}
#line 13138 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 972:
#line 3297 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 13144 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 973:
#line 3301 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13150 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 974:
#line 3302 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13156 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 975:
#line 3308 "hphp.y" /* yacc.c:1646  */
    { _p->onObjectMethodCall((yyval),(yyvsp[-6]),(yyvsp[-5]).num(),(yyvsp[-4]),(yyvsp[-1]));}
#line 13162 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 976:
#line 3312 "hphp.y" /* yacc.c:1646  */
    { _p->onObjectMethodCall((yyval),(yyvsp[-7]),(yyvsp[-5]).num(),(yyvsp[-4]),(yyvsp[-1]));}
#line 13168 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 977:
#line 3316 "hphp.y" /* yacc.c:1646  */
    { _p->onObjectMethodCall((yyval),(yyvsp[-7]),(yyvsp[-5]).num(),(yyvsp[-4]),(yyvsp[-1]));}
#line 13174 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 978:
#line 3323 "hphp.y" /* yacc.c:1646  */
    { _p->onCall((yyval),0,(yyvsp[-4]),(yyvsp[-1]),&(yyvsp[-6]));}
#line 13180 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 979:
#line 3332 "hphp.y" /* yacc.c:1646  */
    { _p->onCall((yyval),1,(yyvsp[-3]),(yyvsp[-1]),&(yyvsp[-5]));}
#line 13186 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 980:
#line 3336 "hphp.y" /* yacc.c:1646  */
    { _p->onCall((yyval),1,(yyvsp[-4]),(yyvsp[-1]),&(yyvsp[-7]));}
#line 13192 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 981:
#line 3340 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13198 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 982:
#line 3343 "hphp.y" /* yacc.c:1646  */
    { _p->onIndirectRef((yyval),(yyvsp[-1]),(yyvsp[0]));}
#line 13204 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 983:
#line 3349 "hphp.y" /* yacc.c:1646  */
    { _p->onRefDim((yyval), (yyvsp[-3]), (yyvsp[-1]));}
#line 13210 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 984:
#line 3350 "hphp.y" /* yacc.c:1646  */
    { _p->onRefDim((yyval), (yyvsp[-3]), (yyvsp[-1]));}
#line 13216 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 985:
#line 3351 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13222 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 986:
#line 3355 "hphp.y" /* yacc.c:1646  */
    { _p->onSimpleVariable((yyval), (yyvsp[0]));}
#line 13228 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 987:
#line 3356 "hphp.y" /* yacc.c:1646  */
    { _p->onPipeVariable((yyval));}
#line 13234 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 988:
#line 3357 "hphp.y" /* yacc.c:1646  */
    { _p->onDynamicVariable((yyval), (yyvsp[-1]), 0);}
#line 13240 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 989:
#line 3364 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13246 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 990:
#line 3365 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset();}
#line 13252 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 991:
#line 3370 "hphp.y" /* yacc.c:1646  */
    { (yyval) = 1;}
#line 13258 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 992:
#line 3371 "hphp.y" /* yacc.c:1646  */
    { (yyval)++;}
#line 13264 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 993:
#line 3376 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13270 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 994:
#line 3377 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13276 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 995:
#line 3378 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13282 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 996:
#line 3381 "hphp.y" /* yacc.c:1646  */
    { _p->onObjectProperty(
                                        (yyval),
                                        (yyvsp[-2]),
                                        !(yyvsp[-1]).num()
                                          ? HPHP::PropAccessType::Normal
                                          : HPHP::PropAccessType::NullSafe,
                                        (yyvsp[0])
                                      );
                                    }
#line 13296 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 997:
#line 3392 "hphp.y" /* yacc.c:1646  */
    { _p->onStaticMember((yyval),(yyvsp[-2]),(yyvsp[0]));}
#line 13302 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 998:
#line 3393 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 13308 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1000:
#line 3397 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13314 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1001:
#line 3398 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 13320 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1002:
#line 3401 "hphp.y" /* yacc.c:1646  */
    { _p->onObjectProperty(
                                        (yyval),
                                        (yyvsp[-2]),
                                        !(yyvsp[-1]).num()
                                          ? HPHP::PropAccessType::Normal
                                          : HPHP::PropAccessType::NullSafe,
                                        (yyvsp[0])
                                      );
                                    }
#line 13334 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1003:
#line 3410 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 13340 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1004:
#line 3415 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-3]),&(yyvsp[0]),1);}
#line 13346 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1005:
#line 3416 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 13352 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1006:
#line 3417 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,  0,&(yyvsp[0]),1);}
#line 13358 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1007:
#line 3418 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,  0,&(yyvsp[0]),0);}
#line 13364 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1008:
#line 3421 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-4]),&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 13370 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1009:
#line 3423 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-5]),&(yyvsp[-3]),&(yyvsp[0]),1);}
#line 13376 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1010:
#line 3424 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-3]),  0,&(yyvsp[0]),1);}
#line 13382 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1011:
#line 3425 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-2]),  0,&(yyvsp[0]),0);}
#line 13388 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1012:
#line 3429 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-1]),  0,  0,0);}
#line 13394 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1013:
#line 3431 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,  0,  0,0);}
#line 13400 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1014:
#line 3436 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 13406 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1015:
#line 3437 "hphp.y" /* yacc.c:1646  */
    { _p->onEmptyCollection((yyval));}
#line 13412 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1016:
#line 3441 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-4]),&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 13418 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1017:
#line 3442 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-2]),  0,&(yyvsp[0]),0);}
#line 13424 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1018:
#line 3443 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 13430 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1019:
#line 3444 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,  0,&(yyvsp[0]),0);}
#line 13436 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1020:
#line 3449 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 13442 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1021:
#line 3450 "hphp.y" /* yacc.c:1646  */
    { _p->onEmptyCollection((yyval));}
#line 13448 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1022:
#line 3455 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-4]),&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 13454 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1023:
#line 3457 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),&(yyvsp[-2]),  0,&(yyvsp[0]),0);}
#line 13460 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1024:
#line 3459 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,&(yyvsp[-2]),&(yyvsp[0]),0);}
#line 13466 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1025:
#line 3460 "hphp.y" /* yacc.c:1646  */
    { _p->onArrayPair((yyval),  0,  0,&(yyvsp[0]),0);}
#line 13472 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1026:
#line 3464 "hphp.y" /* yacc.c:1646  */
    { _p->addEncap((yyval), &(yyvsp[-1]), (yyvsp[0]), -1);}
#line 13478 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1027:
#line 3466 "hphp.y" /* yacc.c:1646  */
    { _p->addEncap((yyval), &(yyvsp[-1]), (yyvsp[0]), 0);}
#line 13484 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1028:
#line 3467 "hphp.y" /* yacc.c:1646  */
    { _p->addEncap((yyval), NULL, (yyvsp[0]), -1);}
#line 13490 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1029:
#line 3469 "hphp.y" /* yacc.c:1646  */
    { _p->addEncap((yyval), NULL, (yyvsp[-1]), 0);
                                         _p->addEncap((yyval), &(yyval), (yyvsp[0]), -1); }
#line 13497 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1030:
#line 3474 "hphp.y" /* yacc.c:1646  */
    { _p->onSimpleVariable((yyval), (yyvsp[0]));}
#line 13503 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1031:
#line 3476 "hphp.y" /* yacc.c:1646  */
    { _p->encapRefDim((yyval), (yyvsp[-3]), (yyvsp[-1]));}
#line 13509 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1032:
#line 3478 "hphp.y" /* yacc.c:1646  */
    { _p->encapObjProp(
                                           (yyval),
                                           (yyvsp[-2]),
                                           !(yyvsp[-1]).num()
                                            ? HPHP::PropAccessType::Normal
                                            : HPHP::PropAccessType::NullSafe,
                                           (yyvsp[0])
                                         );
                                       }
#line 13523 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1033:
#line 3488 "hphp.y" /* yacc.c:1646  */
    { _p->onDynamicVariable((yyval), (yyvsp[-1]), 1);}
#line 13529 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1034:
#line 3490 "hphp.y" /* yacc.c:1646  */
    { _p->encapArray((yyval), (yyvsp[-4]), (yyvsp[-2]));}
#line 13535 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1035:
#line 3491 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 13541 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1036:
#line 3494 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = T_STRING;}
#line 13547 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1037:
#line 3495 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = T_NUM_STRING;}
#line 13553 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1038:
#line 3496 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = T_VARIABLE;}
#line 13559 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1039:
#line 3500 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[-1]),T_ISSET,1);}
#line 13565 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1040:
#line 3501 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[-1]),T_EMPTY,1);}
#line 13571 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1041:
#line 3502 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[-1]),'!',1);}
#line 13577 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1042:
#line 3503 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[-1]),'!',1);}
#line 13583 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1043:
#line 3504 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[-1]),'!',1);}
#line 13589 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1044:
#line 3505 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[-1]),'!',1);}
#line 13595 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1045:
#line 3506 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_INCLUDE,1);}
#line 13601 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1046:
#line 3507 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_INCLUDE_ONCE,1);}
#line 13607 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1047:
#line 3508 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[-1]),T_EVAL,1);}
#line 13613 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1048:
#line 3509 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_REQUIRE,1);}
#line 13619 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1049:
#line 3510 "hphp.y" /* yacc.c:1646  */
    { UEXP((yyval),(yyvsp[0]),T_REQUIRE_ONCE,1);}
#line 13625 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1050:
#line 3514 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval), NULL, (yyvsp[0]));}
#line 13631 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1051:
#line 3515 "hphp.y" /* yacc.c:1646  */
    { _p->onExprListElem((yyval), &(yyvsp[-2]), (yyvsp[0]));}
#line 13637 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1052:
#line 3520 "hphp.y" /* yacc.c:1646  */
    { _p->onClassConst((yyval), (yyvsp[-2]), (yyvsp[0]), 0);}
#line 13643 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1053:
#line 3522 "hphp.y" /* yacc.c:1646  */
    { _p->onClassClass((yyval), (yyvsp[-2]), (yyvsp[0]), 0);}
#line 13649 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1056:
#line 3536 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[-3]).setText(_p->nsClassDecl((yyvsp[-3]).text()));
                                         _p->onTypedef((yyval), (yyvsp[-3]), (yyvsp[-1]));
                                         _p->popTypeScope(); }
#line 13657 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1057:
#line 3541 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[-3]).setText(_p->nsClassDecl((yyvsp[-3]).text()));
                                         _p->onTypedef((yyval), (yyvsp[-3]), (yyvsp[-1]), &(yyvsp[-5]));
                                         _p->popTypeScope(); }
#line 13665 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1058:
#line 3545 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[-4]).setText(_p->nsClassDecl((yyvsp[-4]).text()));
                                         _p->onTypedef((yyval), (yyvsp[-4]), (yyvsp[-1]));
                                         _p->popTypeScope(); }
#line 13673 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1059:
#line 3550 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[-4]).setText(_p->nsClassDecl((yyvsp[-4]).text()));
                                         _p->onTypedef((yyval), (yyvsp[-4]), (yyvsp[-1]), &(yyvsp[-6]));
                                         _p->popTypeScope(); }
#line 13681 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1060:
#line 3556 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13687 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1061:
#line 3557 "hphp.y" /* yacc.c:1646  */
    { only_in_hh_syntax(_p); (yyval) = (yyvsp[0]); }
#line 13693 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1062:
#line 3561 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13699 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1063:
#line 3562 "hphp.y" /* yacc.c:1646  */
    { only_in_hh_syntax(_p); (yyval) = (yyvsp[0]); }
#line 13705 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1064:
#line 3568 "hphp.y" /* yacc.c:1646  */
    { _p->pushTypeScope(); (yyval) = (yyvsp[0]); }
#line 13711 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1065:
#line 3572 "hphp.y" /* yacc.c:1646  */
    { _p->pushTypeScope(); (yyval) = (yyvsp[-3]); }
#line 13717 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1066:
#line 3578 "hphp.y" /* yacc.c:1646  */
    { _p->pushTypeScope(); (yyval) = (yyvsp[0]); }
#line 13723 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1067:
#line 3582 "hphp.y" /* yacc.c:1646  */
    { Token t; _p->setTypeVars(t, (yyvsp[-3]));
                                         _p->pushTypeScope(); (yyval) = t; }
#line 13730 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1068:
#line 3589 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 13736 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1069:
#line 3590 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 13742 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1070:
#line 3594 "hphp.y" /* yacc.c:1646  */
    { Token t; t.reset();
                                         _p->onTypeList((yyvsp[0]), t);
                                         (yyval) = (yyvsp[0]); }
#line 13750 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1071:
#line 3597 "hphp.y" /* yacc.c:1646  */
    { _p->onTypeList((yyvsp[-2]), (yyvsp[0]));
                                         (yyval) = (yyvsp[-2]); }
#line 13757 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1072:
#line 3603 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 13763 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1073:
#line 3607 "hphp.y" /* yacc.c:1646  */
    { Token t; t.reset();
                                                        _p->onTypeList((yyvsp[0]), t);
                                                        (yyval) = (yyvsp[0]); }
#line 13771 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1074:
#line 3610 "hphp.y" /* yacc.c:1646  */
    { Token t; t.reset();
                                                        _p->onTypeList((yyvsp[0]), t);
                                                        (yyval) = (yyvsp[0]); }
#line 13779 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1075:
#line 3613 "hphp.y" /* yacc.c:1646  */
    { _p->onTypeList((yyvsp[-3]), (yyvsp[0]));
                                                        (yyval) = (yyvsp[-3]); }
#line 13786 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1076:
#line 3615 "hphp.y" /* yacc.c:1646  */
    { _p->onTypeList((yyvsp[-2]), (yyvsp[0]));
                                                        (yyval) = (yyvsp[-2]); }
#line 13793 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1077:
#line 3617 "hphp.y" /* yacc.c:1646  */
    { _p->onTypeList((yyvsp[-2]), (yyvsp[0]));
                                                        (yyval) = (yyvsp[-2]); }
#line 13800 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1078:
#line 3619 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 13806 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1079:
#line 3624 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]); }
#line 13812 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1080:
#line 3625 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 13818 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1081:
#line 3626 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 13824 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1082:
#line 3627 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 13830 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1089:
#line 3648 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 13836 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1090:
#line 3649 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = 1; }
#line 13842 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1093:
#line 3658 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 13848 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1096:
#line 3669 "hphp.y" /* yacc.c:1646  */
    { _p->addTypeVar((yyvsp[0]).text()); }
#line 13854 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1097:
#line 3671 "hphp.y" /* yacc.c:1646  */
    { _p->addTypeVar((yyvsp[0]).text()); }
#line 13860 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1098:
#line 3675 "hphp.y" /* yacc.c:1646  */
    { _p->addTypeVar((yyvsp[-1]).text()); }
#line 13866 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1099:
#line 3678 "hphp.y" /* yacc.c:1646  */
    { _p->addTypeVar((yyvsp[-1]).text()); }
#line 13872 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1100:
#line 3682 "hphp.y" /* yacc.c:1646  */
    {}
#line 13878 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1101:
#line 3683 "hphp.y" /* yacc.c:1646  */
    {}
#line 13884 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1102:
#line 3684 "hphp.y" /* yacc.c:1646  */
    {}
#line 13890 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1103:
#line 3690 "hphp.y" /* yacc.c:1646  */
    { validate_shape_keyname((yyvsp[-2]), _p);
                                     _p->onTypeAnnotation((yyval), (yyvsp[-2]), (yyvsp[0])); }
#line 13897 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1104:
#line 3695 "hphp.y" /* yacc.c:1646  */
    {
                                     validate_shape_keyname((yyvsp[-2]), _p);
                                     _p->onTypeAnnotation((yyval), (yyvsp[-2]), (yyvsp[0]));
                                     _p->onShapeFieldSpecialization((yyval), '?');
                                   }
#line 13907 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1105:
#line 3704 "hphp.y" /* yacc.c:1646  */
    { _p->onClsCnsShapeField((yyval), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 13913 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1106:
#line 3710 "hphp.y" /* yacc.c:1646  */
    {
                                     _p->onClsCnsShapeField((yyval), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
                                     _p->onShapeFieldSpecialization((yyval), '?');
                                   }
#line 13922 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1107:
#line 3718 "hphp.y" /* yacc.c:1646  */
    { _p->onTypeList((yyval), (yyvsp[0])); }
#line 13928 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1108:
#line 3719 "hphp.y" /* yacc.c:1646  */
    { }
#line 13934 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1109:
#line 3725 "hphp.y" /* yacc.c:1646  */
    { _p->onShape((yyval), (yyvsp[-2]), true); }
#line 13940 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1110:
#line 3727 "hphp.y" /* yacc.c:1646  */
    { _p->onShape((yyval), (yyvsp[-1]), false); }
#line 13946 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1111:
#line 3728 "hphp.y" /* yacc.c:1646  */
    {
                                         Token t;
                                         t.reset();
                                         _p->onShape((yyval), t, true);
                                       }
#line 13956 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1112:
#line 3733 "hphp.y" /* yacc.c:1646  */
    { Token t; t.reset();
                                         _p->onShape((yyval), t, false); }
#line 13963 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1113:
#line 3739 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);
                                        (yyval).setText("HH\\darray"); }
#line 13970 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1114:
#line 3744 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13976 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1115:
#line 3749 "hphp.y" /* yacc.c:1646  */
    { Token t; t.reset();
                                        _p->onTypeAnnotation((yyval), (yyvsp[-2]), t);
                                        _p->onTypeList((yyval), (yyvsp[0])); }
#line 13984 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1116:
#line 3753 "hphp.y" /* yacc.c:1646  */
    { _p->onTypeAnnotation((yyval), (yyvsp[-1]), (yyvsp[0])); }
#line 13990 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1117:
#line 3758 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]);}
#line 13996 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1118:
#line 3760 "hphp.y" /* yacc.c:1646  */
    { _p->onTypeList((yyvsp[-3]), (yyvsp[-1])); (yyval) = (yyvsp[-3]);}
#line 14002 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1119:
#line 3766 "hphp.y" /* yacc.c:1646  */
    { _p->onTypeSpecialization((yyvsp[0]), '?');
                                         (yyval) = (yyvsp[0]); }
#line 14009 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1120:
#line 3768 "hphp.y" /* yacc.c:1646  */
    { only_in_hh_syntax(_p);
                                         _p->onTypeSpecialization((yyvsp[0]), '@');
                                         (yyval) = (yyvsp[0]); }
#line 14017 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1121:
#line 3771 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14023 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1122:
#line 3772 "hphp.y" /* yacc.c:1646  */
    { Token t; t.reset();
                                         (yyvsp[0]).setText("array");
                                         _p->onTypeAnnotation((yyval), (yyvsp[0]), t); }
#line 14031 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1123:
#line 3775 "hphp.y" /* yacc.c:1646  */
    { Token t; t.reset();
                                         (yyvsp[0]).setText("callable");
                                         _p->onTypeAnnotation((yyval), (yyvsp[0]), t); }
#line 14039 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1124:
#line 3778 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14045 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1125:
#line 3781 "hphp.y" /* yacc.c:1646  */
    { only_in_hh_syntax(_p);
                                         _p->onTypeAnnotation((yyval), (yyvsp[-2]), (yyvsp[0]));
                                         _p->onTypeSpecialization((yyval), 'a'); }
#line 14053 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1126:
#line 3784 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[-1]).setText("array");
                                         _p->onTypeAnnotation((yyval), (yyvsp[-1]), (yyvsp[0])); }
#line 14060 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1127:
#line 3786 "hphp.y" /* yacc.c:1646  */
    { (yyvsp[0]).xhpLabel();
                                         Token t; t.reset();
                                         _p->onTypeAnnotation((yyval), (yyvsp[0]), t);
                                         _p->onTypeSpecialization((yyval), 'x'); }
#line 14069 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1128:
#line 3792 "hphp.y" /* yacc.c:1646  */
    { only_in_hh_syntax(_p);
                                        _p->onTypeList((yyvsp[-1]), (yyvsp[-4]));
                                        _p->onTypeAnnotation((yyval), (yyvsp[-6]), (yyvsp[-1]));
                                        _p->onTypeSpecialization((yyval), 'f'); }
#line 14078 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1129:
#line 3798 "hphp.y" /* yacc.c:1646  */
    { only_in_hh_syntax(_p);
                                        _p->onTypeList((yyvsp[-4]), (yyvsp[-2]));
                                        Token t; t.reset(); t.setText("HH\\varray");
                                        _p->onTypeAnnotation((yyval), t, (yyvsp[-4]));
                                        _p->onTypeSpecialization((yyval), 't'); }
#line 14088 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1130:
#line 3806 "hphp.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14094 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;

  case 1131:
#line 3807 "hphp.y" /* yacc.c:1646  */
    { (yyval).reset(); }
#line 14100 "hphp.5.tab.cpp" /* yacc.c:1646  */
    break;


#line 14104 "hphp.5.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, _p, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, _p, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, _p);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, _p);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, _p, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, _p);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, _p);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
  YYSTACK_CLEANUP;
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 3810 "hphp.y" /* yacc.c:1906  */

/* !PHP5_ONLY*/
bool Parser::parseImpl5() {
/* !END */
/* !PHP7_ONLY*/
/* REMOVED */
/* !END */
  return yyparse(this) == 0;
}
