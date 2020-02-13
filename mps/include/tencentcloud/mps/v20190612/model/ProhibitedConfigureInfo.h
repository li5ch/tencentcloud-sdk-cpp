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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROHIBITEDCONFIGUREINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROHIBITEDCONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ProhibitedAsrReviewTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/ProhibitedOcrReviewTemplateInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 违禁任务控制参数
                */
                class ProhibitedConfigureInfo : public AbstractModel
                {
                public:
                    ProhibitedConfigureInfo();
                    ~ProhibitedConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音违禁控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrReviewInfo 语音违禁控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProhibitedAsrReviewTemplateInfo GetAsrReviewInfo() const;

                    /**
                     * 设置语音违禁控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AsrReviewInfo 语音违禁控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAsrReviewInfo(const ProhibitedAsrReviewTemplateInfo& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取文本违禁控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrReviewInfo 文本违禁控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProhibitedOcrReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置文本违禁控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrReviewInfo 文本违禁控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrReviewInfo(const ProhibitedOcrReviewTemplateInfo& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * 语音违禁控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProhibitedAsrReviewTemplateInfo m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * 文本违禁控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProhibitedOcrReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROHIBITEDCONFIGUREINFO_H_
