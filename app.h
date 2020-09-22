#ifndef POURLETRAVAIL_APP_H
#define POURLETRAVAIL_APP_H

#include <escher.h>
#include "PasswordController.h"

namespace PourLeTravail {

class App : public ::App {
public:
  class Descriptor : public ::App::Descriptor {
  public:
    I18n::Message name() override;
    I18n::Message upperName() override;
    const Image * icon() override;
  };
  class Snapshot : public ::App::Snapshot {
  public:
    Snapshot();
    App * unpack(Container * container) override;
    void reset() override;
    Descriptor * descriptor() override;
  };
private:
  App(Snapshot * snapshot);
  PasswordController m_passwordController;
  StackViewController m_stackView;
};

}

#endif