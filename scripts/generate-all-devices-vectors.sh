#!/usr/bin/env bash

# -----------------------------------------------------------------------------
# Safety settings (see https://gist.github.com/ilg-ul/383869cbb01f61a51c4d).

if [[ ! -z ${DEBUG} ]]
then
  set ${DEBUG} # Activate the expand mode if DEBUG is anything but empty.
else
  DEBUG=""
fi

set -o errexit # Exit if command failed.
set -o pipefail # Exit if pipe failed.
set -o nounset # Exit if variable not set.

# Remove the initial space and instead use '\n'.
IFS=$'\n\t'

# -----------------------------------------------------------------------------
# Identify the script location, to reach, for example, the helper scripts.

script_path="$0"
if [[ "${script_path}" != /* ]]
then
  # Make relative path absolute.
  script_path="$(pwd)/$0"
fi

script_name="$(basename "${script_path}")"

script_folder_path="$(dirname "${script_path}")"
script_folder_name="$(basename "${script_folder_path}")"

project_folder_path="$(dirname "${script_folder_path}")"

# =============================================================================

# Script to generate the vector_*.c files from the CubeMX packages

src_folder_path="${project_folder_path}/src"

mkdir -pv "${src_folder_path}/vectors"

# STM32Cube_FW_H7_V1.11.0
family="H7"
version="1.11.0"
bash "${project_folder_path}/xpacks/@micro-os-plus/build-helper/dev-scripts/generate-vectors-from-arm-startup.sh" \
  "${HOME}/STM32Cube/Repository/STM32Cube_FW_${family}_V${version}/Drivers/CMSIS/Device/ST/STM32${family}xx/Source/Templates/arm" \
  "${src_folder_path}/vectors"

echo
echo "Done."
