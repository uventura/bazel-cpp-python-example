cc_import(
    name = "Python310",
    hdrs = glob([
        "dep/Python3.1/include/*.h", 
        "dep/Python3.1/include/cpython/*.h",
        "dep/Python3.1/include/internals/*.h"
    ]),
    static_library = "dep/Python3.1/libs/python310.lib",
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [":Python310"],
    linkstatic = 1,
)