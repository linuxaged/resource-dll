find_package(Corrade CONFIG REQUIRED Utility)

corrade_add_resource(TexturedTriangle_RESOURCES ../resources.conf)

add_library( lib SHARED dll.cpp ${TexturedTriangle_RESOURCES})
target_compile_definitions( lib PUBLIC -DBUILDING_DLL )
target_link_libraries(lib PUBLIC Corrade::Utility)