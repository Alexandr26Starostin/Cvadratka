#компилятор
CC=g++

#файлы 
FILES=main.o testing_cvadratka.o input_coefficients.o solve_square.o solve_line.o answer_square.o compare_double1_and_double2.o color_of_system.o ii.o

#исполнитель
OUT_PROG=-o a.exe

#флаги
DED_FLAGS=-c -Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wmissing-field-initializers -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC

all: cvadratka

cvadratka: $(FILES)
	$(CC) $(FILES) $(OUT_PROG)

main.o: main.cpp
	$(CC) $(DED_FLAGS) main.cpp

testing_cvadratka.o: testing_cvadratka.cpp
	$(CC) $(DED_FLAGS) testing_cvadratka.cpp

 input_cvadratka.o: input_coefficients.cpp
	$(CC) $(DED_FLAGS) input_coefficients.cpp

solve_square.o: solve_square.cpp
	$(CC) $(DED_FLAGS) solve_square.cpp

solve_line.o: solve_line.cpp
	$(CC) $(DED_FLAGS) solve_line.cpp

answer_square.o: answer_square.cpp
	$(CC) $(DED_FLAGS) answer_square.cpp

compare_double1_and_double2.o: compare_double1_and_double2.cpp
	$(CC) $(DED_FLAGS) compare_double1_and_double2.cpp

color_of_system.o: color_of_system.cpp
	$(CC) $(DED_FLAGS) color_of_system.cpp

ii.o: ii.cpp
	$(CC) $(DED_FLAGS) ii.cpp

clear: 
	rm -rf *.o cvadratka