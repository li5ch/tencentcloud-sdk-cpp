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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MOUNTINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 挂载点信息
                */
                class MountInfo : public AbstractModel
                {
                public:
                    MountInfo();
                    ~MountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件系统 ID
                     * @return FileSystemId 文件系统 ID
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID
                     * @param FileSystemId 文件系统 ID
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取挂载点 ID
                     * @return MountTargetId 挂载点 ID
                     */
                    std::string GetMountTargetId() const;

                    /**
                     * 设置挂载点 ID
                     * @param MountTargetId 挂载点 ID
                     */
                    void SetMountTargetId(const std::string& _mountTargetId);

                    /**
                     * 判断参数 MountTargetId 是否已赋值
                     * @return MountTargetId 是否已赋值
                     */
                    bool MountTargetIdHasBeenSet() const;

                    /**
                     * 获取挂载点 IP
                     * @return IpAddress 挂载点 IP
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置挂载点 IP
                     * @param IpAddress 挂载点 IP
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取挂载根目录
                     * @return FSID 挂载根目录
                     */
                    std::string GetFSID() const;

                    /**
                     * 设置挂载根目录
                     * @param FSID 挂载根目录
                     */
                    void SetFSID(const std::string& _fSID);

                    /**
                     * 判断参数 FSID 是否已赋值
                     * @return FSID 是否已赋值
                     */
                    bool FSIDHasBeenSet() const;

                    /**
                     * 获取挂载点状态
                     * @return LifeCycleState 挂载点状态
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 设置挂载点状态
                     * @param LifeCycleState 挂载点状态
                     */
                    void SetLifeCycleState(const std::string& _lifeCycleState);

                    /**
                     * 判断参数 LifeCycleState 是否已赋值
                     * @return LifeCycleState 是否已赋值
                     */
                    bool LifeCycleStateHasBeenSet() const;

                    /**
                     * 获取网络类型
                     * @return NetworkInterface 网络类型
                     */
                    std::string GetNetworkInterface() const;

                    /**
                     * 设置网络类型
                     * @param NetworkInterface 网络类型
                     */
                    void SetNetworkInterface(const std::string& _networkInterface);

                    /**
                     * 判断参数 NetworkInterface 是否已赋值
                     * @return NetworkInterface 是否已赋值
                     */
                    bool NetworkInterfaceHasBeenSet() const;

                    /**
                     * 获取私有网络 ID
                     * @return VpcId 私有网络 ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络 ID
                     * @param VpcId 私有网络 ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络名称
                     * @return VpcName 私有网络名称
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名称
                     * @param VpcName 私有网络名称
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取子网 Id
                     * @return SubnetId 子网 Id
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网 Id
                     * @param SubnetId 子网 Id
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取子网名称
                     * @return SubnetName 子网名称
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称
                     * @param SubnetName 子网名称
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     */
                    bool SubnetNameHasBeenSet() const;

                private:

                    /**
                     * 文件系统 ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 挂载点 ID
                     */
                    std::string m_mountTargetId;
                    bool m_mountTargetIdHasBeenSet;

                    /**
                     * 挂载点 IP
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * 挂载根目录
                     */
                    std::string m_fSID;
                    bool m_fSIDHasBeenSet;

                    /**
                     * 挂载点状态
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * 网络类型
                     */
                    std::string m_networkInterface;
                    bool m_networkInterfaceHasBeenSet;

                    /**
                     * 私有网络 ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 子网 Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名称
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MOUNTINFO_H_
