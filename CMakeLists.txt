set(LEDBLINKER .)

add_library(LedBlinker
        LedBlinker.cpp
        )

target_include_directories(LedBlinker PUBLIC
        ${LEDBLINKER}
        ${LEDBLINKER}/include
        )

target_link_libraries(LedBlinker pico_stdlib Led Millis)