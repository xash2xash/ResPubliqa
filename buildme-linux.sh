./autogen.sh
./configure
make -j`nproc`
mkdir release-linux
mv src/qt/respubliqa-qt release-linux
mv src/respubliqa-tx release-linux
mv src/respubliqa-cli release-linux
mv src/respubliqad release-linux
cd release-linux/
strip --strip-all ./*
cd ..
echo "Your release in release-linux directory"
