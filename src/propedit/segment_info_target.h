/*
   mkvpropedit -- utility for editing properties of existing Matroska files

   Distributed under the GPL v2
   see the file COPYING for details
   or visit http://www.gnu.org/copyleft/gpl.html

   Written by Moritz Bunkus <moritz@bunkus.org>.
*/

#ifndef MTX_PROPEDIT_SEGMENT_INFO_TARGET_H
#define MTX_PROPEDIT_SEGMENT_INFO_TARGET_H

#include "common/common_pch.h"

#include "propedit/change.h"
#include "propedit/target.h"

using namespace libebml;

class segment_info_target_c: public target_c {
public:
  std::vector<change_cptr> m_changes;

public:
  segment_info_target_c();
  virtual ~segment_info_target_c() override;

  virtual void validate() override;

  virtual void add_change(change_c::change_type_e type, const std::string &spec) override;
  virtual void dump_info() const override;

  virtual bool operator ==(target_c const &cmp) const override;

  virtual bool has_changes() const override;

  virtual void execute() override;
};

#endif // MTX_PROPEDIT_SEGMENT_INFO_TARGET_H
