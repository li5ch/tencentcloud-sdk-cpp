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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINSTANCE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 目标组实例
                */
                class TargetGroupInstance : public AbstractModel
                {
                public:
                    TargetGroupInstance();
                    ~TargetGroupInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标组实例的内网IP
                     * @return BindIP 目标组实例的内网IP
                     */
                    std::string GetBindIP() const;

                    /**
                     * 设置目标组实例的内网IP
                     * @param BindIP 目标组实例的内网IP
                     */
                    void SetBindIP(const std::string& _bindIP);

                    /**
                     * 判断参数 BindIP 是否已赋值
                     * @return BindIP 是否已赋值
                     */
                    bool BindIPHasBeenSet() const;

                    /**
                     * 获取目标组实例的端口
                     * @return Port 目标组实例的端口
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置目标组实例的端口
                     * @param Port 目标组实例的端口
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取目标组实例的权重
                     * @return Weight 目标组实例的权重
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置目标组实例的权重
                     * @param Weight 目标组实例的权重
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取目标组实例的新端口
                     * @return NewPort 目标组实例的新端口
                     */
                    uint64_t GetNewPort() const;

                    /**
                     * 设置目标组实例的新端口
                     * @param NewPort 目标组实例的新端口
                     */
                    void SetNewPort(const uint64_t& _newPort);

                    /**
                     * 判断参数 NewPort 是否已赋值
                     * @return NewPort 是否已赋值
                     */
                    bool NewPortHasBeenSet() const;

                private:

                    /**
                     * 目标组实例的内网IP
                     */
                    std::string m_bindIP;
                    bool m_bindIPHasBeenSet;

                    /**
                     * 目标组实例的端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 目标组实例的权重
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 目标组实例的新端口
                     */
                    uint64_t m_newPort;
                    bool m_newPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINSTANCE_H_
