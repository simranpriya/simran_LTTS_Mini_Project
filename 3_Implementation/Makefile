# comments

#Target : dependency
#<TAB>Command

SRC = unity/unity.c\
src/append.c\
src/modify.c\
src/overwrite.c\
src/openFile.c\
src/read.c\
src/remove.c\
src/search.c\
test/testFile.c\


INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = Simran.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(PROJECT_NAME)
	./${PROJECT_NAME}
	gcov -a src\append.c\ src\modify.c\ src\overwrite.c\ src\read.c\ src\remove.c\ src\search.c Simran.c