PATH=$(echo "$PATH" | sed -e 's/:\/mnt.*//g')
cd depends
make HOST=x86_64-w64-mingw32
cd ..
./autogen.sh
CONFIG_SITE=$PWD/depends/x86_64-w64-mingw32/share/config.site ./configure --prefix=/
make -j`nproc`
mkdir release-win64
cp src/*.exe release-win64/
cp src/qt/*.exe release-win64/
cd release-win64
upx -k -9 ./*.exe
cd ..
echo "Your release in release-win64 directory"
