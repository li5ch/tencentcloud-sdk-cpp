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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_PAIINSTANCE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_PAIINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * PAI实例
                */
                class PaiInstance : public AbstractModel
                {
                public:
                    PaiInstance();
                    ~PaiInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例域名
                     * @return DomainName 实例域名
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置实例域名
                     * @param DomainName 实例域名
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取PAI管理页面URL
                     * @return PaiMateUrl PAI管理页面URL
                     */
                    std::string GetPaiMateUrl() const;

                    /**
                     * 设置PAI管理页面URL
                     * @param PaiMateUrl PAI管理页面URL
                     */
                    void SetPaiMateUrl(const std::string& _paiMateUrl);

                    /**
                     * 判断参数 PaiMateUrl 是否已赋值
                     * @return PaiMateUrl 是否已赋值
                     */
                    bool PaiMateUrlHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例域名
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * PAI管理页面URL
                     */
                    std::string m_paiMateUrl;
                    bool m_paiMateUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_PAIINSTANCE_H_
