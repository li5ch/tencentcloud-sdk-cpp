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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSRULEREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateCfsRule请求参数结构体
                */
                class CreateCfsRuleRequest : public AbstractModel
                {
                public:
                    CreateCfsRuleRequest();
                    ~CreateCfsRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取权限组 ID
                     * @return PGroupId 权限组 ID
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置权限组 ID
                     * @param PGroupId 权限组 ID
                     */
                    void SetPGroupId(const std::string& _pGroupId);

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取可以填写单个 IP 或者单个网段，例如 10.1.10.11 或者 10.10.1.0/24。默认来访地址为*表示允许所有。同时需要注意，此处需填写 CVM 的内网 IP。
                     * @return AuthClientIp 可以填写单个 IP 或者单个网段，例如 10.1.10.11 或者 10.10.1.0/24。默认来访地址为*表示允许所有。同时需要注意，此处需填写 CVM 的内网 IP。
                     */
                    std::string GetAuthClientIp() const;

                    /**
                     * 设置可以填写单个 IP 或者单个网段，例如 10.1.10.11 或者 10.10.1.0/24。默认来访地址为*表示允许所有。同时需要注意，此处需填写 CVM 的内网 IP。
                     * @param AuthClientIp 可以填写单个 IP 或者单个网段，例如 10.1.10.11 或者 10.10.1.0/24。默认来访地址为*表示允许所有。同时需要注意，此处需填写 CVM 的内网 IP。
                     */
                    void SetAuthClientIp(const std::string& _authClientIp);

                    /**
                     * 判断参数 AuthClientIp 是否已赋值
                     * @return AuthClientIp 是否已赋值
                     */
                    bool AuthClientIpHasBeenSet() const;

                    /**
                     * 获取规则优先级，参数范围1-100。 其中 1 为最高，100为最低
                     * @return Priority 规则优先级，参数范围1-100。 其中 1 为最高，100为最低
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置规则优先级，参数范围1-100。 其中 1 为最高，100为最低
                     * @param Priority 规则优先级，参数范围1-100。 其中 1 为最高，100为最低
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取读写权限, 值为 RO、RW；其中 RO 为只读，RW 为读写，不填默认为只读
                     * @return RWPermission 读写权限, 值为 RO、RW；其中 RO 为只读，RW 为读写，不填默认为只读
                     */
                    std::string GetRWPermission() const;

                    /**
                     * 设置读写权限, 值为 RO、RW；其中 RO 为只读，RW 为读写，不填默认为只读
                     * @param RWPermission 读写权限, 值为 RO、RW；其中 RO 为只读，RW 为读写，不填默认为只读
                     */
                    void SetRWPermission(const std::string& _rWPermission);

                    /**
                     * 判断参数 RWPermission 是否已赋值
                     * @return RWPermission 是否已赋值
                     */
                    bool RWPermissionHasBeenSet() const;

                    /**
                     * 获取用户权限，值为 all_squash、no_all_squash、root_squash、no_root_squash。其中all_squash为所有访问用户都会被映射为匿名用户或用户组；no_all_squash为访问用户会先与本机用户匹配，匹配失败后再映射为匿名用户或用户组；root_squash为将来访的root用户映射为匿名用户或用户组；no_root_squash为来访的root用户保持root帐号权限。不填默认为root_squash。
                     * @return UserPermission 用户权限，值为 all_squash、no_all_squash、root_squash、no_root_squash。其中all_squash为所有访问用户都会被映射为匿名用户或用户组；no_all_squash为访问用户会先与本机用户匹配，匹配失败后再映射为匿名用户或用户组；root_squash为将来访的root用户映射为匿名用户或用户组；no_root_squash为来访的root用户保持root帐号权限。不填默认为root_squash。
                     */
                    std::string GetUserPermission() const;

                    /**
                     * 设置用户权限，值为 all_squash、no_all_squash、root_squash、no_root_squash。其中all_squash为所有访问用户都会被映射为匿名用户或用户组；no_all_squash为访问用户会先与本机用户匹配，匹配失败后再映射为匿名用户或用户组；root_squash为将来访的root用户映射为匿名用户或用户组；no_root_squash为来访的root用户保持root帐号权限。不填默认为root_squash。
                     * @param UserPermission 用户权限，值为 all_squash、no_all_squash、root_squash、no_root_squash。其中all_squash为所有访问用户都会被映射为匿名用户或用户组；no_all_squash为访问用户会先与本机用户匹配，匹配失败后再映射为匿名用户或用户组；root_squash为将来访的root用户映射为匿名用户或用户组；no_root_squash为来访的root用户保持root帐号权限。不填默认为root_squash。
                     */
                    void SetUserPermission(const std::string& _userPermission);

                    /**
                     * 判断参数 UserPermission 是否已赋值
                     * @return UserPermission 是否已赋值
                     */
                    bool UserPermissionHasBeenSet() const;

                private:

                    /**
                     * 权限组 ID
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * 可以填写单个 IP 或者单个网段，例如 10.1.10.11 或者 10.10.1.0/24。默认来访地址为*表示允许所有。同时需要注意，此处需填写 CVM 的内网 IP。
                     */
                    std::string m_authClientIp;
                    bool m_authClientIpHasBeenSet;

                    /**
                     * 规则优先级，参数范围1-100。 其中 1 为最高，100为最低
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 读写权限, 值为 RO、RW；其中 RO 为只读，RW 为读写，不填默认为只读
                     */
                    std::string m_rWPermission;
                    bool m_rWPermissionHasBeenSet;

                    /**
                     * 用户权限，值为 all_squash、no_all_squash、root_squash、no_root_squash。其中all_squash为所有访问用户都会被映射为匿名用户或用户组；no_all_squash为访问用户会先与本机用户匹配，匹配失败后再映射为匿名用户或用户组；root_squash为将来访的root用户映射为匿名用户或用户组；no_root_squash为来访的root用户保持root帐号权限。不填默认为root_squash。
                     */
                    std::string m_userPermission;
                    bool m_userPermissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSRULEREQUEST_H_
