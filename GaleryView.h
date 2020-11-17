#ifndef POURLETRAVAIL_GALERY_VIEW_H
#define POURLETRAVAIL_GALERY_VIEW_H

#include <escher.h>

namespace PourLeTravail {

class GaleryView : public View {
public:
  GaleryView();
  void drawRect(KDContext * ctx, KDRect rect) const override;
private:
  int numberOfSubviews() const override { return 1; }
  View * subviewAtIndex(int index) override;
  void layoutSubviews(bool force = false) override;
  ImageView m_image;
};

}

#endif
