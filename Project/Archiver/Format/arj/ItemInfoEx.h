// Archive/arj/ItemInfoEx.h

#pragma once

#ifndef __ARCHIVE_ARJ_ITEMINFOEX_H
#define __ARCHIVE_ARJ_ITEMINFOEX_H

#include "Common/Vector.h"

#include "Header.h"
#include "ItemInfo.h"

namespace NArchive {
namespace Narj {
  
class CItemInfoEx: public CItemInfo
{
public:
  UINT64 DataPosition;
  
  /*
  UINT32 GetLocalFullSize()  const 
    { return FileHeaderWithNameSize + LocalExtraSize + PackSize + 
    (HasDescriptor() ? sizeof(NFileHeader::CDataDescriptor) : 0); };
  
  UINT32 GetCentralExtraPlusCommentSize()  const 
    { return CentralExtraSize + CommentSize; };
  
  UINT64 GetCommentPosition() const 
    { return CentralExtraPosition + CentralExtraSize; };
  */
  
  /*
  bool IsCommented() const 
    { return CommentSize != 0; };
  */
  
  /*
  UINT64 GetLocalExtraPosition() const 
    { return LocalHeaderPosition + FileHeaderWithNameSize; };
  
  UINT64 GetDataPosition() const 
    { return GetLocalExtraPosition() + LocalExtraSize; };
  */
};

typedef CObjectVector<CItemInfoEx> CItemInfoExVector;

}}

#endif


