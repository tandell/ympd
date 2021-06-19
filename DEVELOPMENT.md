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

## Updated Dependency Information

The 3rd party dependencies were updated in June 2021.

At this point, there are several dead-end dependencies that will require work to change to either newer libraries or to completely replace them.

-   JQuery to version 3.6.0
-   sammy.js to version 0.7.6
    -   sammy.js has not been modified in more than 7 years. It is probably functionally dead at this point in time.
-   Updated jquery.cookie.js to js.cookie.js version 2.2.1 (it had a name change)
-   Updated bootstrap to version 3.4.1; last of the 3.x line.
    -   Currently limited to 3.x as there's a dependency on it for bootstrap-notify.
-   Updated bootstrap-notify to version 3.1.3
-   Updated modernizr to version 3.6.0
    -   Custom library link https://modernizr.com/download/?prefixes-setclasses-shiv-teststyles
-   Updated jquery-ui-sortable.min.js to jquery-ui.min.js version 1.12.1-custom
    -   Per the notes in the file, this library was comprised of jquery.ui.core.js, jquery.ui.widget.js, jquery.ui.mouse.js, jquery.ui.sortable.js. The copyright is 2013 but no versions were listed. Given that date, it appears that the library is comprised of version 1.10.3.
    -   To create jquery-ui.js 1.12.1-custom, use https://jqueryui.com/download/#!version=1.12.1&components=101000000100000110000000010000000000000000000000 which will probably exist in the future. In the case that it doesn't, the options that were selected are as follows:
        -   Core Component
            -   Widget
            -   :data Selector
            -   scrollParent
        -   Interactions Component
            -   Selectable
            -   Sortable
        -   Widgets
            -   Mouse
    -   Per https://jqueryui.com/upgrade-guide/1.11/#renamed-files, it looks like the base files will now be named `core.js`, `widget.js`, `mouse.js`, `sortable.js`.
