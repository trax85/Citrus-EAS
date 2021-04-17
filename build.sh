#
# Custom build script for Shadow kernel
#
# Copyright 2016 Umang Leekha (Umang96@xda)
#
# This software is licensed under the terms of the GNU General Public
# License version 2, as published by the Free Software Foundation, and
# may be copied, distributed, and modified under those terms.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# Please maintain this if you use this script or any part of it.
#
DEVICE="Kenzo"
yellow='\033[0;33m'
white='\033[0m'
red='\033[0;31m'
gre='\e[0;32m'
echo -e ""
echo -e "$gre ====================================\n\n Welcome to Citrus building program !\n\n ===================================="
echo -e "$gre \n 1.Build Citrus Clean\n\n 2.Build Citrus Dirty\n"
echo -n " Enter your choice:"
read qc
echo -e "$white"
KERNEL_DIR=$PWD
cd $KERNEL_DIR/arch/arm/boot/dts/
rm *.dtb > /dev/null 2>&1
cd $KERNEL_DIR
Start=$(date +"%s")
DTBTOOL=$KERNEL_DIR/dtbTool
cd $KERNEL_DIR
if [ $qc == 1 ]; then
echo -e "$yellow Running make clean before compiling \n$white"
make clean > /dev/null
fi
#
# Do Kenzo Configs
#
export ARCH=arm64
make kenzo_defconfig
#
# Export Toolchain-path path
#
#gcc 11
#export CROSS_COMPILE="/home/nesara/gcc-arm64/bin/aarch64-elf-"
#gcc 9.2 
#export CROSS_COMPILE="/home/nesara/aarch64-elf-gcc/bin/aarch64-elf-"
#gcc 6.5
export CROSS_COMPILE="/home/nesara/gcc_linaro_6.5/bin/aarch64-linux-gnu-"

export KBUILD_BUILD_USER="trax85"
#
# Build Shadow Kernel
#
make	-j4
#
# Append date,time 
#
time=$(date +"%d-%m-%y-%T")
date=$(date +"%d-%m-%y")

#
# Export Image and Device tree Blobs
#
$DTBTOOL -2 -o $KERNEL_DIR/arch/arm64/boot/dt.img -s 2048 -p $KERNEL_DIR/scripts/dtc/ $KERNEL_DIR/arch/arm/boot/dts/
mv $KERNEL_DIR/arch/arm64/boot/dt.img $KERNEL_DIR/build/Aroma/tools/dt.img
cp $KERNEL_DIR/arch/arm64/boot/Image $KERNEL_DIR/build/Aroma/tools/Image
zimage=$KERNEL_DIR/arch/arm64/boot/Image
if ! [ -a $zimage ];
then
echo -e "$red << Failed to compile zImage, fix the errors first >>$white"
else
cd $KERNEL_DIR/build/Aroma
# Delete old build zips
rm *.zip > /dev/null 2>&1
#
# Zip Flash Tools and make Emeriss zip
# Aroma
#
echo -e "$yellow\n Build succesful, generating flashable zip now \n $white"
zip -r Citrus-TraxEdition-EAS-Aroma-$date.zip * > /dev/null
End=$(date +"%s")
Diff=$(($End - $Start))
echo -e "$yellow $KERNEL_DIR/export/$VERSION/Citrus-Trax-Kernel-$date.zip \n$white"

#
# Export to Anykernel
#
cp $KERNEL_DIR/arch/arm64/boot/Image.gz-dtb $KERNEL_DIR/build/Anykernel/Image.gz-dtb
cd $KERNEL_DIR/build/Anykernel
rm *.zip > /dev/null 2>&1
#
# Zip Flash Tools and make Emeriss zip
# Anykernel
#
zip -r Citrus-TraxEdition-EAS-$date.zip * > /dev/null

echo -e "$gre << Build completed in $(($Diff / 60)) minutes and $(($Diff % 60)) seconds >> \n $white"
fi
cd $KERNEL_DIR
