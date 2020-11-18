#ifndef POURLETRAVAIL_CONTROLLER_H
#define POURLETRAVAIL_CONTROLLER_H

#include <escher.h>
#include "PasswordView.h"
#include "GaleryController.h"
#include <ion/events.h>
#define PASSWORD_SIZE 10

namespace PourLeTravail {

class PasswordController : public ViewController {
public:
  PasswordController(Responder * parentResponder);
  bool handleEvent(Ion::Events::Event event) override;
  View * view() override;
private:
  PasswordView m_view;
  GaleryController m_controller;
  Ion::Events::Event m_eventHistoy[PASSWORD_SIZE];
};

constexpr static Ion::Events::Event k_password[PASSWORD_SIZE] = {
  Ion::Events::Up, Ion::Events::Up, Ion::Events::Down, Ion::Events::Down, Ion::Events::Left, Ion::Events::Right, Ion::Events::Left, Ion::Events::Right, Ion::Events::Back, Ion::Events::OK,
}; // Change it to your password

}

#endif
