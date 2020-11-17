#include "PasswordController.h"
#include <assert.h>
#include <iostream>
#include <layout_events.h>


namespace PourLeTravail {
  

PasswordController::PasswordController(Responder * parentResponder) :
  ViewController(parentResponder),
  m_controller(parentResponder),
  m_eventHistoy({Ion::Events::None,Ion::Events::None,Ion::Events::None,Ion::Events::None,Ion::Events::None,Ion::Events::None,Ion::Events::None,Ion::Events::None,Ion::Events::None})
{
}

View * PasswordController::view() {
  return &m_view;
}


bool PasswordController::handleEvent(Ion::Events::Event event) {
  memmove(&m_eventHistoy[0], &m_eventHistoy[1], sizeof(Ion::Events::Event)*(PASSWORD_SIZE-1));
  m_eventHistoy[PASSWORD_SIZE-1] = event;
  if(memcmp(&m_eventHistoy, &k_password, sizeof(Ion::Events::Event)*PASSWORD_SIZE) == 0) {
    static_cast<StackViewController *>(parentResponder())->push(&m_controller);
  }
  #if 0
  #ifndef NDEBUG
  #error Can t build this debug part without DEBUG=1
  #endif
  for(int i = 0; i < PASSWORD_SIZE; i++){
    const char * text = Ion::Events::s_nameForEvent[(uint8_t) m_eventHistoy[i]];
    if(text != nullptr){
      std::cout << text << " ";
    }
  }
  std::cout << std::endl;
  #endif
  return (event == Ion::Events::Home) ? false : true;
}

}
