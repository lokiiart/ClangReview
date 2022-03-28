test: main.c utilities.c
	gcc -o $@ $^

.PHONY:go
go:test
	./test
