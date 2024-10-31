add_library(mbed-disco-f407 INTERFACE)

target_sources(mbed-disco-f407
    INTERFACE
        PeripheralPins.c
        cmsis.h
        objects.h
        device.h
        mbed_rtx.h
)

target_include_directories(mbed-disco-f407
    INTERFACE
        .
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(mbed-disco-f407 INTERFACE mbed-stm32f4)
