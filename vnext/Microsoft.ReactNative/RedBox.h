// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once
#include <DevSettings.h>
#include "IRedBoxHandler.h"
#include "ReactHost/React.h"

namespace Mso::React {

std::shared_ptr<IRedBoxHandler> CreateRedBoxHandler(
    winrt::Microsoft::ReactNative::IRedBoxHandler const &redBoxHandler) noexcept;

std::shared_ptr<IRedBoxHandler> CreateDefaultRedBoxHandler(Mso::WeakPtr<IReactHost> &&weakReactHost) noexcept;

} // namespace Mso::React
