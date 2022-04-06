VPATH=structs
#OBJ=$(wildcard *.c)

test:main.o objects.o utilities.o Vector.o
	clang -o $@ $^

%.o:%.c
	clang -o $@ -c $^ -g

.PHONY:clean
clean:
	rm -rf *.o test

.PHONY:go
go:test
	./test

.PHONY:debug
debug:test
	lldb ./test 
