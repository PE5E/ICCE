memtest : memtestmain.o load.o memory1.o store.o   
	g++ -Werror -Wall --std=c++17 -s memtestmain.o load.o memory1.o store.o -o memtest

memtestmain.o : memtestmain.cc memory/memory.h
	g++ -Werror -Wall --std=c++17 memtestmain.cc -I memory -c
    
load.o : memory/load.cc memory/memory.ih 
	g++ -Werror -Wall --std=c++17 memory/load.cc -I memory -c
   
memory1.o :	memory/memory1.cc memory/memory.ih 
	g++ -Werror -Wall --std=c++17 memory/memory1.cc -I memory -c

store.o : memory/store.cc memory/memory.ih
	g++ -Werror -Wall --std=c++17 memory/store.cc -I memory -c
   
