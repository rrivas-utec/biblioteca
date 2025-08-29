#pragma once

#include "libro.h"

class Library {
  Book* books = nullptr;
  int sz = 0;

public:
  Library() = default;
  // Constructor Copia
  Library(const Library& other);
  // Operador asignacion Copia
  Library& operator=(const Library& other);
  // Destructor
  ~Library();

  // Metodos
  void add_book(const Book& book);
  void show_books();

};


