/*
 * Copyright (c) 2023, Srikavin Ramkumar <me@srikavin.me>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Optional.h>
#include <AK/String.h>

namespace Web::HTML {

// https://html.spec.whatwg.org/multipage/urls-and-fetching.html#cors-settings-attribute
enum class CORSSettingAttribute {
    NoCORS,
    Anonymous,
    UseCredentials
};

[[nodiscard]] CORSSettingAttribute cors_setting_attribute_from_keyword(Optional<String> const& keyword);

}
