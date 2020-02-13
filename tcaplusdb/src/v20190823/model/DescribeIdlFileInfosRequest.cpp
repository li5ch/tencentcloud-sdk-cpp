/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

DescribeIdlFileInfosRequest::DescribeIdlFileInfosRequest() :
    m_applicationIdHasBeenSet(false),
    m_logicZoneIdsHasBeenSet(false),
    m_idlFileIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeIdlFileInfosRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_logicZoneIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogicZoneIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_logicZoneIds.begin(); itr != m_logicZoneIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_idlFileIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdlFileIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_idlFileIds.begin(); itr != m_idlFileIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIdlFileInfosRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeIdlFileInfosRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeIdlFileInfosRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

vector<string> DescribeIdlFileInfosRequest::GetLogicZoneIds() const
{
    return m_logicZoneIds;
}

void DescribeIdlFileInfosRequest::SetLogicZoneIds(const vector<string>& _logicZoneIds)
{
    m_logicZoneIds = _logicZoneIds;
    m_logicZoneIdsHasBeenSet = true;
}

bool DescribeIdlFileInfosRequest::LogicZoneIdsHasBeenSet() const
{
    return m_logicZoneIdsHasBeenSet;
}

vector<string> DescribeIdlFileInfosRequest::GetIdlFileIds() const
{
    return m_idlFileIds;
}

void DescribeIdlFileInfosRequest::SetIdlFileIds(const vector<string>& _idlFileIds)
{
    m_idlFileIds = _idlFileIds;
    m_idlFileIdsHasBeenSet = true;
}

bool DescribeIdlFileInfosRequest::IdlFileIdsHasBeenSet() const
{
    return m_idlFileIdsHasBeenSet;
}

int64_t DescribeIdlFileInfosRequest::GetOffset() const
{
    return m_offset;
}

void DescribeIdlFileInfosRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeIdlFileInfosRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeIdlFileInfosRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIdlFileInfosRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIdlFileInfosRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


