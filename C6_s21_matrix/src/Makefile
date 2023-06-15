CC=gcc -g
SRC=s21_matrix.c 
OBJ=s21_matrix.o
CFLAGS=-Wall -Werror -Wextra
TESTFLAGS=-lcheck -lm -lpthread -lgcov

all: s21_matrix.o test gcov_report s21_matrix.a 

gcov_report: s21_matrix.o test
	mkdir report
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

clean:
	rm -rf *.o *.gc* *.a test a.out report *.txt test.dSYM

rebuild: clean all

style:
	clang-format -n *.c *.h

check: test
	valgrind --vgdb=no --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=RESULT_VALGRIND.txt ./test
	cppcheck --enable=all --suppress=missingIncludeSystem --inconclusive --check-config *.c *.h

leaks:
	leaks -atExit -- ./test | grep LEAK: