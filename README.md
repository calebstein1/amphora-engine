# Amphora Engine

Amphora is an advanced game engine for making 2D sprite-based games.

## Usage

This repository contains the code for the Amphora Game Engine library.

## Building

Amphora uses CMake and vcpkg to build and manage dependencies.
You'll need to ensure that vcpkg is installed somewhere on your system and that the `VCPKG_ROOT` environment variable is set properly.

### Windows

Windows builds are supported using the MSVC compiler.
MinGW and other compilers are not supported at this time.

Visual Studio (not VSCode!) works well with Amphora projects, as does CLion.
It may be possible to configure VSCode to work with Amphora, but this has not been tested.

### *nix (MacOS, Linux)

On *nix systems, you can build from the command line using the following commands.
GCC and Clang are both supported, as are x86-64 and arm64 architectures.

```
mkdir -p build && cd build
cmake ..
make
```

Any IDE with CMake support should work as well, though CLion is the only IDE that's been officially tested on MacOS and Linux.

#### Note for Linux builds

If you intend to use the built-in audio system and are building for Linux, you will need to make sure you have your audio library headers installed _before_ vcpkg builds SDL2_mixer.

This can be accomplished on Ubuntu/Debian-based systems with the following command:

```shell
sudo apt install libasound2-dev libpulse-dev
```
This system is currently being rewritten to use system libraries instead of vcpkg for Linux builds, so this step will not be necessary in the future.
