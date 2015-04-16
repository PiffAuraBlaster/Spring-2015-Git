LIBS += -lm
CC ?= clang-3.5

bcfunctions: bcmain.o bcfunctions.o
	$(CC)  bcmain.o bcfunctions.o $(LIBS) -o bcfunctions
	
test_0: bctest.o bcfunctions.o
	$(CC)  bctest.o lab_0.o $(LIBS) -o bctest
	./bctest
	
all: lab_0 test_0
clean:
	rm *.o lab_0 test_0