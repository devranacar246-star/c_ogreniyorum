# Veri Türleri ve Variable'lar

- Variable'lar programdaki verilerin bellekte tutulmasını sağlayan araçlardır.

## C data types

- char --> size: 1 byte , description: Tek bir karakter/sayı/harf veya ASCII değerlerini saklar.

- int --> size: 4 bytes , description: 
Tüm tam sayılar.

- float --> size: 4 bytes , description:
Bir veya daha fazla ondalık içeren kesirli sayıları saklar. 7 basamak saklamak için yeterli.

- double --> size: 8 bytes , description: Bir veya daha fazla ondalık içeren kesirli sayıları saklar. 16 basamak için yeterli

- Buradaki veri türleri en yaygın olanlardan birkaçı daha fazla veri türü için internete c data types yazarak diğer veri türlerine bakılabilir. 

## C variables

- Anlaşılır ve bakımı kolay kod oluşturmak için açıklayıcı adların kullanılması önerilir.

- İsimler harf,rakam ve alt çizgi içerebilir.

- İsimler bir harf ya da "_" ile başlamalıdır.

- Adlar büyük küçük harfe duyarlıdır (myName ile MyName farklı değişkenlerdir.)

- Adlar boşlu ve özel karakterler(!,#,% vb.) içeremez.

- Ayrılmış kelimeler (int, if gibi) ad olarak kullanılamaz.

## Format Specifiers

- `%c` --> 'char' veri tipini yazdırır.
- `%d` --> 'int' veri tipini yazdırır.
- `%ld` --> 'Long int' veri tipini yazdırır.
- `%f` --> 'float' veri tipini yazdırır.
- `%s` --> metinsel ifadeleri yazdırır.
- `%u` --> Unsigned int veri tipini yazdırır.
- `%lf` --> double veri türünü yazdırır.

## Veri türlerinin alt ve üst sınırları

- char: 
alt sınır --> -128
üst sınır --> 127

- int:
alt sınır --> -2 147 483 648
üst sınır --> 2 147 483 647

- short int:
alt sınır --> -32 768
üst sınır --> 32 767

- long int:
alt sınır --> -9 223 372 036 854 775 808
üst sınır --> 9 223 372 036 854 775 807

- unsigned char:
alt sınır --> 0 
üst sınır --> 225

- unsigned short:
alt sınır --> 0
üst sınıfr --> 65 535

- unsigned int:
alt sınır --> 0
üst sınır --> 4 294 967 295

- unsigned long:
alt sınır --> 0
üst sınır --> 18 446 774 073 709 551 615

- float:
alt sınır --> -3.4e-38
üst sınır --> 3.43e+38

- long double:
alt sınır --> -3.4e-4932
üst sınır --> 1.1e+4932

- double:
alt sınır --> -1.7e-308
üst sınır --> 1.7e+308
