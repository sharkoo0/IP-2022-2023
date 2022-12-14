### Динамична памет
www.tutorialspoint.com/cplusplus/cpp_dynamic_memory

#### За разлика от повечето езици за програмиране, С++ добавя още малко интересни неща свързани с директния достъп до паметта (освен указателите). В C++ паметта, с която вашата програма работи се разделя на 2 части:
- **Stack** - паметта, която се заделя и освобождава автоматично за всички променливи във всички функции на програмата + стековите рамки на функциите.
- **Heap** - паметта, която не се изпозва от програмата, докато ние РЪЧНО не я заделим и освободим, по време на изпълнението на програмата.

https://www.geeksforgeeks.org/memory-layout-of-c-program/

### Важно!
**При динамично заделената памет, програмистът отговаря за нейното заделяне(когато му е необходима) и освобождаване(когато вече не му е неонходима). Ако не освободи паметта, ще се получи MEMORY LEAK - изтичане на памет (последвано обикновено от *blue screen of death*).**

### Заделяне и освобождаване на памет
С++ поддържа два оператора за манипулиране на динамичната памет: **new** - за заделяне и **delete** - за освобождаване.

#### NEW
**Синтаксис:**
```
<type> *<name> = new <type>(<value>); // Заделяне на една клетка динамично
<type> *<name> = new <type>[<size>]; // Заделяне на масив динамично
```

Пример:
```
int *variable = new int(15);
int *array = new int[10];
```

#### Ако няма достатъчно памет, която искаме да заделим, тогава се връща "грешка" от тип std::bad_alloc или NULL указател.

### DELETE
**Синтаксис:**
```
delete <pointer-variable>;
```

Пример:
```
delete variable;
delete[] array;
```

#### Не забравяйте []! иначе няма да освободи и 10-те клетки.

**За по-лесно запомняне: Ако при заделяне сме използвали [], то при изтриване също използваме [].**

### Динамична памет (по-подробно)
Паметта, която можете да използвате в C++ програма е най-общо казано три типа:

#### Статична (static)
В тази памет се записват променливите, обявени извън функциите (т.нап. глобални променливи). Те се виждат от всички фуннкции през цялото изпълнение на програмата.

#### Стекова (stack)
В тази памет се записван предадените параметри и променливите дефинирани вътре във функциите и въобще в произволен блок. Променливите се виждат само във функцията (блока) в която са дефинирани и се унищожават при завършване на функцията (излизане от блока)

#### Динамична (heap/dynamic)
- останалата част от паметта на компютърна е достъпна до всички програми при поискване. За управлението на тази памет се грижи операционната система. Във всеки момент отделен блок от паметта може да е свободен или да е заделен за някоя програма, при която може да го чете само тя. При опит някоя програма да прочете памет, която не е заделена за нея, независимо дали е заделена за друга програма или е свободна, операционната система прекратява изпълнението на програмат с грешка Access Violation
- в C++ програма можете да заделите памет за една променлива или за масив от променливи с помощта на оператора new, който връща указател към променливата:
```
int* oneVariable = new int;
int* array = new int\[x\];
```
- за разлика от статичната памет, в динамичната памет може да се създават масиви, чиято големина не е известна предварително, т.е. е пресметната или е прочетена от клавиатурата например.
- Променливите в динамичната памет се виждат през указателя, който получавате от new до края на изпълнението на програмата, когато тази памет се освобождава
- Заделена с new памет се освобождава с оператора delete
```
delete oneVariable;
delete[] array;
```
- С new се използва delete, а с new\[...\] се използва delete[]. Двете форми не бива да се смесват
- Ако се опитате да използвате динамична памет след като сте я освободили с delete - Access Violation
- Ако се опитате да освободите памет, която не сте заделили - Access Violation
- Ако се опитате да освободите паметта, която сте заделили, но не от началото (напр. delete array + 3) - Access Violation
- Ако забравите да освободите заделена памет или "загубите" указателя към заделена памет, то тази памет става неизползваема за целия компютър до завършването на програмата ви. Дори да губите само 1B памет, ако това се случва например в два вложени цикъла от 1 до 50000, то цялата ви налична памет ще се изчерпи. Такава грешка се нарича memory leak.
- Многомерни матрици не могат да се заделят с new, само едномерни масиви
- Въпрос: как трябва да заделим данните, ако искаме да можем да ги достъпваме с двойно индексиране, т.е. с a[i][j]? А как трябва да ги освободим?
- Отговор: трябва a да е double** и освен това да създадем допълнителен масив от указатели, които сочат към съответните редове на матрицата

