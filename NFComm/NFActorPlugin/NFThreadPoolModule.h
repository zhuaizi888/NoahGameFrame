/*
            This file is part of: 
                NoahFrame
            https://github.com/ketoo/NoahGameFrame

   Copyright 2009 - 2018 NoahFrame(NoahGameFrame)

   File creator: lvsheng.huang
   
   NoahFrame is open-source software and you can redistribute it and/or modify
   it under the terms of the License; besides, anyone who use this file/software must include this copyright announcement.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/


#ifndef NF_THREAD_POOL_MANAGER_H
#define NF_THREAD_POOL_MANAGER_H

#include <map>
#include <string>
#include "NFActor.h"
#include "Theron/Theron.h"
#include "NFComm/NFPluginModule/NFIThreadPoolModule.h"
#include "NFComm/NFCore/NFQueue.hpp"

class NFThreadPoolModule
    : public NFIThreadPoolModule
{
public:
	NFThreadPoolModule(NFIPluginManager* p);
    virtual ~NFThreadPoolModule();

    virtual bool Init();

    virtual bool AfterInit();

    virtual bool BeforeShut();

    virtual bool Shut();

    virtual bool Execute();

private:
	std::list<NF_SHARE_PTR<NFThreadCell>> mThreadPool;
};

#endif
