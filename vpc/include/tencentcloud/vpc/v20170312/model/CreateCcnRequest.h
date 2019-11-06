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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNREQUEST_H_

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
                * CreateCcn请求参数结构体
                */
                class CreateCcnRequest : public AbstractModel
                {
                public:
                    CreateCcnRequest();
                    ~CreateCcnRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CCN名称，最大长度不能超过60个字节。
                     * @return CcnName CCN名称，最大长度不能超过60个字节。
                     */
                    std::string GetCcnName() const;

                    /**
                     * 设置CCN名称，最大长度不能超过60个字节。
                     * @param CcnName CCN名称，最大长度不能超过60个字节。
                     */
                    void SetCcnName(const std::string& _ccnName);

                    /**
                     * 判断参数 CcnName 是否已赋值
                     * @return CcnName 是否已赋值
                     */
                    bool CcnNameHasBeenSet() const;

                    /**
                     * 获取CCN描述信息，最大长度不能超过100个字节。
                     * @return CcnDescription CCN描述信息，最大长度不能超过100个字节。
                     */
                    std::string GetCcnDescription() const;

                    /**
                     * 设置CCN描述信息，最大长度不能超过100个字节。
                     * @param CcnDescription CCN描述信息，最大长度不能超过100个字节。
                     */
                    void SetCcnDescription(const std::string& _ccnDescription);

                    /**
                     * 判断参数 CcnDescription 是否已赋值
                     * @return CcnDescription 是否已赋值
                     */
                    bool CcnDescriptionHasBeenSet() const;

                    /**
                     * 获取CCN服务质量，'PT'：白金，'AU'：金，'AG'：银，默认为‘AU’。
                     * @return QosLevel CCN服务质量，'PT'：白金，'AU'：金，'AG'：银，默认为‘AU’。
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置CCN服务质量，'PT'：白金，'AU'：金，'AG'：银，默认为‘AU’。
                     * @param QosLevel CCN服务质量，'PT'：白金，'AU'：金，'AG'：银，默认为‘AU’。
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取计费模式，PREPAID：表示预付费，即包年包月，POSTPAID：表示后付费，即按量计费。默认：POSTPAID。
                     * @return InstanceChargeType 计费模式，PREPAID：表示预付费，即包年包月，POSTPAID：表示后付费，即按量计费。默认：POSTPAID。
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置计费模式，PREPAID：表示预付费，即包年包月，POSTPAID：表示后付费，即按量计费。默认：POSTPAID。
                     * @param InstanceChargeType 计费模式，PREPAID：表示预付费，即包年包月，POSTPAID：表示后付费，即按量计费。默认：POSTPAID。
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取限速类型，OUTER_REGION_LIMIT表示地域出口限速，INTER_REGION_LIMIT为地域间限速，默认为OUTER_REGION_LIMIT
                     * @return BandwidthLimitType 限速类型，OUTER_REGION_LIMIT表示地域出口限速，INTER_REGION_LIMIT为地域间限速，默认为OUTER_REGION_LIMIT
                     */
                    std::string GetBandwidthLimitType() const;

                    /**
                     * 设置限速类型，OUTER_REGION_LIMIT表示地域出口限速，INTER_REGION_LIMIT为地域间限速，默认为OUTER_REGION_LIMIT
                     * @param BandwidthLimitType 限速类型，OUTER_REGION_LIMIT表示地域出口限速，INTER_REGION_LIMIT为地域间限速，默认为OUTER_REGION_LIMIT
                     */
                    void SetBandwidthLimitType(const std::string& _bandwidthLimitType);

                    /**
                     * 判断参数 BandwidthLimitType 是否已赋值
                     * @return BandwidthLimitType 是否已赋值
                     */
                    bool BandwidthLimitTypeHasBeenSet() const;

                private:

                    /**
                     * CCN名称，最大长度不能超过60个字节。
                     */
                    std::string m_ccnName;
                    bool m_ccnNameHasBeenSet;

                    /**
                     * CCN描述信息，最大长度不能超过100个字节。
                     */
                    std::string m_ccnDescription;
                    bool m_ccnDescriptionHasBeenSet;

                    /**
                     * CCN服务质量，'PT'：白金，'AU'：金，'AG'：银，默认为‘AU’。
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * 计费模式，PREPAID：表示预付费，即包年包月，POSTPAID：表示后付费，即按量计费。默认：POSTPAID。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 限速类型，OUTER_REGION_LIMIT表示地域出口限速，INTER_REGION_LIMIT为地域间限速，默认为OUTER_REGION_LIMIT
                     */
                    std::string m_bandwidthLimitType;
                    bool m_bandwidthLimitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNREQUEST_H_
