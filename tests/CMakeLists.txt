add_library(tictoc tictoc.cpp tictoc.h)
target_include_directories(tictoc PUBLIC .)
target_link_libraries(tictoc PUBLIC QD)
set_target_properties(tictoc PROPERTIES FOLDER "Tests")

add_executable(compileExample compileExample.cpp)
target_link_libraries(compileExample PUBLIC QD)
set_target_properties(compileExample PROPERTIES FOLDER "Examples")

add_executable(qd_test qd_test.cpp)
target_link_libraries(qd_test PUBLIC QD)
set_target_properties(qd_test PROPERTIES FOLDER "Tests")
add_test(NAME qd_test COMMAND qd_test -all)

add_executable(pslq_test pslq.h pslq_test.cpp)
target_link_libraries(pslq_test PUBLIC QD tictoc)
set_target_properties(pslq_test PROPERTIES FOLDER "Tests")
add_test(NAME pslq_test COMMAND pslq_test)

add_executable(qd_timer qd_timer.cpp)
target_link_libraries(qd_timer PUBLIC QD tictoc)
set_target_properties(qd_timer PROPERTIES FOLDER "Tests")

add_executable(quadt_test quadt_test.cpp quadt.h)
target_link_libraries(quadt_test PUBLIC QD tictoc)
set_target_properties(quadt_test PROPERTIES FOLDER "Tests")
add_test(NAME quadt_test COMMAND quadt_test -all WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(huge huge.cpp)
target_link_libraries(huge PUBLIC QD)
set_target_properties(huge PROPERTIES FOLDER "Tests")
add_test(NAME huge COMMAND huge "-all")
set_property(TEST huge PROPERTY DISABLED TRUE)
