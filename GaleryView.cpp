#include "GaleryView.h"
#include "apps/i18n.h"

namespace PourLeTravail {

GaleryView::GaleryView() :
  View()
{
}

void GaleryView::drawRect(KDContext * ctx, KDRect rect) const {
  ctx->fillRect(KDRect(0, 0, bounds().width(), bounds().height()), KDColorWhite);
}

}
