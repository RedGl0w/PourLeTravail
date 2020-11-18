#include "GaleryView.h"
#include "apps/i18n.h"
#include "PourLeTravail_image.h"

namespace PourLeTravail {

GaleryView::GaleryView() :
  View()
{
  m_image.setImage(ImageStore::PourLeTravailImage);
}

void GaleryView::drawRect(KDContext * ctx, KDRect rect) const {
  ctx->fillRect(KDRect(0, 0, bounds().width(), bounds().height()), KDColorWhite);
}

View * GaleryView::subviewAtIndex(int index) {
  assert(index==0);
  return &m_image;
}

void GaleryView::layoutSubviews(bool force) {
  m_image.setFrame(KDRect(50,0,58,56), force); // Set to x y width height of your image
}

}
