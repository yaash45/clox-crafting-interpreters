CC=gcc

helloworld: bin helloworld.c doublelinkedlist.c
	$(CC) -o bin/helloworld helloworld.c doublelinkedlist.c

bin:
	@mkdir -p bin

run: helloworld
	./bin/helloworld

clean:
	rm -rf bin/*