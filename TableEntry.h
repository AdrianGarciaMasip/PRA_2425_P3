#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <string>
#include <ostream>

// Clase genérica TableEntry
template <typename V>
class TableEntry {
public:
    std::string key; // Clave del par
    V value;         // Valor del par

    // Constructores
    TableEntry(std::string key, V value) : key(key), value(value) {}
    TableEntry(std::string key) : key(key), value(V()) {}
    TableEntry() : key(""), value(V()) {}

    // Sobrecarga del operador ==
    friend bool operator==(const TableEntry<V> &te1, const TableEntry<V> &te2) {
        return te1.key == te2.key;
    }

    // Sobrecarga del operador !=
    friend bool operator!=(const TableEntry<V> &te1, const TableEntry<V> &te2) {
        return te1.key != te2.key;
    }

    // Sobrecarga del operador <<
    friend std::ostream &operator<<(std::ostream &out, const TableEntry<V> &te) {
        out << "('" << te.key << "' => " << te.value << ")";
        return out;
    }
};

#endif

