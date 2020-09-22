#include "PasswordController.h"
#include <assert.h>

namespace PourLeTravail {

PasswordController::PasswordController(Responder * parentResponder) :
  ViewController(parentResponder)
{
}

View * PasswordController::view() {
  return &m_view;
}


bool PasswordController::handleEvent(Ion::Events::Event event) {
  return false;
}

}
