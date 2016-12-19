CC = gcc
OBJ = main.o
OBJ_DIR = objs
BIN_DIR = bin
%.o : %.c
	$(CC) -c -o $@ $<
	mv $@ $(OBJ_DIR)/

cpu-vm: $(OBJ)
	$(CC) -o $@ $(OBJ_DIR)/$^
	mv $@ $(BIN_DIR)/

clean:
	rm -rf $(OBJ_DIR)/*
	rm -rf $(BIN_DIR)/*
