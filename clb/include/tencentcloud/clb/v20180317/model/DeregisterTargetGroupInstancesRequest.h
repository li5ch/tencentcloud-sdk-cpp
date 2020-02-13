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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERTARGETGROUPINSTANCESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERTARGETGROUPINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupInstance.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DeregisterTargetGroupInstances请求参数结构体
                */
                class DeregisterTargetGroupInstancesRequest : public AbstractModel
                {
                public:
                    DeregisterTargetGroupInstancesRequest();
                    ~DeregisterTargetGroupInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标组ID
                     * @return TargetGroupId 目标组ID
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组ID
                     * @param TargetGroupId 目标组ID
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取待解绑的服务器信息
                     * @return TargetGroupInstances 待解绑的服务器信息
                     */
                    std::vector<TargetGroupInstance> GetTargetGroupInstances() const;

                    /**
                     * 设置待解绑的服务器信息
                     * @param TargetGroupInstances 待解绑的服务器信息
                     */
                    void SetTargetGroupInstances(const std::vector<TargetGroupInstance>& _targetGroupInstances);

                    /**
                     * 判断参数 TargetGroupInstances 是否已赋值
                     * @return TargetGroupInstances 是否已赋值
                     */
                    bool TargetGroupInstancesHasBeenSet() const;

                private:

                    /**
                     * 目标组ID
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 待解绑的服务器信息
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERTARGETGROUPINSTANCESREQUEST_H_
