#Makefile for this project

#Variáveis:
CC=gcc
FLAGS=-c -Wall
LIBS=-lm
OBS=main.o MatrixInt.o parse.o calc.o

all : project

calc.o : project.h calc.c
	$(CC) $(FLAGS) calc.c
parse.o : project.h parse.c
	$(CC) $(FLAGS) parse.c
main.o : project.h main.c
	$(CC) $(FLAGS) main.c
MatrixInt.o : project.h MatrixInt.c
	$(CC) $(FLAGS) MatrixInt.c
project : $(OBS)
	$(CC) -o project $(OBS) $(LIBS)