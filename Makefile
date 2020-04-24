OBJS=LinkedList.o main.o

LinkedList: $(OBJS)
		g++ -g -o $@ $^

.cpp.o:
		g++ -I. -g -c -o $@ $<


clean:
		rm -f *.o LinkedList
