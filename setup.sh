#! /bin/sh

meson setup build --reconfigure --prefix $HOME/mesa/install -Dllvm=disabled -Ddri3=disabled -Dvulkan-drivers= -Dgallium-drivers=swrast -Ddri-drivers=sis -Dplatforms=x11 -Degl-native-platform=x11
