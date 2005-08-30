CC=gcc
EWLFLAGS=-lewl -ledje -levas -lecore -lecore_job -lecore_x -lecore_evas -lecore_con -lecore_ipc -lecore_txt -lecore_fb -lecore_config -lecore_file -lecore_dbus -lcurl -lidn -lssl -lcrypto -ldl -lssl  -leet -lz -ljpeg -lm
CFLAGS=-Wall -g -O1 -L/usr/lib -I/usr/include/ewl

all: efodaum

src/interface/interface.o: src/interface/interface.c
	$(CC) $(CFLAGS) -c src/interface/interface.c -o src/interface/interface.o

src/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o src/main.o

efodaum: src/main.o src/interface/interface.o
	$(CC) $(CFLAGS) $(EWLFLAGS) src/main.o src/interface/interface.o -o efodaum

clean:
	rm efodaum src/*.o src/interface/*.o
