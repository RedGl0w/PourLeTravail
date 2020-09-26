#include "GaleryController.h"
#include <assert.h>

namespace PourLeTravail {

GaleryController::GaleryController(Responder * parentResponder) :
  ViewController(parentResponder)
{
}

View * GaleryController::view() {
  return &m_view;
}


bool GaleryController::handleEvent(Ion::Events::Event event) {
  return false;
}

}
