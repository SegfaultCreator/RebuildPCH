get_filename_component(APP_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${APP_NAME})

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME}

    PRIVATE

    Z.cpp

    # For QT User visualisation
    Z.hpp
)    

target_include_directories(${PROJECT_NAME} PUBLIC .)

target_precompile_headers(${PROJECT_NAME} PRIVATE privateHeaders)


