CC=gcc -g
CFLAGS=-Wall -Werror -Wextra -std=c11
GCOV_FLAGS=-fprofile-arcs -ftest-coverage -lgcov
CHECK_FLAGS=-lcheck -lm -lpthread
# for Linux -lsubunit
ALL_FLAGS=$(CFLAGS) $(GCOV_FLAGS) $(CHECK_FLAGS)
SRCS = $(wildcard arithmetic/*.c convertors/*.c another/*.c  comparison/*.c *.c)
OBJS = $(SRCS:.c=.o)
TEST_NAME = test_decimal
REPORT_NAME = report

all: s21_decimal.a gcov_report

test: $(OBJS) ./tests/*.c 
	$(CC) $(CFLAGS) $(OBJS) -o $(TEST_NAME) ./tests/*.c $(CHECK_FLAGS)
	./$(TEST_NAME)

s21_decimal.a: $(OBJS)
	ar rc s21_decimal.a $(OBJS) 
	ranlib s21_decimal.a

gcov_report: ./tests/*.c
	$(CC) -o $(TEST_NAME) $(SRCS) ./tests/*.c  $(ALL_FLAGS) 
	./$(TEST_NAME)
	geninfo *.gcda *.gcno -b . -o check_res 
	genhtml check_res -o $(REPORT_NAME)

clean:
	rm -rf $(OBJS) *.o *.gcno *.gcda *.info *.a $(REPORT_NAME) $(TEST_NAME) check_res RESULT_VALGRIND.txt	

rebuild: clean all

leaks:
	leaks -atExit -- ./$(TEST_NAME) | grep LEAK

cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem ./$(TEST_NAME)

valgrind:
	valgrind --vgdb=no --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=RESULT_VALGRIND.txt ./$(TEST_NAME)
	cppcheck --enable=all --suppress=missingIncludeSystem --inconclusive --check-config *.c *.h

style:
	clang-format -n arithmetic/*.c convertors/*.c another/*.c  comparison/*.c *.c *.h tests/*.c tests/*.h