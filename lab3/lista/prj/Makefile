CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++0x

__start__: lista
	./lista

lista: obj obj/main.o obj/Stoper.o obj/List.o obj/Queue.o obj/Stack.o
	g++ -Wall -pedantic -std=c++0x obj/main.o
                        obj/Stoper.o obj/List.o obj/Queue.o obj/Stack.o -o lista

obj:
	mkdir obj


obj/main.o: src/main.cpp inc/Prostokat.hh inc/Macierz2x2.hh inc/Wektor2D.hh inc/Menu.hh inc/Zapis.hh
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/Stoper.o: src/Stoper.cpp inc/IStoper.hh inc/Stoper.hh
	g++ -c ${CXXFLAGS} -o obj/Stoper.o src/Stoper.cpp

obj/List.o: src/List.cpp inc/IList.hh inc/List.hh
	g++ -c ${CXXFLAGS} -o obj/List.o src/List.cpp

obj/Queue.o: src/Queue.cpp inc/IList.hh inc/Queue.hh
	g++ -c ${CXXFLAGS} -o obj/Queue.o src/Queue.cpp

obj/Stack.o: src/Stack.cpp inc/IList.hh inc/Stack.hh
	g++ -c ${CXXFLAGS} -o obj/Stack.o src/Stack.cpp


clean:
	rm -f obj/*.o lista
