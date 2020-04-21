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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PRIVATEIPADDRESSSPECIFICATION_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PRIVATEIPADDRESSSPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 内网IP信息
                */
                class PrivateIpAddressSpecification : public AbstractModel
                {
                public:
                    PrivateIpAddressSpecification();
                    ~PrivateIpAddressSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内网IP地址。
                     * @return PrivateIpAddress 内网IP地址。
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置内网IP地址。
                     * @param PrivateIpAddress 内网IP地址。
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取是否是主IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Primary 是否是主IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置是否是主IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Primary 是否是主IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrimary(const bool& _primary);

                    /**
                     * 判断参数 Primary 是否已赋值
                     * @return Primary 是否已赋值
                     */
                    bool PrimaryHasBeenSet() const;

                    /**
                     * 获取公网IP地址。
                     * @return PublicIpAddress 公网IP地址。
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置公网IP地址。
                     * @param PublicIpAddress 公网IP地址。
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取EIP实例ID，例如：eip-11112222。
                     * @return AddressId EIP实例ID，例如：eip-11112222。
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置EIP实例ID，例如：eip-11112222。
                     * @param AddressId EIP实例ID，例如：eip-11112222。
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取内网IP描述信息。
                     * @return Description 内网IP描述信息。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置内网IP描述信息。
                     * @param Description 内网IP描述信息。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取公网IP是否被封堵。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsWanIpBlocked 公网IP是否被封堵。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsWanIpBlocked() const;

                    /**
                     * 设置公网IP是否被封堵。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsWanIpBlocked 公网IP是否被封堵。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsWanIpBlocked(const bool& _isWanIpBlocked);

                    /**
                     * 判断参数 IsWanIpBlocked 是否已赋值
                     * @return IsWanIpBlocked 是否已赋值
                     */
                    bool IsWanIpBlockedHasBeenSet() const;

                    /**
                     * 获取IP状态：
PENDING：生产中
MIGRATING：迁移中
DELETING：删除中
AVAILABLE：可用的
                     * @return State IP状态：
PENDING：生产中
MIGRATING：迁移中
DELETING：删除中
AVAILABLE：可用的
                     */
                    std::string GetState() const;

                    /**
                     * 设置IP状态：
PENDING：生产中
MIGRATING：迁移中
DELETING：删除中
AVAILABLE：可用的
                     * @param State IP状态：
PENDING：生产中
MIGRATING：迁移中
DELETING：删除中
AVAILABLE：可用的
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 内网IP地址。
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * 是否是主IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * 公网IP地址。
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * EIP实例ID，例如：eip-11112222。
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * 内网IP描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 公网IP是否被封堵。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isWanIpBlocked;
                    bool m_isWanIpBlockedHasBeenSet;

                    /**
                     * IP状态：
PENDING：生产中
MIGRATING：迁移中
DELETING：删除中
AVAILABLE：可用的
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PRIVATEIPADDRESSSPECIFICATION_H_
