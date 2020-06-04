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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBELOGSEARCHREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBELOGSEARCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Filter.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeLogSearch请求参数结构体
                */
                class DescribeLogSearchRequest : public AbstractModel
                {
                public:
                    DescribeLogSearchRequest();
                    ~DescribeLogSearchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志开始时间
                     * @return StartTime 日志开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置日志开始时间
                     * @param StartTime 日志开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取日志结束时间
                     * @return EndTime 日志结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置日志结束时间
                     * @param EndTime 日志结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取服务id
                     * @return ServiceId 服务id
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务id
                     * @param ServiceId 服务id
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取精确查询，支持apiid/reqid搜索
                     * @return Filters 精确查询，支持apiid/reqid搜索
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置精确查询，支持apiid/reqid搜索
                     * @param Filters 精确查询，支持apiid/reqid搜索
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取单次要返回的日志条数，单次返回的最大条数为100
                     * @return Limit 单次要返回的日志条数，单次返回的最大条数为100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次要返回的日志条数，单次返回的最大条数为100
                     * @param Limit 单次要返回的日志条数，单次返回的最大条数为100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取根据上次返回的ConText，获取后续的内容，最多可获取10000条
                     * @return ConText 根据上次返回的ConText，获取后续的内容，最多可获取10000条
                     */
                    std::string GetConText() const;

                    /**
                     * 设置根据上次返回的ConText，获取后续的内容，最多可获取10000条
                     * @param ConText 根据上次返回的ConText，获取后续的内容，最多可获取10000条
                     */
                    void SetConText(const std::string& _conText);

                    /**
                     * 判断参数 ConText 是否已赋值
                     * @return ConText 是否已赋值
                     */
                    bool ConTextHasBeenSet() const;

                    /**
                     * 获取按时间排序 asc（升序）或者 desc（降序），默认为 desc
                     * @return Sort 按时间排序 asc（升序）或者 desc（降序），默认为 desc
                     */
                    std::string GetSort() const;

                    /**
                     * 设置按时间排序 asc（升序）或者 desc（降序），默认为 desc
                     * @param Sort 按时间排序 asc（升序）或者 desc（降序），默认为 desc
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取模糊查询，根据关键字检索日志
                     * @return Query 模糊查询，根据关键字检索日志
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置模糊查询，根据关键字检索日志
                     * @param Query 模糊查询，根据关键字检索日志
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * 日志开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 日志结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 服务id
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 精确查询，支持apiid/reqid搜索
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 单次要返回的日志条数，单次返回的最大条数为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 根据上次返回的ConText，获取后续的内容，最多可获取10000条
                     */
                    std::string m_conText;
                    bool m_conTextHasBeenSet;

                    /**
                     * 按时间排序 asc（升序）或者 desc（降序），默认为 desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 模糊查询，根据关键字检索日志
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBELOGSEARCHREQUEST_H_
