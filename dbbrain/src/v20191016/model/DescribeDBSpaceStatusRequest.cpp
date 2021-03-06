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

#include <tencentcloud/dbbrain/v20191016/model/DescribeDBSpaceStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace rapidjson;
using namespace std;

DescribeDBSpaceStatusRequest::DescribeDBSpaceStatusRequest() :
    m_instanceIdHasBeenSet(false),
    m_rangeDaysHasBeenSet(false)
{
}

string DescribeDBSpaceStatusRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeDaysHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RangeDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rangeDays, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDBSpaceStatusRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDBSpaceStatusRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDBSpaceStatusRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeDBSpaceStatusRequest::GetRangeDays() const
{
    return m_rangeDays;
}

void DescribeDBSpaceStatusRequest::SetRangeDays(const int64_t& _rangeDays)
{
    m_rangeDays = _rangeDays;
    m_rangeDaysHasBeenSet = true;
}

bool DescribeDBSpaceStatusRequest::RangeDaysHasBeenSet() const
{
    return m_rangeDaysHasBeenSet;
}


