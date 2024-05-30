CC = gcc
CFLAGS = -Wall -O2

.PHONY: clean

all: struct_demo

demo: demo.c
	$(CC) $(CFLAGS) -o $@ $<

demo2: demo2.c
	$(CC) $(CFLAGS) -o $@ $<

demo3: demo3.c
	$(CC) $(CFLAGS) -o $@ $<

demo4: demo4.c
	$(CC) $(CFLAGS) -o $@ $<

lect12: lect12.c
	$(CC) -O0 -o $@ $<

struct_demo: struct_demo.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -rf struct_demo demo demo2 demo3 demo4 lect12

dist: struct_demo
	zip sunsern.zip struct_demo.c

push:
	scp struct_demo.c hamachi:~/
