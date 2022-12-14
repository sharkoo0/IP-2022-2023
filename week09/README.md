## Указатели и рефенции (pointers and references)

### Какво са указателите и за какво ни трябват?
В началото, когато учихме какво са променливите, казахме, че променливата е има (идентификатор) за клетка от паметта, която съдържа стойност. 
Например:
```
int x;
```
Когато изпълняваме операция, CPU отделя част от RAM паметта с размер 4 байта. За примера, нека кажем, че променливата x се намира на адрес 140 в паметта. Когато програма види нашата променлива в израз, тя знае, че трябва да отиде на адрес 140 и да вземе стойността на x.

#### За любознателните:
Всички компютри имат памет, известна също като RAM (random access memory). Например, компютърът ви може да има 16, 32, 64 и повече мегабайта RAM(днес вече говорим за гигабайти). RAM паметта съхранява програмите, които компютърът ви изпълнява заедно с данните, които те използват(променливи и структури от данни). Паметта може да се представи просто като масив от байтове. В този масив всяка клетка на паметта има свой собствен адрес - адресът на първия байт е 0, последван от 1, 2, 3 и т.н. Адресите на паметта действат точно като индексите на нормален масив. Компютърът има достъп до всеки адрес в паметта по всяко време (оттук и името "памет с произволен достъп"). Тя също така, може да групира байтове заедно, за да формира по-големи променливи, масиви или структури. Например, променлива с плаваща запетая консумира в паметта 4 съседни байта.

### Address-of operator (&)
Address-of (&) операторът ни позволява да видим **кой адрес в паметта е присвоен на променливата**. 
Пример:
```
#include <iostream>

int main() {
    int x = 5;
    std::cout << x << std::endl; // Извежда стойността на x
    std::cout << &x << std::endl; // Извежда адреса в паметта на x

    return 0;
}
```
Изход:
```
5
0x7822221582fc
```

### Value-of operator (*)
Value-of (*) операторът ни позволява да получим **стойността, съхранявана на определен адрес в паметта**.
```
#include <iostream>

int main() {
    int x = 5;
    int* p = &x;
    std::cout << x << std::endl; // Извежда стойността на x
    std::cout << &x << std::endl; // Извежда адреса в паметта на x
    std::cout << *p << std::endl; // Извежда стойността, съхранявана в клетката с адреса на x

    return 0;
}
```
Изход:
```
5
0x7822221582fc
5
```

### Указатели (pointers)
Указателят е **променлива** (NB! има тип), която съхранява **адрес в паметта като стойност**. Размерът на един указател е 4B. Както променлива от тип int съхранява цели числа, така и указателят съхранява адрес от вида 0x7822221582fc (16-тична бройна система).

#### Декларация на указател
Указателите се декларират като обикновени променливи, с изключение на това, че се поставя **'*' между типа и името на указателя**. Типът на указателя казва, че сочи към клетка, в която се съхранява стойността на променлива от същия тип. 
```
int* iPtr; // Указател от тип int
double* dPtr // Указател от тип double

//Може да се запише още и така:
int *iPtr2;
int * iPtr3; // Избягвайте този запис

int *iPtr4, *iPtr5;
```

При деклариране на няколко указателя, към всеки указател трябва да има *. *Лесно се забравя!*
```
int *iPtr6, iPtr7; // iPtr6 е указател от тип int, но iPtr7 е обикновен int!
```

#### Инициализация
**Синтаксис и семантика**
```
<type> *<name> = &<transmitter>;
```
Пример:
```
int a = 50;
int *ptr = &a;
```

По този начин правим следното: създали сме променлива от тип int и сме я инициализирали със стойност 50, след това създаваме променлива от тип указател към int на когото присвояваме адреса на а. Вземането на адрес на дадена променлива се прави чрез &(както казахме по-горе). Най - важното е да се разбере, че **указателите пазят адреса към паметта на това, с което искаме да оперираме**.
Пример:
```
int a = 50;
int *ptr = &a;

std::cout << *ptr << std::endl; // 50
std::cout << ++*ptr << std::endl; // 51
std::cout << a << std::endl; // 51
```

#### Нулеви стойности и нулеви указатели
Както всички променливи, указателите **могат да не се инициализират в началото**. Ако не е присвоена стойност на указателя, то той ще сочи някой **адрес по подразбиране**. Освен адрес към паметта, указателят може да съдържа и нулева стойност (null value). Нулевата стойност е специална стойност, която означава, че **указателят не сочи нищо/никъде (*или указателят сочи нищо*)**. Ако стойността на указателя е нулева, то той се нарича **null pointer (nullptr)**.

```
int *ptr(0); // ptr e nullptr
int * ptr2; // ptr не е инициализиран
ptr2 = 0; // prt e nullptr 
```

Тъй като нулев указател се оценява с 0, то той може да се използва в условни изрази и конснтрукции, за да се провери дали указателят е нулев указател или не.

### Указатели и масиви
Споменахме ли, че масивът е "указател"? Трудно е да повявате? Създайте масив (да кажем от double), след това напишете:
```
double arr[5] = {4, 5, 6, 7.6, 9};
std::cout << arr << std::endl; // ще изведе адреса на arr[0]
double *p = arr;
std::cout << p << std::endl; //ще изведе адреса на arr[0]
```

Това е така, защото когато създаваме масив ние всъщност създаваме указател към първия елемент на масива и когато казваме arr\[index\] (еквивалентно на *(arr + index)) казваме дай ми елемента, който се намира на позицията на: адреса на първия елемент + отместване. На пръв поглед изглежда, че мавив и указател са едно и също. Но те не са. Основната разлика се илюстрира при използване на оператора sizeof(). Когато се използва върху масив, sizeof връща размера на целия масив (дължина на масива * размера на типа на елемента). Когато се използва върху указател, сочещ масив, sizeof връща размера на адресa в паметта(в байтове). Следната програма илюстрира това:
```
#include <iostream>
using namespace std; 
int main()
{
	int array[5] = {1, 2, 3, 4, 5};
 
	cout << sizeof(array) << endl; // ще принтира sizeof(int) * дължината на масива
 
    int *ptr = array;
    cout << sizeof(ptr) << endl; // ще принтира размера на указателя
 
	return 0;
}
```
Изход:
```
20
4
```

**Масивът(разглеждан като указател към първия елемент) сам за себе си знае колко е дълъг(нали използваме [], за да му го кажем). Указател, сочещ масива не го знае, знае само къде започва.** Е, вече имаме едно доказателство, което не потвърждава равенството. Следователно отхвърляме твърдението, че масив и указател са едно и също нещо.

#### Адресна аритметика
Езикът C++ ни позволява да извършваме операции за добавяне или изваждане на адреси от указателя. Ако ptr сочи към цялото число, ptr + 1 е адреса на следващото цяло число в паметта след ptr. А ptr - 1 е адресът на предишното цяло число преди ptr. Имайте предвид, че ptr + 1 не връща адреса на паметта след ptr, а адреса на паметта на следващия обект от типа, към който сочи ptr. Ако ptr сочи към цяло число (4 байта), ptr + 3 означава 3 цели числа (12 байта) след ptr. Ако ptr сочи знак, който винаги е 1 байт, ptr + 3 означава 3 символа (3 байта) след ptr.

```
#include <iostream>
 
int main()
{
    int value = 7;
    int *ptr = &value;
 
    std::cout << ptr << '\n';
    std::cout << ptr+1 << '\n';
    std::cout << ptr+2 << '\n';
    std::cout << ptr+3 << '\n';
 
    return 0;
}
```
Изход:
```
0x7df9abb0acbc
0x7df9abb0acc0
0x7df9abb0acc4
0x7df9abb0acc8
```

Може също директно да извадите 2 адреса(например началото и края на масив), като така получавате броя клетки от първия(вкл.) до втория адрес.
```
int main()
{
    int values[5] = {11, 38, 99, 4, 7};
    int *ptr = values;
    int *ptr2 = values + 4;
 
    std::cout << ptr2 - ptr << '\n';
     
    return 0;
}
```
Изход:
```
4
```

Как можем да използваме това? Както споменахме в преди. Масивът е поредица от еднотипни променливи(елементи), които се съхраняват последователно в паметта. След това видяхме, че името на масива е указател към първият му елемент. Сега видяхме, че с указателите могат да се извършват операции по добавяне и изваждане на брой клетки от дадена клетка. Сега ще използваме всичко това за да итерираме в масива, не чрез индекси, а чрез указатели.

```
#include <iostream>
 
int main()
{
     int array [5] = {9, 4, 5, 3, 8};
 
     std::cout << &array[1] << '\n'; // ще изведе адреса в паметта на втория елемент на масива
     std::cout << array+1 << '\n'; // ще изведе адреса в паметта на втория елемент на масива 
 
     std::cout << array[1] << '\n'; // ще изведе 4
     std::cout << *(array+1) << '\n'; // ще изведе 4 () са задължителни
 
    return 0;
}
```
Следователно **array\[1\] и *(array + 1) ** са напълно еквиваленти.

#### Подаване на масив като параметър на функция
**Синтаксис за едномерен масив**
```
<return_type> <function_name> (<type> <name>[], <integer_type> <size>);
<return_type> <function_name> (<type> *<name>, <integer_type> <size>);
```

Пример:
```
void func(int arr[], int size);
void func(int *arr, int size);
```

Извикването става, само с името на масива.

**Синтаксис за двумерен масив**
```
return_type/void <function_name>( <type> <name>[][<maximum_size_of_columns>], <integer_type> <size_of_rows>, <integer_type> <size_of_rows>);
return_type/void <function_name>( <type> *(<name>)[<maximum_size_of_columns>], <integer_type> <size_of_rows>, <integer_type> <size_of_rows>);
```

Пример:
```
void func(int matrix[][10], int rows, int cols);
void func(int *(matrix)[10], int rows, int cols);
```

Извикването става, само с името на масива.

### NB! Не можем да връщаме масив от функция. Но можем да върнем указател. Виж следващата точка.