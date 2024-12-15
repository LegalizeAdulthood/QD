set(QD_API "")
set(QD_INLINE TRUE)
set(QD_HAVE_STD TRUE)
configure_file(include/qd/qd_config.h.in include/qd/qd_config.h)

set(X86 TRUE)
configure_file(config.h.in include/qd/config.h)

add_library(QD
    include/qd/bits.h
    include/qd/c_dd.h
    include/qd/c_qd.h
    include/qd/dd_inline.h
    include/qd/dd_real.h
    include/qd/fpu.h
    include/qd/inline.h
    include/qd/qd_config.h.in
    include/qd/qd_inline.h
    include/qd/qd_real.h
    bits.cpp
    c_dd.cpp
    c_qd.cpp
    config.h.in
    dd_const.cpp
    dd_real.cpp
    fpu.cpp
    qd_const.cpp
    qd_real.cpp
    util.h
    util.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/include/qd/config.h
    ${CMAKE_CURRENT_BINARY_DIR}/include/qd/qd_config.h
)
target_include_directories(QD PUBLIC include "${CMAKE_CURRENT_BINARY_DIR}/include")
set_target_properties(QD PROPERTIES FOLDER "Libraries")
