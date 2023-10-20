#pragma once
#include "cli_ui.define.h"
#include "cli_ui.common.h"
#include "cli_ui.native.h"
#include "cli_ui.base.h"

using namespace cli_def;
using namespace cli_nt;
using namespace cli_base;

namespace cli_ui {
  static cli_cm::EventEmitter globalEventEmitter;

  void init(CliUI_InitOption option);
  void loop();

  void handleKeyEvent(INPUT_RECORD key_event);
  void handleMouseEvent(INPUT_RECORD mouse_event);
}