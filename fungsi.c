// ==========================================
// Tugas 1 - Struktur Data dan Algoritma
// File: fungsi.c
// ==========================================

#include <stdio.h>
#include <stdlib.h>
#include "fungsi.h"

// ================= SOAL 1 =================
// Fungsi komparator untuk qsort (mengurutkan dari besar ke kecil)
int compareDescending(const void *a, const void *b) {
    return ((int)b - (int)a);
}

struct Node* gabungList(struct Node** list, int ukuranList) {
    if (ukuranList == 0) return NULL;

    int arr[10000]; // Buffer aman untuk menampung nilai
    int count = 0;

    // 1. Ekstrak semua nilai dari semua list ke dalam array
    for (int i = 0; i < ukuranList; i++) {
        struct Node* current = list[i];
        while (current != NULL) {
            arr[count++] = current->nilai;
            current = current->next;
        }
    }

    if (count == 0) return NULL;

    // 2. Sort array secara descending
    qsort(arr, count, sizeof(int), compareDescending);

    // 3. Bangun kembali menjadi satu linked list baru
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->nilai = arr[0];
    head->next = NULL;
    struct Node* tail = head;

    for (int i = 1; i < count; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->nilai = arr[i];
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }

    return head;
}
// ================= SOAL 2 =================
struct Node* partisiList(struct Node* head, int x) {
    // Dummy nodes untuk mempermudah partisi ke dua jalur
    struct Node* lessHead = (struct Node*)malloc(sizeof(struct Node));
    struct Node* lessTail = lessHead;
    
    struct Node* greaterHead = (struct Node*)malloc(sizeof(struct Node));
    struct Node* greaterTail = greaterHead;
    
    struct Node* current = head;
    
    // 1. Pisahkan node sesuai nilai x
    while (current != NULL) {
        if (current->nilai < x) {
            lessTail->next = current;
            lessTail = lessTail->next;
        } else {
            greaterTail->next = current;
            greaterTail = greaterTail->next;
        }
        current = current->next;
    }
    
    // 2. Gabungkan kedua partisi (ekor 'less' ke kepala 'greater')
    greaterTail->next = NULL; // Tutup list agar tidak ada cycle
    lessTail->next = greaterHead->next; // Lewati dummy node greaterHead
    
    struct Node* newHead = lessHead->next;
    
    // 3. Bebaskan memory dari dummy nodes
    free(lessHead);
    free(greaterHead);
    
    return newHead;
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

    struct Node *ganjilHead = NULL, *ganjilTail = NULL;
    struct Node *genapHead = NULL, *genapTail = NULL;

    struct Node* current = head;

    while (current != NULL) {
        if (current->nilai % 2 != 0) {
            // ganjil
            if (ganjilHead == NULL) {
                ganjilHead = ganjilTail = current;
            } else {
                ganjilTail->next = current;
                ganjilTail = current;
            }
        } else {
            // genap
            if (genapHead == NULL) {
                genapHead = genapTail = current;
            } else {
                genapTail->next = current;
                genapTail = current;
            }
        }
        current = current->next;
    }

    // gabungkan
    if (ganjilTail != NULL) {
        ganjilTail->next = genapHead;
    }

    if (genapTail != NULL) {
        genapTail->next = NULL;
    }

    return (ganjilHead != NULL) ? ganjilHead : genapHead;
}
// ================= SOAL 6 =================
int apaPalindrom(struct Node* head) {
    // simpan nilai ke array dulu
    int* arr = malloc(sizeof(int) * 100000); // cukup aman untuk batas soal
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

    // hapus node di awal
    while (head != NULL && head->nilai == x) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    struct Node* current = head;

    while (current != NULL && current->next != NULL) {
        if (current->next->nilai == x) {
            struct Node* temp = current->next;
            current->next = temp->next;
            free(temp);
        } else {
            current = current->next;
        }
    }

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
struct ListNode{
    int val;
    struct ListNode *next;
};

typedef struct ListNode Node;
 
struct ListNode* reverseBetween(struct ListNode* head, int kiri, int kanan){
    if( kiri == kanan ){
        return head;
    }
    if( kiri == 1 ){
        int i = 1;
        Node *current = head;
        Node *prev = NULL;

        while( i <= kanan ){
            Node *next = current -> next;
            current -> next = prev;

            prev = current;
            current = next;
            i++;
        }

        head -> next = current;
        return prev;
    }
    else{
        int i = 1;
        Node *current = head;
        Node *prev = NULL;

        while( i < kiri ){
            prev = current;
            current = current -> next;
            i++;
        }

        //simpan referensi
        Node *leftEnd = prev; 
        Node *middleEnd = current;
        prev = NULL;

        //reverse dari current sampai indeks kanan
         while( i <= kanan ){
            Node *next = current -> next;
            current -> next = prev;

            prev = current;
            current = next;
            i++;
        }

        leftEnd -> next = prev;
        middleEnd -> next = current;

        return head;
    }
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    int arr[] = { 1, 5, 3, 7, 5 };

    for(int i = 0; i < 5; i++){
        Node newNode = (Node)malloc(sizeof(Node));
        newNode -> val = arr[i];
        newNode -> next = NULL;

        if( head == NULL){
            head = tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    head = reverseBetween(head, 2, 4);

    Node *temp = head;
    while(temp != NULL){
        printf("%d ", temp -> val);
        temp = temp -> next;
    }
    printf("\n");

    return 0;
}
// ================= SOAL 10 =================
//fungsi bikin linked list dari array
struct Node* createList(int arr[], int n){
    if(n == 0) return NULL;
    struct Node* head = malloc(sizeof(struct Node));

    head -> data = arr[0];
    head -> next = NULL;

    struct Node* current = head;

    for(int i = 1; i < n; i++){
        current -> next = malloc(sizeof(struct Node));
        current = current -> next;
        current -> data = arr[i];
        current -> next = NULL;
    }
    return head;
}

void printList(struct Node* head){
    struct Node* current = head;
    while (current != NULL){
        printf("%d ", current -> data);
        current = current -> next;
    }
    printf("%n");
}

struct Node* modifiedList(int* num, int numSize, struct Node* head){
    int mark[106] = {0};
    for(int i = 0; i < numSize; i++){
        mark[num[i]] = 1;
    }

    printf("Sebelum dihapus: ");
    printList(head);

    //hapus node di depan
    while(head != NULL && mark[head -> data] == 1){
        struct Node* temp = head;
        head = head -> next;
        free(temp);
    }

    if(head == NULL){
        printf("Sesudah dihapus: kosong\n");
        return NULL;
    }

    //iterasi node selanjutnya
    struct Node* current = head;
    while(current -> next != NULL){
        if(mark[current -> next -> data] == 1){
            struct Node* temp = current -> next;
            current -> next = current -> next -> next;
            free(temp);
        }
        else{
            current = current -> next;
        }
    }

    printf("\nSesudah dihapus: ");
    printList(head);

    return head;

}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int nums[] = {1, 2, 3};

    struct Node* head = createList(arr, 5);

    head = modifiedList(nums, 3, head);

    return 0;
}
