list(REMOVE_ITEM MY_PROJECT_LINKLIB ${MY_PROJECT_LINKLIB_EXCLUSIVE})
target_link_libraries(${PROJECT_NAME} PRIVATE ${MY_PROJECT_LINKLIB} ${MY_FIND_QT_PACK_LINK} ${MY_PROJECT_SOURCE_EXT})