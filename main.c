// ==========================================
// Tugas 1 - Struktur Data dan Algoritma
// File: main.c
// ==========================================

#include <stdio.h>
#include <stdlib.h>
#include "fungsi.h"

// buat node baru
struct Node* buatNode(int nilai) {
    struct Node* baru = (struct Node*)malloc(sizeof(struct Node));
    baru->nilai = nilai;
    baru->next = NULL;
    return baru;
}

// print list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->nilai);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {

    // \\ CONTOH TESTING (boleh diubah / ditambah)

    struct Node* head = buatNode(1);
    head->next = buatNode(1);
    head->next->next = buatNode(2);
    head->next->next->next = buatNode(3);

    printf("Sebelum:\n");
    printList(head);

    // \\ PANGGIL FUNGSI SESUAI SOAL YANG MAU DI TEST
    head = hapusDuplikasi(head);

    printf("Sesudah:\n");
    printList(head);

    return 0;
}
