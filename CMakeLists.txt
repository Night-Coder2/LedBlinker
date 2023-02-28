set(LEDBLINKER_LIB .)

add_library(LedBlinker
        LedBlinker.cpp
        )

target_include_directories(LedBlinker PUBLIC
        ${LEDBLINKER_LIB}
        ${LEDBLINKER_LIB}/include
        )

target_link_libraries(LedBlinker pico_stdlib Led Millis)