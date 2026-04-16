# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SWEN_4342_Project_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SWEN_4342_Project_autogen.dir\\ParseCache.txt"
  "SWEN_4342_Project_autogen"
  )
endif()
