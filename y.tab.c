/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    int yylex();
    extern char *yytext;
    extern int yylineno;
    void yyerror(const char *);
    void skipTokens(int token);

    int error_flag = 0; 


#line 86 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOKEN_INT = 258,               /* TOKEN_INT  */
    TOKEN_CHAR = 259,              /* TOKEN_CHAR  */
    TOKEN_FLOAT = 260,             /* TOKEN_FLOAT  */
    TOKEN_DOUBLE = 261,            /* TOKEN_DOUBLE  */
    TOKEN_VOID = 262,              /* TOKEN_VOID  */
    TOKEN_IF = 263,                /* TOKEN_IF  */
    TOKEN_ELSE = 264,              /* TOKEN_ELSE  */
    TOKEN_DO = 265,                /* TOKEN_DO  */
    TOKEN_WHILE = 266,             /* TOKEN_WHILE  */
    TOKEN_FOR = 267,               /* TOKEN_FOR  */
    TOKEN_SWITCH = 268,            /* TOKEN_SWITCH  */
    TOKEN_CASE = 269,              /* TOKEN_CASE  */
    TOKEN_BREAK = 270,             /* TOKEN_BREAK  */
    TOKEN_MAIN = 271,              /* TOKEN_MAIN  */
    TOKEN_DEFAULT = 272,           /* TOKEN_DEFAULT  */
    TOKEN_INCLUDE = 273,           /* TOKEN_INCLUDE  */
    TOKEN_STR_LITERAL = 274,       /* TOKEN_STR_LITERAL  */
    TOKEN_INC = 275,               /* TOKEN_INC  */
    TOKEN_DEC = 276,               /* TOKEN_DEC  */
    TOKEN_EQ = 277,                /* TOKEN_EQ  */
    TOKEN_NE = 278,                /* TOKEN_NE  */
    TOKEN_LE = 279,                /* TOKEN_LE  */
    TOKEN_GE = 280,                /* TOKEN_GE  */
    TOKEN_AND = 281,               /* TOKEN_AND  */
    TOKEN_OR = 282,                /* TOKEN_OR  */
    TOKEN_NUM = 283,               /* TOKEN_NUM  */
    TOKEN_HEADER = 284,            /* TOKEN_HEADER  */
    TOKEN_ID = 285,                /* TOKEN_ID  */
    TOKEN_CHAR_LITERAL = 286       /* TOKEN_CHAR_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TOKEN_INT 258
#define TOKEN_CHAR 259
#define TOKEN_FLOAT 260
#define TOKEN_DOUBLE 261
#define TOKEN_VOID 262
#define TOKEN_IF 263
#define TOKEN_ELSE 264
#define TOKEN_DO 265
#define TOKEN_WHILE 266
#define TOKEN_FOR 267
#define TOKEN_SWITCH 268
#define TOKEN_CASE 269
#define TOKEN_BREAK 270
#define TOKEN_MAIN 271
#define TOKEN_DEFAULT 272
#define TOKEN_INCLUDE 273
#define TOKEN_STR_LITERAL 274
#define TOKEN_INC 275
#define TOKEN_DEC 276
#define TOKEN_EQ 277
#define TOKEN_NE 278
#define TOKEN_LE 279
#define TOKEN_GE 280
#define TOKEN_AND 281
#define TOKEN_OR 282
#define TOKEN_NUM 283
#define TOKEN_HEADER 284
#define TOKEN_ID 285
#define TOKEN_CHAR_LITERAL 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_INT = 3,                  /* TOKEN_INT  */
  YYSYMBOL_TOKEN_CHAR = 4,                 /* TOKEN_CHAR  */
  YYSYMBOL_TOKEN_FLOAT = 5,                /* TOKEN_FLOAT  */
  YYSYMBOL_TOKEN_DOUBLE = 6,               /* TOKEN_DOUBLE  */
  YYSYMBOL_TOKEN_VOID = 7,                 /* TOKEN_VOID  */
  YYSYMBOL_TOKEN_IF = 8,                   /* TOKEN_IF  */
  YYSYMBOL_TOKEN_ELSE = 9,                 /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_DO = 10,                  /* TOKEN_DO  */
  YYSYMBOL_TOKEN_WHILE = 11,               /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_FOR = 12,                 /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_SWITCH = 13,              /* TOKEN_SWITCH  */
  YYSYMBOL_TOKEN_CASE = 14,                /* TOKEN_CASE  */
  YYSYMBOL_TOKEN_BREAK = 15,               /* TOKEN_BREAK  */
  YYSYMBOL_TOKEN_MAIN = 16,                /* TOKEN_MAIN  */
  YYSYMBOL_TOKEN_DEFAULT = 17,             /* TOKEN_DEFAULT  */
  YYSYMBOL_TOKEN_INCLUDE = 18,             /* TOKEN_INCLUDE  */
  YYSYMBOL_TOKEN_STR_LITERAL = 19,         /* TOKEN_STR_LITERAL  */
  YYSYMBOL_TOKEN_INC = 20,                 /* TOKEN_INC  */
  YYSYMBOL_TOKEN_DEC = 21,                 /* TOKEN_DEC  */
  YYSYMBOL_TOKEN_EQ = 22,                  /* TOKEN_EQ  */
  YYSYMBOL_TOKEN_NE = 23,                  /* TOKEN_NE  */
  YYSYMBOL_TOKEN_LE = 24,                  /* TOKEN_LE  */
  YYSYMBOL_TOKEN_GE = 25,                  /* TOKEN_GE  */
  YYSYMBOL_TOKEN_AND = 26,                 /* TOKEN_AND  */
  YYSYMBOL_TOKEN_OR = 27,                  /* TOKEN_OR  */
  YYSYMBOL_TOKEN_NUM = 28,                 /* TOKEN_NUM  */
  YYSYMBOL_TOKEN_HEADER = 29,              /* TOKEN_HEADER  */
  YYSYMBOL_TOKEN_ID = 30,                  /* TOKEN_ID  */
  YYSYMBOL_TOKEN_CHAR_LITERAL = 31,        /* TOKEN_CHAR_LITERAL  */
  YYSYMBOL_32_ = 32,                       /* '<'  */
  YYSYMBOL_33_ = 33,                       /* '>'  */
  YYSYMBOL_34_ = 34,                       /* ';'  */
  YYSYMBOL_35_ = 35,                       /* ','  */
  YYSYMBOL_36_ = 36,                       /* '['  */
  YYSYMBOL_37_ = 37,                       /* ']'  */
  YYSYMBOL_38_ = 38,                       /* '='  */
  YYSYMBOL_39_ = 39,                       /* '+'  */
  YYSYMBOL_40_ = 40,                       /* '-'  */
  YYSYMBOL_41_ = 41,                       /* '*'  */
  YYSYMBOL_42_ = 42,                       /* '/'  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '!'  */
  YYSYMBOL_46_ = 46,                       /* '{'  */
  YYSYMBOL_47_ = 47,                       /* '}'  */
  YYSYMBOL_48_ = 48,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_START = 50,                     /* START  */
  YYSYMBOL_PROG = 51,                      /* PROG  */
  YYSYMBOL_DECLR = 52,                     /* DECLR  */
  YYSYMBOL_LIST_VAR = 53,                  /* LIST_VAR  */
  YYSYMBOL_LIST_VAR2 = 54,                 /* LIST_VAR2  */
  YYSYMBOL_ARRAY_DECL = 55,                /* ARRAY_DECL  */
  YYSYMBOL_DIMENSIONS = 56,                /* DIMENSIONS  */
  YYSYMBOL_TYPE = 57,                      /* TYPE  */
  YYSYMBOL_ASSGN = 58,                     /* ASSGN  */
  YYSYMBOL_POSTFIX = 59,                   /* POSTFIX  */
  YYSYMBOL_EXPR = 60,                      /* EXPR  */
  YYSYMBOL_RELOP = 61,                     /* RELOP  */
  YYSYMBOL_E = 62,                         /* E  */
  YYSYMBOL_T = 63,                         /* T  */
  YYSYMBOL_F = 64,                         /* F  */
  YYSYMBOL_MAIN = 65,                      /* MAIN  */
  YYSYMBOL_EMPTY_LISTVAR = 66,             /* EMPTY_LISTVAR  */
  YYSYMBOL_STMT = 67,                      /* STMT  */
  YYSYMBOL_SINGLE_STMT = 68,               /* SINGLE_STMT  */
  YYSYMBOL_ELSE = 69,                      /* ELSE  */
  YYSYMBOL_DO = 70,                        /* DO  */
  YYSYMBOL_SWITCH = 71,                    /* SWITCH  */
  YYSYMBOL_CASES = 72,                     /* CASES  */
  YYSYMBOL_CASE = 73,                      /* CASE  */
  YYSYMBOL_BREAK = 74,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 75,                   /* DEFAULT  */
  YYSYMBOL_BLOCK = 76,                     /* BLOCK  */
  YYSYMBOL_WHILE = 77,                     /* WHILE  */
  YYSYMBOL_WHILE_2 = 78,                   /* WHILE_2  */
  YYSYMBOL_COND = 79,                      /* COND  */
  YYSYMBOL_FORLOOP = 80,                   /* FORLOOP  */
  YYSYMBOL_FOR_INIT = 81,                  /* FOR_INIT  */
  YYSYMBOL_FOR_COND = 82,                  /* FOR_COND  */
  YYSYMBOL_FOR_UPDATE = 83                 /* FOR_UPDATE  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   238

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,     2,     2,     2,     2,     2,
      43,    44,    41,    39,    35,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    34,
      32,    38,    33,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    22,    22,    24,    25,    26,    27,    28,    29,    31,
      33,    34,    36,    37,    38,    40,    42,    42,    44,    45,
      46,    47,    48,    50,    52,    52,    54,    54,    56,    56,
      56,    56,    56,    56,    56,    56,    58,    59,    60,    62,
      63,    64,    66,    66,    66,    66,    66,    66,    66,    68,
      70,    70,    72,    73,    74,    76,    77,    78,    79,    80,
      81,    82,    83,    85,    85,    87,    89,    91,    92,    94,
      96,    96,    98,   100,   102,   104,   104,   104,   106,   108,
     110,   111,   113,   115,   115,   115
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_INT",
  "TOKEN_CHAR", "TOKEN_FLOAT", "TOKEN_DOUBLE", "TOKEN_VOID", "TOKEN_IF",
  "TOKEN_ELSE", "TOKEN_DO", "TOKEN_WHILE", "TOKEN_FOR", "TOKEN_SWITCH",
  "TOKEN_CASE", "TOKEN_BREAK", "TOKEN_MAIN", "TOKEN_DEFAULT",
  "TOKEN_INCLUDE", "TOKEN_STR_LITERAL", "TOKEN_INC", "TOKEN_DEC",
  "TOKEN_EQ", "TOKEN_NE", "TOKEN_LE", "TOKEN_GE", "TOKEN_AND", "TOKEN_OR",
  "TOKEN_NUM", "TOKEN_HEADER", "TOKEN_ID", "TOKEN_CHAR_LITERAL", "'<'",
  "'>'", "';'", "','", "'['", "']'", "'='", "'+'", "'-'", "'*'", "'/'",
  "'('", "')'", "'!'", "'{'", "'}'", "':'", "$accept", "START", "PROG",
  "DECLR", "LIST_VAR", "LIST_VAR2", "ARRAY_DECL", "DIMENSIONS", "TYPE",
  "ASSGN", "POSTFIX", "EXPR", "RELOP", "E", "T", "F", "MAIN",
  "EMPTY_LISTVAR", "STMT", "SINGLE_STMT", "ELSE", "DO", "SWITCH", "CASES",
  "CASE", "BREAK", "DEFAULT", "BLOCK", "WHILE", "WHILE_2", "COND",
  "FORLOOP", "FOR_INIT", "FOR_COND", "FOR_UPDATE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-9)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      64,   -27,  -117,  -117,  -117,  -117,  -117,   -21,   -15,    29,
    -117,     4,    -8,    10,    64,  -117,    31,   142,  -117,    64,
      23,    11,    40,  -117,  -117,  -117,    64,  -117,    43,  -117,
    -117,  -117,    30,  -117,   142,    48,    49,   205,    15,    16,
    -117,  -117,    53,    57,  -117,    53,  -117,    64,  -117,   166,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
     142,   142,   142,   142,   142,    40,    44,    50,  -117,  -117,
    -117,    15,    16,    16,  -117,  -117,    45,    54,   109,  -117,
     142,    46,    52,    58,    59,    21,   109,    71,    53,    74,
     192,    62,   109,  -117,  -117,   109,  -117,  -117,   205,   109,
      82,   142,    93,   142,    63,  -117,  -117,  -117,  -117,  -117,
    -117,   102,    81,    83,  -117,  -117,    91,   179,  -117,   109,
    -117,   142,   138,   142,    80,  -117,    84,   109,  -117,  -117,
    -117,    97,    22,    99,    87,   142,   107,    88,   100,    22,
    -117,  -117,  -117,   205,    -9,    90,   109,  -117,  -117,   142,
     138,   109,   141,   205,  -117,   141,   119,  -117,  -117,  -117
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    18,    20,    19,    21,    22,     0,     0,     0,
       2,     0,     0,     0,     0,     7,     0,     0,     1,     0,
       0,    14,     9,    11,    13,    12,     0,     4,     0,    24,
      25,    45,    47,    46,     0,     0,     0,    23,    27,    38,
      41,     5,    51,     0,    15,     0,     6,     0,    44,     0,
      48,    43,    30,    32,    33,    31,    34,    35,    28,    29,
       0,     0,     0,     0,     0,    50,     0,     0,    10,     3,
      42,    26,    36,    37,    39,    40,     0,    17,    54,    16,
       0,     0,     0,     0,     0,    47,    54,     0,     0,     0,
       0,     0,    54,    62,    61,    54,    59,    60,    78,    54,
       0,     0,    51,     0,     0,    55,    56,    57,    49,    52,
      53,    64,     0,     0,    80,    81,     0,     0,    73,    54,
      58,     0,    77,     0,     0,    63,     0,    54,    76,    74,
      82,     0,     0,     0,     0,    85,     0,     0,     0,     0,
      68,    65,    75,    84,     0,     0,    54,    66,    67,     0,
      77,    54,    71,    83,    79,    71,     0,    72,    69,    70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -117,  -117,   -10,     5,   -40,   112,  -117,    94,    14,     1,
     -29,   -17,  -117,   101,    12,    17,  -117,    65,   -74,  -116,
    -117,  -117,  -117,    25,  -117,    19,  -117,    79,  -117,    26,
     -91,  -117,  -117,  -117,  -117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     9,    10,    87,    22,    23,    24,    44,    88,    89,
      36,    90,    60,    38,    39,    40,    14,    66,    91,    92,
     120,    93,    94,   138,   139,   157,   140,    95,    96,   129,
      99,    97,   116,   131,   144
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    13,    65,    48,    27,    11,   128,    15,    20,    41,
     113,    16,   104,    25,    12,    13,    46,    49,   109,    11,
      13,   110,    21,    17,    11,   111,   149,    13,    12,    18,
     126,    11,   130,    12,   128,   150,   136,    69,    19,   137,
      12,    29,    30,    25,    26,   125,    25,    43,    13,    17,
      29,    30,    11,   134,    61,    62,    48,    63,    64,    17,
      28,    12,    65,    98,    -8,     1,    42,     2,     3,     4,
       5,     6,   152,    72,    73,    45,    47,   155,    50,    51,
      74,    75,     7,    21,    98,    67,   117,    77,    76,    25,
      43,    78,    86,   112,     8,   101,     2,     3,     4,     5,
       6,   102,   103,    25,    98,   105,    98,   114,   106,   108,
     118,   119,     2,     3,     4,     5,     6,    80,   143,    81,
      82,    83,    84,    21,   121,   123,   132,   122,   133,    29,
      30,   135,   153,   141,   142,   145,   146,    31,   151,    85,
      33,     2,     3,     4,     5,     6,    80,   147,    81,    82,
      83,    84,    34,   159,    35,    86,   156,    68,    29,    30,
     100,    71,    29,    30,   148,     0,    31,   115,    85,    33,
      31,    79,    32,    33,   158,     0,   154,     0,     0,     0,
       0,    34,     0,    35,   127,    34,     0,    35,    52,    53,
      54,    55,    56,    57,     0,     0,     0,     0,    58,    59,
       0,    52,    53,    54,    55,    56,    57,     0,     0,     0,
      70,    58,    59,     0,    52,    53,    54,    55,    56,    57,
       0,     0,     0,   124,    58,    59,   107,    52,    53,    54,
      55,    56,    57,     0,     0,     0,     0,    58,    59
};

static const yytype_int16 yycheck[] =
{
      17,     0,    42,    32,    14,     0,   122,    34,    16,    19,
     101,    32,    86,    12,     0,    14,    26,    34,    92,    14,
      19,    95,    30,    38,    19,    99,    35,    26,    14,     0,
     121,    26,   123,    19,   150,    44,    14,    47,    34,    17,
      26,    20,    21,    42,    34,   119,    45,    36,    47,    38,
      20,    21,    47,   127,    39,    40,    85,    41,    42,    38,
      29,    47,   102,    80,     0,     1,    43,     3,     4,     5,
       6,     7,   146,    61,    62,    35,    33,   151,    30,    30,
      63,    64,    18,    30,   101,    28,   103,    37,    44,    88,
      36,    46,    46,    11,    30,    43,     3,     4,     5,     6,
       7,    43,    43,   102,   121,    34,   123,   102,    34,    47,
      47,     9,     3,     4,     5,     6,     7,     8,   135,    10,
      11,    12,    13,    30,    43,    34,    46,    44,    44,    20,
      21,    34,   149,    34,    47,    28,    48,    28,    48,    30,
      31,     3,     4,     5,     6,     7,     8,    47,    10,    11,
      12,    13,    43,    34,    45,    46,    15,    45,    20,    21,
      81,    60,    20,    21,   139,    -1,    28,   102,    30,    31,
      28,    77,    30,    31,   155,    -1,   150,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    43,    -1,    45,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    32,    33,
      -1,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      44,    32,    33,    -1,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    44,    32,    33,    34,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    32,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,    18,    30,    50,
      51,    52,    57,    58,    65,    34,    32,    38,     0,    34,
      16,    30,    53,    54,    55,    58,    34,    51,    29,    20,
      21,    28,    30,    31,    43,    45,    59,    60,    62,    63,
      64,    51,    43,    36,    56,    35,    51,    33,    59,    60,
      30,    30,    22,    23,    24,    25,    26,    27,    32,    33,
      61,    39,    40,    41,    42,    53,    66,    28,    54,    51,
      44,    62,    63,    63,    64,    64,    44,    37,    46,    56,
       8,    10,    11,    12,    13,    30,    46,    52,    57,    58,
      60,    67,    68,    70,    71,    76,    77,    80,    60,    79,
      76,    43,    43,    43,    67,    34,    34,    34,    47,    67,
      67,    67,    11,    79,    52,    66,    81,    60,    47,     9,
      69,    43,    44,    34,    44,    67,    79,    46,    68,    78,
      79,    82,    46,    44,    67,    34,    14,    17,    72,    73,
      75,    34,    47,    60,    83,    28,    48,    47,    72,    35,
      44,    48,    67,    60,    78,    67,    15,    74,    74,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    51,    51,    51,    52,
      53,    53,    54,    54,    54,    55,    56,    56,    57,    57,
      57,    57,    57,    58,    59,    59,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    62,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    65,
      66,    66,    67,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    70,    71,    72,    72,    73,
      74,    74,    75,    76,    77,    78,    78,    78,    79,    80,
      81,    81,    82,    83,    83,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     2,     3,     3,     2,     0,     2,
       3,     1,     1,     1,     1,     2,     4,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     1,     3,     2,     2,     1,     1,     1,     2,     8,
       1,     0,     2,     2,     0,     2,     2,     2,     4,     1,
       1,     1,     1,     2,     0,     7,     7,     2,     1,     5,
       2,     0,     4,     3,     5,     3,     1,     0,     1,     9,
       1,     1,     1,     3,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1378 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 121 "parser.y"


void yyerror(const char *s){
    fflush(stdout);
    fprintf(stderr, "Error at line %d: %s @token %s\n", yylineno, s, yytext); // Print line number
    error_flag = 1; // Set syntax error flag
   skipTokens(';'); // Skip tokens until reaching a point where parsing can resume
}

void skipTokens(int token) {
    int next_token;
    do {
        next_token = yylex();
    } while (next_token != 0 && next_token != token);
    if (next_token!=0){
        yyparse();
    }
}

int main() {
    yylineno = 1; // Initialize yylineno
    yyparse();
    if (!error_flag) {
        printf("Valid Syntax\n");
    }
    return 0;
}
