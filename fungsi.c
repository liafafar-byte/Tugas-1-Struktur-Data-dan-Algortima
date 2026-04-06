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
int apaPalindrom(struct Node* head) {
    // simpan nilai ke array dulu
    int arr[1000]; // cukup aman untuk batas soal
    int i = 0;

    struct Node* curr = head;

    while (curr != NULL) {
        arr[i++] = curr->nilai;
        curr = curr->next;
    }

    // cek dari depan dan belakang
    int kiri = 0;
    int kanan = i - 1;

    while (kiri < kanan) {
        if (arr[kiri] != arr[kanan]) {
            return 0; // bukan palindrom
        }
        kiri++;
        kanan--;
    }

    return 1; // palindrom
}

// ================= SOAL 7 =================
struct Node* hapusElemen(struct Node* head, int x) {
    // \\ ISI LOGIKA SOAL 7 DI SINI

    return head;
}

// ================= SOAL 8 =================
void reorderList(struct Node* head) {
    if (head == NULL || head->next == NULL) return;

    // 1. cari tengah (slow-fast)
    struct Node* slow = head;
    struct Node* fast = head;

    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // 2. balik setengah kedua
    struct Node* prev = NULL;
    struct Node* curr = slow->next;
    struct Node* next = NULL;

    slow->next = NULL; // putus list

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // 3. gabung selang-seling
    struct Node* first = head;
    struct Node* second = prev;

    while (second != NULL) {
        struct Node* temp1 = first->next;
        struct Node* temp2 = second->next;

        first->next = second;
        second->next = temp1;

        first = temp1;
        second = temp2;
    }
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
