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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECONFIGRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/NetworkStorageRange.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeConfig返回参数结构体
                */
                class DescribeConfigResponse : public AbstractModel
                {
                public:
                    DescribeConfigResponse();
                    ~DescribeConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取网络带宽硬盘大小的范围信息。
                     * @return NetworkStorageRange 网络带宽硬盘大小的范围信息。
                     */
                    NetworkStorageRange GetNetworkStorageRange() const;

                    /**
                     * 判断参数 NetworkStorageRange 是否已赋值
                     * @return NetworkStorageRange 是否已赋值
                     */
                    bool NetworkStorageRangeHasBeenSet() const;

                    /**
                     * 获取镜像操作系统白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageWhiteSet 镜像操作系统白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetImageWhiteSet() const;

                    /**
                     * 判断参数 ImageWhiteSet 是否已赋值
                     * @return ImageWhiteSet 是否已赋值
                     */
                    bool ImageWhiteSetHasBeenSet() const;

                private:

                    /**
                     * 网络带宽硬盘大小的范围信息。
                     */
                    NetworkStorageRange m_networkStorageRange;
                    bool m_networkStorageRangeHasBeenSet;

                    /**
                     * 镜像操作系统白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_imageWhiteSet;
                    bool m_imageWhiteSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECONFIGRESPONSE_H_
