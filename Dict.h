#ifndef DICT_H
#define DICT_H

#include <string>
#include <stdexcept>

template <typename V> 
class Dict {
    public:
        virtual ~Dict() = default;

        // Inserta el par clave-valor en el diccionario
        // Lanza una excepción si la clave ya existe
        virtual void insert(std::string key, V value) = 0;

        // Busca el valor asociado a una clave
        // Lanza una excepción si la clave no se encuentra
        virtual V search(std::string key) const = 0;

        // Elimina el par clave-valor del diccionario
        // Lanza una excepción si la clave no se encuentra
        virtual V remove(std::string key) = 0;

        // Devuelve el número de elementos en el diccionario
        virtual int entries() const = 0;
};

#endif

