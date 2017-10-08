INCLUDE_DIR=../include
STATIC_LIB=libmath.a
DYN_LIB=libmath.so

all : $(STATIC_LIB) $(DYN_LIB)
 
$(STATIC_LIB) : math.o stat.o
	ar -rcs $(STATIC_LIB) math.o stat.o

$(DYN_LIB) : math.o stat.o
	gcc -shared -fPIC -o $(DYN_LIB) math.o stat.o

math.o : math.c
	gcc  -I $(INCLUDE_DIR) -c math.c -o math.o

stat.o : stat.c
	gcc -fPIC -I $(INCLUDE_DIR) -c stat.c -o stat.o

clean : 
	rm -vf *.o *~ $(STATIC_LIB) $(DYN_LIB)
