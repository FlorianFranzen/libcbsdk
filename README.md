[![Build Status](https://travis-ci.org/FlorianFranzen/libcerebus.svg)](https://travis-ci.org/FlorianFranzen/libcerebus)

libcerebus
==========

**WIP: Currently still depends on Qt5. This will hopfully change soon.**

A C++ library that allows you to interact with Blackrock Microsystems neural signal processing hardware.

This is a fork of [CereLink](https://github.com/dashesy/CereLink) turned it into a standalone C++ library, similar to the CBSDK that comes with Central, without the Matlab dependency and with [Qt](https://www.qt.io/) as the base library being replaced by [JUCE](https://www.juce.com).

In theory the library should be 100% compatible with any code that previously worked with the *official* CBSDK as long as it only uses the ```cbSdk...``` functions.

For more infos, general trouble shooting information please see the upstream source repository [dashesy/CereLink](https://github.com/dashesy/CereLink).

This code is licensed under GPLv2.
