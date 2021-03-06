MAINTAINERCLEANFILES = Makefile.in

AM_CPPFLAGS =                                                 \
        -DETC_DIR=\"$(sysconfdir)/calaos/\"                   \
        -DLIBMBUS                                             \
        -DPACKAGE_BIN_DIR=\"$(bindir)\"                       \
        -DPACKAGE_DATA_DIR=\"$(datadir)/calaos\"              \
        -DPACKAGE_DATA_DIR=\"$(pkgdatadir)\"                  \
        -DPACKAGE_LIB_DIR=\"$(libdir)\"                       \
        -DTIXML_USE_STL                                       \
        -I$(top_srcdir)/src/bin/calaos_server/Audio           \
        -I$(top_srcdir)/src/bin/calaos_server/IO/Gpio         \
        -I$(top_srcdir)/src/bin/calaos_server/IO/OneWire      \
        -I$(top_srcdir)/src/bin/calaos_server/IO/Scripts      \
        -I$(top_srcdir)/src/bin/calaos_server/IO/Wago/libmbus \
        -I$(top_srcdir)/src/bin/calaos_server/IO/Wago         \
        -I$(top_srcdir)/src/bin/calaos_server/IO/Web          \
        -I$(top_srcdir)/src/bin/calaos_server/IO/X10          \
        -I$(top_srcdir)/src/bin/calaos_server/IO/Zibase       \
        -I$(top_srcdir)/src/bin/calaos_server/IO              \
        -I$(top_srcdir)/src/bin/calaos_server/IPCam           \
        -I$(top_srcdir)/src/bin/calaos_server/Rules           \
        -I$(top_srcdir)/src/bin/calaos_server/Scenario        \
        -I$(top_srcdir)/src/bin/calaos_server/TCPProcessor    \
        -I$(top_srcdir)/src/bin/calaos_server                 \
        -I$(top_srcdir)/src/lib                               \
        -I$(top_srcdir)/src/lib/LuaScript                     \
        -I$(top_srcdir)/src/lib/TinyXML                       \
        -I$(top_srcdir)/src/lib/cJSON                         \
        -I$(top_srcdir)/src/lib/http-parser                   \
        -I$(top_srcdir)/src/lib/libquickmail                  \
        -I$(top_srcdir)/src/lib/uri_parser                    \
        @CALAOS_COMMON_CFLAGS@                                \
        @CALAOS_SERVER_CFLAGS@

bin_PROGRAMS = calaos_server

calaos_server_SOURCES = \
        Audio/AVRDenon.cpp                              \
        Audio/AVRDenon.h                                \
        Audio/AVRManager.cpp                            \
        Audio/AVRManager.h                              \
        Audio/AVRMarantz.cpp                            \
        Audio/AVRMarantz.h                              \
        Audio/AVROnkyo.cpp                              \
        Audio/AVROnkyo.h                                \
        Audio/AVRPioneer.cpp                            \
        Audio/AVRPioneer.h                              \
        Audio/AVRYamaha.cpp                             \
        Audio/AVRYamaha.h                               \
        Audio/AVReceiver.cpp                            \
        Audio/AVReceiver.h                              \
        Audio/AudioDB.cpp                               \
        Audio/AudioDB.h                                 \
        Audio/AudioInput.cpp                            \
        Audio/AudioInput.h                              \
        Audio/AudioManager.cpp                          \
        Audio/AudioManager.h                            \
        Audio/AudioOutput.cpp                           \
        Audio/AudioOutput.h                             \
        Audio/AudioPlayer.cpp                           \
        Audio/AudioPlayer.h                             \
        Audio/AudioPlayerData.h                         \
        Audio/Squeezebox.cpp                            \
        Audio/Squeezebox.h                              \
        Audio/SqueezeboxDB.cpp                          \
        Audio/SqueezeboxDB.h                            \
        Calaos.cpp                                      \
        Calaos.h                                        \
        CalaosConfig.cpp                                \
        CalaosConfig.h                                  \
        DataLogger.cpp                                  \
        DataLogger.h                                    \
        IO/Gpio/GpioCtrl.cpp                            \
        IO/Gpio/GpioCtrl.h                              \
        IO/Gpio/GpioInputSwitch.cpp                     \
        IO/Gpio/GpioInputSwitch.h                       \
        IO/Gpio/GpioInputSwitchLongPress.cpp            \
        IO/Gpio/GpioInputSwitchLongPress.h              \
        IO/Gpio/GpioInputSwitchTriple.cpp               \
        IO/Gpio/GpioInputSwitchTriple.h                 \
        IO/Gpio/GpioOutputShutter.cpp                   \
        IO/Gpio/GpioOutputShutter.h                     \
        IO/Gpio/GpioOutputShutterSmart.cpp              \
        IO/Gpio/GpioOutputShutterSmart.h                \
        IO/Gpio/GpioOutputSwitch.cpp                    \
        IO/Gpio/GpioOutputSwitch.h                      \
        IO/IOFactory.cpp                                \
        IO/IOFactory.h                                  \
        IO/InPlageHoraire.cpp                           \
        IO/InPlageHoraire.h                             \
        IO/InputAnalog.cpp                              \
        IO/InputAnalog.h                                \
        IO/InputString.cpp                              \
        IO/InputString.h                                \
        IO/InputSwitch.cpp                              \
        IO/InputSwitch.h                                \
        IO/InputSwitchLongPress.cpp                     \
        IO/InputSwitchLongPress.h                       \
        IO/InputSwitchTriple.cpp                        \
        IO/InputSwitchTriple.h                          \
        IO/InputTemp.cpp                                \
        IO/InputTemp.h                                  \
        IO/InputTime.cpp                                \
        IO/InputTime.h                                  \
        IO/InputTimer.cpp                               \
        IO/InputTimer.h                                 \
        IO/IntValue.cpp                                 \
        IO/IntValue.h                                   \
        IO/OneWire/OWCtrl.cpp                           \
        IO/OneWire/OWCtrl.h                             \
        IO/OneWire/OWTemp.cpp                           \
        IO/OneWire/OWTemp.h                             \
        IO/OutputAnalog.cpp                             \
        IO/OutputAnalog.h                               \
        IO/OutputFake.cpp                               \
        IO/OutputFake.h                                 \
        IO/OutputLight.cpp                              \
        IO/OutputLight.h                                \
        IO/OutputLightDimmer.cpp                        \
        IO/OutputLightDimmer.h                          \
        IO/OutputLightRGB.cpp                           \
        IO/OutputLightRGB.h                             \
        IO/OutputShutter.cpp                            \
        IO/OutputShutter.h                              \
        IO/OutputShutterSmart.cpp                       \
        IO/OutputShutterSmart.h                         \
        IO/OutputString.cpp                             \
        IO/OutputString.h                               \
        IO/Scenario.cpp                                 \
        IO/Scenario.h                                   \
        IO/Wago/WIAnalog.cpp                            \
        IO/Wago/WIAnalog.h                              \
        IO/Wago/WIDigitalBP.cpp                         \
        IO/Wago/WIDigitalBP.h                           \
        IO/Wago/WIDigitalLong.cpp                       \
        IO/Wago/WIDigitalLong.h                         \
        IO/Wago/WIDigitalTriple.cpp                     \
        IO/Wago/WIDigitalTriple.h                       \
        IO/Wago/WITemp.cpp                              \
        IO/Wago/WITemp.h                                \
        IO/Wago/WOAnalog.cpp                            \
        IO/Wago/WOAnalog.h                              \
        IO/Wago/WODali.cpp                              \
        IO/Wago/WODali.h                                \
        IO/Wago/WODaliRVB.cpp                           \
        IO/Wago/WODaliRVB.h                             \
        IO/Wago/WODigital.cpp                           \
        IO/Wago/WODigital.h                             \
        IO/Wago/WOVolet.cpp                             \
        IO/Wago/WOVolet.h                               \
        IO/Wago/WOVoletSmart.cpp                        \
        IO/Wago/WOVoletSmart.h                          \
        IO/Wago/WagoCtrl.cpp                            \
        IO/Wago/WagoCtrl.h                              \
        IO/Wago/WagoMap.cpp                             \
        IO/Wago/WagoMap.h                               \
        IO/Wago/libmbus/mbus.c                          \
        IO/Wago/libmbus/mbus.h                          \
        IO/Wago/libmbus/mbus_cmd.c                      \
        IO/Wago/libmbus/mbus_conf.h                     \
        IO/Wago/libmbus/mbus_rqst.c                     \
        IO/Wago/libmbus/mbus_sock.c                     \
        IO/Web/WebCtrl.cpp                              \
        IO/Web/WebCtrl.h                                \
        IO/Web/WebInputAnalog.cpp                       \
        IO/Web/WebInputAnalog.h                         \
        IO/Web/WebInputString.cpp                       \
        IO/Web/WebInputString.h                         \
        IO/Web/WebInputTemp.cpp                         \
        IO/Web/WebInputTemp.h                           \
        IO/Web/WebOutputLight.cpp                       \
        IO/Web/WebOutputLight.h                         \
        IO/Web/WebOutputLightRGB.cpp                    \
        IO/Web/WebOutputLightRGB.h                      \
        IO/Web/WebOutputString.cpp                      \
        IO/Web/WebOutputString.h                        \
        IO/X10/X10Output.cpp                            \
        IO/X10/X10Output.h                              \
        IO/Zibase/Zibase.cpp                            \
        IO/Zibase/Zibase.h                              \
        IO/Zibase/ZibaseTemp.cpp                        \
        IO/Zibase/ZibaseTemp.h                          \
        IO/Zibase/ZibaseAnalogIn.cpp                    \
        IO/Zibase/ZibaseAnalogIn.h                      \
        IO/Zibase/ZibaseDigitalIn.cpp                   \
        IO/Zibase/ZibaseDigitalIn.h                     \
        IO/Zibase/ZibaseDigitalOut.cpp                  \
        IO/Zibase/ZibaseDigitalOut.h                    \
        IO/MySensors/MySensors.h	                    \
        IO/MySensors/MySensors.cpp                      \
        IO/MySensors/MySensorsController.cpp            \
        IO/MySensors/MySensorsController.h              \
        IO/MySensors/MySensorsInputAnalog.h             \
        IO/MySensors/MySensorsInputAnalog.cpp           \
        IO/MySensors/MySensorsOutputLight.h             \
        IO/MySensors/MySensorsOutputLight.cpp           \
        IO/MySensors/MySensorsInputString.h             \
        IO/MySensors/MySensorsInputString.cpp           \
        IO/MySensors/MySensorsOutputString.h            \
        IO/MySensors/MySensorsOutputString.cpp          \
        IO/MySensors/MySensorsInputSwitch.h             \
        IO/MySensors/MySensorsInputSwitch.cpp           \
        IO/MySensors/MySensorsInputSwitchLongPress.h    \
        IO/MySensors/MySensorsInputSwitchLongPress.cpp  \
        IO/MySensors/MySensorsInputSwitchTriple.h       \
        IO/MySensors/MySensorsInputSwitchTriple.cpp     \
        IO/MySensors/MySensorsInputTemp.h               \
        IO/MySensors/MySensorsInputTemp.cpp             \
        IO/MySensors/MySensorsOutputAnalog.h            \
        IO/MySensors/MySensorsOutputAnalog.cpp          \
        IO/MySensors/MySensorsOutputDimmer.h            \
        IO/MySensors/MySensorsOutputDimmer.cpp          \
        IO/MySensors/MySensorsOutputLightRGB.h          \
        IO/MySensors/MySensorsOutputLightRGB.cpp        \
        IO/MySensors/MySensorsOutputShutter.h           \
        IO/MySensors/MySensorsOutputShutter.cpp         \
        IO/MySensors/MySensorsOutputShutterSmart.h      \
        IO/MySensors/MySensorsOutputShutterSmart.cpp    \
        IOBase.h                                        \
        IPCam/Axis.cpp                                  \
        IPCam/Axis.h                                    \
        IPCam/CamConnection.cpp                         \
        IPCam/CamConnection.h                           \
        IPCam/CamInput.cpp                              \
        IPCam/CamInput.h                                \
        IPCam/CamManager.cpp                            \
        IPCam/CamManager.h                              \
        IPCam/CamOutput.cpp                             \
        IPCam/CamOutput.h                               \
        IPCam/CamServer.cpp                             \
        IPCam/CamServer.h                               \
        IPCam/Gadspot.cpp                               \
        IPCam/Gadspot.h                                 \
        IPCam/IPCam.cpp                                 \
        IPCam/IPCam.h                                   \
        IPCam/Planet.cpp                                \
        IPCam/Planet.h                                  \
        IPCam/StandardMjpeg.cpp                         \
        IPCam/StandardMjpeg.h                           \
        Input.cpp                                       \
        Input.h                                         \
        JsonApiClient.cpp                               \
        JsonApiClient.h                                 \
        JsonApiServer.cpp                               \
        JsonApiServer.h                                 \
        ListeRoom.cpp                                   \
        ListeRoom.h                                     \
        ListeRule.cpp                                   \
        ListeRule.h                                     \
        Output.cpp                                      \
        Output.h                                        \
        PollListenner.cpp                               \
        PollListenner.h                                 \
        Room.cpp                                        \
        Room.h                                          \
        Rule.cpp                                        \
        Rule.h                                          \
        Rules/Action.cpp                                \
        Rules/Action.h                                  \
        Rules/ActionMail.cpp                            \
        Rules/ActionMail.h                              \
        Rules/ActionScript.cpp                          \
        Rules/ActionScript.h                            \
        Rules/ActionStd.cpp                             \
        Rules/ActionStd.h                               \
        Rules/ActionTouchscreen.cpp                     \
        Rules/ActionTouchscreen.h                       \
        Rules/Condition.cpp                             \
        Rules/Condition.h                               \
        Rules/ConditionOutput.cpp                       \
        Rules/ConditionOutput.h                         \
        Rules/ConditionScript.cpp                       \
        Rules/ConditionScript.h                         \
        Rules/ConditionStart.cpp                        \
        Rules/ConditionStart.h                          \
        Rules/ConditionStd.cpp                          \
        Rules/ConditionStd.h                            \
        Rules/RulesFactory.cpp                          \
        Rules/RulesFactory.h                            \
        Scenario/AutoScenario.cpp                       \
        Scenario/AutoScenario.h                         \
        TCPConnection.cpp                               \
        TCPConnection.h                                 \
        TCPProcessor/AudioCommand.cpp                   \
        TCPProcessor/BaseCommand.cpp                    \
        TCPProcessor/CameraCommand.cpp                  \
        TCPProcessor/HomeCommand.cpp                    \
        TCPProcessor/IOCommand.cpp                      \
        TCPProcessor/ListenCommand.cpp                  \
        TCPProcessor/RulesCommand.cpp                   \
        TCPProcessor/ScenarioCommand.cpp                \
        TCPServer.cpp                                   \
        TCPServer.h                                     \
        UDPServer.cpp                                   \
        UDPServer.h                                     \
        main.cpp

calaos_server_LDADD =                                   \
        @CALAOS_SERVER_LIBS@                            \
        $(top_builddir)/src/lib/libcalaos_common.la
