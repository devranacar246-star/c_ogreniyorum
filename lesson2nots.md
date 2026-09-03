# C programlamada yorumlar ve kaçış karakterleri 

- C dilinde // yaparak yorum yapılabilir

## örnek
```c
#include <studio.h>
#include <stdlib.h>

int main()
{
    //this is my comment
    //machine can't see this
    printf("Hello world!\n");
    return 0;
}
```

- Çoklu satırda yorum yapmak için /* ve */kullanılarak yorum bu iki ifadenin arasında yazılabilir.

## örnek
```c
#include <studio.h>
#include <stdlib.h>

int main()
{
    /*
    this is my comment
    machine can't see this
    */

    printf("Hello world!\n");
    return 0;
}
```
- Yukarıda printf fonksiyonun içinde yazan \n kodu bir satır aşşağı inme durumunu sağlar.

## örnek
```c
#include <studio.h>
#include <stdlib.h>

int main()
{
    /*
    this is my comment
    machine can't see this
    */

    printf("Hello world!\n");
    printf("This is my second c code\n "); 
    return 0;
}
```

- Tek printf fonksiyonun içinde de \n kullanabiliriz.

## örnek
```c
#include <studio.h>
#include <stdlib.h>

int main()
{
    /*
    this is my comment
    machine can't see this
    */

    printf("Hello world!\nMy second c code\nThis is wonderful.");
    return 0;
}
```

- C dilinde boşluklar da bir karakter olarak kabul edilir.

## Escape sequences

- '\n' --> Yeni satır. İmleci bir sonraki satırın başına konumlandırır.
- '\b' --> Backspace tuşunun işlevini gerçekleştir.
- '\t' --> Yatay sekme. İmleci bir sonraki sekme durağına hareket ettirir.
- '\\"' --> Çift tırnak işaretini basar. Makinenin tırnağı bir kod olarak okumaması için çok önemli!
- '\\\' --> Ters bölü işaretini ekrana basar.Bu da makinenin bir kod olarak algılamaması için önemli!