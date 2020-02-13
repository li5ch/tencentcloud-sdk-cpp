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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNOCRTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNOCRTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaContentReviewOcrTextSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Ocr 文字涉黄信息
                */
                class AiReviewPornOcrTaskOutput : public AbstractModel
                {
                public:
                    AiReviewPornOcrTaskOutput();
                    ~AiReviewPornOcrTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Ocr 文字涉黄评分，分值为0到100。
                     * @return Confidence Ocr 文字涉黄评分，分值为0到100。
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Ocr 文字涉黄评分，分值为0到100。
                     * @param Confidence Ocr 文字涉黄评分，分值为0到100。
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Ocr 文字涉黄结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * @return Suggestion Ocr 文字涉黄结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Ocr 文字涉黄结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * @param Suggestion Ocr 文字涉黄结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Ocr 文字有涉黄嫌疑的视频片段列表。
                     * @return SegmentSet Ocr 文字有涉黄嫌疑的视频片段列表。
                     */
                    std::vector<MediaContentReviewOcrTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Ocr 文字有涉黄嫌疑的视频片段列表。
                     * @param SegmentSet Ocr 文字有涉黄嫌疑的视频片段列表。
                     */
                    void SetSegmentSet(const std::vector<MediaContentReviewOcrTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * Ocr 文字涉黄评分，分值为0到100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Ocr 文字涉黄结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Ocr 文字有涉黄嫌疑的视频片段列表。
                     */
                    std::vector<MediaContentReviewOcrTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNOCRTASKOUTPUT_H_
