## ---------
## SmartCalc
## ---------

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, obj/%.o, $(SRC))
TARGET = qt/calc/calc.app/Contents/MacOS/calc
TARGET_H = s21_smart_calc.h

FLAGS_ER = -Wall -Wextra -Werror -std=c11 -pedantic -fsanitize=address
FLAGS_GRIND = -Wall -Wextra -Werror -std=c11 -pedantic
FLAGS_COV = -lcheck -lgcov -fprofile-arcs --coverage
FLAGS_CHECK = -lcheck -lgcov

TMP_FILES = *.gcda *.gcno gcov_report.info *.gcda obj/*.gcno obj/*.gcda
REST_FILES = $(TARGET) report obj/*.o ./test test.dSYM _valgrind-out.txt
QT_TMP = qt/calc/calc_autogen qt/calc/CMakeFiles qt/calc/cmake_install.cmake qt/calc/CMakeCache.txt qt/calc/Makefile
QT_APP = qt/calc/calc.app
QT_BUILD = qt/calc/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Release
TAR = calc.tar.gz
DOCS = doxygen/html doxygen/latex

.PHONY: all
all: $(OBJ) install ## install and run program
	$(TARGET)

.PHONY: install
install: ## generate Makefile from cmake and run it to create executable
	cd qt/calc && cmake . && $(MAKE) all

.PHONY: uninstall
uninstall: ## remove files: cmake generated
	rm -rf $(QT_TMP)

.PHONY: clean
clean: uninstall ## remove files: cmake generated, check.h temporary files
	rm -rf $(TMP_FILES)

.PHONY: fclean
fclean: clean ## remove files: cmake generated, check.h temporary files, executables, dists, docs
	rm -rf $(QT_APP) $(TAR) $(DOCS) $(REST_FILES) $(QT_BUILD)

.PHONY: dvi
dvi: ## generate and open doc
	cd doxygen && ./doxygen Doxyfile && open html/index.html

.PHONY: dist
dist: install ## archive executable
	tar -zcf $(TAR) $(TARGET)

obj/%.o: %.c ## generate .o files
	gcc $(FLAGS_ER) $(FLAGS_COV) -c $< -o $@

.PHONY: tests
tests: $(OBJ) ## generate test executable
	gcc $(OBJ) tests/*.c $(FLAGS_ER) $(FLAGS_CHECK) -o test
	./test
	$(MAKE) clean

.PHONY: gcov_report ## generate and open gcov report with coverage
gcov_report: fclean $(OBJ)
	gcc $(OBJ) tests/*.c $(FLAGS_ER) $(FLAGS_CHECK) -o test
	gcc -o test $(OBJ) tests/*.c $(FLAGS_ER) $(FLAGS_CHECK)
	./test
	lcov -t "gcov_report" -o gcov_report.info -c -d ./obj
	genhtml -o report gcov_report.info;
	$(MAKE) clean
	open report/index.html

.PHONY: lint ## run linters
lint: $(OBJ)
	cp ../materials/linters/CPPLINT.cfg ./
	python3 ../materials/linters/cpplint.py --extensions=c *.c
	python3 ../materials/linters/cpplint.py --extensions=h $(TARGET_H)
	rm -rf ./CPPLINT.cfg
	cppcheck --enable=all --suppress=missingIncludeSystem *.c

.PHONY: grind ## run valgrind
grind: FLAGS_ER = $(FLAGS_GRIND)
grind: $(OBJ)
	gcc $(OBJ) tests/*.c $(FLAGS_CHECK) -o test
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=_valgrind-out.txt ./test
	$(MAKE) clean

.PHONY: leaks ## run leaks
leaks: FLAGS_ER = $(FLAGS_GRIND)
leaks: tests
	leaks --atExit -- ./test
	$(MAKE) clean
