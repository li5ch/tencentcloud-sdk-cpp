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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ASSOCIATESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * AssociateSecurityGroups请求参数结构体
                */
                class AssociateSecurityGroupsRequest : public AbstractModel
                {
                public:
                    AssociateSecurityGroupsRequest();
                    ~AssociateSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库引擎名称：mariadb,cdb,cynosdb,dcdb,redis,mongodb 等。
                     * @return Product 数据库引擎名称：mariadb,cdb,cynosdb,dcdb,redis,mongodb 等。
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置数据库引擎名称：mariadb,cdb,cynosdb,dcdb,redis,mongodb 等。
                     * @param Product 数据库引擎名称：mariadb,cdb,cynosdb,dcdb,redis,mongodb 等。
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取要绑定的安全组ID，类似sg-efil73jd。
                     * @return SecurityGroupId 要绑定的安全组ID，类似sg-efil73jd。
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置要绑定的安全组ID，类似sg-efil73jd。
                     * @param SecurityGroupId 要绑定的安全组ID，类似sg-efil73jd。
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取被绑定的实例ID，类似ins-lesecurk，支持指定多个实例。
                     * @return InstanceIds 被绑定的实例ID，类似ins-lesecurk，支持指定多个实例。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置被绑定的实例ID，类似ins-lesecurk，支持指定多个实例。
                     * @param InstanceIds 被绑定的实例ID，类似ins-lesecurk，支持指定多个实例。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 数据库引擎名称：mariadb,cdb,cynosdb,dcdb,redis,mongodb 等。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 要绑定的安全组ID，类似sg-efil73jd。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 被绑定的实例ID，类似ins-lesecurk，支持指定多个实例。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ASSOCIATESECURITYGROUPSREQUEST_H_
