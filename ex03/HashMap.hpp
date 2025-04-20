#ifndef HASHMAP_HPP
#define HASHMAP_HPP

#include <cstdlib>
#include <iostream>

#define TABLE_SIZE 26

class Harl;

template <typename ValueType>
class HashMap {
private:
    std::pair<std::string, ValueType>* buckets[TABLE_SIZE];
    size_t compute_hash(const std::string& s) { return (s[0] - 'A') % 26; }

public:
    HashMap() {
        for (int i = 0; i < TABLE_SIZE; ++i) buckets[i] = NULL;
        std::cout << "HashMap created" << std::endl;
    }

    ~HashMap() {
        for (int i = 0; i < TABLE_SIZE; ++i) delete buckets[i];
        std::cout << "HashMap destroyed" << std::endl;
    }

    void insert(std::string key, ValueType value) {
        size_t index = compute_hash(key);
        if (!buckets[index]) buckets[index] = new std::pair<std::string, ValueType>(key, value);
        else std::cout << buckets[index]->first << " already present" << std::endl;
    }

    ValueType* get_value(std::string key) {
        size_t index = compute_hash(key);
        if (!buckets[index] || buckets[index]->first != key) {
            // std::cerr << "Key error: " << key << std::endl;
            return NULL;
        } else {
            return &buckets[index]->second;
        }
    };
};

#endif
