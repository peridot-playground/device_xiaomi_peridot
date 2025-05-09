/*
 * Copyright (C) 2022 The Android Open Source Project
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

#include "FingerprintEngineSide.h"

#include <android-base/logging.h>

#include <fingerprint.sysprop.h>

#include "util/CancellationSignal.h"
#include "util/Util.h"

using namespace ::android::fingerprint::peridot;

namespace aidl::android::hardware::biometrics::fingerprint {

FingerprintEngineSide::FingerprintEngineSide() : FingerprintEngine() {}

SensorLocation FingerprintEngineSide::defaultSensorLocation() {
    return SensorLocation{.sensorLocationX = defaultSensorLocationX,
                          .sensorLocationY = defaultSensorLocationY,
                          .sensorRadius = defaultSensorRadius};
}
}  // namespace aidl::android::hardware::biometrics::fingerprint
