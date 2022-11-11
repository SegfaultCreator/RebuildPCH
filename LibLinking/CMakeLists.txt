get_filename_component(APP_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${APP_NAME})

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME}

    PRIVATE

    Linking.cpp

    # For QT User visualisation
    Linking.hpp
)    


target_link_libraries(${PROJECT_NAME}
    PRIVATE
    LibC
    LibCpp

    )




