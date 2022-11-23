## Структурни(съставни) типове данни - масиви

Когато се налага да пазим и обработваме по-сложна информация (например: заплатите на 100 работника в даден фирма) вместо да използваме 100 различни променливи и да помним коя променлива за кой служител се отнася, можем да използваме съставни типове данни.

### Масиви (Arrays)
Масивът е съставен тип данни, представляващ крайна редица от **еднотипни елементи** с **пряк достъп до всеки елемент**. Масивът е съвкупност от данни и ни позволява да осъществим достъп до много променливи от един и същи тип чрез **идентификатор**. В декларацията на масива използваме квадратни скоби ([]), за да кажем на компилатора, че това е променлива от тип масим (вместо нормална променлива), както и колко последователни (по адреси) клетки ("променливи") да се заделят в паметта (наречени дължина на масива).

```
int salaries[100];
```

### Деклариране на масив
За декларацията на масив най-важно е да определим броя на елементите и техния тип.
int iArr[5] - масив с 5 целочислени елемента
double dArr[10] - масив с 10 елемента (числа с плаваща запетая)
char str[100] - масив със 100 символа

Броят на елементите може да бъде зададен и чрез константа, която е предварително дефинирана и е известна по време на компилация:
```
const int size = 5;
long lArr[size];
```

Достъпването до всеки елемент се осъществява чрез индексирана променлива, в която са указани **името на масива** и **индексът** (поредният номер на елемента в масива), поставен в квадратни скоби.
***Индексирането започва от 0. Тоест елементът на първа позиция е с индекс 0, втория - с индекс 1 и т.н.***
**Индексите започват от 0 и стигат до броя на елементите в масива - 1**
```
arr[0];
```

### Инициализация на масив
#### Начин 1:
```
int arr[5];
arr[0] = 1;
arr[1] = 22;
arr[2] = 331;
arr[3] = -4;
arr[4] = 512312;
```

#### Начин 2:
```
int arr[5] = {1, 22, 331, -4, 512312};
```

#### Начин 3:
```
int arr[] = {1, 2, 3};
```

#### Начин 4:
```
int arr[5];
for (int i = 0; i < 5; ++i) {
    std::cin >> arr[i];
}
```

### Допустими операции
Операции върху цели масиви не са допустими.
```
int a[5], b[5] = {1, 2};
a = b; //Недопустимо
```

### Въвеждане и извеждане на елементите на масив
#### Въвеждане:
```
int arr[5];
for (int i = 0; i < 5; ++i) {
    std::cout << "arr[" << i << "] = ";
    std::cin >> arr[i];
}
```
#### Извеждане:
```
int arr[5];
    ...
for (int i = 0; i < 5; ++i) {
    std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
}
```


## Символни низове (char array / string)
Мазив от тип char се нарича символен низ.
Пример: "Information systems", "ZDR KOPR", "" (празен низ), "ZDR" (подниз на "ZDR KOPR")

Низовете се използват за образуване на изречения на някой език, обработка на текстове, кодиране на информация, кодиране на команди и други.

### Деклариране на символен низ
При декларирането на низ трябва да се предвиди място за един допълнителен символ '\0' - терминираща нула (null символ). Той служи да покаже къде е краят на низа. Този символ не се отпечатва, а просто казва на компилатора къде свършна низа.
```
char str[100]; //Декларираме char масив със 100 елемента като последният ще бъде \0. Тоест това е низ с 99 значещи символа в него.
```

### Инициализация на низове
#### Начин 1:
```
char str[4] = {'a', 'b', 'c', '\0'};
```
#### Начин 2:
```
char str[4] = "abc";
```
#### Начин 3:
```
char str[256];
std::cin >> str; // Така обаче ще вземе само една дума. Т.е ако въведем Hello world! (Ще инициализираме символен низ само с Hello).
```
#### Начин 4:
Можем да инициализираме низове и със стойности, въведени от клавиатурата.
```
char chArr[256];
//cin.ignore()  
// в случай, че преди символния низ имаме някакъв нормален cin, задължително се пише cin.ignore().
// пример -> cin >> n; cin.ignore(); cin.getline(chArr,256); cin.getline(otherCharArr,256); 
// САМО КОГАТО ИМАМЕ НОРМАЛЕН CIN ПРЕДИ НЯКОЙ GETLINE СЕ ПИШЕ CIN.IGNORE() ПРЕДИ CIN.GETLINE
cin.getline(chArr, 256) 
// така ще прочетем целия ред дори да има спейсове и ако въведем Hello     world!  
// ще вземе целия ред, стига да не напишем нещо с повече символа от 255   
// (256-тия е за терминиращата 0 (#nerverforget)).
```

Броят на елементите може да бъде зададен и чрез константа, която е предварително дефинирана и известна по време на компилация.
```
const int size = 3;
char str[size];
```

Достъпът до елементите е като при останалите масиви чрез индексиране.

### Как ще намерим дължината на един низ???