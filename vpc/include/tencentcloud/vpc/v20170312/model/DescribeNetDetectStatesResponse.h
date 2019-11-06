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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETDETECTSTATESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETDETECTSTATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NetDetectState.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeNetDetectStates返回参数结构体
                */
                class DescribeNetDetectStatesResponse : public AbstractModel
                {
                public:
                    DescribeNetDetectStatesResponse();
                    ~DescribeNetDetectStatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取符合条件的网络探测验证结果对象数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetDetectStateSet 符合条件的网络探测验证结果对象数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NetDetectState> GetNetDetectStateSet() const;

                    /**
                     * 判断参数 NetDetectStateSet 是否已赋值
                     * @return NetDetectStateSet 是否已赋值
                     */
                    bool NetDetectStateSetHasBeenSet() const;

                    /**
                     * 获取符合条件的网络探测验证结果对象数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 符合条件的网络探测验证结果对象数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 符合条件的网络探测验证结果对象数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NetDetectState> m_netDetectStateSet;
                    bool m_netDetectStateSetHasBeenSet;

                    /**
                     * 符合条件的网络探测验证结果对象数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETDETECTSTATESRESPONSE_H_
