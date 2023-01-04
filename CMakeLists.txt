cmake_minimum_required(VERSION 3.24)

set(NAME grpc-test)
set(SRCDIR ${CMAKE_SOURCE_DIR}/src)
set(PROTOSDIR ${CMAKE_SOURCE_DIR}/protos)

if (MSVC)
  set(
    CXXFLAGS
      /WX
      /W4
      /fpermissive
  )
else()
  set(
    CXXFLAGS
      -Wall
      -Wextra
      -Werror
      -pedantic
      -fpermissive
      -fstrict-enums
      -fconcepts
      -fcoroutines
  )
endif()

list(
  APPEND
    CMAKE_MODULE_PATH
      ${CMAKE_SOURCE_DIR}/cmake
)

include(generate_protobuf)

project(
  grpc-test
  DESCRIPTION "gRPC test."
  VERSION 1.0.0.0
  LANGUAGES C CXX
  HOMEPAGE_URL "https://github.com/fontseca/grpc-test"
)

find_package(Protobuf REQUIRED)

add_executable(
  ${PROJECT_NAME}
    ${SRCDIR}/Entry.cc
    ${PROTOSDIR}/Client.pb.cc
)
  
generate_protobuf(
  ${PROTOSDIR}/
  ${PROTOSDIR}/
    Client.proto
)

target_compile_options(
  ${PROJECT_NAME}
    PRIVATE
      ${CXXFLAGS}
)

target_compile_features(
  ${PROJECT_NAME}
    PRIVATE
      cxx_std_20
)

target_include_directories(
  ${PROJECT_NAME}
    PRIVATE
      ${Protobuf_INCLUDE_DIRS}
      ${CMAKE_SOURCE_DIR}/
)

target_link_libraries(
  ${PROJECT_NAME}
    PRIVATE
      protobuf::libprotobuf
)
