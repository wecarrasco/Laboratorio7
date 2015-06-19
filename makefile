rm:	exe
	rm *.o

exe:	persona.o personaladministrativo.o investigador.o forense.o evidencia.o casos.o homicidio.o secuestro.o
	g++ Main.cpp persona.o personaladministrativo.o investigador.o forense.o evidencia.o casos.o homicidio.o secuestro.o -o exe

persona.o: personaladministrativo.o investigador.o forense.o evidencia.o casos.o homicidio.o secuestro.o
	g++ -c persona.cpp

personaladministrativo.o: investigador.o forense.o evidencia.o casos.o homicidio.o secuestro.o
	g++ -c personaladministrativo.cpp

investigador.o: forense.o evidencia.o casos.o homicidio.o secuestro.o
	g++ -c investigador.cpp

forense.o: evidencia.o casos.o homicidio.o secuestro.o
	g++ -c forense.cpp

evidencia.o: casos.o homicidio.o secuestro.o
	g++ -c evidencia.cpp

casos.o: homicidio.o secuestro.o
	g++ -c casos.cpp


homicidio.o: secuestro.o
	g++ -c homicidio.cpp

secuestro.o: 
	g++ -c secuestro.cpp





