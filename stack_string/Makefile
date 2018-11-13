#
#
#
object = main.o stack.o

run : $(object)
	g++ -o run $(object) -g

main.o : Stack.h
	g++ -c main.cpp -o main.o -g
stack.o : Stack.h

.PHONY : clean
clean:
	-rm run $(object)
