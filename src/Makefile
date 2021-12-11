CC=g++
CFLAGS=-c -Wall
all: RLCsim
RLCsim: main.o cmplx.o compass.o resis.o induc.o cond.o
	$(CC) ../Build/X86/main.o\
	../Build/X86/cmplx.o\
	../Build/X86/compass.o\
	../Build/X86/resis.o\
	../Build/X86/induc.o\
	../Build/X86/cond.o\
	-o ../Build/X86/rlcsim\

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o ../Build/X86/main.o
cmplx.o: ./include/cmplx.cpp
	$(CC) $(CFLAGS) ./include/cmplx.cpp -o ../Build/X86/cmplx.o
compass.o: ./include/compass.cpp
	$(CC) $(CFLAGS) ./include/compass.cpp -o ../Build/X86/compass.o
resis.o: ./include/resis.cpp
	$(CC) $(CFLAGS) ./include/resis.cpp -o ../Build/X86/resis.o
induc.o: ./include/induc.cpp
	$(CC) $(CFLAGS) ./include/induc.cpp -o ../Build/X86/induc.o
cond.o: ./include/cond.cpp
	$(CC) $(CFLAGS) ./include/cond.cpp -o ../Build/X86/cond.o

clean:
	rm -rf ../Build/*/*.o
mrproper: clean
	rm -rf ../Build/*/RLCsim
run-x86:
	../Build/X86/RLCsim
run-arm:
	../Build/armhf/RLCsim
