# Development Notes

## Code Formatting

The project has been formatted with [prettier.io](https://prettier.io/) for the HTML, JavaScript, CSS, and Markdown files. See the configuration file [.prettierrc.json](./.prettierrc.json) and the ignore file [.prettierignore](./.prettierignore) for details. If `prettier` is installed globally, there's no need to provide the various `npm`-type dependencies in the project. Various editors may provide plugins that can use this configuration without having to install `npm` and `prettier` manually.

Manual Usage:

```bash
> npx prettier --write .
```

The C source and header files have been formatted with `clang-format`. There's no easy way to manually execute the formatter on all of the C files at the same time. The clang format is based off of the 'Google' style with ajdustments to make the changes not as disruptive. See [.clang-format](./.clang-format) file for the formatting rules. Various editors should be able to automatically format the source on save.

The only files formatted are the non-third party library files.

Manual Usage:

```bash
> clang-format -i -style=file <filename>
```

Manually formatted files:

-   http_server.c
-   http_server.h
-   json_encode.h
-   mpd_client.c
-   mpd_client.h
-   ympd.c

For help with the rules, see [Clang Format Configurator](https://zed0.co.uk/clang-format-configurator/) for an interactive tool and [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) for the rules reference.

## Dependencies

Remember to add the link in the 'settings' area of the index.html page.

### MPD

**Music Player Daemon 0.23.5 (0.23.5)** -- Mainly for the album art functionality. Unknown what 
the minimum version supports at the moment.

### tiny_logger

Tiny Logger was retrieved from https://github.com/olegkutkov/tiny_logger on Sept 2022. It's licensed GPLv2.
Usage: https://olegkutkov.me/2019/03/25/simple-logger-with-stdout-files-and-syslog-support-for-c-projects-in-linux/

#### TODO

Pull this library into the libs directory... once I understand how to modify cmake...

#### README - from repo

Very simple logger for Unix written in C, supports writing to stdout, to custom file and syslog. 
Supports log levels.
Not thread safe!

```
Usage:
  logger_reset_state(void) - reset logger state to default mode. All messages is writing in syslog and loglevel is LOG_MAX_LEVEL_ERROR_WARNING_STATUS

  logger_critical_log(const char* message) - write error message directly in syslog, no matter what mode is set.

  logger_set_log_level(const int level) - set current logging level (LOG_MAX_LEVEL_ERROR, LOG_MAX_LEVEL_ERROR_WARNING_STATUS or LOG_MAX_LEVEL_ERROR_WARNING_STATUS_DEBUG)
  logging level can be reSet any time again, in runtime. Default logging level is LOG_MAX_LEVEL_ERROR_WARNING_STATUS
  
  logger_set_log_file(const char* filename) - Switch mode. Set file name to write logs to. Can be set many times in runtime. Previous opened
  file will be closed and will be started new log session in a new file.
  
  logger_set_out_stdout() - Swith mode. All messages is writing in to STDOUT. All opened files will be closed.
  
  void log_error(char* format, ...) - write formatted error message
  void log_warning(char* format, ...) - write formatted warning message
  void log_status(char* format, ...) - write formatted status message
  void log_debug(char* format, ...) - write formatted debug message
```

## Development Recommendations

* Install `mpc` on the development machine. As it's a C-based utility, it's useful for comparing 
the responses received by `mpc` for troubleshooting.
