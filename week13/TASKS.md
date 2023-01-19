## Задача 1
Да се напише рекурсивна функция bool `areEqual(char* str1, char* str2)`, която проверява дали двата стринга са равни.

**Пример:**
```
areEqual("", "") -> true
```
```
areEqual("", "Hi") -> false
```
```
areEqual("Hello","Hello") -> true
```
```
areEqual("Hello", "Hi") -> false
```

## Задача 2
Да се реализира рекурсивна функция, която намира n-тия член от редицата на Фибоначи.

## Задача 3
Напишете рекурсивна функция, която приема масив и връща минималния му елемент.

**Пример:**

**Вход:**
```
5
10 15 4 15 16
```

**Изход:**
```
4
```

## Задача 4
Напишете функция, която приема число в десетична бройна система и връща числото в двоична бройна система

**Вход:**
```
5
```

**Изход:**
```
101
```



## Задача 5
Напишете функция с прототип `void evaluate(const char*)`, която намира и изпечатва
   броят на малки и големи букви и броят на цифрите в даденият низ
   
**Пример:**
```
evaluate("3 Doors Down") 
      => Брой малки букви: 7
         Брой големи букви: 2
         Брой цифри: 1
```

## Задача 6
Напишете функция с прототип bool `swapcase(char*)`, която променя всяка голяма
буква на малка и всяка малка на голяма в подадения низ

**Пример:**
```
swapcase("Yellow Submarine") => yELLOW sUBMARINE
```

## Задача 7
8 queen problem: Напишете функция, която поставя 8 царици на шахматна дъска по такъв начин, че никои две царици да не се виждат.

**Пример:**
| a | b | c | d | e | f | g | h | |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| | | Q | | | | | | 1 |
| | | | | | Q | | | 2 |
| | | | | | | | Q | 3 |
| Q | | | | | | | | 4 |
| | | | Q | | | | | 5 |
| | | | | | | Q | | 6 |
| | | | | Q | | | | 7 |
| | Q | | | | | | | 8 |

| a | b | c | d | e | f | g | h | |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
|Q| | | | | | | | 1 |
| | | | | | |Q| | 2 |
| | | | |Q| | | | 3 |
| | | | | | | |Q| 4 |
| |Q| | | | | | | 5 |
| | | |Q| | | | | 6 |
| | | | | |Q| | | 7 |
| | |Q| | | | | | 8 |

## Задача 8 
Напишете функция, която решава ханойските кули.

**Пример:**
При брой на дисковете 3.

Move disk 1 from A to B
Move disk 2 from A to C
Move disk 1 from B to C
Move disk 3 from A to B
Move disk 1 from C to A
Move disk 2 from C to B
Move disk 1 from A to B