# C_Makefile_NoTests_Template

My C project configuration with Makefile

## 1. Definitions

`{PROJECT_ROOT}` - project root path.
`{BUILD_DIR}` - `build`

## 3. Build

### 3.1 Requirements

- GCC >= 8.4

### 3.2 Build

In `{PROJECT_ROOT}` invoke:
```
make -C ./build
# And run app
./build/app
```
Or:
```
cd ./build
make
```

You can also clean ./build
```
make -C ./build clean
```

## 4. Project contents
``` 
├── build                   # build directory with Makefile
├── sources                 # sources directory
├── .vscode                 # my VS code configuration
├── LICENSE                 # License doc
├── README.md               # this file
├── .clang-format           # clang-format file which unify code style
└── .gitignore              # gitignore config file
```

## 5. Run app and tests

### 5.1 Run app 
```
./build/app
```