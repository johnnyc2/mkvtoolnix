/*
   mkvmerge -- utility for splicing together matroska files
   from component media subtypes

   Distributed under the GPL
   see the file COPYING for details
   or visit http://www.gnu.org/copyleft/gpl.html

   EBML/XML converter specialization for tags

   Written by Moritz Bunkus <moritz@bunkus.org>.
*/

#ifndef MTX_COMMON_XML_EBML_TAGS_XML_CONVERTER_H
#define MTX_COMMON_XML_EBML_TAGS_XML_CONVERTER_H

#include "common/common_pch.h"

#include "common/xml/ebml_xml_converter.h"

class ebml_tags_xml_converter_c: public ebml_xml_converter_c {
public:
  ebml_tags_xml_converter_c();
  virtual ~ebml_tags_xml_converter_c();

protected:
  void setup_maps();
};

#endif // MTX_COMMON_XML_EBML_TAGS_XML_CONVERTER_H
