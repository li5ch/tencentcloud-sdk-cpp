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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBETASKDETAILREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBETASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeTaskDetail请求参数结构体
                */
                class DescribeTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeTaskDetailRequest();
                    ~DescribeTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取拨测任务id 数组
                     * @return TaskIds 拨测任务id 数组
                     */
                    std::vector<uint64_t> GetTaskIds() const;

                    /**
                     * 设置拨测任务id 数组
                     * @param TaskIds 拨测任务id 数组
                     */
                    void SetTaskIds(const std::vector<uint64_t>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     */
                    bool TaskIdsHasBeenSet() const;

                private:

                    /**
                     * 拨测任务id 数组
                     */
                    std::vector<uint64_t> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBETASKDETAILREQUEST_H_
