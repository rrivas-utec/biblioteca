#include "biblioteca.h"

Library::Library(const Library& other): sz(other.sz) {

  books = new Book[sz];
  for (int i = 0; i < sz; ++i) {
    books[i] = other.books[i];
  }

}


Library& Library::operator=(const Library& other) {

  // Verificar si soy yo
  if (&other == this) return *this;
  // Borrar el contenido anterior
  delete [] books;
  // Actualizar sz
  sz = other.sz;
  // Copiar el contenido de other
  books = new Book[sz];
  for (int i = 0; i < sz; ++i) {
    books[i] = other.books[i];
  }
  // Retorna a si mismo
  return *this;
}

Library::~Library() {

}

void Library::add_book(const Book& book) {

}

void Library::show_books() {

}
