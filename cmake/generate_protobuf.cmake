function(generate_protobuf INCLUDE_PROTO CPP_OUT)
  execute_process(
    COMMAND ${Protobuf_PROTOC_EXECUTABLE}
      -I ${INCLUDE_PROTO}
      # --plugin=protoc-gen-grpc=${grpc_cpp_plugin_executable}
      --cpp_out=${CPP_OUT}
      # --grpc_out=generate_mock_code=true:${CPP_OUT}
        ${ARGN}
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/protos
  )
endfunction(generate_protobuf)
