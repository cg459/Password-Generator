all: passGenI passGenNI

program1: passGenI.cpp pass.cpp
	g++ -o passGenI passGenI.cpp pass.cpp

program2: passGenNI.cpp pass.cpp
	g++ -o passGenI passGenNI.cpp pass.cpp

clean:
	rm *.o