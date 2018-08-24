exe:	Airforce.o Piloto.o Misiles.o Propulsores.o
	g++ Airforce.o Piloto.o Misiles.o Propulsores.o -o exe
	rm *.o
Airforce.o:	Airforce.cpp Piloto.h Misiles.h Propulsores.h
	g++ -c Airforce.cpp
Piloto.o:	Piloto.h Piloto.cpp
	g++ -c Piloto.cpp
Misiles.o:	Misiles.h Misiles.cpp
	g++ -c Misiles.cpp
Propulsores.o:	Propulsores.cpp Propulsores.h
	g++ -c Propulsores.cpp