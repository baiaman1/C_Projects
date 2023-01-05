CC=gcc
SRC=s21_matrix.c
OBJ=s21_matrix.o
CFLAGS=-Wall -Werror -Wextra
TESTFLAGS=-lcheck -lm -lpthread -lgcov

all: s21_matrix.o test gcov_report s21_matrix.a

gcov_report: s21_matrix.o test
	gcovr -r. --html --html-details -o report/coverage_report.html

test: lib.a s21_matrix_test.o $(OBJ)
	$(CC) $(FLAGS) lib.a s21_matrix_test.o $(OBJ) $(TESTFLAGS) -o test
	./test

lib.a: $(OBJ)
	ar rcs lib.a $(OBJ)

s21_matrix.a: s21_matrix_verter.o
	ar rcs s21_matrix.a $(OBJ)

s21_matrix_test.o: s21_matrix_test.c
	$(CC) $(CFLAGS) --coverage -c $^

s21_matrix.o: $(SRC)
	$(CC) $(CFLAGS) --coverage -c $^

s21_matrix_verter.o: $(SRC)
	$(CC) $(CFLAGS) -c $^

# debug: $(SRC)
# 	$(CC) $(CFLAGS) $^ main.c
# 	./a.out

clean:
	rm -rf *.o
	rm -rf *.gc*
	rm -rf *.a
	rm -rf test
	rm -rf a.out
	rm -rf report/*
