#ifndef LOGGER_H
#define LOGGER_H

#include <cstdio>
#include <cstdarg>

namespace gRPCTest
{
  class Logger
  {
  public:
    static inline void Log(std::FILE *stream, const char *const format, ...) noexcept
    {
      char formatted_buffer[0x100];
      std::va_list arguments;
      va_start(arguments, format);

      std::vsprintf(formatted_buffer, format, arguments);

#if defined(unix) || defined(__unix__) || defined(__unix)
        std::fprintf(stream, "grpc_test: \x1B[32mlogging:\033[0m %s\n", formatted_buffer);
#else
        std::fprintf(stream, "grpc_test: logging: %s\n", formatted_buffer);
#endif
    }
  };
}
#endif /* LOGGER_H */
