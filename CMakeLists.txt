cmake_minimum_required( VERSION 3.2 )
project( unity_test )

set( UNITY_ROOT lib/unity )

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

        test/sample_test.c
)

set(
    SOURCE_FILES

        src/sample.c
)

add_executable( unity_test ${SOURCE_FILES} ${TEST_FILES} ${UNITY_FILES} )
