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

#include <tencentcloud/apigateway/v20180808/model/UpdateServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

UpdateServiceRequest::UpdateServiceRequest() :
    m_serviceIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_updateDescHasBeenSet(false)
{
}

string UpdateServiceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_updateDesc.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateServiceRequest::GetServiceId() const
{
    return m_serviceId;
}

void UpdateServiceRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool UpdateServiceRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string UpdateServiceRequest::GetEnvironmentName() const
{
    return m_environmentName;
}

void UpdateServiceRequest::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool UpdateServiceRequest::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string UpdateServiceRequest::GetVersionName() const
{
    return m_versionName;
}

void UpdateServiceRequest::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool UpdateServiceRequest::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string UpdateServiceRequest::GetUpdateDesc() const
{
    return m_updateDesc;
}

void UpdateServiceRequest::SetUpdateDesc(const string& _updateDesc)
{
    m_updateDesc = _updateDesc;
    m_updateDescHasBeenSet = true;
}

bool UpdateServiceRequest::UpdateDescHasBeenSet() const
{
    return m_updateDescHasBeenSet;
}


