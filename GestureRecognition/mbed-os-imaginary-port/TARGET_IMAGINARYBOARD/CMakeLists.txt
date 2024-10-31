add_library(mbed-imaginaryboard INTERFACE)

target_sources(mbed-imaginaryboard
    INTERFACE
        PeripheralPins.c
)

target_include_directories(mbed-imaginaryboard
    INTERFACE
        .
)

target_link_libraries(mbed-imaginaryboard INTERFACE mbed-stm32l475xg)