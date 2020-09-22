#ifndef POURLETRAVAIL_CONTROLLER_H
#define POURLETRAVAIL_CONTROLLER_H

#include <escher.h>
#include "PasswordView.h"

namespace PourLeTravail {

class PasswordController : public ViewController {
public:
  PasswordController(Responder * parentResponder);
  bool handleEvent(Ion::Events::Event event) override;
  View * view() override;
private:
  PasswordView m_view;
};

}

#endif
