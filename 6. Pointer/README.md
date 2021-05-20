# Reference & Dereference

## Reference

Reference artinya menyimpan alamat dari sebuah variable.

```c++
int a = 10;
int &b = a;
```

`b` **menyimpan value** dari `a` karena keduanya memiliki alamat memory yang sama. ini disebut `b` _reference to_ `a`. Jika kita ubah nilai `b` maka nilai `a` juga berubah.

```c++
int a = 10;
int *b = &a;
```

Hal ini berbeda jika kita definisikan `b` sebagai `pointer` seperti kode diatas, Karena `b` **menyimpan alamat memory** dari variable `a` hal ini ditandakan dengan arterisk (\*) dan juga penambahan ampersand pada variable a `&a` yang artinya `a` menampilkan alamat memory-nya untuk disimpan dalam variable `*b`. Oleh karenanya `a` dan `b` **memiliki alamat memory yang berbeda**.

Untuk mengubah nilai `a` melalui pointer `b` maka kita perlu men-deferencing `b` menggunakan (*) untuk kemudian kita re-inisialisasi dengan nilai yang baru. Sehingga `a` dan `*b`memiliki nilai yang sama. Ingat bahwa`b`dan`*b`tidaklah sama,`b`menyimpan memory`a`sedangkan`*b`menyimpan value`a`.
