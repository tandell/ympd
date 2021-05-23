# Development Notes

## Code Formatting

The project has been formatted with [prettier.io](https://prettier.io/) for the HTML, JavaScript, CSS, and Markdown files. See the configuration file [.prettierrc.json](./.prettierrc.json) and the ignore file [.prettierignore](./.prettierignore) for details. If `prettier` is installed globally, there's no need to provide the various `npm`-type dependencies in the project. Various editors may provide plugins that can use this configuration without having to install `npm` and `prettier` manually.

Manual Usage:

```bash
> npx prettier --write .
```

The C source and header files have been formatted with `clang-format`.
