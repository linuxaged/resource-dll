find_package(Corrade CONFIG REQUIRED Utility)

corrade_add_resource(TexturedTriangle_RESOURCES ../resources.conf)

add_library( lib SHARED dll.h dll.cpp ${TexturedTriangle_RESOURCES})
target_link_libraries(lib PRIVATE Corrade::Utility)