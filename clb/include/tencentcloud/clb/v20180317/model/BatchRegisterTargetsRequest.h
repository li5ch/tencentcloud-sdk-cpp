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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BATCHREGISTERTARGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BATCHREGISTERTARGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/BatchTarget.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * BatchRegisterTargets请求参数结构体
                */
                class BatchRegisterTargetsRequest : public AbstractModel
                {
                public:
                    BatchRegisterTargetsRequest();
                    ~BatchRegisterTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡ID
                     * @return LoadBalancerId 负载均衡ID
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡ID
                     * @param LoadBalancerId 负载均衡ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取绑定目标
                     * @return Targets 绑定目标
                     */
                    std::vector<BatchTarget> GetTargets() const;

                    /**
                     * 设置绑定目标
                     * @param Targets 绑定目标
                     */
                    void SetTargets(const std::vector<BatchTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * 负载均衡ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 绑定目标
                     */
                    std::vector<BatchTarget> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BATCHREGISTERTARGETSREQUEST_H_
