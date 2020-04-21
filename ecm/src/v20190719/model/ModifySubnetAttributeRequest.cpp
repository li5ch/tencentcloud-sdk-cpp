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

#include <tencentcloud/ecm/v20190719/model/ModifySubnetAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace rapidjson;
using namespace std;

ModifySubnetAttributeRequest::ModifySubnetAttributeRequest() :
    m_subnetIdHasBeenSet(false),
    m_ecmRegionHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_enableBroadcastHasBeenSet(false)
{
}

string ModifySubnetAttributeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_ecmRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EcmRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ecmRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableBroadcastHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableBroadcast";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_enableBroadcast.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySubnetAttributeRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ModifySubnetAttributeRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModifySubnetAttributeRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ModifySubnetAttributeRequest::GetEcmRegion() const
{
    return m_ecmRegion;
}

void ModifySubnetAttributeRequest::SetEcmRegion(const string& _ecmRegion)
{
    m_ecmRegion = _ecmRegion;
    m_ecmRegionHasBeenSet = true;
}

bool ModifySubnetAttributeRequest::EcmRegionHasBeenSet() const
{
    return m_ecmRegionHasBeenSet;
}

string ModifySubnetAttributeRequest::GetSubnetName() const
{
    return m_subnetName;
}

void ModifySubnetAttributeRequest::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool ModifySubnetAttributeRequest::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string ModifySubnetAttributeRequest::GetEnableBroadcast() const
{
    return m_enableBroadcast;
}

void ModifySubnetAttributeRequest::SetEnableBroadcast(const string& _enableBroadcast)
{
    m_enableBroadcast = _enableBroadcast;
    m_enableBroadcastHasBeenSet = true;
}

bool ModifySubnetAttributeRequest::EnableBroadcastHasBeenSet() const
{
    return m_enableBroadcastHasBeenSet;
}


