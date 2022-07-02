cmake_minimum_required( VERSION 3.2 )
project( unity_test )

set( UNITY_ROOT lib/Unity )

include_directories( ${UNITY_ROOT}/src )
include_directories( ${UNITY_ROOT}/extras/fixture/src )
include_directories( ${UNITY_ROOT}/extras/memory/src )
include_directories( include/ )
link_libraries( m )

set(
    UNITY_FILES

        ${UNITY_ROOT}/src/unity.c
        ${UNITY_ROOT}/extras/fixture/src/unity_fixture.c
)

set(
    TEST_FILES

        test/testcases/sample_test.c
)

set(
    SOURCE_FILES

        src/sample.c
)

set(
    TEST_RUNNER_FILES

        test/runner/sample_test_runner.c
        test/runner/all_tests.c
)


add_executable( unity_test ${SOURCE_FILES} ${TEST_FILES} ${TEST_RUNNER_FILES} ${UNITY_FILES} )
