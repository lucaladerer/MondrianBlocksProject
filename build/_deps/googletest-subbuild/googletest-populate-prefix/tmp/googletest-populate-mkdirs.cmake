# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/kevin/Documents/Code/MondrianBlocksProject/build/_deps/googletest-src"
  "C:/Users/kevin/Documents/Code/MondrianBlocksProject/build/_deps/googletest-build"
  "C:/Users/kevin/Documents/Code/MondrianBlocksProject/build/_deps/googletest-subbuild/googletest-populate-prefix"
  "C:/Users/kevin/Documents/Code/MondrianBlocksProject/build/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "C:/Users/kevin/Documents/Code/MondrianBlocksProject/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "C:/Users/kevin/Documents/Code/MondrianBlocksProject/build/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "C:/Users/kevin/Documents/Code/MondrianBlocksProject/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/kevin/Documents/Code/MondrianBlocksProject/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
