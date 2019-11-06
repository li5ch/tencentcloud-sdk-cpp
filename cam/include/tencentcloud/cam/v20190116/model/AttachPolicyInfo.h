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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHPOLICYINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 关联策略信息
                */
                class AttachPolicyInfo : public AbstractModel
                {
                public:
                    AttachPolicyInfo();
                    ~AttachPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略id
                     * @return PolicyId 策略id
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略id
                     * @param PolicyId 策略id
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyName 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolicyName 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AddTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取创建来源，1 通过控制台创建, 2 通过策略语法创建。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateMode 创建来源，1 通过控制台创建, 2 通过策略语法创建。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCreateMode() const;

                    /**
                     * 设置创建来源，1 通过控制台创建, 2 通过策略语法创建。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateMode 创建来源，1 通过控制台创建, 2 通过策略语法创建。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateMode(const uint64_t& _createMode);

                    /**
                     * 判断参数 CreateMode 是否已赋值
                     * @return CreateMode 是否已赋值
                     */
                    bool CreateModeHasBeenSet() const;

                    /**
                     * 获取取值为user和QCS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyType 取值为user和QCS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置取值为user和QCS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolicyType 取值为user和QCS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 策略备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置策略备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 策略备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取策略关联操作者主张号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateOwnerUin 策略关联操作者主张号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetOperateOwnerUin() const;

                    /**
                     * 设置策略关联操作者主张号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OperateOwnerUin 策略关联操作者主张号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperateOwnerUin(const uint64_t& _operateOwnerUin);

                    /**
                     * 判断参数 OperateOwnerUin 是否已赋值
                     * @return OperateOwnerUin 是否已赋值
                     */
                    bool OperateOwnerUinHasBeenSet() const;

                    /**
                     * 获取策略关联操作者ID，如果UinType为0表示子帐号Uin，如果UinType为1表示角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateUin 策略关联操作者ID，如果UinType为0表示子帐号Uin，如果UinType为1表示角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetOperateUin() const;

                    /**
                     * 设置策略关联操作者ID，如果UinType为0表示子帐号Uin，如果UinType为1表示角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OperateUin 策略关联操作者ID，如果UinType为0表示子帐号Uin，如果UinType为1表示角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperateUin(const uint64_t& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取UinType为0表示OperateUin字段是子帐号Uin，如果UinType为1表示OperateUin字段是角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateUinType UinType为0表示OperateUin字段是子帐号Uin，如果UinType为1表示OperateUin字段是角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetOperateUinType() const;

                    /**
                     * 设置UinType为0表示OperateUin字段是子帐号Uin，如果UinType为1表示OperateUin字段是角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OperateUinType UinType为0表示OperateUin字段是子帐号Uin，如果UinType为1表示OperateUin字段是角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperateUinType(const uint64_t& _operateUinType);

                    /**
                     * 判断参数 OperateUinType 是否已赋值
                     * @return OperateUinType 是否已赋值
                     */
                    bool OperateUinTypeHasBeenSet() const;

                private:

                    /**
                     * 策略id
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 创建来源，1 通过控制台创建, 2 通过策略语法创建。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * 取值为user和QCS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 策略关联操作者主张号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_operateOwnerUin;
                    bool m_operateOwnerUinHasBeenSet;

                    /**
                     * 策略关联操作者ID，如果UinType为0表示子帐号Uin，如果UinType为1表示角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * UinType为0表示OperateUin字段是子帐号Uin，如果UinType为1表示OperateUin字段是角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_operateUinType;
                    bool m_operateUinTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHPOLICYINFO_H_
