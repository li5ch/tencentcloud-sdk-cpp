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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEMONITORTOOKDISTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEMONITORTOOKDISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceMonitorTookDist请求参数结构体
                */
                class DescribeInstanceMonitorTookDistRequest : public AbstractModel
                {
                public:
                    DescribeInstanceMonitorTookDistRequest();
                    ~DescribeInstanceMonitorTookDistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param InstanceId 实例Id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取时间；例如："20190219"
                     * @return Date 时间；例如："20190219"
                     */
                    std::string GetDate() const;

                    /**
                     * 设置时间；例如："20190219"
                     * @param Date 时间；例如："20190219"
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取请求类型：1——string类型，2——所有类型
                     * @return SpanType 请求类型：1——string类型，2——所有类型
                     */
                    int64_t GetSpanType() const;

                    /**
                     * 设置请求类型：1——string类型，2——所有类型
                     * @param SpanType 请求类型：1——string类型，2——所有类型
                     */
                    void SetSpanType(const int64_t& _spanType);

                    /**
                     * 判断参数 SpanType 是否已赋值
                     * @return SpanType 是否已赋值
                     */
                    bool SpanTypeHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 时间；例如："20190219"
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 请求类型：1——string类型，2——所有类型
                     */
                    int64_t m_spanType;
                    bool m_spanTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEMONITORTOOKDISTREQUEST_H_
