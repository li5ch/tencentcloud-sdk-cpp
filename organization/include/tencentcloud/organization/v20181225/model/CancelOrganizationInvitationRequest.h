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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_CANCELORGANIZATIONINVITATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_CANCELORGANIZATIONINVITATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * CancelOrganizationInvitation请求参数结构体
                */
                class CancelOrganizationInvitationRequest : public AbstractModel
                {
                public:
                    CancelOrganizationInvitationRequest();
                    ~CancelOrganizationInvitationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取邀请ID
                     * @return Id 邀请ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置邀请ID
                     * @param Id 邀请ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 邀请ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_CANCELORGANIZATIONINVITATIONREQUEST_H_
