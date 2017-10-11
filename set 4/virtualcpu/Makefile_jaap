CXXFLAGS= -Wall -Werror --std=c++17


main : main.o cpu/cpu1.o cpu/err.o cpu/start.o \
	memory/load.o memory/memory1.o memory/store.o \
	tokenizer/opcode.o tokenizer/token.o

clean : 
		rm main main.o cpu/cpu1.o cpu/err.o cpu/start.o \
	memory/load.o memory/memory1.o memory/store.o \
	tokenizer/opcode.o tokenizer/token.o
