exercise_19 : exercise_19.o method1.o method2.o method3.o method4.o \
			method5.o method6.o
				g++ -std=c++17 exercise_19.o method1.o method2.o method3.o \
				method4.o method5.o method6.o -o exercise_19

exercise_19.o : exercise_19.cc myheader.ih
	g++ -std=c++17 -Wall -Werror -c exercise_19.cc
method1.o : method1.cc myheader.ih
	g++ -std=c++17 -Wall -Werror -c method1.cc
method2.o : method2.cc myheader.ih
	g++ -std=c++17 -Wall -Werror -c method2.cc
method3.o : method3.cc myheader.ih
	g++ -std=c++17 -Wall -Werror -c method3.cc
method4.o : method4.cc myheader.ih
	g++ -std=c++17 -Wall -Werror -c method4.cc
method5.o : method5.cc myheader.ih
	g++ -std=c++17 -Wall -Werror -c method5.cc
method6.o : method6.cc myheader.ih
	g++ -std=c++17 -Wall -Werror -c method6.cc
clean :
		rm exercise_19 exercise_19.o method1.o method2.o method3.o method4.o \
			method5.o method6.o
