output: pass.o passGen.o
	g++ pass.o passGen.o -o passGen

pass.o: pass.cpp
	g++ -c pass.cpp

passGen.o: passGen.cpp
	g++ -c passGen.cpp

clean:
	rm *.o