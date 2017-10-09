#include "../commonheader.ih

enum class size_t RAM{
	SIZE = 20;
}

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
}

enum class OperandType {
	SYNTAX,
	VALUE,
	REGISTER,
	MEMORY
}

