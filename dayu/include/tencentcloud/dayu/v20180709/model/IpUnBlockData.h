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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_IPUNBLOCKDATA_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_IPUNBLOCKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * IP解封记录
                */
                class IpUnBlockData : public AbstractModel
                {
                public:
                    IpUnBlockData();
                    ~IpUnBlockData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP
                     * @return Ip IP
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP
                     * @param Ip IP
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取封堵时间
                     * @return BlockTime 封堵时间
                     */
                    std::string GetBlockTime() const;

                    /**
                     * 设置封堵时间
                     * @param BlockTime 封堵时间
                     */
                    void SetBlockTime(const std::string& _blockTime);

                    /**
                     * 判断参数 BlockTime 是否已赋值
                     * @return BlockTime 是否已赋值
                     */
                    bool BlockTimeHasBeenSet() const;

                    /**
                     * 获取解封时间（实际解封时间）
                     * @return UnBlockTime 解封时间（实际解封时间）
                     */
                    std::string GetUnBlockTime() const;

                    /**
                     * 设置解封时间（实际解封时间）
                     * @param UnBlockTime 解封时间（实际解封时间）
                     */
                    void SetUnBlockTime(const std::string& _unBlockTime);

                    /**
                     * 判断参数 UnBlockTime 是否已赋值
                     * @return UnBlockTime 是否已赋值
                     */
                    bool UnBlockTimeHasBeenSet() const;

                    /**
                     * 获取解封类型（user：自助解封；auto：自动解封； update：升级解封；bind：绑定高防包解封）
                     * @return ActionType 解封类型（user：自助解封；auto：自动解封； update：升级解封；bind：绑定高防包解封）
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置解封类型（user：自助解封；auto：自动解封； update：升级解封；bind：绑定高防包解封）
                     * @param ActionType 解封类型（user：自助解封；auto：自动解封； update：升级解封；bind：绑定高防包解封）
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     */
                    bool ActionTypeHasBeenSet() const;

                private:

                    /**
                     * IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 封堵时间
                     */
                    std::string m_blockTime;
                    bool m_blockTimeHasBeenSet;

                    /**
                     * 解封时间（实际解封时间）
                     */
                    std::string m_unBlockTime;
                    bool m_unBlockTimeHasBeenSet;

                    /**
                     * 解封类型（user：自助解封；auto：自动解封； update：升级解封；bind：绑定高防包解封）
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_IPUNBLOCKDATA_H_
