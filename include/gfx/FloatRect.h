/*
 * Copyright 2013 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

namespace android {
namespace gfx {

class FloatRect {
  public:
    FloatRect() = default;
    constexpr FloatRect(float _left, float _top, float _right, float _bottom)
      : left(_left), top(_top), right(_right), bottom(_bottom) {}

    float getWidth() const { return right - left; }
    float getHeight() const { return bottom - top; }

    float left = 0.0f;
    float top = 0.0f;
    float right = 0.0f;
    float bottom = 0.0f;
};

inline bool operator==(const FloatRect& a, const FloatRect& b) {
    return a.left == b.left && a.top == b.top && a.right == b.right && a.bottom == b.bottom;
}

}  // namespace gfx
}  // namespace android