#ifndef POURLETRAVAIL_VIEW_H
#define POURLETRAVAIL_VIEW_H

#include <escher.h>

namespace PourLeTravail {

class PasswordView : public View {
public:
  PasswordView();
  void drawRect(KDContext * ctx, KDRect rect) const override;
};

}

#endif
