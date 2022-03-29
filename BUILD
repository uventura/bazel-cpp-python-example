cc_import(
    name = "Python310",
    hdrs = glob([
        "dep/Python3.1/include/*.h", 
        "dep/Python3.1/include/cpython/*.h",
        "dep/Python3.1/include/internals/*.h"
    ]),
    static_library = "dep/Python3.1/libs/python310.lib",
)

cc_library(
    name = "python-lib",
    deps = [":Python310"],
    includes = ["dep/Python3.1/include"],
    linkstatic = 1,
    visibility = ["//visibility:public"],
    hdrs = glob([
        "dep/Python3.1/include/*.h", 
        "dep/Python3.1/include/cpython/*.h",
        "dep/Python3.1/include/internals/*.h"
    ]),
)

cc_binary(
    name = "main",
    deps = ["python-lib"],
    srcs = ["main.cc"],
)