main : main.o cpu/cpu1.o cpu/err.o cpu/start.o \
	memory/load.o memory/memory1.o memory/store.o 
	g++ -s main.o cpu/cpu1.o cpu/err.o cpu/start.o \
	memory/load.o memory/memory1.o memory/store.o -o main


main.o : main_cpu.cc cpu/cpu.h memory/memory.h enums/enums.h
	g++ -Wall -Werror --std=c++17 -c main_cpu.cc -o main.o



# the following creates the cpu objects:

cpu1.o : cpu1.cc cpu/cpu.h cpu/cpu.ih enums/enums.h
	g++ -Wall -Werror --std=c++17 -c cpu/cpu1.cc -o cpu/cpu1.o

err.cc : err.cc cpu/cpu.h cpu/cpu.ih enums/enums.h
	g++ -Wall -Werror --std=c++17 -c cpu/err.cc -o cpu/err.o

start.cc : start.cc cpu/cpu.h cpu/cpu.ih enums/enums.h
	g++ -Wall -Werror --std=c++17 -c cpu/start.cc -o cpu/start.o



# the following creates the memory objects:

load.o : memory/load.cc memory/memory.ih enums/enums.h
	g++ -Werror -Wall --std=c++17 memory/load.cc -I memory -c
   
memory1.o :	memory/memory1.cc memory/memory.ih enums/enums.h
	g++ -Werror -Wall --std=c++17 memory/memory1.cc -I memory -c

store.o : memory/store.cc memory/memory.ih enums/enums.h
	g++ -Werror -Wall --std=c++17 memory/store.cc -I memory -c



# the following creates the tokenizer objects:


# cleaning

clean : 
		rm main main.o cpu/cpu1.o cpu/err.o cpu/start.o \
	memory/load.o memory/memory1.o memory/store.o 
   
