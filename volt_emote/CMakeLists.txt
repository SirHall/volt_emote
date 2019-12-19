cmake_minimum_required(VERSION 3.5)

# Set some default values
set(CMAKE_CXX_STANDARD 17)

# Setup and include libraries
# We use Boost.asio so we can later transition more easily to the C++ Networking TS library.
# find_package(Boost COMPONENTS system filesystem REQUIRED)
# include_directories(${Boost_INCLUDE_DIR})

# Find all source files
file(GLOB_RECURSE VOLT_EMOTE_SRCS
    "src/*.cpp"
    RELATIVE_PATH
)

find_package (Threads)

add_library(volt_emote ${VOLT_EMOTE_SRCS})
target_include_directories(volt_emote PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)
target_link_libraries(volt_emote ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(volt_emote ${CONAN_LIBS})

# endif()