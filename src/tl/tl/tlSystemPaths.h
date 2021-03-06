
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2017 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#ifndef HDR_tlSystemPaths
#define HDR_tlSystemPaths

#include "tlCommon.h"

#include <string>
#include <vector>

namespace tl
{

/**
 *  @brief Gets the application data path 
 *  The application data path is the path where the application stores it's
 *  data for each user.
 */
TL_PUBLIC std::string get_appdata_path ();

/**
 *  @brief Gets the installation path
 *  The installation path is the path where the current application is installed.
 */
TL_PUBLIC std::string get_inst_path ();

/**
 *  @brief Gets the KLayout path 
 *  This is a path (in the sense of a search path - i.e. multiple paths)
 *  where KLayout (and derived applications) looks for configuration files.
 */
TL_PUBLIC std::vector<std::string> get_klayout_path ();

/**
 *  @brief Sets the KLayout path
 *  This method is mainly used for test purposes. It will force the application
 *  is use a specific KLAYOUT_PATH. Use reset_klayout_path to restore the
 *  default behavior.
 */
TL_PUBLIC void set_klayout_path (const std::vector<std::string> &path);

/**
 *  @brief Resets the KLayout path
 *  See "set_klayout_path" for a description.
 */
TL_PUBLIC void reset_klayout_path ();

/**
 *  @brief Gets the package manager URL
 */
TL_PUBLIC std::string salt_mine_url ();

}

#endif
