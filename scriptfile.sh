DED_FLAGS="-Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wmissing-field-initializers -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC"
FILES="main.cpp ii.cpp input_cvadratka.cpp compare_double1_and_double2.cpp testing_cvadratka.cpp solve_line.cpp solve_square.cpp answer_square.cpp color_of_system.cpp"
OUT_PROG="a.exe"

echo -e "\033[35m\033[40m"   # фиолетовый на чёрном
echo "Files: "
echo -e "\033[0m"   #белый на чёрном фоне
echo ${FILES}

echo -e "\033[31m\033[40m"   #красный на чёрном фоне
echo "Flags: "
echo -e "\033[0m"   #белый на чёрном фоне
echo ${DED_FLAGS}

echo -e "\033[36m\033[40m"   #голубой на чёрном фоне
echo "Compilation start"
echo -e "\033[0m"   #белый на чёрном фоне
g++ ${FILES} -o ${OUT_PROG} ${DED_FLAGS}   

echo -e "\033[32m\033[40m"   #зеленый на чёрном фоне
echo "Compilation complite"
echo -e "\033[0m"   #белый на чёрном фоне
#
#\033[30m - чёрный     текст
#\033[31m - красный    текст
#\033[32m - зелёный    текст
#\033[33m - жёлтый     текст
#\033[34m - синий      текст
#\033[35m - фиолетовый текст
#\033[36m - голубой    текст
#\033[37m - серый      текст
#
#\033[40m - чёрный     фон
#\033[41m - красный    фон
#\033[42m - зелёный    фон
#\033[43m - жёлтый     фон
#\033[44m - синий      фон
#\033[45m - фиолетовый фон
#\033[46m - голубой    фон
#\033[47m - серый      фон
#
#\033[0m  - сброс