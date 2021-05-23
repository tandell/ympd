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
