INCLUDE_DIR=../include
TARGET_BIN=mathuser
all:$(TARGET_BIN)


$(TARGET_BIN) : main.c printresult.c ../libmath/math.c
	gcc -save-temps -I $(INCLUDE_DIR) main.c printresult.c ../libmath/math.c -o $(TARGET_BIN)


clean : 
	rm -vf *.i *.o *.s *~ $(TARGET_BIN)


#target : dependencies
#	receipe
