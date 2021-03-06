#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(ame_public_header
  include/tencentcloud/ame/v20190916/AmeClient.h
  )

set(ame_public_header_model
  include/tencentcloud/ame/v20190916/model/Album.h
  include/tencentcloud/ame/v20190916/model/DescribeMusicResponse.h
  include/tencentcloud/ame/v20190916/model/ImagePath.h
  include/tencentcloud/ame/v20190916/model/DataInfo.h
  include/tencentcloud/ame/v20190916/model/DescribeItemsResponse.h
  include/tencentcloud/ame/v20190916/model/Music.h
  include/tencentcloud/ame/v20190916/model/Artist.h
  include/tencentcloud/ame/v20190916/model/DescribeLyricResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeItemByIdResponse.h
  include/tencentcloud/ame/v20190916/model/ReportDataResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeItemsRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeStationsRequest.h
  include/tencentcloud/ame/v20190916/model/Item.h
  include/tencentcloud/ame/v20190916/model/Station.h
  include/tencentcloud/ame/v20190916/model/Lyric.h
  include/tencentcloud/ame/v20190916/model/DescribeLyricRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeStationsResponse.h
  include/tencentcloud/ame/v20190916/model/ReportDataRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeItemByIdRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeMusicRequest.h
  )

set(ame_src
  src/v20190916/AmeClient.cpp
  src/v20190916/model/Album.cpp
  src/v20190916/model/DescribeMusicResponse.cpp
  src/v20190916/model/ImagePath.cpp
  src/v20190916/model/DataInfo.cpp
  src/v20190916/model/DescribeItemsResponse.cpp
  src/v20190916/model/Music.cpp
  src/v20190916/model/Artist.cpp
  src/v20190916/model/DescribeLyricResponse.cpp
  src/v20190916/model/DescribeItemByIdResponse.cpp
  src/v20190916/model/ReportDataResponse.cpp
  src/v20190916/model/DescribeItemsRequest.cpp
  src/v20190916/model/DescribeStationsRequest.cpp
  src/v20190916/model/Item.cpp
  src/v20190916/model/Station.cpp
  src/v20190916/model/Lyric.cpp
  src/v20190916/model/DescribeLyricRequest.cpp
  src/v20190916/model/DescribeStationsResponse.cpp
  src/v20190916/model/ReportDataRequest.cpp
  src/v20190916/model/DescribeItemByIdRequest.cpp
  src/v20190916/model/DescribeMusicRequest.cpp
  )

set(ame_include
    include/tencentcloud/ame
  )

add_library(ame ${LIB_TYPE}
  ${ame_public_header}
  ${ame_public_header_model}
  ${ame_src})

set_target_properties(ame
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ame
  )

target_include_directories(ame
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ame
  core)

#install(FILES ${ame_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ame/v20190916)
#install(FILES ${ame_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ame/v20190916/model)
install(DIRECTORY ${ame_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ame
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
