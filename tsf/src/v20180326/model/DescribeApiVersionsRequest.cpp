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

#include <tencentcloud/tsf/v20180326/model/DescribeApiVersionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DescribeApiVersionsRequest::DescribeApiVersionsRequest() :
    m_microserviceIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false)
{
}

string DescribeApiVersionsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_microserviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MicroserviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_microserviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_method.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApiVersionsRequest::GetMicroserviceId() const
{
    return m_microserviceId;
}

void DescribeApiVersionsRequest::SetMicroserviceId(const string& _microserviceId)
{
    m_microserviceId = _microserviceId;
    m_microserviceIdHasBeenSet = true;
}

bool DescribeApiVersionsRequest::MicroserviceIdHasBeenSet() const
{
    return m_microserviceIdHasBeenSet;
}

string DescribeApiVersionsRequest::GetPath() const
{
    return m_path;
}

void DescribeApiVersionsRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool DescribeApiVersionsRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string DescribeApiVersionsRequest::GetMethod() const
{
    return m_method;
}

void DescribeApiVersionsRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool DescribeApiVersionsRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}


