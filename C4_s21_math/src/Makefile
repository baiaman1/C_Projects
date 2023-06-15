CC = gcc -std=c11
CFLAGS = -Wall -Werror -Wextra
OBJECTS = s21_math.o
SOURCES = s21_math.c
GCOVFLAGS = -fprofile-arcs -ftest-coverage
UNAME = $(shell uname -s)
ifeq ($(UNAME),Darwin)
	LIBFLAGS = -lcheck
	OPEN = open
endif
ifeq ($(UNAME),Linux)
	LIBFLAGS = -lcheck -lm -lpthread -lrt -lsubunit
	OPEN = xdg-open
endif

all: gcov_report test s21_math.a 

s21_math.a:
	$(CC) -c $(CFLAGS) $(SOURCES)
	ar rcs s21_math.a $(OBJECTS)

test: s21_math.a
	$(CC) $(CFLAGS) s21_math_test.c s21_math.a $(LIBFLAGS) -o s21_math_test
	./s21_math_test

gcov_report: s21_math.a
	$(CC) $(GCOVFLAGS) $(CFLAGS) s21_math_test.c $(LIBFLAGS) $(SOURCES) -o GcovReport
	./GcovReport
	lcov -t "GcovReport" -o GcovReport.info -c -d .
	genhtml -o report GcovReport.info
	$(OPEN) ./report/index.html

lint:
	cp ../materials/linters/CPPLINT.cfg ./
	python3 ../materials/linters/cpplint.py --extensions=c *.h *.c
	rm CPPLINT.cfg

valgrind: test
	valgrind --leak-check=full \
	--show-leak-kinds=all \
	--track-origins=yes \
	--verbose \
	--log-file=valgrind-out.txt \
	./s21_math_test

cppcheck:
	cppcheck --enable=all --inconclusive *.c *.h

clean: 
	rm -rf *.o *.gcno *.gcda *.info *.a *.gch GcovReport s21_math_test report valgrind-out.txt

rebuild: clean all
