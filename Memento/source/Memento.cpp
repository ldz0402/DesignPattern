#include "Memento.h"

namespace MementoNS {
ChessmanMemento* Chessman::save() {
  return new ChessmanMemento(getLabel(), getX(), getY());
}

void Chessman::restore(ChessmanMemento* m) {
  setLabel(m->getLabel());
  setX(m->getX());
  setY(m->getY());
  return;
}
}  // namespace MementoNS