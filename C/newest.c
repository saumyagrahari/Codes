#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a hash node
typedef struct HashNode {
    char* key;
    int value;
    struct HashNode* next;
} HashNode;

// Define the structure for the hash table
typedef struct HashTable {
    int size;
    HashNode** array;
} HashTable;

// Function to create a new hash node
HashNode* createNode(char* key, int value) {
    HashNode* newNode = (HashNode*)malloc(sizeof(HashNode));
    newNode->key = strdup(key);
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Function to calculate the hash index
int hashFunction(HashTable* table, char* key) {
    int hash = 0;
    for (int i = 0; i < strlen(key); i++) {
        hash += key[i];
    }
    return hash % table->size;
}

// Function to insert a key-value pair into the hash table
void insert(HashTable* table, char* key, int value) {
    int index = hashFunction(table, key);
    HashNode* newNode = createNode(key, value);

    if (table->array[index] == NULL) {
        table->array[index] = newNode;
    } else {
        HashNode* temp = table->array[index];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to search for a key in the hash table
int search(HashTable* table, char* key) {
    int index = hashFunction(table, key);
    HashNode* temp = table->array[index];

    while (temp != NULL) {
        if (strcmp(temp->key, key) == 0) {
            return temp->value;
        }
        temp = temp->next;
    }
    return -1; // Key not found
}

// Function to delete a key-value pair from the hash table
void delete(HashTable* table, char* key) {
    int index = hashFunction(table, key);
    HashNode* temp = table->array[index];
    HashNode* prev = NULL;
}