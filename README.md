# Scrolling Text LCD I2C 16x2

## Deskripsi Program

Program ini bertujuan untuk menampilkan teks pada LCD 16x2 menggunakan modul I2C dengan dua tampilan berbeda pada setiap baris.

* Baris pertama menampilkan teks **"QUOTE"** secara statis dan berada di tengah layar
* Baris kedua menampilkan teks berjalan (scrolling) dari kanan ke kiri

Teks yang digunakan pada program ini adalah:
**"Belajar 5 menit, istirahat 5 jam"**

---

## Komponen yang Digunakan

* Arduino Uno
* LCD 16x2 dengan modul I2C
* Kabel jumper

---

## Library yang Digunakan

* Wire.h
* LiquidCrystal_I2C.h

---

## Cara Kerja Program

1. LCD diinisialisasi menggunakan alamat I2C (0x27)
2. Pada fungsi `setup()`, LCD diaktifkan dan lampu latar dinyalakan
3. Baris pertama menampilkan teks **"QUOTE"** di posisi tengah
4. Baris kedua menampilkan teks berjalan dengan memanfaatkan teknik substring
5. Teks bergerak dari kanan ke kiri dengan mengubah nilai offset secara terus-menerus
6. Setelah teks habis, animasi akan mengulang dari awal

---

## Hasil Program

* Baris pertama: menampilkan teks "QUOTE" (statis)
* Baris kedua: menampilkan teks berjalan dari kanan ke kiri

---

## Kesimpulan

Program ini berhasil menampilkan teks statis dan teks berjalan pada LCD I2C 16x2. Penggunaan teknik substring memungkinkan teks bergerak dengan tampilan yang lebih rapi dan stabil.

---

## Dokumentasi

Video hasil running program terdapat pada folder **Dokumentasi**
