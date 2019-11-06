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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RESETWORKFLOWREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RESETWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WorkflowTrigger.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskInput.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ResetWorkflow请求参数结构体
                */
                class ResetWorkflowRequest : public AbstractModel
                {
                public:
                    ResetWorkflowRequest();
                    ~ResetWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作流 ID。
                     * @return WorkflowId 工作流 ID。
                     */
                    int64_t GetWorkflowId() const;

                    /**
                     * 设置工作流 ID。
                     * @param WorkflowId 工作流 ID。
                     */
                    void SetWorkflowId(const int64_t& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取工作流名称，最多128字符。同一个用户该名称唯一。
                     * @return WorkflowName 工作流名称，最多128字符。同一个用户该名称唯一。
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称，最多128字符。同一个用户该名称唯一。
                     * @param WorkflowName 工作流名称，最多128字符。同一个用户该名称唯一。
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取工作流绑定的触发规则，当上传视频命中该规则到该对象时即触发工作流。
                     * @return Trigger 工作流绑定的触发规则，当上传视频命中该规则到该对象时即触发工作流。
                     */
                    WorkflowTrigger GetTrigger() const;

                    /**
                     * 设置工作流绑定的触发规则，当上传视频命中该规则到该对象时即触发工作流。
                     * @param Trigger 工作流绑定的触发规则，当上传视频命中该规则到该对象时即触发工作流。
                     */
                    void SetTrigger(const WorkflowTrigger& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取视频处理的文件输出配置。不填则继承 Trigger 中的存储位置。
                     * @return OutputStorage 视频处理的文件输出配置。不填则继承 Trigger 中的存储位置。
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置视频处理的文件输出配置。不填则继承 Trigger 中的存储位置。
                     * @param OutputStorage 视频处理的文件输出配置。不填则继承 Trigger 中的存储位置。
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取视频处理生成的文件输出的目标目录，如`/movie/201907/`。如果不填，表示与触发文件所在的目录一致，即`{inputDir}`。
                     * @return OutputDir 视频处理生成的文件输出的目标目录，如`/movie/201907/`。如果不填，表示与触发文件所在的目录一致，即`{inputDir}`。
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置视频处理生成的文件输出的目标目录，如`/movie/201907/`。如果不填，表示与触发文件所在的目录一致，即`{inputDir}`。
                     * @param OutputDir 视频处理生成的文件输出的目标目录，如`/movie/201907/`。如果不填，表示与触发文件所在的目录一致，即`{inputDir}`。
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取视频处理类型任务参数。
                     * @return MediaProcessTask 视频处理类型任务参数。
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置视频处理类型任务参数。
                     * @param MediaProcessTask 视频处理类型任务参数。
                     */
                    void SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask);

                    /**
                     * 判断参数 MediaProcessTask 是否已赋值
                     * @return MediaProcessTask 是否已赋值
                     */
                    bool MediaProcessTaskHasBeenSet() const;

                    /**
                     * 获取工作流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @return TaskPriority 工作流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     */
                    int64_t GetTaskPriority() const;

                    /**
                     * 设置工作流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @param TaskPriority 工作流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     */
                    void SetTaskPriority(const int64_t& _taskPriority);

                    /**
                     * 判断参数 TaskPriority 是否已赋值
                     * @return TaskPriority 是否已赋值
                     */
                    bool TaskPriorityHasBeenSet() const;

                    /**
                     * 获取任务的事件通知信息，不填代表不获取事件通知。
                     * @return TaskNotifyConfig 任务的事件通知信息，不填代表不获取事件通知。
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置任务的事件通知信息，不填代表不获取事件通知。
                     * @param TaskNotifyConfig 任务的事件通知信息，不填代表不获取事件通知。
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                private:

                    /**
                     * 工作流 ID。
                     */
                    int64_t m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流名称，最多128字符。同一个用户该名称唯一。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 工作流绑定的触发规则，当上传视频命中该规则到该对象时即触发工作流。
                     */
                    WorkflowTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * 视频处理的文件输出配置。不填则继承 Trigger 中的存储位置。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 视频处理生成的文件输出的目标目录，如`/movie/201907/`。如果不填，表示与触发文件所在的目录一致，即`{inputDir}`。
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * 视频处理类型任务参数。
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * 工作流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     */
                    int64_t m_taskPriority;
                    bool m_taskPriorityHasBeenSet;

                    /**
                     * 任务的事件通知信息，不填代表不获取事件通知。
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RESETWORKFLOWREQUEST_H_
