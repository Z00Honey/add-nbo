CC = gcc 
OPT = -o
TARGET = add-nbo

$(TARGET) : add-nbo.o
	$(CC) $(OPT) $(TARGET) $(TARGET).o

clean : 
	rm *.o $(TARGET)
