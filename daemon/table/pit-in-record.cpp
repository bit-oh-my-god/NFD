/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/**
 * Copyright (C) 2014 Named Data Networking Project
 * See COPYING for copyright and distribution information.
 */

#include "pit-in-record.hpp"

namespace nfd {
namespace pit {

InRecord::InRecord(shared_ptr<Face> face)
  : FaceRecord(face)
{
}

InRecord::InRecord(const InRecord& other)
  : FaceRecord(other)
{
}

void
InRecord::update(const Interest& interest)
{
  this->FaceRecord::update(interest);
  m_interest = const_cast<Interest&>(interest).shared_from_this();
}

} // namespace pit
} // namespace nfd
