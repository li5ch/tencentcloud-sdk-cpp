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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEADDRESSESRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEADDRESSESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * AllocateAddresses返回参数结构体
                */
                class AllocateAddressesResponse : public AbstractModel
                {
                public:
                    AllocateAddressesResponse();
                    ~AllocateAddressesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取申请到的 EIP 的唯一 ID 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressSet 申请到的 EIP 的唯一 ID 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetAddressSet() const;

                    /**
                     * 判断参数 AddressSet 是否已赋值
                     * @return AddressSet 是否已赋值
                     */
                    bool AddressSetHasBeenSet() const;

                    /**
                     * 获取异步任务TaskId。可以使用DescribeTaskResult接口查询任务状态。
                     * @return TaskId 异步任务TaskId。可以使用DescribeTaskResult接口查询任务状态。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 申请到的 EIP 的唯一 ID 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_addressSet;
                    bool m_addressSetHasBeenSet;

                    /**
                     * 异步任务TaskId。可以使用DescribeTaskResult接口查询任务状态。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEADDRESSESRESPONSE_H_
