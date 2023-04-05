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
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "tree.h"

extern int yylex();
extern int yylineno;

void yyerror(const char *msg) {
    fprintf(stderr, "Error on line %d: %s\n", yylineno, msg);
}

#define MAX_LENGTH 50

#line 89 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
    YYSYMBOL_YYEMPTY = -2,
    YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
    YYSYMBOL_YYerror = 1,                    /* error  */
    YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
    YYSYMBOL_BOOL = 3,                       /* BOOL  */
    YYSYMBOL_INT = 4,                        /* INT  */
    YYSYMBOL_DOUBLE = 5,                     /* DOUBLE  */
    YYSYMBOL_STRING = 6,                     /* STRING  */
    YYSYMBOL_NAME = 7,                       /* NAME  */
    YYSYMBOL_L_PARENTHESIS = 8,              /* L_PARENTHESIS  */
    YYSYMBOL_R_PARENTHESIS = 9,              /* R_PARENTHESIS  */
    YYSYMBOL_L_BRACE = 10,                   /* L_BRACE  */
    YYSYMBOL_R_BRACE = 11,                   /* R_BRACE  */
    YYSYMBOL_L_BRACKET = 12,                 /* L_BRACKET  */
    YYSYMBOL_R_BRACKET = 13,                 /* R_BRACKET  */
    YYSYMBOL_COMMA = 14,                     /* COMMA  */
    YYSYMBOL_COLON = 15,                     /* COLON  */
    YYSYMBOL_COMPARE_OP = 16,                /* COMPARE_OP  */
    YYSYMBOL_LIKE_OP = 17,                   /* LIKE_OP  */
    YYSYMBOL_LOGICAL_BOP = 18,               /* LOGICAL_BOP  */
    YYSYMBOL_LOGICAL_UOP = 19,               /* LOGICAL_UOP  */
    YYSYMBOL_SELECT = 20,                    /* SELECT  */
    YYSYMBOL_INSERT = 21,                    /* INSERT  */
    YYSYMBOL_UPDATE = 22,                    /* UPDATE  */
    YYSYMBOL_DELETE = 23,                    /* DELETE  */
    YYSYMBOL_VALUES = 24,                    /* VALUES  */
    YYSYMBOL_FILTER = 25,                    /* FILTER  */
    YYSYMBOL_EXIT = 26,                      /* EXIT  */
    YYSYMBOL_YYACCEPT = 27,                  /* $accept  */
    YYSYMBOL_init = 28,                      /* init  */
    YYSYMBOL_query = 29,                     /* query  */
    YYSYMBOL_values = 30,                    /* values  */
    YYSYMBOL_element = 31,                   /* element  */
    YYSYMBOL_key = 32,                       /* key  */
    YYSYMBOL_value = 33,                     /* value  */
    YYSYMBOL_filter = 34,                    /* filter  */
    YYSYMBOL_operation = 35,                 /* operation  */
    YYSYMBOL_compare_op = 36,                /* compare_op  */
    YYSYMBOL_like_op = 37,                   /* like_op  */
    YYSYMBOL_logical_op = 38,                /* logical_op  */
    YYSYMBOL_select = 39,                    /* select  */
    YYSYMBOL_insert = 40,                    /* insert  */
    YYSYMBOL_update = 41,                    /* update  */
    YYSYMBOL_delete = 42,                    /* delete  */
    YYSYMBOL_select_next = 43,               /* select_next  */
    YYSYMBOL_insert_or_select_next = 44,     /* insert_or_select_next  */
    YYSYMBOL_insert_next = 45,               /* insert_next  */
    YYSYMBOL_update_next = 46,               /* update_next  */
    YYSYMBOL_select_object = 47,             /* select_object  */
    YYSYMBOL_mutate_object = 48,             /* mutate_object  */
    YYSYMBOL_schema_name = 49                /* schema_name  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   118

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  46
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  116

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   281


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
                25,    26
        };

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    85,    85,    87,    88,    89,    90,    92,    94,    95,
      97,    99,   100,   101,   102,   104,   106,   107,   108,   110,
     111,   113,   114,   116,   117,   119,   121,   123,   125,   127,
     128,   129,   131,   132,   133,   135,   136,   137,   139,   140,
     141,   142,   144,   145,   147,   148,   150
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
  "\"end of file\"", "error", "\"invalid token\"", "BOOL", "INT",
  "DOUBLE", "STRING", "NAME", "L_PARENTHESIS", "R_PARENTHESIS", "L_BRACE",
  "R_BRACE", "L_BRACKET", "R_BRACKET", "COMMA", "COLON", "COMPARE_OP",
  "LIKE_OP", "LOGICAL_BOP", "LOGICAL_UOP", "SELECT", "INSERT", "UPDATE",
  "DELETE", "VALUES", "FILTER", "EXIT", "$accept", "init", "query",
  "values", "element", "key", "value", "filter", "operation", "compare_op",
  "like_op", "logical_op", "select", "insert", "update", "delete",
  "select_next", "insert_or_select_next", "insert_next", "update_next",
  "select_object", "mutate_object", "schema_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
        {
                27,    66,    69,    70,    71,    14,   -79,   -79,   -79,   -79,
                -79,    75,    75,    75,    75,   -79,   -79,    12,    73,    76,
                26,   -79,    77,    78,    81,    44,    80,    82,    45,   -79,
                75,    75,    60,   -79,    75,    75,    75,    75,    53,   -79,
                75,    75,    75,   -79,   -79,    46,    79,    84,   -79,   -79,
                83,    50,    51,    85,    -1,   -79,    52,    56,   -79,    -7,
                -79,    62,   -79,   -79,    86,   -79,    60,   -79,   -79,    87,
                88,    89,    91,   -79,   -79,   -79,   -79,    92,    94,    97,
                97,    -7,    -7,    97,    55,   -79,   -79,    93,    95,    96,
                99,    90,   -79,    92,    39,    68,    -7,   -79,    48,   -79,
                -79,   -79,   -79,   -79,   102,   103,   104,   105,   106,   107,
                -79,   -79,   -79,   -79,   -79,   -79
        };

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
        {
                0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
                6,     0,     0,     0,     0,     1,    46,     0,    29,    42,
                0,    32,     0,    35,    42,     0,     0,    38,     0,    25,
                0,     0,     0,    26,     0,     0,     0,     0,     0,    27,
                0,     0,     0,    28,    31,     0,     0,     0,    34,    37,
                0,     0,     0,     0,     0,    41,     0,     0,    30,     0,
                43,     0,    33,    36,     0,    44,     0,    40,    39,     0,
                0,     0,     0,    15,    16,    17,    18,     0,     0,     0,
                0,     0,     0,     0,     0,    45,    10,     0,     0,     0,
                0,     0,     7,     0,     0,     0,     0,    23,     0,     9,
                11,    12,    13,    14,     0,     0,     0,     0,     0,     0,
                20,    19,    21,    22,    24,     8
        };

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
        {
                -79,   -79,   -79,   -79,     8,   -78,    18,    40,   -75,   -79,
                -79,   -79,   -79,   -79,   -79,   -79,   -11,     2,   -10,    31,
                -12,    -9,     4
        };

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
        {
                0,     5,     6,    54,    84,    87,   105,    47,    73,    74,
                75,    76,     7,     8,     9,    10,    17,    20,    21,    25,
                18,    23,    24
        };

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
        {
                22,    26,    88,    28,    27,    91,    89,    90,    65,    69,
                70,    71,    72,    66,    15,    19,   104,   107,    19,    44,
                45,   108,    22,    29,    22,    49,    30,    52,    26,    26,
                26,    27,    27,    27,    19,    19,    48,    33,    51,    50,
                34,    50,   100,   101,   102,   103,    86,     1,     2,     3,
                4,   100,   101,   102,   103,    39,    43,    58,    40,    30,
                30,    62,    63,    67,    34,    35,    40,    68,    92,    93,
                40,    55,    56,    57,   106,    86,    11,    53,    46,    12,
                13,    14,    16,    31,    32,    46,    53,    36,    37,    38,
                41,    61,    42,    60,    59,    79,    80,    81,    77,    82,
                64,    99,    83,    85,    86,    98,    78,    94,    97,    95,
                96,   110,   111,   112,   113,   114,   109,     0,   115
        };

static const yytype_int8 yycheck[] =
        {
                12,    13,    80,    14,    13,    83,    81,    82,     9,    16,
                17,    18,    19,    14,     0,    11,    94,    95,    14,    30,
                31,    96,    34,    11,    36,    35,    14,    37,    40,    41,
                42,    40,    41,    42,    30,    31,    34,    11,    36,    35,
                14,    37,     3,     4,     5,     6,     7,    20,    21,    22,
                23,     3,     4,     5,     6,    11,    11,    11,    14,    14,
                14,    11,    11,    11,    14,    14,    14,    11,    13,    14,
                14,    40,    41,    42,     6,     7,    10,    24,    25,    10,
                10,    10,     7,    10,     8,    25,    24,    10,    10,     8,
                10,     8,    10,     9,    15,     8,     8,     8,    12,     8,
                15,    93,    10,     9,     7,    15,    66,    14,     9,    14,
                14,     9,     9,     9,     9,     9,    98,    -1,    11
        };

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
        {
                0,    20,    21,    22,    23,    28,    29,    39,    40,    41,
                42,    10,    10,    10,    10,     0,     7,    43,    47,    49,
                44,    45,    47,    48,    49,    46,    47,    48,    43,    11,
                14,    10,     8,    11,    14,    14,    10,    10,     8,    11,
                14,    10,    10,    11,    43,    43,    25,    34,    44,    45,
                49,    44,    45,    24,    30,    46,    46,    46,    11,    15,
                9,     8,    11,    11,    15,     9,    14,    11,    11,    16,
                17,    18,    19,    35,    36,    37,    38,    12,    34,     8,
                8,     8,     8,    10,    31,     9,     7,    32,    32,    35,
                35,    32,    13,    14,    14,    14,    14,     9,    15,    31,
                3,     4,     5,     6,    32,    33,     6,    32,    35,    33,
                9,     9,     9,     9,     9,    11
        };

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
        {
                0,    27,    28,    29,    29,    29,    29,    30,    31,    31,
                32,    33,    33,    33,    33,    34,    35,    35,    35,    36,
                36,    37,    37,    38,    38,    39,    40,    41,    42,    43,
                43,    43,    44,    44,    44,    45,    45,    45,    46,    46,
                46,    46,    47,    47,    48,    48,    49
        };

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
        {
                0,     2,     1,     1,     1,     1,     1,     5,     5,     3,
                1,     1,     1,     1,     1,     3,     1,     1,     1,     6,
                6,     6,     6,     4,     6,     4,     4,     4,     4,     1,
                4,     3,     1,     4,     3,     1,     4,     3,     1,     4,
                4,     3,     1,     4,     4,     6,     1
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
        case 2: /* init: query  */
#line 85 "parser.y"
        { print_node((yyvsp[0].node), 0); delete_node((yyvsp[0].node)); YYACCEPT; }
#line 1192 "parser.tab.c"
            break;

        case 3: /* query: select  */
#line 87 "parser.y"
        { (yyval.node) = (yyvsp[0].node); }
#line 1198 "parser.tab.c"
            break;

        case 4: /* query: insert  */
#line 88 "parser.y"
        { (yyval.node) = (yyvsp[0].node); }
#line 1204 "parser.tab.c"
            break;

        case 5: /* query: update  */
#line 89 "parser.y"
        { (yyval.node) = (yyvsp[0].node); }
#line 1210 "parser.tab.c"
            break;

        case 6: /* query: delete  */
#line 90 "parser.y"
        { (yyval.node) = (yyvsp[0].node); }
#line 1216 "parser.tab.c"
            break;

        case 7: /* values: VALUES COLON L_BRACKET element R_BRACKET  */
#line 92 "parser.y"
        { (yyval.node) = create_node_values((yyvsp[-1].node)); }
#line 1222 "parser.tab.c"
            break;

        case 8: /* element: L_BRACE key COLON value R_BRACE  */
#line 94 "parser.y"
        { (yyval.node) = create_node_set_element(create_node_element((yyvsp[-3].node), (yyvsp[-1].node))); }
#line 1228 "parser.tab.c"
            break;

        case 9: /* element: element COMMA element  */
#line 95 "parser.y"
        { set_next_element_to_set((yyvsp[-2].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-2].node); }
#line 1234 "parser.tab.c"
            break;

        case 10: /* key: NAME  */
#line 97 "parser.y"
        { if(strlen((yyvsp[0].str_val)) > MAX_LENGTH) { yyerror("key is too long"); YYABORT; } (yyval.node) = create_node_key((yyvsp[0].str_val)); }
#line 1240 "parser.tab.c"
            break;

        case 11: /* value: BOOL  */
#line 99 "parser.y"
        { (yyval.node) = create_node_with_boolean_value((yyvsp[0].bool_val)); }
#line 1246 "parser.tab.c"
            break;

        case 12: /* value: INT  */
#line 100 "parser.y"
        { (yyval.node) = create_node_with_int_value((yyvsp[0].int_val)); }
#line 1252 "parser.tab.c"
            break;

        case 13: /* value: DOUBLE  */
#line 101 "parser.y"
        { (yyval.node) = create_node_with_double_value((yyvsp[0].double_val)); }
#line 1258 "parser.tab.c"
            break;

        case 14: /* value: STRING  */
#line 102 "parser.y"
        { (yyval.node) = create_node_with_string_value((yyvsp[0].str_val)); }
#line 1264 "parser.tab.c"
            break;

        case 15: /* filter: FILTER COLON operation  */
#line 104 "parser.y"
        { (yyval.node) = create_node_filter((yyvsp[0].node)); }
#line 1270 "parser.tab.c"
            break;

        case 16: /* operation: compare_op  */
#line 106 "parser.y"
        { (yyval.node) = (yyvsp[0].node); }
#line 1276 "parser.tab.c"
            break;

        case 17: /* operation: like_op  */
#line 107 "parser.y"
        { (yyval.node) = (yyvsp[0].node); }
#line 1282 "parser.tab.c"
            break;

        case 18: /* operation: logical_op  */
#line 108 "parser.y"
        { (yyval.node) = (yyvsp[0].node); }
#line 1288 "parser.tab.c"
            break;

        case 19: /* compare_op: COMPARE_OP L_PARENTHESIS key COMMA value R_PARENTHESIS  */
#line 110 "parser.y"
        { (yyval.node) = create_node_operation((yyvsp[-5].op_type), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1294 "parser.tab.c"
            break;

        case 20: /* compare_op: COMPARE_OP L_PARENTHESIS key COMMA key R_PARENTHESIS  */
#line 111 "parser.y"
        { (yyval.node) = create_node_operation((yyvsp[-5].op_type), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1300 "parser.tab.c"
            break;

        case 21: /* like_op: LIKE_OP L_PARENTHESIS key COMMA STRING R_PARENTHESIS  */
#line 113 "parser.y"
        { (yyval.node) = create_node_operation((yyvsp[-5].op_type), (yyvsp[-3].node), create_node_with_string_value((yyvsp[-1].str_val))); }
#line 1306 "parser.tab.c"
            break;

        case 22: /* like_op: LIKE_OP L_PARENTHESIS key COMMA key R_PARENTHESIS  */
#line 114 "parser.y"
        { (yyval.node) = create_node_operation((yyvsp[-5].op_type), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1312 "parser.tab.c"
            break;

        case 23: /* logical_op: LOGICAL_UOP L_PARENTHESIS operation R_PARENTHESIS  */
#line 116 "parser.y"
        { (yyval.node) = create_node_operation((yyvsp[-3].op_type), (yyvsp[-1].node), NULL); }
#line 1318 "parser.tab.c"
            break;

        case 24: /* logical_op: LOGICAL_BOP L_PARENTHESIS operation COMMA operation R_PARENTHESIS  */
#line 117 "parser.y"
        { (yyval.node) = create_node_operation((yyvsp[-5].op_type), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1324 "parser.tab.c"
            break;

        case 25: /* select: SELECT L_BRACE select_next R_BRACE  */
#line 119 "parser.y"
        { (yyval.node) = create_node_query(SELECT_QUERY_NODE, NULL, (yyvsp[-1].node)); }
#line 1330 "parser.tab.c"
            break;

        case 26: /* insert: INSERT L_BRACE insert_or_select_next R_BRACE  */
#line 121 "parser.y"
        { (yyval.node) = create_node_query(INSERT_QUERY_NODE, NULL, (yyvsp[-1].node)); }
#line 1336 "parser.tab.c"
            break;

        case 27: /* update: UPDATE L_BRACE update_next R_BRACE  */
#line 123 "parser.y"
        { (yyval.node) = create_node_query(UPDATE_QUERY_NODE, NULL, (yyvsp[-1].node)); }
#line 1342 "parser.tab.c"
            break;

        case 28: /* delete: DELETE L_BRACE select_next R_BRACE  */
#line 125 "parser.y"
        { (yyval.node) = create_node_query(DELETE_QUERY_NODE, NULL, (yyvsp[-1].node)); }
#line 1348 "parser.tab.c"
            break;

        case 29: /* select_next: select_object  */
#line 127 "parser.y"
        { (yyval.node) = create_node_set_query(create_node_query(NESTED_QUERY_NODE, (yyvsp[0].node), NULL)); }
#line 1354 "parser.tab.c"
            break;

        case 30: /* select_next: select_object L_BRACE select_next R_BRACE  */
#line 128 "parser.y"
        { (yyval.node) = create_node_set_query(create_node_query(NESTED_QUERY_NODE, (yyvsp[-3].node), (yyvsp[-1].node))); }
#line 1360 "parser.tab.c"
            break;

        case 31: /* select_next: select_next COMMA select_next  */
#line 129 "parser.y"
        { set_next_query_to_set((yyvsp[-2].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-2].node); }
#line 1366 "parser.tab.c"
            break;

        case 32: /* insert_or_select_next: insert_next  */
#line 131 "parser.y"
        { (yyval.node) = (yyvsp[0].node); }
#line 1372 "parser.tab.c"
            break;

        case 33: /* insert_or_select_next: select_object L_BRACE insert_or_select_next R_BRACE  */
#line 132 "parser.y"
        { (yyval.node) = create_node_set_query(create_node_query(NESTED_QUERY_NODE, (yyvsp[-3].node), (yyvsp[-1].node))); }
#line 1378 "parser.tab.c"
            break;

        case 34: /* insert_or_select_next: insert_or_select_next COMMA insert_or_select_next  */
#line 133 "parser.y"
        { set_next_query_to_set((yyvsp[-2].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-2].node); }
#line 1384 "parser.tab.c"
            break;

        case 35: /* insert_next: mutate_object  */
#line 135 "parser.y"
        { (yyval.node) = create_node_set_query(create_node_query(NESTED_QUERY_NODE, (yyvsp[0].node), NULL)); }
#line 1390 "parser.tab.c"
            break;

        case 36: /* insert_next: mutate_object L_BRACE insert_next R_BRACE  */
#line 136 "parser.y"
        { (yyval.node) = create_node_set_query(create_node_query(NESTED_QUERY_NODE, (yyvsp[-3].node), (yyvsp[-1].node))); }
#line 1396 "parser.tab.c"
            break;

        case 37: /* insert_next: insert_next COMMA insert_next  */
#line 137 "parser.y"
        { set_next_query_to_set((yyvsp[-2].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-2].node); }
#line 1402 "parser.tab.c"
            break;

        case 38: /* update_next: mutate_object  */
#line 139 "parser.y"
        { (yyval.node) = create_node_set_query(create_node_query(NESTED_QUERY_NODE, (yyvsp[0].node), NULL)); }
#line 1408 "parser.tab.c"
            break;

        case 39: /* update_next: mutate_object L_BRACE update_next R_BRACE  */
#line 140 "parser.y"
        { (yyval.node) = create_node_set_query(create_node_query(NESTED_QUERY_NODE, (yyvsp[-3].node), (yyvsp[-1].node))); }
#line 1414 "parser.tab.c"
            break;

        case 40: /* update_next: select_object L_BRACE update_next R_BRACE  */
#line 141 "parser.y"
        { (yyval.node) = create_node_set_query(create_node_query(NESTED_QUERY_NODE, (yyvsp[-3].node), (yyvsp[-1].node))); }
#line 1420 "parser.tab.c"
            break;

        case 41: /* update_next: update_next COMMA update_next  */
#line 142 "parser.y"
        { set_next_query_to_set((yyvsp[-2].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-2].node); }
#line 1426 "parser.tab.c"
            break;

        case 42: /* select_object: schema_name  */
#line 144 "parser.y"
        { (yyval.node) = create_node_object((yyvsp[0].str_val), NULL, NULL); }
#line 1432 "parser.tab.c"
            break;

        case 43: /* select_object: schema_name L_PARENTHESIS filter R_PARENTHESIS  */
#line 145 "parser.y"
        { (yyval.node) = create_node_object((yyvsp[-3].str_val), NULL, (yyvsp[-1].node)); }
#line 1438 "parser.tab.c"
            break;

        case 44: /* mutate_object: schema_name L_PARENTHESIS values R_PARENTHESIS  */
#line 147 "parser.y"
        { (yyval.node) = create_node_object((yyvsp[-3].str_val), (yyvsp[-1].node), NULL); }
#line 1444 "parser.tab.c"
            break;

        case 45: /* mutate_object: schema_name L_PARENTHESIS values COMMA filter R_PARENTHESIS  */
#line 148 "parser.y"
        { (yyval.node) = create_node_object((yyvsp[-5].str_val), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1450 "parser.tab.c"
            break;

        case 46: /* schema_name: NAME  */
#line 150 "parser.y"
        { if(strlen((yyvsp[0].str_val)) > MAX_LENGTH) { yyerror("name of schema is too long"); YYABORT; } (yyval.str_val) = (yyvsp[0].str_val); }
#line 1456 "parser.tab.c"
            break;


#line 1460 "parser.tab.c"

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

#line 152 "parser.y"
