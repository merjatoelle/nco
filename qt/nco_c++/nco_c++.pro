# template type is library
TEMPLATE = lib
# name of library
TARGET = libnco_c++
# the library is a static library
CONFIG += staticlib

CONFIG -= qt
CONFIG += debug_and_release

INCLUDEPATH += ../../src/nco_c++


#nco_c++ library
unix:CONFIG( debug, debug|release ) {
    # debug
        DESTDIR = ./debug
} else {
    # release
        DESTDIR = ./release
}


# netCDF
DEFINES += ENABLE_NETCDF4
DEFINES += HAVE_NETCDF4_H


# netCDF library
unix {
 INCLUDEPATH += /usr/local/include
 INCLUDEPATH += /usr/local
}
win32 {
 INCLUDEPATH += $(HEADER_NETCDF) 
 DEFINES += _CRT_SECURE_NO_WARNINGS
 DEFINES += _CRT_NONSTDC_NO_DEPRECATE
 DEFINES += NEED_STRCASECMP
 DEFINES += NEED_STRCASESTR
}

# header files
HEADERS += ../../src/nco_c++/libnco_c++.hh \
../../src/src/nco_c++/nco_dmn.hh \
../../src/nco_c++/nco_hgh.hh \
../../src/nco_c++/nco_var.hh \
../../src/nco_c++/nco_att.hh \
../../src/nco_c++/nco_fl.hh \
../../src/nco_c++/nco_utl.hh 

# source files
SOURCES += ../../src/nco_c++/nco_att.cc \
../../src/nco_c++/nco_dmn.cc \
../../src/nco_c++/nco_fl.cc \
../../src/nco_c++/nco_hgh.cc \
../../src/nco_c++/nco_utl.cc \
../../src/nco_c++/nco_var.cc
