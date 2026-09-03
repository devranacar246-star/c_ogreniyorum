# C diline giriş

- Program derlenmeden önce # işareti ile başlayan satırlar önce işlenir ve ilgili dosyalar programa dahil edilir. Bu yüzden # işareti kullanılır.

```c
#include <stdio.h>
#include <stdlib.h>
```

- int main () ana fonksiyondur ve c dilinde diğer yazılacak fonksiyonlar ana fonksiyonun içine yazılır

- Her bir kod satırına statement denir ve kodların bittiği ; işareti ile ifade edilir.

## Örnek
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("hello world!\n");
    return 0;
}
```

- C dilinde kodlar arasında boşlukların kullanılması kod okunabilirliği için kullanılır çünkü c dilinde boşluklar makine diline aktarılmaz.

- C dili türkçe karakter desteklemez.

- printf fonksiyonu başta # sembolü ile eklediğimiz kütüphane sayesinde kullanılabilir durumdadır



