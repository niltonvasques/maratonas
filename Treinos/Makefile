GCC	:= g++
ARGS	:= -lm -Wwrite-strings

all: problem1 problem2 problem3 natal desvrua desvrua2

problem1: problem1.cpp
	$(GCC) problem1.cpp -o problem1 $(ARGS) 
                                                
problem2: problem2.cpp                          
	$(GCC) problem2.cpp -o problem2 $(ARGS) 
                                                
problem3: problem3.cpp                          
	$(GCC) problem3.cpp -o problem3 $(ARGS) 

natal: natal.cpp                          
	$(GCC) natal.cpp -o natal $(ARGS) 

desvrua: desvrua.cpp                          
	$(GCC) desvrua.cpp -o desvrua $(ARGS) 

desvrua2: desvrua.c                          
	$(GCC) desvrua.c -o desvrua2 $(ARGS) 
clean: 
	rm -rf problem1 problem2 problem3 natal desvrua desvrua2

	
