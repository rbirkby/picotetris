PicoTetris
=============

Classic Tetris game running on a Raspberry Pi Pico microcontroller.

Pico C port by Richard Birkby

Original JavaScript [implementation](https://github.com/jakesgordon/javascript-tetris) - [Jake Gordon](https://twitter.com/jakesgordon)

Video
-----

{TODO: When my explorer board arrives}


Requirements
------------

* Raspberry Pi Pico (with headers)
* Pimoroni Pico Explorer board.


Preparing your build environment
--------------------------------

Install build requirements (Linux):

```bash
sudo apt update
sudo apt install cmake gcc-arm-none-eabi build-essential
```

MacOS:

```bash
$ brew install cmake
$ brew tap ArmMbed/homebrew-formulae
$ brew install arm-none-eabi-gcc
```

And the Pico SDK:

```
git clone https://github.com/raspberrypi/pico-sdk
cd pico-sdk
git submodule update --init
export PICO_SDK_PATH=`pwd`
cd ../
```

The `PICO_SDK_PATH` set above will only last the duration of your session.

You should should ensure your `PICO_SDK_PATH` environment variable is set by `~/.profile`:

```
export PICO_SDK_PATH="/path/to/pico-sdk"
```

Grab the Pimoroni libraries
---------------------------

```
git clone https://github.com/pimoroni/pimoroni-pico
```

And then (assuming pico-sdk is alongside your project):

```
ln -s ../pico-sdk/external/pico_sdk_import.cmake .
```

If you have not or don't want to set `PICO_SDK_PATH` you can edit `.vscode/settings.json` to pass the path directly to CMake.

Prepare Visual Studio Code
--------------------------

Open VS Code and hit `Ctrl+Shift+P`.

Type `Install` and select `Extensions: Install Extensions`.

Make sure you install:

1. C/C++
2. CMake
3. CMake Tools
4. Cortex-Debug (optional: for debugging via a Picoprobe or Pi GPIO)
5. Markdown All in One (recommended: for preparing your own README.md)
   

Debugging
---------

printf debugging on MacOS with:
```bash
$ brew install minicom
$ minicom -b 115200 -o -D /dev/tty.usbmodem0000000000001
```

Licence
-------

[MIT](http://en.wikipedia.org/wiki/MIT_License) licensed

