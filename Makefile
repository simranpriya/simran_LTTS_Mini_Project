# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME = all.exe
SRC = Simran.c\
src\append.c\
src\modify.c\
src\overwrite.c\
src\read.c\
src\remove.c\
src\search.c


INC = inc

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o all.exe
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
	
clean:
	del /q *.exe