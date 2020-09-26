#ifndef POURLETRAVAIL_GALERY_VIEW_H
#define POURLETRAVAIL_GALERY_VIEW_H

#include <escher.h>

namespace PourLeTravail {

class GaleryView : public View {
public:
  GaleryView();
  void drawRect(KDContext * ctx, KDRect rect) const override;
};

}

#endif
