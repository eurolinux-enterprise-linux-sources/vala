/* valatokentype.c generated by valac, the Vala compiler
 * generated from valatokentype.vala, do not modify */

/* valatokentype.vala
 *
 * Copyright (C) 2008-2010  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */


#include <glib.h>
#include <glib-object.h>
#include "vala.h"
#include <stdlib.h>
#include <string.h>






const gchar*
vala_token_type_to_string (ValaTokenType self)
{
	const gchar* result = NULL;
	switch (self) {
		case VALA_TOKEN_TYPE_ABSTRACT:
		{
			result = "`abstract'";
			return result;
		}
		case VALA_TOKEN_TYPE_AS:
		{
			result = "`as'";
			return result;
		}
		case VALA_TOKEN_TYPE_ASSIGN:
		{
			result = "`='";
			return result;
		}
		case VALA_TOKEN_TYPE_ASSIGN_ADD:
		{
			result = "`+='";
			return result;
		}
		case VALA_TOKEN_TYPE_ASSIGN_BITWISE_AND:
		{
			result = "`&='";
			return result;
		}
		case VALA_TOKEN_TYPE_ASSIGN_BITWISE_OR:
		{
			result = "`|='";
			return result;
		}
		case VALA_TOKEN_TYPE_ASSIGN_BITWISE_XOR:
		{
			result = "`^='";
			return result;
		}
		case VALA_TOKEN_TYPE_ASSIGN_DIV:
		{
			result = "`/='";
			return result;
		}
		case VALA_TOKEN_TYPE_ASSIGN_MUL:
		{
			result = "`*='";
			return result;
		}
		case VALA_TOKEN_TYPE_ASSIGN_PERCENT:
		{
			result = "`%='";
			return result;
		}
		case VALA_TOKEN_TYPE_ASSIGN_SHIFT_LEFT:
		{
			result = "`<<='";
			return result;
		}
		case VALA_TOKEN_TYPE_ASSIGN_SUB:
		{
			result = "`-='";
			return result;
		}
		case VALA_TOKEN_TYPE_ASYNC:
		{
			result = "`async'";
			return result;
		}
		case VALA_TOKEN_TYPE_BASE:
		{
			result = "`base'";
			return result;
		}
		case VALA_TOKEN_TYPE_BITWISE_AND:
		{
			result = "`&'";
			return result;
		}
		case VALA_TOKEN_TYPE_BITWISE_OR:
		{
			result = "`|'";
			return result;
		}
		case VALA_TOKEN_TYPE_BREAK:
		{
			result = "`break'";
			return result;
		}
		case VALA_TOKEN_TYPE_CARRET:
		{
			result = "`^'";
			return result;
		}
		case VALA_TOKEN_TYPE_CASE:
		{
			result = "`case'";
			return result;
		}
		case VALA_TOKEN_TYPE_CATCH:
		{
			result = "`catch'";
			return result;
		}
		case VALA_TOKEN_TYPE_CHARACTER_LITERAL:
		{
			result = "character literal";
			return result;
		}
		case VALA_TOKEN_TYPE_CLASS:
		{
			result = "`class'";
			return result;
		}
		case VALA_TOKEN_TYPE_CLOSE_BRACE:
		{
			result = "`}'";
			return result;
		}
		case VALA_TOKEN_TYPE_CLOSE_BRACKET:
		{
			result = "`]'";
			return result;
		}
		case VALA_TOKEN_TYPE_CLOSE_PARENS:
		{
			result = "`)'";
			return result;
		}
		case VALA_TOKEN_TYPE_CLOSE_REGEX_LITERAL:
		{
			result = "`/'";
			return result;
		}
		case VALA_TOKEN_TYPE_CLOSE_TEMPLATE:
		{
			result = "close template";
			return result;
		}
		case VALA_TOKEN_TYPE_COLON:
		{
			result = "`:'";
			return result;
		}
		case VALA_TOKEN_TYPE_COMMA:
		{
			result = "`,'";
			return result;
		}
		case VALA_TOKEN_TYPE_CONST:
		{
			result = "`const'";
			return result;
		}
		case VALA_TOKEN_TYPE_CONSTRUCT:
		{
			result = "`construct'";
			return result;
		}
		case VALA_TOKEN_TYPE_CONTINUE:
		{
			result = "`continue'";
			return result;
		}
		case VALA_TOKEN_TYPE_DEFAULT:
		{
			result = "`default'";
			return result;
		}
		case VALA_TOKEN_TYPE_DELEGATE:
		{
			result = "`delegate'";
			return result;
		}
		case VALA_TOKEN_TYPE_DELETE:
		{
			result = "`delete'";
			return result;
		}
		case VALA_TOKEN_TYPE_DIV:
		{
			result = "`/'";
			return result;
		}
		case VALA_TOKEN_TYPE_DO:
		{
			result = "`do'";
			return result;
		}
		case VALA_TOKEN_TYPE_DOUBLE_COLON:
		{
			result = "`::'";
			return result;
		}
		case VALA_TOKEN_TYPE_DOT:
		{
			result = "`.'";
			return result;
		}
		case VALA_TOKEN_TYPE_DYNAMIC:
		{
			result = "`dynamic'";
			return result;
		}
		case VALA_TOKEN_TYPE_ELLIPSIS:
		{
			result = "`...'";
			return result;
		}
		case VALA_TOKEN_TYPE_ELSE:
		{
			result = "`else'";
			return result;
		}
		case VALA_TOKEN_TYPE_ENUM:
		{
			result = "`enum'";
			return result;
		}
		case VALA_TOKEN_TYPE_ENSURES:
		{
			result = "`ensures'";
			return result;
		}
		case VALA_TOKEN_TYPE_ERRORDOMAIN:
		{
			result = "`errordomain'";
			return result;
		}
		case VALA_TOKEN_TYPE_EOF:
		{
			result = "end of file";
			return result;
		}
		case VALA_TOKEN_TYPE_EXTERN:
		{
			result = "`extern'";
			return result;
		}
		case VALA_TOKEN_TYPE_FALSE:
		{
			result = "`false'";
			return result;
		}
		case VALA_TOKEN_TYPE_FINALLY:
		{
			result = "`finally'";
			return result;
		}
		case VALA_TOKEN_TYPE_FOR:
		{
			result = "`for'";
			return result;
		}
		case VALA_TOKEN_TYPE_FOREACH:
		{
			result = "`foreach'";
			return result;
		}
		case VALA_TOKEN_TYPE_GET:
		{
			result = "`get'";
			return result;
		}
		case VALA_TOKEN_TYPE_HASH:
		{
			result = "`hash'";
			return result;
		}
		case VALA_TOKEN_TYPE_IDENTIFIER:
		{
			result = "identifier";
			return result;
		}
		case VALA_TOKEN_TYPE_IF:
		{
			result = "`if'";
			return result;
		}
		case VALA_TOKEN_TYPE_IN:
		{
			result = "`in'";
			return result;
		}
		case VALA_TOKEN_TYPE_INLINE:
		{
			result = "`inline'";
			return result;
		}
		case VALA_TOKEN_TYPE_INTEGER_LITERAL:
		{
			result = "integer literal";
			return result;
		}
		case VALA_TOKEN_TYPE_INTERFACE:
		{
			result = "`interface'";
			return result;
		}
		case VALA_TOKEN_TYPE_INTERNAL:
		{
			result = "`internal'";
			return result;
		}
		case VALA_TOKEN_TYPE_INTERR:
		{
			result = "`?'";
			return result;
		}
		case VALA_TOKEN_TYPE_IS:
		{
			result = "`is'";
			return result;
		}
		case VALA_TOKEN_TYPE_LAMBDA:
		{
			result = "`=>'";
			return result;
		}
		case VALA_TOKEN_TYPE_LOCK:
		{
			result = "`lock'";
			return result;
		}
		case VALA_TOKEN_TYPE_MINUS:
		{
			result = "`-'";
			return result;
		}
		case VALA_TOKEN_TYPE_NAMESPACE:
		{
			result = "`namespace'";
			return result;
		}
		case VALA_TOKEN_TYPE_NEW:
		{
			result = "`new'";
			return result;
		}
		case VALA_TOKEN_TYPE_NULL:
		{
			result = "`null'";
			return result;
		}
		case VALA_TOKEN_TYPE_OUT:
		{
			result = "`out'";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_AND:
		{
			result = "`&&'";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_COALESCING:
		{
			result = "`??'";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_DEC:
		{
			result = "`--'";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_EQ:
		{
			result = "`=='";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_GE:
		{
			result = "`>='";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_GT:
		{
			result = "`>'";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_INC:
		{
			result = "`++'";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_LE:
		{
			result = "`<='";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_LT:
		{
			result = "`<'";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_NE:
		{
			result = "`!='";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_NEG:
		{
			result = "`!'";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_OR:
		{
			result = "`||'";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_PTR:
		{
			result = "`->'";
			return result;
		}
		case VALA_TOKEN_TYPE_OP_SHIFT_LEFT:
		{
			result = "`<<'";
			return result;
		}
		case VALA_TOKEN_TYPE_OPEN_BRACE:
		{
			result = "`{'";
			return result;
		}
		case VALA_TOKEN_TYPE_OPEN_BRACKET:
		{
			result = "`['";
			return result;
		}
		case VALA_TOKEN_TYPE_OPEN_PARENS:
		{
			result = "`('";
			return result;
		}
		case VALA_TOKEN_TYPE_OPEN_REGEX_LITERAL:
		{
			result = "`/'";
			return result;
		}
		case VALA_TOKEN_TYPE_OPEN_TEMPLATE:
		{
			result = "open template";
			return result;
		}
		case VALA_TOKEN_TYPE_OVERRIDE:
		{
			result = "`override'";
			return result;
		}
		case VALA_TOKEN_TYPE_OWNED:
		{
			result = "`owned'";
			return result;
		}
		case VALA_TOKEN_TYPE_PARAMS:
		{
			result = "`params'";
			return result;
		}
		case VALA_TOKEN_TYPE_PERCENT:
		{
			result = "`%'";
			return result;
		}
		case VALA_TOKEN_TYPE_PLUS:
		{
			result = "`+'";
			return result;
		}
		case VALA_TOKEN_TYPE_PRIVATE:
		{
			result = "`private'";
			return result;
		}
		case VALA_TOKEN_TYPE_PROTECTED:
		{
			result = "`protected'";
			return result;
		}
		case VALA_TOKEN_TYPE_PUBLIC:
		{
			result = "`public'";
			return result;
		}
		case VALA_TOKEN_TYPE_REAL_LITERAL:
		{
			result = "real literal";
			return result;
		}
		case VALA_TOKEN_TYPE_REF:
		{
			result = "`ref'";
			return result;
		}
		case VALA_TOKEN_TYPE_REGEX_LITERAL:
		{
			result = "regex literal";
			return result;
		}
		case VALA_TOKEN_TYPE_REQUIRES:
		{
			result = "`requires'";
			return result;
		}
		case VALA_TOKEN_TYPE_RETURN:
		{
			result = "`return'";
			return result;
		}
		case VALA_TOKEN_TYPE_SEALED:
		{
			result = "`sealed'";
			return result;
		}
		case VALA_TOKEN_TYPE_SEMICOLON:
		{
			result = "`;'";
			return result;
		}
		case VALA_TOKEN_TYPE_SET:
		{
			result = "`set'";
			return result;
		}
		case VALA_TOKEN_TYPE_SIGNAL:
		{
			result = "`signal'";
			return result;
		}
		case VALA_TOKEN_TYPE_SIZEOF:
		{
			result = "`sizeof'";
			return result;
		}
		case VALA_TOKEN_TYPE_STAR:
		{
			result = "`*'";
			return result;
		}
		case VALA_TOKEN_TYPE_STATIC:
		{
			result = "`static'";
			return result;
		}
		case VALA_TOKEN_TYPE_STRING_LITERAL:
		{
			result = "string literal";
			return result;
		}
		case VALA_TOKEN_TYPE_STRUCT:
		{
			result = "`struct'";
			return result;
		}
		case VALA_TOKEN_TYPE_SWITCH:
		{
			result = "`switch'";
			return result;
		}
		case VALA_TOKEN_TYPE_TEMPLATE_STRING_LITERAL:
		{
			result = "template string literal";
			return result;
		}
		case VALA_TOKEN_TYPE_THIS:
		{
			result = "`this'";
			return result;
		}
		case VALA_TOKEN_TYPE_THROW:
		{
			result = "`throw'";
			return result;
		}
		case VALA_TOKEN_TYPE_THROWS:
		{
			result = "`throws'";
			return result;
		}
		case VALA_TOKEN_TYPE_TILDE:
		{
			result = "`~'";
			return result;
		}
		case VALA_TOKEN_TYPE_TRUE:
		{
			result = "`true'";
			return result;
		}
		case VALA_TOKEN_TYPE_TRY:
		{
			result = "`try'";
			return result;
		}
		case VALA_TOKEN_TYPE_TYPEOF:
		{
			result = "`typeof'";
			return result;
		}
		case VALA_TOKEN_TYPE_UNOWNED:
		{
			result = "`unowned'";
			return result;
		}
		case VALA_TOKEN_TYPE_USING:
		{
			result = "`using'";
			return result;
		}
		case VALA_TOKEN_TYPE_VAR:
		{
			result = "`var'";
			return result;
		}
		case VALA_TOKEN_TYPE_VERBATIM_STRING_LITERAL:
		{
			result = "verbatim string literal";
			return result;
		}
		case VALA_TOKEN_TYPE_VIRTUAL:
		{
			result = "`virtual'";
			return result;
		}
		case VALA_TOKEN_TYPE_VOID:
		{
			result = "`void'";
			return result;
		}
		case VALA_TOKEN_TYPE_VOLATILE:
		{
			result = "`volatile'";
			return result;
		}
		case VALA_TOKEN_TYPE_WEAK:
		{
			result = "`weak'";
			return result;
		}
		case VALA_TOKEN_TYPE_WHILE:
		{
			result = "`while'";
			return result;
		}
		case VALA_TOKEN_TYPE_YIELD:
		{
			result = "`yield'";
			return result;
		}
		default:
		{
			result = "unknown token";
			return result;
		}
	}
}


GType
vala_token_type_get_type (void)
{
	static volatile gsize vala_token_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_token_type_type_id__volatile)) {
		static const GEnumValue values[] = {{VALA_TOKEN_TYPE_NONE, "VALA_TOKEN_TYPE_NONE", "none"}, {VALA_TOKEN_TYPE_ABSTRACT, "VALA_TOKEN_TYPE_ABSTRACT", "abstract"}, {VALA_TOKEN_TYPE_AS, "VALA_TOKEN_TYPE_AS", "as"}, {VALA_TOKEN_TYPE_ASSIGN, "VALA_TOKEN_TYPE_ASSIGN", "assign"}, {VALA_TOKEN_TYPE_ASSIGN_ADD, "VALA_TOKEN_TYPE_ASSIGN_ADD", "assign-add"}, {VALA_TOKEN_TYPE_ASSIGN_BITWISE_AND, "VALA_TOKEN_TYPE_ASSIGN_BITWISE_AND", "assign-bitwise-and"}, {VALA_TOKEN_TYPE_ASSIGN_BITWISE_OR, "VALA_TOKEN_TYPE_ASSIGN_BITWISE_OR", "assign-bitwise-or"}, {VALA_TOKEN_TYPE_ASSIGN_BITWISE_XOR, "VALA_TOKEN_TYPE_ASSIGN_BITWISE_XOR", "assign-bitwise-xor"}, {VALA_TOKEN_TYPE_ASSIGN_DIV, "VALA_TOKEN_TYPE_ASSIGN_DIV", "assign-div"}, {VALA_TOKEN_TYPE_ASSIGN_MUL, "VALA_TOKEN_TYPE_ASSIGN_MUL", "assign-mul"}, {VALA_TOKEN_TYPE_ASSIGN_PERCENT, "VALA_TOKEN_TYPE_ASSIGN_PERCENT", "assign-percent"}, {VALA_TOKEN_TYPE_ASSIGN_SHIFT_LEFT, "VALA_TOKEN_TYPE_ASSIGN_SHIFT_LEFT", "assign-shift-left"}, {VALA_TOKEN_TYPE_ASSIGN_SUB, "VALA_TOKEN_TYPE_ASSIGN_SUB", "assign-sub"}, {VALA_TOKEN_TYPE_ASYNC, "VALA_TOKEN_TYPE_ASYNC", "async"}, {VALA_TOKEN_TYPE_BASE, "VALA_TOKEN_TYPE_BASE", "base"}, {VALA_TOKEN_TYPE_BITWISE_AND, "VALA_TOKEN_TYPE_BITWISE_AND", "bitwise-and"}, {VALA_TOKEN_TYPE_BITWISE_OR, "VALA_TOKEN_TYPE_BITWISE_OR", "bitwise-or"}, {VALA_TOKEN_TYPE_BREAK, "VALA_TOKEN_TYPE_BREAK", "break"}, {VALA_TOKEN_TYPE_CARRET, "VALA_TOKEN_TYPE_CARRET", "carret"}, {VALA_TOKEN_TYPE_CASE, "VALA_TOKEN_TYPE_CASE", "case"}, {VALA_TOKEN_TYPE_CATCH, "VALA_TOKEN_TYPE_CATCH", "catch"}, {VALA_TOKEN_TYPE_CHARACTER_LITERAL, "VALA_TOKEN_TYPE_CHARACTER_LITERAL", "character-literal"}, {VALA_TOKEN_TYPE_CLASS, "VALA_TOKEN_TYPE_CLASS", "class"}, {VALA_TOKEN_TYPE_CLOSE_BRACE, "VALA_TOKEN_TYPE_CLOSE_BRACE", "close-brace"}, {VALA_TOKEN_TYPE_CLOSE_BRACKET, "VALA_TOKEN_TYPE_CLOSE_BRACKET", "close-bracket"}, {VALA_TOKEN_TYPE_CLOSE_PARENS, "VALA_TOKEN_TYPE_CLOSE_PARENS", "close-parens"}, {VALA_TOKEN_TYPE_CLOSE_REGEX_LITERAL, "VALA_TOKEN_TYPE_CLOSE_REGEX_LITERAL", "close-regex-literal"}, {VALA_TOKEN_TYPE_CLOSE_TEMPLATE, "VALA_TOKEN_TYPE_CLOSE_TEMPLATE", "close-template"}, {VALA_TOKEN_TYPE_COLON, "VALA_TOKEN_TYPE_COLON", "colon"}, {VALA_TOKEN_TYPE_COMMA, "VALA_TOKEN_TYPE_COMMA", "comma"}, {VALA_TOKEN_TYPE_CONST, "VALA_TOKEN_TYPE_CONST", "const"}, {VALA_TOKEN_TYPE_CONSTRUCT, "VALA_TOKEN_TYPE_CONSTRUCT", "construct"}, {VALA_TOKEN_TYPE_CONTINUE, "VALA_TOKEN_TYPE_CONTINUE", "continue"}, {VALA_TOKEN_TYPE_DEFAULT, "VALA_TOKEN_TYPE_DEFAULT", "default"}, {VALA_TOKEN_TYPE_DELEGATE, "VALA_TOKEN_TYPE_DELEGATE", "delegate"}, {VALA_TOKEN_TYPE_DELETE, "VALA_TOKEN_TYPE_DELETE", "delete"}, {VALA_TOKEN_TYPE_DIV, "VALA_TOKEN_TYPE_DIV", "div"}, {VALA_TOKEN_TYPE_DO, "VALA_TOKEN_TYPE_DO", "do"}, {VALA_TOKEN_TYPE_DOUBLE_COLON, "VALA_TOKEN_TYPE_DOUBLE_COLON", "double-colon"}, {VALA_TOKEN_TYPE_DOT, "VALA_TOKEN_TYPE_DOT", "dot"}, {VALA_TOKEN_TYPE_DYNAMIC, "VALA_TOKEN_TYPE_DYNAMIC", "dynamic"}, {VALA_TOKEN_TYPE_ELLIPSIS, "VALA_TOKEN_TYPE_ELLIPSIS", "ellipsis"}, {VALA_TOKEN_TYPE_ELSE, "VALA_TOKEN_TYPE_ELSE", "else"}, {VALA_TOKEN_TYPE_ENUM, "VALA_TOKEN_TYPE_ENUM", "enum"}, {VALA_TOKEN_TYPE_ENSURES, "VALA_TOKEN_TYPE_ENSURES", "ensures"}, {VALA_TOKEN_TYPE_ERRORDOMAIN, "VALA_TOKEN_TYPE_ERRORDOMAIN", "errordomain"}, {VALA_TOKEN_TYPE_EOF, "VALA_TOKEN_TYPE_EOF", "eof"}, {VALA_TOKEN_TYPE_EXTERN, "VALA_TOKEN_TYPE_EXTERN", "extern"}, {VALA_TOKEN_TYPE_FALSE, "VALA_TOKEN_TYPE_FALSE", "false"}, {VALA_TOKEN_TYPE_FINALLY, "VALA_TOKEN_TYPE_FINALLY", "finally"}, {VALA_TOKEN_TYPE_FOR, "VALA_TOKEN_TYPE_FOR", "for"}, {VALA_TOKEN_TYPE_FOREACH, "VALA_TOKEN_TYPE_FOREACH", "foreach"}, {VALA_TOKEN_TYPE_GET, "VALA_TOKEN_TYPE_GET", "get"}, {VALA_TOKEN_TYPE_HASH, "VALA_TOKEN_TYPE_HASH", "hash"}, {VALA_TOKEN_TYPE_IDENTIFIER, "VALA_TOKEN_TYPE_IDENTIFIER", "identifier"}, {VALA_TOKEN_TYPE_IF, "VALA_TOKEN_TYPE_IF", "if"}, {VALA_TOKEN_TYPE_IN, "VALA_TOKEN_TYPE_IN", "in"}, {VALA_TOKEN_TYPE_INLINE, "VALA_TOKEN_TYPE_INLINE", "inline"}, {VALA_TOKEN_TYPE_INTEGER_LITERAL, "VALA_TOKEN_TYPE_INTEGER_LITERAL", "integer-literal"}, {VALA_TOKEN_TYPE_INTERFACE, "VALA_TOKEN_TYPE_INTERFACE", "interface"}, {VALA_TOKEN_TYPE_INTERNAL, "VALA_TOKEN_TYPE_INTERNAL", "internal"}, {VALA_TOKEN_TYPE_INTERR, "VALA_TOKEN_TYPE_INTERR", "interr"}, {VALA_TOKEN_TYPE_IS, "VALA_TOKEN_TYPE_IS", "is"}, {VALA_TOKEN_TYPE_LAMBDA, "VALA_TOKEN_TYPE_LAMBDA", "lambda"}, {VALA_TOKEN_TYPE_LOCK, "VALA_TOKEN_TYPE_LOCK", "lock"}, {VALA_TOKEN_TYPE_MINUS, "VALA_TOKEN_TYPE_MINUS", "minus"}, {VALA_TOKEN_TYPE_NAMESPACE, "VALA_TOKEN_TYPE_NAMESPACE", "namespace"}, {VALA_TOKEN_TYPE_NEW, "VALA_TOKEN_TYPE_NEW", "new"}, {VALA_TOKEN_TYPE_NULL, "VALA_TOKEN_TYPE_NULL", "null"}, {VALA_TOKEN_TYPE_OUT, "VALA_TOKEN_TYPE_OUT", "out"}, {VALA_TOKEN_TYPE_OP_AND, "VALA_TOKEN_TYPE_OP_AND", "op-and"}, {VALA_TOKEN_TYPE_OP_COALESCING, "VALA_TOKEN_TYPE_OP_COALESCING", "op-coalescing"}, {VALA_TOKEN_TYPE_OP_DEC, "VALA_TOKEN_TYPE_OP_DEC", "op-dec"}, {VALA_TOKEN_TYPE_OP_EQ, "VALA_TOKEN_TYPE_OP_EQ", "op-eq"}, {VALA_TOKEN_TYPE_OP_GE, "VALA_TOKEN_TYPE_OP_GE", "op-ge"}, {VALA_TOKEN_TYPE_OP_GT, "VALA_TOKEN_TYPE_OP_GT", "op-gt"}, {VALA_TOKEN_TYPE_OP_INC, "VALA_TOKEN_TYPE_OP_INC", "op-inc"}, {VALA_TOKEN_TYPE_OP_LE, "VALA_TOKEN_TYPE_OP_LE", "op-le"}, {VALA_TOKEN_TYPE_OP_LT, "VALA_TOKEN_TYPE_OP_LT", "op-lt"}, {VALA_TOKEN_TYPE_OP_NE, "VALA_TOKEN_TYPE_OP_NE", "op-ne"}, {VALA_TOKEN_TYPE_OP_NEG, "VALA_TOKEN_TYPE_OP_NEG", "op-neg"}, {VALA_TOKEN_TYPE_OP_OR, "VALA_TOKEN_TYPE_OP_OR", "op-or"}, {VALA_TOKEN_TYPE_OP_PTR, "VALA_TOKEN_TYPE_OP_PTR", "op-ptr"}, {VALA_TOKEN_TYPE_OP_SHIFT_LEFT, "VALA_TOKEN_TYPE_OP_SHIFT_LEFT", "op-shift-left"}, {VALA_TOKEN_TYPE_OPEN_BRACE, "VALA_TOKEN_TYPE_OPEN_BRACE", "open-brace"}, {VALA_TOKEN_TYPE_OPEN_BRACKET, "VALA_TOKEN_TYPE_OPEN_BRACKET", "open-bracket"}, {VALA_TOKEN_TYPE_OPEN_PARENS, "VALA_TOKEN_TYPE_OPEN_PARENS", "open-parens"}, {VALA_TOKEN_TYPE_OPEN_REGEX_LITERAL, "VALA_TOKEN_TYPE_OPEN_REGEX_LITERAL", "open-regex-literal"}, {VALA_TOKEN_TYPE_OPEN_TEMPLATE, "VALA_TOKEN_TYPE_OPEN_TEMPLATE", "open-template"}, {VALA_TOKEN_TYPE_OVERRIDE, "VALA_TOKEN_TYPE_OVERRIDE", "override"}, {VALA_TOKEN_TYPE_OWNED, "VALA_TOKEN_TYPE_OWNED", "owned"}, {VALA_TOKEN_TYPE_PARAMS, "VALA_TOKEN_TYPE_PARAMS", "params"}, {VALA_TOKEN_TYPE_PERCENT, "VALA_TOKEN_TYPE_PERCENT", "percent"}, {VALA_TOKEN_TYPE_PLUS, "VALA_TOKEN_TYPE_PLUS", "plus"}, {VALA_TOKEN_TYPE_PRIVATE, "VALA_TOKEN_TYPE_PRIVATE", "private"}, {VALA_TOKEN_TYPE_PROTECTED, "VALA_TOKEN_TYPE_PROTECTED", "protected"}, {VALA_TOKEN_TYPE_PUBLIC, "VALA_TOKEN_TYPE_PUBLIC", "public"}, {VALA_TOKEN_TYPE_REAL_LITERAL, "VALA_TOKEN_TYPE_REAL_LITERAL", "real-literal"}, {VALA_TOKEN_TYPE_REF, "VALA_TOKEN_TYPE_REF", "ref"}, {VALA_TOKEN_TYPE_REGEX_LITERAL, "VALA_TOKEN_TYPE_REGEX_LITERAL", "regex-literal"}, {VALA_TOKEN_TYPE_REQUIRES, "VALA_TOKEN_TYPE_REQUIRES", "requires"}, {VALA_TOKEN_TYPE_RETURN, "VALA_TOKEN_TYPE_RETURN", "return"}, {VALA_TOKEN_TYPE_SEALED, "VALA_TOKEN_TYPE_SEALED", "sealed"}, {VALA_TOKEN_TYPE_SEMICOLON, "VALA_TOKEN_TYPE_SEMICOLON", "semicolon"}, {VALA_TOKEN_TYPE_SET, "VALA_TOKEN_TYPE_SET", "set"}, {VALA_TOKEN_TYPE_SIGNAL, "VALA_TOKEN_TYPE_SIGNAL", "signal"}, {VALA_TOKEN_TYPE_SIZEOF, "VALA_TOKEN_TYPE_SIZEOF", "sizeof"}, {VALA_TOKEN_TYPE_STAR, "VALA_TOKEN_TYPE_STAR", "star"}, {VALA_TOKEN_TYPE_STATIC, "VALA_TOKEN_TYPE_STATIC", "static"}, {VALA_TOKEN_TYPE_STRING_LITERAL, "VALA_TOKEN_TYPE_STRING_LITERAL", "string-literal"}, {VALA_TOKEN_TYPE_STRUCT, "VALA_TOKEN_TYPE_STRUCT", "struct"}, {VALA_TOKEN_TYPE_SWITCH, "VALA_TOKEN_TYPE_SWITCH", "switch"}, {VALA_TOKEN_TYPE_TEMPLATE_STRING_LITERAL, "VALA_TOKEN_TYPE_TEMPLATE_STRING_LITERAL", "template-string-literal"}, {VALA_TOKEN_TYPE_THIS, "VALA_TOKEN_TYPE_THIS", "this"}, {VALA_TOKEN_TYPE_THROW, "VALA_TOKEN_TYPE_THROW", "throw"}, {VALA_TOKEN_TYPE_THROWS, "VALA_TOKEN_TYPE_THROWS", "throws"}, {VALA_TOKEN_TYPE_TILDE, "VALA_TOKEN_TYPE_TILDE", "tilde"}, {VALA_TOKEN_TYPE_TRUE, "VALA_TOKEN_TYPE_TRUE", "true"}, {VALA_TOKEN_TYPE_TRY, "VALA_TOKEN_TYPE_TRY", "try"}, {VALA_TOKEN_TYPE_TYPEOF, "VALA_TOKEN_TYPE_TYPEOF", "typeof"}, {VALA_TOKEN_TYPE_UNOWNED, "VALA_TOKEN_TYPE_UNOWNED", "unowned"}, {VALA_TOKEN_TYPE_USING, "VALA_TOKEN_TYPE_USING", "using"}, {VALA_TOKEN_TYPE_VAR, "VALA_TOKEN_TYPE_VAR", "var"}, {VALA_TOKEN_TYPE_VERBATIM_STRING_LITERAL, "VALA_TOKEN_TYPE_VERBATIM_STRING_LITERAL", "verbatim-string-literal"}, {VALA_TOKEN_TYPE_VIRTUAL, "VALA_TOKEN_TYPE_VIRTUAL", "virtual"}, {VALA_TOKEN_TYPE_VOID, "VALA_TOKEN_TYPE_VOID", "void"}, {VALA_TOKEN_TYPE_VOLATILE, "VALA_TOKEN_TYPE_VOLATILE", "volatile"}, {VALA_TOKEN_TYPE_WEAK, "VALA_TOKEN_TYPE_WEAK", "weak"}, {VALA_TOKEN_TYPE_WHILE, "VALA_TOKEN_TYPE_WHILE", "while"}, {VALA_TOKEN_TYPE_YIELD, "VALA_TOKEN_TYPE_YIELD", "yield"}, {0, NULL, NULL}};
		GType vala_token_type_type_id;
		vala_token_type_type_id = g_enum_register_static ("ValaTokenType", values);
		g_once_init_leave (&vala_token_type_type_id__volatile, vala_token_type_type_id);
	}
	return vala_token_type_type_id__volatile;
}



