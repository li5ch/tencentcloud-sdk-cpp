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

#include <tencentcloud/ame/v20190916/AmeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ame::V20190916;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-16";
    const string ENDPOINT = "ame.tencentcloudapi.com";
}

AmeClient::AmeClient(const Credential &credential, const string &region) :
    AmeClient(credential, region, ClientProfile())
{
}

AmeClient::AmeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AmeClient::DescribeItemByIdOutcome AmeClient::DescribeItemById(const DescribeItemByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeItemById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeItemByIdResponse rsp = DescribeItemByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeItemByIdOutcome(rsp);
        else
            return DescribeItemByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeItemByIdOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeItemByIdAsync(const DescribeItemByIdRequest& request, const DescribeItemByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeItemById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeItemByIdOutcomeCallable AmeClient::DescribeItemByIdCallable(const DescribeItemByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeItemByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeItemById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeItemsOutcome AmeClient::DescribeItems(const DescribeItemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeItemsResponse rsp = DescribeItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeItemsOutcome(rsp);
        else
            return DescribeItemsOutcome(o.GetError());
    }
    else
    {
        return DescribeItemsOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeItemsAsync(const DescribeItemsRequest& request, const DescribeItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeItems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeItemsOutcomeCallable AmeClient::DescribeItemsCallable(const DescribeItemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeItemsOutcome()>>(
        [this, request]()
        {
            return this->DescribeItems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeLyricOutcome AmeClient::DescribeLyric(const DescribeLyricRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLyric");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLyricResponse rsp = DescribeLyricResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLyricOutcome(rsp);
        else
            return DescribeLyricOutcome(o.GetError());
    }
    else
    {
        return DescribeLyricOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeLyricAsync(const DescribeLyricRequest& request, const DescribeLyricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLyric(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeLyricOutcomeCallable AmeClient::DescribeLyricCallable(const DescribeLyricRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLyricOutcome()>>(
        [this, request]()
        {
            return this->DescribeLyric(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeMusicOutcome AmeClient::DescribeMusic(const DescribeMusicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMusic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMusicResponse rsp = DescribeMusicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMusicOutcome(rsp);
        else
            return DescribeMusicOutcome(o.GetError());
    }
    else
    {
        return DescribeMusicOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeMusicAsync(const DescribeMusicRequest& request, const DescribeMusicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMusic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeMusicOutcomeCallable AmeClient::DescribeMusicCallable(const DescribeMusicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMusicOutcome()>>(
        [this, request]()
        {
            return this->DescribeMusic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeStationsOutcome AmeClient::DescribeStations(const DescribeStationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStationsResponse rsp = DescribeStationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStationsOutcome(rsp);
        else
            return DescribeStationsOutcome(o.GetError());
    }
    else
    {
        return DescribeStationsOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeStationsAsync(const DescribeStationsRequest& request, const DescribeStationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeStationsOutcomeCallable AmeClient::DescribeStationsCallable(const DescribeStationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::ReportDataOutcome AmeClient::ReportData(const ReportDataRequest &request)
{
    auto outcome = MakeRequest(request, "ReportData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportDataResponse rsp = ReportDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportDataOutcome(rsp);
        else
            return ReportDataOutcome(o.GetError());
    }
    else
    {
        return ReportDataOutcome(outcome.GetError());
    }
}

void AmeClient::ReportDataAsync(const ReportDataRequest& request, const ReportDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::ReportDataOutcomeCallable AmeClient::ReportDataCallable(const ReportDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportDataOutcome()>>(
        [this, request]()
        {
            return this->ReportData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

