#pragma once
/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "FileItem.h"
#include "GUIDialogYesNo.h"

class CGUIDialogPlayEject : public CGUIDialogYesNo
{
public:
  CGUIDialogPlayEject();
  ~CGUIDialogPlayEject() override;
  bool OnMessage(CGUIMessage& message) override;
  void FrameMove() override;

  static bool ShowAndGetInput(const CFileItem & item, unsigned int uiAutoCloseTime = 0);

protected:
  void OnInitWindow() override;
};
