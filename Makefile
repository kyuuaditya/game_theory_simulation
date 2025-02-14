all: compile link run

compile:
	g++ -I"C:\SFML-2.6.2\include" -c good_guy.cpp -o good_guy.o
	g++ -I"C:\SFML-2.6.2\include" -c tit_for_tat.cpp -o tit_for_tat.o
	g++ -I"C:\SFML-2.6.2\include" -c main.cpp -o main.o

link: 
	g++ -I"C:\SFML-2.6.2\include" .\main.o  .\good_guy.o .\tit_for_tat.o -o main.exe -L"C:\SFML-2.6.2\lib" -lmingw32 -lsfml-graphics -lsfml-window -lsfml-system -lsfml-main

run:
	./main.exe