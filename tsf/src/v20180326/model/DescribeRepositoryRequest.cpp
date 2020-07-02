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

#include <tencentcloud/tsf/v20180326/model/DescribeRepositoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DescribeRepositoryRequest::DescribeRepositoryRequest() :
    m_repositoryIdHasBeenSet(false)
{
}

string DescribeRepositoryRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_repositoryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RepositoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_repositoryId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRepositoryRequest::GetRepositoryId() const
{
    return m_repositoryId;
}

void DescribeRepositoryRequest::SetRepositoryId(const string& _repositoryId)
{
    m_repositoryId = _repositoryId;
    m_repositoryIdHasBeenSet = true;
}

bool DescribeRepositoryRequest::RepositoryIdHasBeenSet() const
{
    return m_repositoryIdHasBeenSet;
}

