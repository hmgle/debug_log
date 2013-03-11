CFLAGS = -Wall -g
CFLAGS += -DDEBUG=1

TARGET = debug_log_test
.PHONY: all clean

all: $(TARGET)

debug_log_test: debug_log_test.o foo.o

clean:
	-rm *.o $(TARGET)

