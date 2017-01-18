# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef STRIP
  STRIP=strip
endif

ifndef AR
  AR=ar
endif

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(CONFIG),Debug)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Debug
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DDEBUG=1 -D_DEBUG=1 -DQT_APP -DJUCER_LINUX_MAKE_6D53C8B4=1 -DJUCE_APP_VERSION=1.0.0 -DJUCE_APP_VERSION_HEX=0x10000 $(shell pkg-config --cflags libcurl x11 Qt5Core Qt5Concurrent Qt5Xml) -pthread -I../../JuceLibraryCode -I../../Modules
  JUCE_CFLAGS += $(CFLAGS) $(JUCE_CPPFLAGS) $(TARGET_ARCH) -g -ggdb -O0 -fPIC
  JUCE_CXXFLAGS += $(CXXFLAGS) $(JUCE_CFLAGS) -std=c++11
  JUCE_LDFLAGS += $(LDFLAGS) $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) $(shell pkg-config --libs libcurl x11 Qt5Core Qt5Concurrent Qt5Xml) -ldl -lpthread -lrt -shared

  TARGET := libcbsdk.a
  BLDCMD = $(CXX) -o $(JUCE_OUTDIR)/$(TARGET) $(OBJECTS) $(JUCE_LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

ifeq ($(CONFIG),Release)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Release
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DNDEBUG=1 -DQT_APP -DJUCER_LINUX_MAKE_6D53C8B4=1 -DJUCE_APP_VERSION=1.0.0 -DJUCE_APP_VERSION_HEX=0x10000 $(shell pkg-config --cflags libcurl x11 Qt5Core Qt5Concurrent Qt5Xml) -pthread -I../../JuceLibraryCode -I../../Modules
  JUCE_CFLAGS += $(CFLAGS) $(JUCE_CPPFLAGS) $(TARGET_ARCH) -O3 -fPIC
  JUCE_CXXFLAGS += $(CXXFLAGS) $(JUCE_CFLAGS) -std=c++11
  JUCE_LDFLAGS += $(LDFLAGS) $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) -fvisibility=hidden $(shell pkg-config --libs libcurl x11 Qt5Core Qt5Concurrent Qt5Xml) -ldl -lpthread -lrt -shared

  TARGET := libcbsdk.a
  BLDCMD = $(CXX) -o $(JUCE_OUTDIR)/$(TARGET) $(OBJECTS) $(JUCE_LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

OBJECTS := \
  $(JUCE_OBJDIR)/cbhwlib_8ca56720.o \
  $(JUCE_OBJDIR)/cbHwlibHi_88e630e1.o \
  $(JUCE_OBJDIR)/CCFUtils_3b17524c.o \
  $(JUCE_OBJDIR)/CCFUtilsBinary_308b04ad.o \
  $(JUCE_OBJDIR)/CCFUtilsConcurrent_a526ffe3.o \
  $(JUCE_OBJDIR)/CCFUtilsXml_3d734c35.o \
  $(JUCE_OBJDIR)/CCFUtilsXmlItems_81c0a0d5.o \
  $(JUCE_OBJDIR)/InstNetwork_441d2771.o \
  $(JUCE_OBJDIR)/moc_InstNetwork_22b3f833.o \
  $(JUCE_OBJDIR)/XmlFile_7b87d91c.o \
  $(JUCE_OBJDIR)/Instrument_cb4ec1ea.o \
  $(JUCE_OBJDIR)/UDPsocket_caae0a9b.o \
  $(JUCE_OBJDIR)/cbsdk_b580d57c.o \
  $(JUCE_OBJDIR)/BinaryData_ce4232d4.o \
  $(JUCE_OBJDIR)/juce_core_75b14332.o \
  $(JUCE_OBJDIR)/juce_data_structures_72d3da2c.o \
  $(JUCE_OBJDIR)/juce_events_d2be882c.o \

.PHONY: clean

$(JUCE_OUTDIR)/$(TARGET): check-pkg-config $(OBJECTS) $(RESOURCES)
	@echo Linking libcbsdk
	-@mkdir -p $(JUCE_BINDIR)
	-@mkdir -p $(JUCE_LIBDIR)
	-@mkdir -p $(JUCE_OUTDIR)
	@$(BLDCMD)

check-pkg-config:
	@command -v pkg-config >/dev/null 2>&1 || { echo >&2 "pkg-config not installed. Please, install it."; exit 1; }
	@pkg-config --print-errors libcurl x11 Qt5Core Qt5Concurrent Qt5Xml

clean:
	@echo Cleaning libcbsdk
	@$(CLEANCMD)

strip:
	@echo Stripping libcbsdk
	-@$(STRIP) --strip-unneeded $(JUCE_OUTDIR)/$(TARGET)

$(JUCE_OBJDIR)/cbhwlib_8ca56720.o: ../../Source/cbhwlib/cbhwlib.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling cbhwlib.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/cbHwlibHi_88e630e1.o: ../../Source/cbhwlib/cbHwlibHi.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling cbHwlibHi.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CCFUtils_3b17524c.o: ../../Source/cbhwlib/CCFUtils.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CCFUtils.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CCFUtilsBinary_308b04ad.o: ../../Source/cbhwlib/CCFUtilsBinary.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CCFUtilsBinary.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CCFUtilsConcurrent_a526ffe3.o: ../../Source/cbhwlib/CCFUtilsConcurrent.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CCFUtilsConcurrent.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CCFUtilsXml_3d734c35.o: ../../Source/cbhwlib/CCFUtilsXml.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CCFUtilsXml.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CCFUtilsXmlItems_81c0a0d5.o: ../../Source/cbhwlib/CCFUtilsXmlItems.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CCFUtilsXmlItems.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/InstNetwork_441d2771.o: ../../Source/cbhwlib/InstNetwork.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling InstNetwork.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/moc_InstNetwork_22b3f833.o: ../../Source/cbhwlib/moc_InstNetwork.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling moc_InstNetwork.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/XmlFile_7b87d91c.o: ../../Source/cbhwlib/XmlFile.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling XmlFile.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Instrument_cb4ec1ea.o: ../../Source/Central/Instrument.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Instrument.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/UDPsocket_caae0a9b.o: ../../Source/Central/UDPsocket.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling UDPsocket.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/cbsdk_b580d57c.o: ../../Source/cbsdk.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling cbsdk.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData_ce4232d4.o: ../../JuceLibraryCode/BinaryData.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling BinaryData.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_core_75b14332.o: ../../JuceLibraryCode/juce_core.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_core.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_data_structures_72d3da2c.o: ../../JuceLibraryCode/juce_data_structures.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_events_d2be882c.o: ../../JuceLibraryCode/juce_events.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_events.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)
