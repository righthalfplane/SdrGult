To build sdrTest on the MacOS -

g++ -O2 -std=c++11 -Wno-deprecated -o sdrTest ./src/sdrTest.cpp ./src/mThread.cpp ./src/cMalloc.cpp ./src/Clisten.cpp -lrtaudio -lSoapySDR -lliquid -framework OpenAL -Wno-return-type-c-linkage

To build sdrTest on the Linux systems -

g++ -O2 -std=c++11 -Wno-deprecated -o sdrTest ./src/sdrTest.cpp ./src/mThread.cpp ./src/cMalloc.cpp ./src/Clisten.cpp -lrtaudio -lSoapySDR -lliquid -lopenal -pthread


If you get an error on the line -

     f->demodAM = ampmodem_create(0.5, mode, iflag);

sdrTest.cpp:1270:50: error: too few arguments to function ‘ampmodem_s*


uncomment the line in sdrTest.cpp -

#define LIQUID_VERSION_4 1

uncomment the line in Clisten.cpp -

#define LIQUID_VERSION_4 1


Some examples -

iqSDR.x -fc 1090 -samplerate 2000000 -outFile "-" -unsigned >out_1090000000_2000000_fc.raw

./sdrTest.x -fc 101.4e6 -f 101.5e6 -fm -gain 1 -samplerate 2e6 -device 1 -antenna LNAW

./sdrTest.x -fc 101.5e6 -f 101.5e6 -fm -gain 0.0001 -samplerate 2e6 -device 0 -antenna LNAW -pipe 1 | iqSDR.x -pipe -float -samplerate 2e6 -fc 101.5

./sdrTest.x -fc 101.5e6 -f 101.5e6 -fm -gain 0.0001 -samplerate 2e6 -device 0 -antenna LNAW -pipe 1 >out_101500000_2000000_fc.raw

./sdrTest.x -fc 101.4e6 -f 101.5e6 -fm -gain 1 -audiodevice 2

./sdrTest.x -fc 1e6 -f 0.6e6 -gain 1

./sdrTest.x -fc 1e6 -f 0.76e6 -am -gain 1

./sdrTest.x -fc 1e6 -f 1.17e6 -gain 1

./sdrTest -fc 10.1e6 -f 10.0e6 -gain 1

./sdrTest -fc 27.1e6 -f 27.185e6 -gain 1

./sdrTest.x -fc 101.4e6 -f 101.5e6 -fm -gain 1 -samplerate 912000 -device 0

./sdrTest -fc 103.0e6 -f 103.7e6 -fm -gain 1

./sdrTest -fc 102.0e6 -f 102.1e6 -fm -gain 1

./sdrTest.x -fc 162.0e6 -f 162.4e6 -nbfm -gain 1

./sdrTest -fc 102.0e6 -f 102.1e6 -fm -gain 1 -faudio 12000 -file test.raw

./sdrTest -fc 102.0e6 -f 102.1e6 -fm -gain 1 -timeout 60 -faudio 12000 -file test.raw

./sdrTest -fc 102.0e6 -f 102.1e6 -fm -gain 1 -timeout 601 -dumpbyminute -faudio 12000

./sdrTest -fc 102.0e6 -f 102.1e6 -fm -gain 1 -dumpbyminute -faudio 12000

/opt/local/bin/sox -t raw -r 48000 -b 16 -c 1 -L -e signed-integer saveAudio.raw -n stat



To build control on the MacOS -

g++ -O2 -std=c++11 -Wno-deprecated  -o control ./src/mainControl.cpp ./src/mThread.cpp ./src/send.cpp -lliquid -lrtaudio -lpthread -Wno-return-type-c-linkage

control < ./examples/control.in
control < ./examples/control01.in
control < ./examples/control02.in
control < ./examples/control03.in

To build control on the Linux systems -

g++ -O2 -std=c++11 -Wno-deprecated  -o control ./src/mainControl.cpp ./src/mThread.cpp ./src/send.cpp -lliquid -lrtaudio -lpthread 





