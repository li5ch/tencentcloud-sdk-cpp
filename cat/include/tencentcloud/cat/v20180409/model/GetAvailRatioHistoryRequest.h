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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_GETAVAILRATIOHISTORYREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_GETAVAILRATIOHISTORYREQUEST_H_

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
                * GetAvailRatioHistory请求参数结构体
                */
                class GetAvailRatioHistoryRequest : public AbstractModel
                {
                public:
                    GetAvailRatioHistoryRequest();
                    ~GetAvailRatioHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取拨测任务Id
                     * @return TaskId 拨测任务Id
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置拨测任务Id
                     * @param TaskId 拨测任务Id
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取具体时间点
                     * @return TimeStamp 具体时间点
                     */
                    std::string GetTimeStamp() const;

                    /**
                     * 设置具体时间点
                     * @param TimeStamp 具体时间点
                     */
                    void SetTimeStamp(const std::string& _timeStamp);

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     */
                    bool TimeStampHasBeenSet() const;

                private:

                    /**
                     * 拨测任务Id
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 具体时间点
                     */
                    std::string m_timeStamp;
                    bool m_timeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_GETAVAILRATIOHISTORYREQUEST_H_
