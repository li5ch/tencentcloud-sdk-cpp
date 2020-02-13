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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_MACHINE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_MACHINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/MachineTag.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 主机列表
                */
                class Machine : public AbstractModel
                {
                public:
                    Machine();
                    ~Machine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机名称。
                     * @return MachineName 主机名称。
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名称。
                     * @param MachineName 主机名称。
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取主机系统。
                     * @return MachineOs 主机系统。
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置主机系统。
                     * @param MachineOs 主机系统。
                     */
                    void SetMachineOs(const std::string& _machineOs);

                    /**
                     * 判断参数 MachineOs 是否已赋值
                     * @return MachineOs 是否已赋值
                     */
                    bool MachineOsHasBeenSet() const;

                    /**
                     * 获取主机状态。
<li>OFFLINE: 离线  </li>
<li>ONLINE: 在线</li>
<li>MACHINE_STOPPED: 已关机</li>
                     * @return MachineStatus 主机状态。
<li>OFFLINE: 离线  </li>
<li>ONLINE: 在线</li>
<li>MACHINE_STOPPED: 已关机</li>
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置主机状态。
<li>OFFLINE: 离线  </li>
<li>ONLINE: 在线</li>
<li>MACHINE_STOPPED: 已关机</li>
                     * @param MachineStatus 主机状态。
<li>OFFLINE: 离线  </li>
<li>ONLINE: 在线</li>
<li>MACHINE_STOPPED: 已关机</li>
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取云镜客户端唯一Uuid，若客户端长时间不在线将返回空字符。
                     * @return Uuid 云镜客户端唯一Uuid，若客户端长时间不在线将返回空字符。
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端唯一Uuid，若客户端长时间不在线将返回空字符。
                     * @param Uuid 云镜客户端唯一Uuid，若客户端长时间不在线将返回空字符。
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取CVM或BM机器唯一Uuid。
                     * @return Quuid CVM或BM机器唯一Uuid。
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置CVM或BM机器唯一Uuid。
                     * @param Quuid CVM或BM机器唯一Uuid。
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取漏洞数。
                     * @return VulNum 漏洞数。
                     */
                    int64_t GetVulNum() const;

                    /**
                     * 设置漏洞数。
                     * @param VulNum 漏洞数。
                     */
                    void SetVulNum(const int64_t& _vulNum);

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取主机IP。
                     * @return MachineIp 主机IP。
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机IP。
                     * @param MachineIp 主机IP。
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取是否是专业版。
<li>true： 是</li>
<li>false：否</li>
                     * @return IsProVersion 是否是专业版。
<li>true： 是</li>
<li>false：否</li>
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置是否是专业版。
<li>true： 是</li>
<li>false：否</li>
                     * @param IsProVersion 是否是专业版。
<li>true： 是</li>
<li>false：否</li>
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取主机外网IP。
                     * @return MachineWanIp 主机外网IP。
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置主机外网IP。
                     * @param MachineWanIp 主机外网IP。
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取主机状态。
<li>POSTPAY: 表示后付费，即按量计费  </li>
<li>PREPAY: 表示预付费，即包年包月</li>
                     * @return PayMode 主机状态。
<li>POSTPAY: 表示后付费，即按量计费  </li>
<li>PREPAY: 表示预付费，即包年包月</li>
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置主机状态。
<li>POSTPAY: 表示后付费，即按量计费  </li>
<li>PREPAY: 表示预付费，即包年包月</li>
                     * @param PayMode 主机状态。
<li>POSTPAY: 表示后付费，即按量计费  </li>
<li>PREPAY: 表示预付费，即包年包月</li>
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取木马数。
                     * @return MalwareNum 木马数。
                     */
                    int64_t GetMalwareNum() const;

                    /**
                     * 设置木马数。
                     * @param MalwareNum 木马数。
                     */
                    void SetMalwareNum(const int64_t& _malwareNum);

                    /**
                     * 判断参数 MalwareNum 是否已赋值
                     * @return MalwareNum 是否已赋值
                     */
                    bool MalwareNumHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return Tag 标签信息
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置标签信息
                     * @param Tag 标签信息
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 主机名称。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 主机系统。
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * 主机状态。
<li>OFFLINE: 离线  </li>
<li>ONLINE: 在线</li>
<li>MACHINE_STOPPED: 已关机</li>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * 云镜客户端唯一Uuid，若客户端长时间不在线将返回空字符。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * CVM或BM机器唯一Uuid。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 漏洞数。
                     */
                    int64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * 主机IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 是否是专业版。
<li>true： 是</li>
<li>false：否</li>
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * 主机外网IP。
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 主机状态。
<li>POSTPAY: 表示后付费，即按量计费  </li>
<li>PREPAY: 表示预付费，即包年包月</li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 木马数。
                     */
                    int64_t m_malwareNum;
                    bool m_malwareNumHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_MACHINE_H_
