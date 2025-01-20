# CPH LeetCode Extension

This workspace contains a Visual Studio Code extension for Competitive Programming Helper (CPH) that fetches and runs LeetCode test cases. The extension allows users to fetch test cases for a given LeetCode problem and run their code against these test cases.

## Features

- Fetch test cases for LeetCode problems.
- Run code against fetched test cases.
- Supports multiple programming languages including C++, Python, Java, and JavaScript.

## Workspace Structure

```
.gitignore
.vscode/
    c_cpp_properties.json
    extensions.json
    launch.json
    settings.json
    tasks.json
.vscode-test.mjs
.vscodeignore
eslint.config.mjs
extension.js
jsconfig.json
package.json
src/
    rotate-array.cpp
    rotate-array.py
    temp/
        rotate-array.exe
    testcases/
    utils/
        codeExec.js
        formatters.js
```

## Setup

1. **Install Dependencies**: Run `npm install` to install the required dependencies.
2. **Recommended Extensions**: Install the recommended extensions listed in `.vscode/extensions.json`.

## Usage

### Fetch Test Cases

1. Open the command palette (`Ctrl+Shift+P` or `Cmd+Shift+P`).
2. Run the command `CPH: Fetch Test Cases`.
3. Enter the LeetCode problem URL when prompted.

### Run Test Cases

1. Open the file containing your solution.
2. Save the file.
3. Open the command palette (`Ctrl+Shift+P` or `Cmd+Shift+P`).
4. Run the command `CPH: Run Test Cases`.

## Configuration

### `.vscode/settings.json`

```json
{
    "files.associations": {
        "vector": "cpp"
    }
}
```

### `.vscode/c_cpp_properties.json`

```json
{
    "configurations": [
        {
            "name": "Mac",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "macFrameworkPath": [
                "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks"
            ],
            "cStandard": "c17",
            "cppStandard": "c++17",
            "compilerPath": "/opt/homebrew/bin/g++-13"
        }
    ],
    "version": 4
}
```

### `.vscode/tasks.json`

```json
{
    "version": "2.0.0",
    "tasks": [
      {
        "label": "npm: watch",
        "type": "npm",
        "script": "watch",
        "isBackground": true,
        "problemMatcher": [
          "$tsc-watch"
        ],
        "presentation": {
          "reveal": "always"
        }
      }
    ]
}
```

## Development

### Linting

Run `npm run lint` to lint the code using ESLint.

### Testing

Run `npm test` to run the tests using the VS Code Test CLI.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.