# CPH LeetCode Extension Quickstart

This quickstart guide will help you set up and use the Competitive Programming Helper (CPH) extension for LeetCode in Visual Studio Code.

## Prerequisites

- Visual Studio Code installed on your machine.
- Node.js and npm installed.

## Setup

1. **Clone the Repository**: Clone the repository to your local machine.
    ```sh
    git clone <repository-url>
    cd <repository-directory>
    ```

2. **Install Dependencies**: Run `npm install` to install the required dependencies.
    ```sh
    npm install
    ```

3. **Open in VS Code**: Open the project folder in Visual Studio Code.
    ```sh
    code .
    ```

4. **Install Recommended Extensions**: Install the recommended extensions listed in `.vscode/extensions.json`.

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

Ensure your settings file includes the following configuration to associate file types correctly:

```json
{
    "files.associations": {
        "vector": "cpp"
    }
}
```

### `.vscode/c_cpp_properties.json`

Ensure your C++ properties file includes the following configuration for proper IntelliSense and compilation:

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

Ensure your tasks file includes the following configuration to run npm scripts:

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