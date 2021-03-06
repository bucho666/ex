#pragma once
#include "type.h"
#include <stddef.h>

typedef struct {
  char* key;
  void* data;
  unsigned long hash;
} bucket;

typedef struct {
  bucket** table;
  int length;
  int usable_buckets;
} hash;

hash hash_new(size_t data_size);
void hash_set(hash* hash, const char* key, void* data);
void* hash_get(hash* hash, const char* key);
void* hash_remove(hash* hash, const char* key);
void hash_clear(hash* hash);
void hash_free(hash* hash);
