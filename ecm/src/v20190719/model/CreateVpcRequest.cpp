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

#include <tencentcloud/ecm/v20190719/model/CreateVpcRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace rapidjson;
using namespace std;

CreateVpcRequest::CreateVpcRequest() :
    m_vpcNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_ecmRegionHasBeenSet(false),
    m_enableMulticastHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateVpcRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_ecmRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EcmRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ecmRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_enableMulticastHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableMulticast";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_enableMulticast.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsServersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DnsServers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dnsServers.begin(); itr != m_dnsServers.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVpcRequest::GetVpcName() const
{
    return m_vpcName;
}

void CreateVpcRequest::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool CreateVpcRequest::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string CreateVpcRequest::GetCidrBlock() const
{
    return m_cidrBlock;
}

void CreateVpcRequest::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool CreateVpcRequest::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string CreateVpcRequest::GetEcmRegion() const
{
    return m_ecmRegion;
}

void CreateVpcRequest::SetEcmRegion(const string& _ecmRegion)
{
    m_ecmRegion = _ecmRegion;
    m_ecmRegionHasBeenSet = true;
}

bool CreateVpcRequest::EcmRegionHasBeenSet() const
{
    return m_ecmRegionHasBeenSet;
}

string CreateVpcRequest::GetEnableMulticast() const
{
    return m_enableMulticast;
}

void CreateVpcRequest::SetEnableMulticast(const string& _enableMulticast)
{
    m_enableMulticast = _enableMulticast;
    m_enableMulticastHasBeenSet = true;
}

bool CreateVpcRequest::EnableMulticastHasBeenSet() const
{
    return m_enableMulticastHasBeenSet;
}

vector<string> CreateVpcRequest::GetDnsServers() const
{
    return m_dnsServers;
}

void CreateVpcRequest::SetDnsServers(const vector<string>& _dnsServers)
{
    m_dnsServers = _dnsServers;
    m_dnsServersHasBeenSet = true;
}

bool CreateVpcRequest::DnsServersHasBeenSet() const
{
    return m_dnsServersHasBeenSet;
}

string CreateVpcRequest::GetDomainName() const
{
    return m_domainName;
}

void CreateVpcRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool CreateVpcRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

vector<Tag> CreateVpcRequest::GetTags() const
{
    return m_tags;
}

void CreateVpcRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateVpcRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


