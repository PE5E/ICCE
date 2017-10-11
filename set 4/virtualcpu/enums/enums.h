#ifndef INCLUDED_ENUMS_H
#define INCLUDED_ENUMS_H

#include <cstddef>

enum RAM : size_t {
	SIZE = 20
};

enum class Opcode{
	ERR,
	MOV,
	ADD,
	SUB,
	MUL,
	DIV,
	NEG,
	DSP,
	STOP
};

enum class OperandType {
	SYNTAX,
	VALUE,
	REGISTER,
	MEMORY
};

#endif
