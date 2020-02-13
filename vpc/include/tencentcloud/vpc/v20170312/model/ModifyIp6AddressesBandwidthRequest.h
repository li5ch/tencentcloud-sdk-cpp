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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6ADDRESSESBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6ADDRESSESBANDWIDTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyIp6AddressesBandwidth请求参数结构体
                */
                class ModifyIp6AddressesBandwidthRequest : public AbstractModel
                {
                public:
                    ModifyIp6AddressesBandwidthRequest();
                    ~ModifyIp6AddressesBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修改的目标带宽，单位Mbps
                     * @return InternetMaxBandwidthOut 修改的目标带宽，单位Mbps
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置修改的目标带宽，单位Mbps
                     * @param InternetMaxBandwidthOut 修改的目标带宽，单位Mbps
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取IPV6地址。Ip6Addresses和Ip6AddressId必须且只能传一个
                     * @return Ip6Addresses IPV6地址。Ip6Addresses和Ip6AddressId必须且只能传一个
                     */
                    std::vector<std::string> GetIp6Addresses() const;

                    /**
                     * 设置IPV6地址。Ip6Addresses和Ip6AddressId必须且只能传一个
                     * @param Ip6Addresses IPV6地址。Ip6Addresses和Ip6AddressId必须且只能传一个
                     */
                    void SetIp6Addresses(const std::vector<std::string>& _ip6Addresses);

                    /**
                     * 判断参数 Ip6Addresses 是否已赋值
                     * @return Ip6Addresses 是否已赋值
                     */
                    bool Ip6AddressesHasBeenSet() const;

                    /**
                     * 获取IPV6地址对应的唯一ID，形如eip-xxxxxxxx。Ip6Addresses和Ip6AddressId必须且只能传一个
                     * @return Ip6AddressIds IPV6地址对应的唯一ID，形如eip-xxxxxxxx。Ip6Addresses和Ip6AddressId必须且只能传一个
                     */
                    std::vector<std::string> GetIp6AddressIds() const;

                    /**
                     * 设置IPV6地址对应的唯一ID，形如eip-xxxxxxxx。Ip6Addresses和Ip6AddressId必须且只能传一个
                     * @param Ip6AddressIds IPV6地址对应的唯一ID，形如eip-xxxxxxxx。Ip6Addresses和Ip6AddressId必须且只能传一个
                     */
                    void SetIp6AddressIds(const std::vector<std::string>& _ip6AddressIds);

                    /**
                     * 判断参数 Ip6AddressIds 是否已赋值
                     * @return Ip6AddressIds 是否已赋值
                     */
                    bool Ip6AddressIdsHasBeenSet() const;

                private:

                    /**
                     * 修改的目标带宽，单位Mbps
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * IPV6地址。Ip6Addresses和Ip6AddressId必须且只能传一个
                     */
                    std::vector<std::string> m_ip6Addresses;
                    bool m_ip6AddressesHasBeenSet;

                    /**
                     * IPV6地址对应的唯一ID，形如eip-xxxxxxxx。Ip6Addresses和Ip6AddressId必须且只能传一个
                     */
                    std::vector<std::string> m_ip6AddressIds;
                    bool m_ip6AddressIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6ADDRESSESBANDWIDTHREQUEST_H_
