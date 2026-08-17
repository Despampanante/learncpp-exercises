file(GLOB EXERCISE_SOURCES CONFIGURE_DEPENDS "*.cpp")

foreach(SOURCE_FILE ${EXERCISE_SOURCES})
    get_filename_component(EXE_NAME ${SOURCE_FILE} NAME_WE)
    add_executable(${EXE_NAME} ${SOURCE_FILE})
endforeach()
