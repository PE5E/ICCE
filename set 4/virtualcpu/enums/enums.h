#ifndef INCLUDED_ENUMS_H
#define INCLUDED_ENUMS_H

#include <cstddef>          // size_t

enum RAM : size_t {         // scoped enum won't work here
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
