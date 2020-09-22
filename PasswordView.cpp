#include "PasswordView.h"
#include "apps/i18n.h"

namespace PourLeTravail {

PasswordView::PasswordView() :
  View()
{
}

void PasswordView::drawRect(KDContext * ctx, KDRect rect) const {
  ctx->fillRect(KDRect(0, 0, bounds().width(), bounds().height()), KDColorBlack);
}

}
