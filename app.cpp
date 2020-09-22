#include "app.h"
#include "apps/apps_container.h"
#include "PourLeTravail_icon.h"
#include "apps/i18n.h"
#include <assert.h>

namespace PourLeTravail {

I18n::Message App::Descriptor::name() {
  return I18n::Message::PourLeTravail;
}

I18n::Message App::Descriptor::upperName() {
  return I18n::Message::PourLeTravailCapital;
}

const Image * App::Descriptor::icon() {
  return ImageStore::PourLeTravailIcon;
}

App::Snapshot::Snapshot()
{
}

App * App::Snapshot::unpack(Container * container) {
  return new (container->currentAppBuffer()) App(this);
}

App::Descriptor * App::Snapshot::descriptor() {
  static Descriptor descriptor;
  return &descriptor;
}

void App::Snapshot::reset() {
}

App::App(Snapshot * snapshot) :
  ::App(snapshot, &m_stackView),
  m_passwordController(&m_stackView),
  m_stackView(this, &m_passwordController)
{
}

}
