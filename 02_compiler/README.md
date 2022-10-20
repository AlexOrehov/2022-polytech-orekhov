-O0: Этот уровень отключает оптимизацию полностью и является уровнем по умолчанию
-O1: Это наиболее простой уровень оптимизации.
-O2: Шаг вперед от -O1. С параметром -O2, компилятор попытается увеличить производительность кода
 без нарушения размера, и без затрачивания большого количества времени компиляции.
-O3: Это наибольший возможный уровень оптимизации. Включает оптимизации,
 являющейся дорогостоящей с точки зрения времени компиляции и потребления памяти.
-Os: На этом уровне код будет оптимизирован по объему. Оптимизация для уменьшения размера файла
-Ofast: состоит из -O3 плюс -ffast-math, -fno-protect-parens, и -fstack-arrays.
-Og: оптимизирует для debug
-Oz: схож с Os, но только более агрессивный


g++ -O0 complex.cpp
sum=4e+38 ./a.out 0,81s user 0,00s system 76% cpu 1,081 total 39K 20 окт 22:20 a.out

g++ -O1 complex.cpp
sum=4e+38 ./a.out 0,28s user 0,00s system 56% cpu 0,475 total 40K 20 окт 22:26 a.out

g++ -O2 complex.cpp
sum=4e+38 ./a.out 0,24s user 0,00s system 50% cpu 0,454
35K 20 окт 22:29 a.out

g++ -O3 complex.cpp
sum=4e+38 ./a.out 0,20s user 0,00s system 29% cpu 0,736 total 35K 20 окт 22:31 a.out

g++ -Os complex.cpp
sum=4e+38 ./a.out 0,18s user 0,00s system 47% cpu 0,411
35K 20 окт 22:33 a.out

g++ -Ofast complex.cpp
sum=4e+38 ./a.out 0,23s user 0,00s system 50% cpu 0,464
35K 20 окт 22:34 a.out

g++ -Og complex.cpp
sum=4e+38 ./a.out 0,28s user 0,00s system 56% cpu 0,475 total 40K 20 окт 22:35 a.out

g++ -Oz complex.cpp
sum=4e+38 ./a.out 0,28s user 0,00s system 8% cpu 3,319 total
35K 20 окт 22:35 a.out


objdump -h a.out

a.out: file format mach-o arm64

Sections: Idx Name Size VMA Type 0 __text 00000400 0000000100003a1c TEXT 1 __stubs 000000cc 0000000100003e1c TEXT 2 __gcc_except_tab 0000007c 0000000100003ee8 DATA 3 __cstring 00000005 0000000100003f64 DATA 4 __unwind_info 00000094 0000000100003f6c DATA 5 __got 000000a0 0000000100004000 DATA

Итог: самое медленное выполнение программы с флагом -O0. Самое быстрое выполнение программы с флагом -Os
Самая большая нагрузка на процессор при выполнении программы у флага -Oz. Программа становится больше
компиляции флагов -O0 -O1 -Og