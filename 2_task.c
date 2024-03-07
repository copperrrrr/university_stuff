 #include <stdio.h>
int main(void) {
    float s; // сумма ряда
    float a; // очередной элемент ряда
    float c; // числитель очередного элемента ряда
    float b; // знаменатель очередного элемента ряда
    float eps; // пороговое значение
    int i; // номер очередного элемента ряда
    int sign; // знак очередного элемента ряда
    
    // ввод параметров ряда
    printf("eps=");
    scanf("%f", &eps);
    //начальное присваивание переменных
    s = 0;
    sign = 1;
    i = 0;
    c = 1;
    b = 1;
    a = 1.0; //первый член ряда равен 1
    //цикл
    while (a > eps) {
        s = s + a * sign;
        sign = -sign;
        c = c + 1;
        b = b * 2;
        a = c / b; //вычисляем следующий член ряда
        i = i + 1;
    }
    //вывод результата
    printf("n = %d, s = %f\n", i, s);
    return 0;
}