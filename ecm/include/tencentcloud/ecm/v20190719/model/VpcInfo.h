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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_VPCINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_VPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>
#include <tencentcloud/ecm/v20190719/model/AssistantCidr.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 私有网络(VPC)对象。
                */
                class VpcInfo : public AbstractModel
                {
                public:
                    VpcInfo();
                    ~VpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC名称。
                     * @return VpcName VPC名称。
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC名称。
                     * @param VpcName VPC名称。
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取VPC实例ID，例如：vpc-azd4dt1c。
                     * @return VpcId VPC实例ID，例如：vpc-azd4dt1c。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID，例如：vpc-azd4dt1c。
                     * @param VpcId VPC实例ID，例如：vpc-azd4dt1c。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC的IPv4 CIDR。
                     * @return CidrBlock VPC的IPv4 CIDR。
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置VPC的IPv4 CIDR。
                     * @param CidrBlock VPC的IPv4 CIDR。
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取是否默认VPC。
                     * @return IsDefault 是否默认VPC。
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否默认VPC。
                     * @param IsDefault 是否默认VPC。
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取是否开启组播。
                     * @return EnableMulticast 是否开启组播。
                     */
                    bool GetEnableMulticast() const;

                    /**
                     * 设置是否开启组播。
                     * @param EnableMulticast 是否开启组播。
                     */
                    void SetEnableMulticast(const bool& _enableMulticast);

                    /**
                     * 判断参数 EnableMulticast 是否已赋值
                     * @return EnableMulticast 是否已赋值
                     */
                    bool EnableMulticastHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param CreatedTime 创建时间。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取DNS列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DnsServerSet DNS列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetDnsServerSet() const;

                    /**
                     * 设置DNS列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DnsServerSet DNS列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDnsServerSet(const std::vector<std::string>& _dnsServerSet);

                    /**
                     * 判断参数 DnsServerSet 是否已赋值
                     * @return DnsServerSet 是否已赋值
                     */
                    bool DnsServerSetHasBeenSet() const;

                    /**
                     * 获取DHCP域名选项值。
                     * @return DomainName DHCP域名选项值。
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置DHCP域名选项值。
                     * @param DomainName DHCP域名选项值。
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取DHCP选项集ID。
                     * @return DhcpOptionsId DHCP选项集ID。
                     */
                    std::string GetDhcpOptionsId() const;

                    /**
                     * 设置DHCP选项集ID。
                     * @param DhcpOptionsId DHCP选项集ID。
                     */
                    void SetDhcpOptionsId(const std::string& _dhcpOptionsId);

                    /**
                     * 判断参数 DhcpOptionsId 是否已赋值
                     * @return DhcpOptionsId 是否已赋值
                     */
                    bool DhcpOptionsIdHasBeenSet() const;

                    /**
                     * 获取是否开启DHCP。
                     * @return EnableDhcp 是否开启DHCP。
                     */
                    bool GetEnableDhcp() const;

                    /**
                     * 设置是否开启DHCP。
                     * @param EnableDhcp 是否开启DHCP。
                     */
                    void SetEnableDhcp(const bool& _enableDhcp);

                    /**
                     * 判断参数 EnableDhcp 是否已赋值
                     * @return EnableDhcp 是否已赋值
                     */
                    bool EnableDhcpHasBeenSet() const;

                    /**
                     * 获取VPC的IPv6 CIDR。
                     * @return Ipv6CidrBlock VPC的IPv6 CIDR。
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置VPC的IPv6 CIDR。
                     * @param Ipv6CidrBlock VPC的IPv6 CIDR。
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取标签键值对
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 标签键值对
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagSet 标签键值对
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取辅助CIDR
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssistantCidrSet 辅助CIDR
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssistantCidr> GetAssistantCidrSet() const;

                    /**
                     * 设置辅助CIDR
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AssistantCidrSet 辅助CIDR
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAssistantCidrSet(const std::vector<AssistantCidr>& _assistantCidrSet);

                    /**
                     * 判断参数 AssistantCidrSet 是否已赋值
                     * @return AssistantCidrSet 是否已赋值
                     */
                    bool AssistantCidrSetHasBeenSet() const;

                private:

                    /**
                     * VPC名称。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VPC实例ID，例如：vpc-azd4dt1c。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC的IPv4 CIDR。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 是否默认VPC。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 是否开启组播。
                     */
                    bool m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * DNS列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dnsServerSet;
                    bool m_dnsServerSetHasBeenSet;

                    /**
                     * DHCP域名选项值。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * DHCP选项集ID。
                     */
                    std::string m_dhcpOptionsId;
                    bool m_dhcpOptionsIdHasBeenSet;

                    /**
                     * 是否开启DHCP。
                     */
                    bool m_enableDhcp;
                    bool m_enableDhcpHasBeenSet;

                    /**
                     * VPC的IPv6 CIDR。
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * 标签键值对
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 辅助CIDR
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssistantCidr> m_assistantCidrSet;
                    bool m_assistantCidrSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_VPCINFO_H_
