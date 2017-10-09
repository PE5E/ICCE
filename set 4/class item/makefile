main : main.o item/printitem.o item/setcategory.o item/setitemnr.o \
		item/setname.o item/setprice.o
				g++ -std=c++17 -s main.o item/printitem.o item/setcategory.o \
				item/setitemnr.o item/setname.o item/setprice.o -o main

main.o : main.cc myheader.ih item/item.h
	g++ -std=c++17 -Wall -Werror -I item -c main.cc
item/printitem.o : item/printitem.cc item/item.ih
	g++ -std=c++17 -Wall -Werror -c item/printitem.cc
item/setcategory.o : item/setcategory.cc item/item.ih
	g++ -std=c++17 -Wall -Werror -c item/setcategory.cc
item/setitemnr.o : item/setitemnr.cc item/item.ih
	g++ -std=c++17 -Wall -Werror -c item/setitemnr.cc
item/setname.o : item/setname.cc item/item.ih
	g++ -std=c++17 -Wall -Werror -c item/setname.cc
item/setprice.o : item/setprice.cc item/item.ih
	g++ -std=c++17 -Wall -Werror -c item/setprice.cc
clean :
		rm main main.o item/printitem.o item/setcategory.o item/setitemnr.o \
		item/setname.o item/setprice.o
