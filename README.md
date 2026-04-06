# Tugas 1 - Struktur Data dan Algoritma

## Anggota Kelompok

* Nama: 
* Nama:Shifa Azzuhura (250810701100088) (Nomor 3 & 4 )
* Nama:
* Nama: Aulia Faradina (250810701100019) (Nomor 6 & 8)
* Nama:

## Cara Compile

Program ini dijalankan menggunakan compiler GCC. Untuk melakukan compile, gunakan perintah berikut di terminal:
gcc main.c fungsi.c -o program
Perintah di atas akan menggabungkan file main.c dan fungsi.c menjadi satu program dengan nama program.

## Cara Menjalankan

Setelah proses compile berhasil, program dapat dijalankan dengan perintah:
./program

## Deskripsi Singkat

Program ini dibuat untuk menyelesaikan 10 permasalahan yang berkaitan dengan struktur data linked list menggunakan bahasa C. Setiap soal menguji pemahaman terhadap operasi dasar hingga manipulasi lanjutan pada linked list seperti penggabungan, penghapusan, pembalikan, hingga pengecekan kondisi tertentu. Dalam pengerjaannya, digunakan struct Node sebagai representasi elemen dalam linked list, di mana setiap node memiliki data berupa integer dan pointer ke node berikutnya. Tujuan dari tugas ini adalah agar mahasiswa dapat memahami konsep linked list secara lebih dalam serta mampu mengimplementasikannya dalam berbagai kasus permasalahan.

## Soal 1 - Gabung Linked List

**Penjelasan:**
(Tulis penjelasan singkat, misalnya tujuan fungsi dan apa yang dilakukan)

## **Cara Kerja:**

*
*

**Contoh Input:**

```
(Tulis contoh input)
```

**Output:**

```
(Tulis hasil output)
```

---

## Soal 2 - Partisi List

**Penjelasan:**

## **Cara Kerja:**

*
*

**Contoh Input:**

```
```

**Output:**

```
```

---

## Soal 3 - Hapus Duplikasi

**Penjelasan:**
Fungsi ini bertujuan untuk menghapus semua node yang memiliki nilai duplikat pada sebuah linked list yang sudah terurut (sorted), sehingga setiap nilai hanya muncul satu kali.

## **Cara Kerja:**

* Melakukan pengecekan apakah list kosong atau tidak.
* Menggunakan pointer bantuan bernama jalan untuk menelusuri list dari awal.
* Membandingkan nilai node saat ini dengan nilai node berikutnya.
* Jika nilainya sama, node berikutnya ditandai untuk dihapus dan sambungan list dialihkan ke node setelahnya.
* Jika nilainya berbeda, pointer jalan maju ke node berikutnya.

**Contoh Input:**

```
head = [1, 1, 2, 3, 3]
```

**Output:**

```
[1, 2, 3]
```

---

## Soal 4 - Hapus Node dari Akhir

**Penjelasan:**
Penjelasan:Fungsi ini menghapus node pada posisi ke-n yang dihitung dari urutan paling belakang dalam sebuah linked list. 

## **Cara Kerja:**

* Melakukan pengecekan apakah list kosong atau tidak.
* Menggunakan pointer bantuan bernama jalan untuk menelusuri list dari awal.
* Membandingkan nilai node saat ini dengan nilai node berikutnya.
* Jika nilainya sama, node berikutnya ditandai untuk dihapus dan sambungan list dialihkan ke node setelahnya.
* Jika nilainya berbeda, pointer jalan maju ke node berikutnya.

**Contoh Input:**

```
head = [1, 1, 2, 3, 3]
```

**Output:**

```
[1, 2, 3]
```

---

## Soal 5 - Ganjil Genap List

**Penjelasan:**

## **Cara Kerja:**

*
*

**Contoh Input:**

```
```

**Output:**

```
```

---

## Soal 6 - Cek Palindrom

**Penjelasan:**

## **Cara Kerja:**

*
*

**Contoh Input:**

```
```

**Output:**

```
```

---

## Soal 7 - Hapus Elemen Tertentu

**Penjelasan:**

## **Cara Kerja:**

*
*

**Contoh Input:**

```
```

**Output:**

```
```

---

## Soal 8 - Reorder List

**Penjelasan:**

## **Cara Kerja:**

*
*

**Contoh Input:**

```
```

**Output:**

```
```

---

## Soal 9 - Reverse Sebagian

**Penjelasan:**

## **Cara Kerja:**

*
*

**Contoh Input:**

```
```

**Output:**

```
```

---

## Soal 10 - Hapus Berdasarkan Array

**Penjelasan:**

## **Cara Kerja:**

*
*

**Contoh Input:**

```
```

**Output:**

```
```

---

## Catatan

* Program dibuat menggunakan bahasa C sesuai dengan ketentuan tugas
* Struktur data utama yang digunakan adalah singly linked list
* Setiap fungsi dibuat terpisah agar lebih modular dan mudah dipahami
* Program telah diuji menggunakan beberapa contoh kasus untuk memastikan hasil sesuai dengan yang diharapkan
