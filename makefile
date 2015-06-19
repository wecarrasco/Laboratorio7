exe:	Main.o casos.o evidencia.o homicidio.o secuestro.o persona.o forense.o investigador.o personaladministrativo.o
	g++ Main.o casos.o evidencia.o homicidio.o secuestro.o persona.o forense.o investigador.o personaladministrativo.o -o exe

Main.o: Main.cpp casos.hpp evidencia.hpp homicidio.hpp secuestro.hpp persona.hpp forense.hpp investigador.hpp personaladministrativo.hpp
	g++ Main.cpp

homicidio.o: homicidio.hpp homicidio.cpp casos.hpp
	g++ -c homicidio.cpp

secuestro.o: secuestro.hpp secuestro.cpp casos.hpp
	g++ -c secuestro.cpp

casos.o: casos.hpp casos.cpp
	g++ -c casos.cpp

personaladministrativo.o: personaladministrativo.hpp personaladministrativo.cpp persona.hpp
	g++ -c personaladministrativo.cpp

investigador.o: investigadores.hpp investigador.cpp persona.hpp
	g++ -c investigador.cpp

Forense.o: forense.hpp forense.cpp persona.hpp
	g++ -c forense.cpp

persona.o: persona.hpp persona.cpp
	g++ -c persona.cpp

evidencias.o: evidencia.hpp evidencia.cpp 
	g++ -c Evidencias.cpp