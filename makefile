default: kreisinhalt

kreisinhalt.o: kreisinhalt.c
	gcc -c kreisinhalt.c -o kreisinhalt.o

kreisinhalt: kreisinhalt.o
	gcc kreisinhalt.o -o kreisinhalt

clean:
	-rm -f kreisinhalt.o
	-rm -f kreisinhalt
