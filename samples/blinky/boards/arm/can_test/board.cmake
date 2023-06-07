# SPDX-License-Identifier: Apache-2.0

set(OPENOCD_NRF5_SUBFAMILY "nrf52")

board_runner_args(jlink "--device=nrf52" "--speed=4000")
board_runner_args(pyocd "--target=nrf52833" "--frequency=4000000")
board_runner_args(nrfjprog "--softreset") #Here to enable softreset after firmware upload, FOR DEBUGGING ONLY!
include(${ZEPHYR_BASE}/boards/common/nrfjprog.board.cmake)
include(${ZEPHYR_BASE}/boards/common/jlink.board.cmake)
include(${ZEPHYR_BASE}/boards/common/pyocd.board.cmake)
include(${ZEPHYR_BASE}/boards/common/openocd-nrf5.board.cmake)
