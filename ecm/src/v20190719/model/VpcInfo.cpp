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

#include <tencentcloud/ecm/v20190719/model/VpcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace rapidjson;
using namespace std;

VpcInfo::VpcInfo() :
    m_vpcNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_enableMulticastHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_dnsServerSetHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_dhcpOptionsIdHasBeenSet(false),
    m_enableDhcpHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_assistantCidrSetHasBeenSet(false)
{
}

CoreInternalOutcome VpcInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpcInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpcInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpcInfo.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Error("response `VpcInfo.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("EnableMulticast") && !value["EnableMulticast"].IsNull())
    {
        if (!value["EnableMulticast"].IsBool())
        {
            return CoreInternalOutcome(Error("response `VpcInfo.EnableMulticast` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMulticast = value["EnableMulticast"].GetBool();
        m_enableMulticastHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpcInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("DnsServerSet") && !value["DnsServerSet"].IsNull())
    {
        if (!value["DnsServerSet"].IsArray())
            return CoreInternalOutcome(Error("response `VpcInfo.DnsServerSet` is not array type"));

        const Value &tmpValue = value["DnsServerSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dnsServerSet.push_back((*itr).GetString());
        }
        m_dnsServerSetHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpcInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("DhcpOptionsId") && !value["DhcpOptionsId"].IsNull())
    {
        if (!value["DhcpOptionsId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpcInfo.DhcpOptionsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dhcpOptionsId = string(value["DhcpOptionsId"].GetString());
        m_dhcpOptionsIdHasBeenSet = true;
    }

    if (value.HasMember("EnableDhcp") && !value["EnableDhcp"].IsNull())
    {
        if (!value["EnableDhcp"].IsBool())
        {
            return CoreInternalOutcome(Error("response `VpcInfo.EnableDhcp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableDhcp = value["EnableDhcp"].GetBool();
        m_enableDhcpHasBeenSet = true;
    }

    if (value.HasMember("Ipv6CidrBlock") && !value["Ipv6CidrBlock"].IsNull())
    {
        if (!value["Ipv6CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpcInfo.Ipv6CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6CidrBlock = string(value["Ipv6CidrBlock"].GetString());
        m_ipv6CidrBlockHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Error("response `VpcInfo.TagSet` is not array type"));

        const Value &tmpValue = value["TagSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("AssistantCidrSet") && !value["AssistantCidrSet"].IsNull())
    {
        if (!value["AssistantCidrSet"].IsArray())
            return CoreInternalOutcome(Error("response `VpcInfo.AssistantCidrSet` is not array type"));

        const Value &tmpValue = value["AssistantCidrSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssistantCidr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assistantCidrSet.push_back(item);
        }
        m_assistantCidrSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_vpcNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_enableMulticastHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableMulticast";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMulticast, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsServerSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DnsServerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dnsServerSet.begin(); itr != m_dnsServerSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_dhcpOptionsIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DhcpOptionsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dhcpOptionsId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDhcpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableDhcp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDhcp, allocator);
    }

    if (m_ipv6CidrBlockHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ipv6CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ipv6CidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assistantCidrSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssistantCidrSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assistantCidrSet.begin(); itr != m_assistantCidrSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VpcInfo::GetVpcName() const
{
    return m_vpcName;
}

void VpcInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool VpcInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string VpcInfo::GetVpcId() const
{
    return m_vpcId;
}

void VpcInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpcInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpcInfo::GetCidrBlock() const
{
    return m_cidrBlock;
}

void VpcInfo::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool VpcInfo::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

bool VpcInfo::GetIsDefault() const
{
    return m_isDefault;
}

void VpcInfo::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool VpcInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

bool VpcInfo::GetEnableMulticast() const
{
    return m_enableMulticast;
}

void VpcInfo::SetEnableMulticast(const bool& _enableMulticast)
{
    m_enableMulticast = _enableMulticast;
    m_enableMulticastHasBeenSet = true;
}

bool VpcInfo::EnableMulticastHasBeenSet() const
{
    return m_enableMulticastHasBeenSet;
}

string VpcInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void VpcInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool VpcInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<string> VpcInfo::GetDnsServerSet() const
{
    return m_dnsServerSet;
}

void VpcInfo::SetDnsServerSet(const vector<string>& _dnsServerSet)
{
    m_dnsServerSet = _dnsServerSet;
    m_dnsServerSetHasBeenSet = true;
}

bool VpcInfo::DnsServerSetHasBeenSet() const
{
    return m_dnsServerSetHasBeenSet;
}

string VpcInfo::GetDomainName() const
{
    return m_domainName;
}

void VpcInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool VpcInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string VpcInfo::GetDhcpOptionsId() const
{
    return m_dhcpOptionsId;
}

void VpcInfo::SetDhcpOptionsId(const string& _dhcpOptionsId)
{
    m_dhcpOptionsId = _dhcpOptionsId;
    m_dhcpOptionsIdHasBeenSet = true;
}

bool VpcInfo::DhcpOptionsIdHasBeenSet() const
{
    return m_dhcpOptionsIdHasBeenSet;
}

bool VpcInfo::GetEnableDhcp() const
{
    return m_enableDhcp;
}

void VpcInfo::SetEnableDhcp(const bool& _enableDhcp)
{
    m_enableDhcp = _enableDhcp;
    m_enableDhcpHasBeenSet = true;
}

bool VpcInfo::EnableDhcpHasBeenSet() const
{
    return m_enableDhcpHasBeenSet;
}

string VpcInfo::GetIpv6CidrBlock() const
{
    return m_ipv6CidrBlock;
}

void VpcInfo::SetIpv6CidrBlock(const string& _ipv6CidrBlock)
{
    m_ipv6CidrBlock = _ipv6CidrBlock;
    m_ipv6CidrBlockHasBeenSet = true;
}

bool VpcInfo::Ipv6CidrBlockHasBeenSet() const
{
    return m_ipv6CidrBlockHasBeenSet;
}

vector<Tag> VpcInfo::GetTagSet() const
{
    return m_tagSet;
}

void VpcInfo::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool VpcInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

vector<AssistantCidr> VpcInfo::GetAssistantCidrSet() const
{
    return m_assistantCidrSet;
}

void VpcInfo::SetAssistantCidrSet(const vector<AssistantCidr>& _assistantCidrSet)
{
    m_assistantCidrSet = _assistantCidrSet;
    m_assistantCidrSetHasBeenSet = true;
}

bool VpcInfo::AssistantCidrSetHasBeenSet() const
{
    return m_assistantCidrSetHasBeenSet;
}

