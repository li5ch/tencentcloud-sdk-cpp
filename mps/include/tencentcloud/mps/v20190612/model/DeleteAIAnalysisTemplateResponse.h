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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DELETEAIANALYSISTEMPLATERESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DELETEAIANALYSISTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DeleteAIAnalysisTemplate返回参数结构体
                */
                class DeleteAIAnalysisTemplateResponse : public AbstractModel
                {
                public:
                    DeleteAIAnalysisTemplateResponse();
                    ~DeleteAIAnalysisTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                private:

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DELETEAIANALYSISTEMPLATERESPONSE_H_