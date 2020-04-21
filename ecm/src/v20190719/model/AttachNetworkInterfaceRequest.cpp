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

#include <tencentcloud/ecm/v20190719/model/AttachNetworkInterfaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace rapidjson;
using namespace std;

AttachNetworkInterfaceRequest::AttachNetworkInterfaceRequest() :
    m_networkInterfaceIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ecmRegionHasBeenSet(false)
{
}

string AttachNetworkInterfaceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInterfaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ecmRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EcmRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ecmRegion.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AttachNetworkInterfaceRequest::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void AttachNetworkInterfaceRequest::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool AttachNetworkInterfaceRequest::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

string AttachNetworkInterfaceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AttachNetworkInterfaceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AttachNetworkInterfaceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AttachNetworkInterfaceRequest::GetEcmRegion() const
{
    return m_ecmRegion;
}

void AttachNetworkInterfaceRequest::SetEcmRegion(const string& _ecmRegion)
{
    m_ecmRegion = _ecmRegion;
    m_ecmRegionHasBeenSet = true;
}

bool AttachNetworkInterfaceRequest::EcmRegionHasBeenSet() const
{
    return m_ecmRegionHasBeenSet;
}


