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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 实例对象
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param InstanceId 实例id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param InstanceName 实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例的状态。0：创建中，1：运行中，2：删除中 ， 5 隔离中，-1 创建失败
                     * @return Status 实例的状态。0：创建中，1：运行中，2：删除中 ， 5 隔离中，-1 创建失败
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例的状态。0：创建中，1：运行中，2：删除中 ， 5 隔离中，-1 创建失败
                     * @param Status 实例的状态。0：创建中，1：运行中，2：删除中 ， 5 隔离中，-1 创建失败
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否开源实例。开源：true，不开源：false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IfCommunity 是否开源实例。开源：true，不开源：false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIfCommunity() const;

                    /**
                     * 设置是否开源实例。开源：true，不开源：false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IfCommunity 是否开源实例。开源：true，不开源：false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIfCommunity(const bool& _ifCommunity);

                    /**
                     * 判断参数 IfCommunity 是否已赋值
                     * @return IfCommunity 是否已赋值
                     */
                    bool IfCommunityHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例的状态。0：创建中，1：运行中，2：删除中 ， 5 隔离中，-1 创建失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否开源实例。开源：true，不开源：false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ifCommunity;
                    bool m_ifCommunityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCE_H_
