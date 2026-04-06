// ==========================================
// Tugas 1 - Struktur Data dan Algoritma
// File: fungsi.h
// ==========================================

#ifndef FUNGSI_H
#define FUNGSI_H

// struct utama (jangan diubah)
struct Node {
    int nilai;
    struct Node *next;
};

// ====== PROTOTYPE FUNGSI ======

// Soal 1
struct Node* gabungList(struct Node** list, int ukuranList);

// Soal 2
struct Node* partisiList(struct Node* head, int x);

// Soal 3
struct Node* hapusDuplikasi(struct Node* head);

// Soal 4
struct Node* hapusDariAkhir(struct Node* head, int n);

// Soal 5
struct Node* ganjilGenapList(struct Node* head);

// Soal 6
int apaPalindrom(struct Node* head);

// Soal 7
struct Node* hapusElemen(struct Node* head, int x);

// Soal 8
void reorderList(struct Node* head);

// Soal 9
struct Node* reverseAntara(struct Node* head, int kiri, int kanan);

// Soal 10
struct Node* modifiedList(int* num, int numSize, struct Node* head);

#endif
