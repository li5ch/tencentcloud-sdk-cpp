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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SEO_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SEO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * SEO 搜索引擎优化配置，默认为关闭状态
                */
                class Seo : public AbstractModel
                {
                public:
                    Seo();
                    ~Seo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SEO 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch SEO 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置SEO 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Switch SEO 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * SEO 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SEO_H_
