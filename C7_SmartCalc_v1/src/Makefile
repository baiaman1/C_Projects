CC  =   gcc -g -Wall -Wextra -Werror -std=c99
SRC =   *.c
OBJ =   $(SRC:%.c=%.o)
RUN = build/SmartCalc.app/Contents/MacOS/SmartCalc 

all: install
	$(RUN)

%.o: %.c
	$(CC) -c $<

install: uninstall
	mkdir build
	cd build && cmake build ../front/SmartCalc
	make -C ./build/

uninstall:
	rm -Rf build/
	rm -rf Calc.tar

dvi:
	cd doxygen && ./doxygen Doxyfile && open html/index.html

dist:
	tar -cf ./Calc.tar ./build/SmartCalc.app/Contents/MacOS/SmartCalc

test:
	$(CC) -lgcov -coverage ./tests/*.c $(SRC) -lcheck -lm -lpthread -o test
	./test

gcov_report:
	lcov -t "test" -o test.info -c -d .
	genhtml -o test_output test.info
	@cd ./test_output ; open index.html

clean:
	rm -rf *.gcno *.gcda *.txt
	rm -rf test_output
	rm -rf test test.info
	rm -Rf html/ latex/
	rm -rf report
