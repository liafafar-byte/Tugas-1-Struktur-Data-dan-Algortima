// ==========================================
// Tugas 1 - Struktur Data dan Algoritma
// File: fungsi.c
// ==========================================

#include <stdio.h>
#include <stdlib.h>
#include "fungsi.h"

// ================= SOAL 1 =================
struct Node* gabungList(struct Node** list, int ukuranList) {
    // \\ ISI LOGIKA SOAL 1 DI SINI

    return NULL;
}

// ================= SOAL 2 =================
struct Node* partisiList(struct Node* head, int x) {
    // \\ ISI LOGIKA SOAL 2 DI SINI

    return head;
}

// ================= SOAL 3 =================
struct Node* hapusDuplikasi(struct Node* head) {
    // \\ CONTOH SUDAH DIISI (biar jadi acuan)

    struct Node* curr = head;

    while (curr != NULL && curr->next != NULL) {
        if (curr->nilai == curr->next->nilai) {
            struct Node* temp = curr->next;
            curr->next = temp->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }

    return head;
}

// ================= SOAL 4 =================
struct Node* hapusDariAkhir(struct Node* head, int n) {
    // \\ CONTOH SUDAH DIISI

    struct Node* fast = head;
    struct Node* slow = head;

    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }

    if (fast == NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    struct Node* temp = slow->next;
    slow->next = temp->next;
    free(temp);

    return head;
}

// ================= SOAL 5 =================
struct Node* ganjilGenapList(struct Node* head) {
    // \\ ISI LOGIKA SOAL 5 DI SINI

    return head;
}

// ================= SOAL 6 =================
int apaPalindrom(struct Node* head) {
    // \\ ISI LOGIKA SOAL 6 DI SINI

    return 0;
}

// ================= SOAL 7 =================
struct Node* hapusElemen(struct Node* head, int x) {
    // \\ ISI LOGIKA SOAL 7 DI SINI

    return head;
}

// ================= SOAL 8 =================
void reorderList(struct Node* head) {
    // \\ ISI LOGIKA SOAL 8 DI SINI
}

// ================= SOAL 9 =================
struct Node* reverseAntara(struct Node* head, int kiri, int kanan) {
    // \\ ISI LOGIKA SOAL 9 DI SINI

    return head;
}

// ================= SOAL 10 =================
struct Node* modifiedList(int* num, int numSize, struct Node* head) {
    // \\ ISI LOGIKA SOAL 10 DI SINI

    return head;
}
