#! /bin/sh

meson setup build --reconfigure --prefix $HOME/mesa/install -Ddri3=disabled -Dvulkan-drivers= -Dgallium-drivers=swrast -Ddri-drivers= -Dplatforms=x11 -Degl-native-platform=x11
