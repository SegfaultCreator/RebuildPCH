get_filename_component(APP_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${APP_NAME})

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME}

    PRIVATE

    A.c
)    


target_precompile_headers(${PROJECT_NAME} PRIVATE privateHeaders )



