#TODO 学一下makefile怎么写
#编译的时候依赖条件可以不写上.h文件，但在gcc那行需要指定搜索头文件的路径 gcc -I ./include
SRC_PATH=./src
INCLUDE_PATH = ./include
BIN_PATH = ./bin

main: main.o J2H_time.o
	gcc main.o J2H_time.o -o $(BIN_PATH)/main
main.o: $(SRC_PATH)/main.c
	gcc -I $(INCLUDE_PATH) -c $(SRC_PATH)/main.c
J2H_time.o: $(SRC_PATH)/J2H_time.c
	gcc -c $(SRC_PATH)/J2H_time.c
.PHONY:
clean:
	rm -rf *.o
cleanall:
	rm -rf $(BIN_PATH)/main *.o