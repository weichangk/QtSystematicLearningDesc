if(${MY_QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(${PROJECT_NAME}
        ${MY_PROJECT_QRC}
        ${MY_PROJECT_HEADER}
        ${MY_PROJECT_SOURCE}
    )
else()
    add_executable(${PROJECT_NAME}
        ${MY_PROJECT_QRC}
        ${MY_PROJECT_HEADER}
        ${MY_PROJECT_SOURCE}
    )
endif()