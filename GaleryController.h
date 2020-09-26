#ifndef POURLETRAVAIL_GALERY_CONTROLLER_H
#define POURLETRAVAIL_GALERY_CONTROLLER_H

#include <escher.h>
#include "GaleryView.h"

namespace PourLeTravail {

class GaleryController : public ViewController {
public:
  GaleryController(Responder * parentResponder);
  bool handleEvent(Ion::Events::Event event) override;
  View * view() override;
private:
  GaleryView m_view;
};

}

#endif
