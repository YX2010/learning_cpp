
run : test.o
	g++ -o run test.o -g

test.o : libmat.h book.h audiobook.h test.cpp
	g++ -c test.cpp  
	
.PHONY : clean
clean:
	rm test.o run