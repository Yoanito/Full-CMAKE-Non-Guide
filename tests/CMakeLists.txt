add_executable(test_fac test_fac.cpp)
target_link_libraries(test_fac FinalProject)
add_test(NAME FacTest COMMAND test_fac)

add_executable(test_fib test_fib.cpp)
target_link_libraries(test_fib FinalProject)
add_test(NAME FibTest COMMAND test_fib)

add_executable(test_pal test_pal.cpp)
target_link_libraries(test_pal FinalProject)
add_test(NAME PalTest COMMAND test_pal)

add_executable(test_prm test_prm.cpp)
target_link_libraries(test_prm FinalProject)
add_test(NAME PrmTest COMMAND test_prm)
