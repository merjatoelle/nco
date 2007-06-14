#ifndef INC_ncoParser_hpp_
#define INC_ncoParser_hpp_

#include <antlr/config.hpp>
/* $ANTLR 2.7.6 (20070220): "ncoGrammer.g" -> "ncoParser.hpp"$ */
#include <antlr/TokenStream.hpp>
#include <antlr/TokenBuffer.hpp>
#include "ncoParserTokenTypes.hpp"
#include <antlr/LLkParser.hpp>

#line 1 "ncoGrammer.g"

    #include <algorithm>
    #include <iostream>
    #include <sstream>
    #include <string>
    #include <assert.h>
    #include <ctype.h>
    #include <malloc.h>
    #include <math.h>
    #if !(defined __xlC__) && !(defined SGIMP64) // C++ compilers that do not allow stdint.h
    #include <stdint.h> // Required by g++ for LLONG_MAX, ULLONG_MAX, by icpc for int64_t    
    #endif // C++ compilers that do not allow stdint.h
    #include "ncap2.hh"
    #include "NcapVar.hh"
    #include "NcapVarVector.hh"
    #include "sdo_utl.hh" // SDO stand-alone utilities: dbg/err/wrn_prn()
    #include "NcapVector.hh"
    ANTLR_USING_NAMESPACE(std);
    ANTLR_USING_NAMESPACE(antlr);
    

#line 34 "ncoParser.hpp"
class CUSTOM_API ncoParser : public ANTLR_USE_NAMESPACE(antlr)LLkParser, public ncoParserTokenTypes
{
#line 1 "ncoGrammer.g"
#line 38 "ncoParser.hpp"
public:
	void initializeASTFactory( ANTLR_USE_NAMESPACE(antlr)ASTFactory& factory );
protected:
	ncoParser(ANTLR_USE_NAMESPACE(antlr)TokenBuffer& tokenBuf, int k);
public:
	ncoParser(ANTLR_USE_NAMESPACE(antlr)TokenBuffer& tokenBuf);
protected:
	ncoParser(ANTLR_USE_NAMESPACE(antlr)TokenStream& lexer, int k);
public:
	ncoParser(ANTLR_USE_NAMESPACE(antlr)TokenStream& lexer);
	ncoParser(const ANTLR_USE_NAMESPACE(antlr)ParserSharedInputState& state);
	int getNumTokens() const
	{
		return ncoParser::NUM_TOKENS;
	}
	const char* getTokenName( int type ) const
	{
		if( type > getNumTokens() ) return 0;
		return ncoParser::tokenNames[type];
	}
	const char* const* getTokenNames() const
	{
		return ncoParser::tokenNames;
	}
	public: void program();
	public: void statement();
	public: void expr();
	public: void for_stmt();
	public: void block();
	public: void ram_delete();
	public: void ram_write();
	public: void set_miss();
	public: void ch_miss();
	public: void hyper_slb();
	public: void lmt_list();
	public: void dmn_list();
	public: void arg_list();
	public: void dmn_arg_list();
	public: void func_arg();
	public: void func_exp();
	public: void primary_exp();
	public: void meth();
	public: void prop_exp();
	public: void meth_exp();
	public: void unaryleft_exp();
	public: void unary_exp();
	public: void pow_exp();
	public: void mexpr();
	public: void add_expr();
	public: void rel_expr();
	public: void eq_expr();
	public: void lmul_expr();
	public: void lor_expr();
	public: void cond_expr();
	public: void ass_expr();
	public: void value_list();
	public: void lmt();
	public: void imaginary_token();
public:
	ANTLR_USE_NAMESPACE(antlr)RefAST getAST()
	{
		return returnAST;
	}
	
protected:
	ANTLR_USE_NAMESPACE(antlr)RefAST returnAST;
private:
	static const char* tokenNames[];
#ifndef NO_STATIC_CONSTS
	static const int NUM_TOKENS = 112;
#else
	enum {
		NUM_TOKENS = 112
	};
#endif
	
	static const unsigned long _tokenSet_0_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_0;
	static const unsigned long _tokenSet_1_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_1;
	static const unsigned long _tokenSet_2_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_2;
	static const unsigned long _tokenSet_3_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_3;
	static const unsigned long _tokenSet_4_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_4;
	static const unsigned long _tokenSet_5_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_5;
};

#endif /*INC_ncoParser_hpp_*/
