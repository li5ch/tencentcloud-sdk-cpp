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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYTRADERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYTRADERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyTradeData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 提交贸易材料结果
                */
                class ApplyTradeResult : public AbstractModel
                {
                public:
                    ApplyTradeResult();
                    ~ApplyTradeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误码
                     * @return Code 错误码
                     */
                    std::string GetCode() const;

                    /**
                     * 设置错误码
                     * @param Code 错误码
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取提交贸易材料数据
                     * @return Data 提交贸易材料数据
                     */
                    ApplyTradeData GetData() const;

                    /**
                     * 设置提交贸易材料数据
                     * @param Data 提交贸易材料数据
                     */
                    void SetData(const ApplyTradeData& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 错误码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 提交贸易材料数据
                     */
                    ApplyTradeData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYTRADERESULT_H_
