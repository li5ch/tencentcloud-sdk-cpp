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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * DeleteSecret请求参数结构体
                */
                class DeleteSecretRequest : public AbstractModel
                {
                public:
                    DeleteSecretRequest();
                    ~DeleteSecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定需要删除的凭据名称。
                     * @return SecretName 指定需要删除的凭据名称。
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置指定需要删除的凭据名称。
                     * @param SecretName 指定需要删除的凭据名称。
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取指定计划删除日期，单位（天），0（默认）表示立即删除， 1-30 表示预留的天数，超出该日期之后彻底删除。
                     * @return RecoveryWindowInDays 指定计划删除日期，单位（天），0（默认）表示立即删除， 1-30 表示预留的天数，超出该日期之后彻底删除。
                     */
                    uint64_t GetRecoveryWindowInDays() const;

                    /**
                     * 设置指定计划删除日期，单位（天），0（默认）表示立即删除， 1-30 表示预留的天数，超出该日期之后彻底删除。
                     * @param RecoveryWindowInDays 指定计划删除日期，单位（天），0（默认）表示立即删除， 1-30 表示预留的天数，超出该日期之后彻底删除。
                     */
                    void SetRecoveryWindowInDays(const uint64_t& _recoveryWindowInDays);

                    /**
                     * 判断参数 RecoveryWindowInDays 是否已赋值
                     * @return RecoveryWindowInDays 是否已赋值
                     */
                    bool RecoveryWindowInDaysHasBeenSet() const;

                private:

                    /**
                     * 指定需要删除的凭据名称。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 指定计划删除日期，单位（天），0（默认）表示立即删除， 1-30 表示预留的天数，超出该日期之后彻底删除。
                     */
                    uint64_t m_recoveryWindowInDays;
                    bool m_recoveryWindowInDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETREQUEST_H_
