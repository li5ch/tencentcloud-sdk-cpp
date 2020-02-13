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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_MINORSVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_MINORSVERIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * MinorsVerification返回参数结构体
                */
                class MinorsVerificationResponse : public AbstractModel
                {
                public:
                    MinorsVerificationResponse();
                    ~MinorsVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取结果码，收费情况如下。
收费结果码：
0: 成年
-1: 未成年
-2: 手机号未实名
-3: 姓名和身份证号不一致

不收费结果码：
-4: 非法身份证号（长度、校验位等不正确）
-5: 非法姓名（长度、格式等不正确）
-6: 数据源服务异常
-7: 数据源中无此身份证记录
-8: 公安比对系统升级中，请稍后再试
                     * @return Result 结果码，收费情况如下。
收费结果码：
0: 成年
-1: 未成年
-2: 手机号未实名
-3: 姓名和身份证号不一致

不收费结果码：
-4: 非法身份证号（长度、校验位等不正确）
-5: 非法姓名（长度、格式等不正确）
-6: 数据源服务异常
-7: 数据源中无此身份证记录
-8: 公安比对系统升级中，请稍后再试
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取业务结果描述。
                     * @return Description 业务结果描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取当结果码为0或者-1时，该字段的值为年龄区间。
格式为[a,b)，表示年龄在a岁以上（包括a岁），b岁以下（不包括b岁）。若b为+时表示没有上限。
                     * @return AgeRange 当结果码为0或者-1时，该字段的值为年龄区间。
格式为[a,b)，表示年龄在a岁以上（包括a岁），b岁以下（不包括b岁）。若b为+时表示没有上限。
                     */
                    std::string GetAgeRange() const;

                    /**
                     * 判断参数 AgeRange 是否已赋值
                     * @return AgeRange 是否已赋值
                     */
                    bool AgeRangeHasBeenSet() const;

                private:

                    /**
                     * 结果码，收费情况如下。
收费结果码：
0: 成年
-1: 未成年
-2: 手机号未实名
-3: 姓名和身份证号不一致

不收费结果码：
-4: 非法身份证号（长度、校验位等不正确）
-5: 非法姓名（长度、格式等不正确）
-6: 数据源服务异常
-7: 数据源中无此身份证记录
-8: 公安比对系统升级中，请稍后再试
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 业务结果描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 当结果码为0或者-1时，该字段的值为年龄区间。
格式为[a,b)，表示年龄在a岁以上（包括a岁），b岁以下（不包括b岁）。若b为+时表示没有上限。
                     */
                    std::string m_ageRange;
                    bool m_ageRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MINORSVERIFICATIONRESPONSE_H_
