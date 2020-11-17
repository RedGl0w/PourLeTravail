apps += PourLeTravail::App
app_headers += apps/pourletravail/app.h

apps_src += $(addprefix apps/pourletravail/,\
  app.cpp \
  PasswordController.cpp \
  PasswordView.cpp \
  GaleryController.cpp \
  GaleryView.cpp \
)

i18n_files += $(addprefix apps/pourletravail/,\
	base.universal.i18n\
)

$(eval $(call depends_on_image,apps/pourletravail/app.cpp,apps/pourletravail/PourLeTravail_icon.png))

$(eval $(call depends_on_image,apps/pourletravail/GaleryView.cpp,apps/pourletravail/PourLeTravail_image.png))
