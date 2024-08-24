DED_FLAGS="-Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wmissing-field-initializers -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC"
FILES="main.cpp ii.cpp input_cvadratka.cpp compare_double1_and_double2.cpp testing_cvadratka.cpp solve_line.cpp solve_square.cpp answer_square.cpp color_of_system.cpp"
OUT_PROG="a.exe"

echo "Files: "
echo ${FILES}

echo "Flags: "
echo ${DED_FLAGS}

echo "Compilation start"
g++ ${FILES} -o ${OUT_PROG} ${DED_FLAGS}
echo "Compilation complite"