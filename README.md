# Tugas 1 - Struktur Data dan Algoritma

## Anggota Kelompok

* Nama: Nabil Aulia Dika (250810701100090) (Nomor 1 & 2)
* Nama: Shifa Azzuhura (250810701100088) (Nomor 3 & 4 )
* Nama: Annisa Azzuhra Maghfirah (250810701100045) (Nomor 5 & 7)
* Nama: Aulia Faradina (250810701100019) (Nomor 6 & 8)
* Nama: Junita Dwi Rahayu (250810701100076) (Nomor 9 & 10)

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
Menggabungkan dua linked list menjadi satu linked list baru secara berurutan.

## **Cara Kerja:**

* Mengecek apakah salah satu list kosong.
* Menambahkan node list kedua ke akhir list pertama.
* Menjaga agar urutan node tetap sama.

**Contoh Input:**

```
list1 = [1, 2, 3]
list2 = [4, 5]
```

**Output:**

```
[1, 2, 3, 4, 5]
```

---

## Soal 2 - Partisi List

**Penjelasan:**
Membagi linked list menjadi dua bagian berdasarkan nilai pivot. Node dengan nilai < pivot dipindahkan ke list kiri, ≥ pivot ke list kanan.

## **Cara Kerja:**

* Membuat dua list baru (kiri dan kanan).
* Menelusuri setiap node dan menambahkannya ke list yang sesuai.
* Menggabungkan kedua list hasil partisi.

**Contoh Input:**

```
head = [1, 4, 3, 2, 5, 2], pivot = 3
```

**Output:**

```
[1, 2, 2, 4, 3, 5]
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
Program ini digunakan untuk mengelompokkan node pada linked list berdasarkan nilai ganjil dan genap. Node dengan nilai ganjil akan ditempatkan di bagian depan, sedangkan node dengan nilai genap ditempatkan di bagian belakang tanpa mengubah urutan awal masing-masing kelompok.

## **Cara Kerja:**

* Program menelusuri setiap node pada linked list
* Jika nilai node ganjil, maka dimasukkan ke dalam list ganjil
* Jika nilai node genap, maka dimasukkan ke dalam list genap
* Setelah semua node dipisahkan, list ganjil dan genap digabungkan kembali
* Urutan dalam masing-masing kelompok tetap dipertahankan

**Contoh Input:**

```
1 -> 2 -> 3 -> 4 -> 5
```

**Output:**

```
1 -> 3 -> 5 -> 2 -> 4
```

---

## Soal 6 - Cek Palindrom

**Penjelasan:**
Mengecek apakah linked list membentuk pola palindrom (sama dari depan dan belakang).

## **Cara Kerja:**

* Menemukan titik tengah linked list.
* Membalik setengah list dari titik tengah.
* Membandingkan kedua bagian node demi node.
* Mengembalikan hasil boolean (true/false).

**Contoh Input:**

```
head = [1, 2, 3, 2, 1]
```

**Output:**

```
true
```

---

## Soal 7 - Hapus Elemen Tertentu

**Penjelasan:**
Program ini digunakan untuk menghapus semua node pada linked list yang memiliki nilai tertentu. Setelah penghapusan, linked list akan diperbarui tanpa node yang memiliki nilai tersebut.

## **Cara Kerja:**

* Program menelusuri linked list dari awal
* Jika node di awal memiliki nilai yang ingin dihapus, maka node tersebut langsung dihapus dan head diperbarui
* Selanjutnya program mengecek setiap node berikutnya
* Jika ditemukan node dengan nilai yang sama, node tersebut akan dilewati dan dihapus dari linked list
* Proses dilakukan hingga seluruh node selesai diperiksa

**Contoh Input:**

```
1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
```

**Output:**

```
1 -> 2 -> 3 -> 4 -> 5
```

---

## Soal 8 - Reorder List

**Penjelasan:**
Mengubah urutan linked list dari L0 → L1 → … → Ln menjadi L0 → Ln → L1 → Ln-1 → ….

## **Cara Kerja:**

* Temukan titik tengah linked list.
* Balik setengah list setelah tengah.
* Gabungkan node secara bergantian dari kedua list.

**Contoh Input:**

```
head = [1, 2, 3, 4]
```

**Output:**

```
[1, 4, 2, 3]
```

---

## Soal 9 - Reverse Sebagian

**Penjelasan:**
Membalik urutan node dari posisi m ke n dalam linked list.

## **Cara Kerja:**

* Temukan node sebelum posisi m.
* Balik sublist dari posisi m sampai n.
* Sambungkan sublist yang dibalik ke bagian list sebelum dan sesudahnya.

**Contoh Input:**

```
head = [1, 2, 3, 4, 5], m = 2, n = 4
```

**Output:**

```
[1, 4, 3, 2, 5]
```

---

## Soal 10 - Hapus Berdasarkan Array

**Penjelasan:**
Menghapus node-node yang nilainya terdapat dalam array referensi.

## **Cara Kerja:**

* Membuat set atau array boolean untuk memeriksa nilai yang harus dihapus.
* Menelusuri linked list dan hapus node jika nilainya ada dalam array referensi.

**Contoh Input:**

```
head = [1, 2, 3, 4, 5], arr = [2, 4]
```

**Output:**

```
[1, 3, 5]
```

---

## Catatan

* Program dibuat menggunakan bahasa C sesuai dengan ketentuan tugas
* Struktur data utama yang digunakan adalah singly linked list
* Setiap fungsi dibuat terpisah agar lebih modular dan mudah dipahami
* Program telah diuji menggunakan beberapa contoh kasus untuk memastikan hasil sesuai dengan yang diharapkan
