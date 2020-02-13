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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_VERIFYRESULTREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_VERIFYRESULTREQUEST_H_

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
                * VerifyResult请求参数结构体
                */
                class VerifyResultRequest : public AbstractModel
                {
                public:
                    VerifyResultRequest();
                    ~VerifyResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的拨测任务的结果id
                     * @return ResultId 要查询的拨测任务的结果id
                     */
                    uint64_t GetResultId() const;

                    /**
                     * 设置要查询的拨测任务的结果id
                     * @param ResultId 要查询的拨测任务的结果id
                     */
                    void SetResultId(const uint64_t& _resultId);

                    /**
                     * 判断参数 ResultId 是否已赋值
                     * @return ResultId 是否已赋值
                     */
                    bool ResultIdHasBeenSet() const;

                private:

                    /**
                     * 要查询的拨测任务的结果id
                     */
                    uint64_t m_resultId;
                    bool m_resultIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_VERIFYRESULTREQUEST_H_
