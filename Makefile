PROJECT_NAME=AppliedC_array_box

SRC= main.c\
src/create_an_array.c



INC= -Iinc

PROJECT_OUTPUT=$(PROJECT_NAME).out



$(PROJECT_NAME):all

.PHONY:all run clean

all:$(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

clean:
	rm *.out
