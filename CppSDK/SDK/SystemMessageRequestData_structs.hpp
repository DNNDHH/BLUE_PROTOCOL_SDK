#pragma once

 

// Package: SystemMessageRequestData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SystemMessageRequestData.SystemMessageRequestData
// 0x0028 (0x0028 - 0x0000)
struct FSystemMessageRequestData final
{
public:
	class UObject*                                OwnerWorldContext_8_38D8D23D4A25098BB0E1B5A3DDF643C9; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   MessageText_2_5864041846DFB7910C8F5AA286948BD3;    // 0x0008(0x0018)(Edit, BlueprintVisible)
	bool                                          IsLowerPosition_10_3F487D0E441C8FA2E0C049AB62D1718E; // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDoNotSkip_12_943A711042BFBE800D0F06AE400900EC;    // 0x0021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSystemMessageRequestData) == 0x000008, "Wrong alignment on FSystemMessageRequestData");
static_assert(sizeof(FSystemMessageRequestData) == 0x000028, "Wrong size on FSystemMessageRequestData");
static_assert(offsetof(FSystemMessageRequestData, OwnerWorldContext_8_38D8D23D4A25098BB0E1B5A3DDF643C9) == 0x000000, "Member 'FSystemMessageRequestData::OwnerWorldContext_8_38D8D23D4A25098BB0E1B5A3DDF643C9' has a wrong offset!");
static_assert(offsetof(FSystemMessageRequestData, MessageText_2_5864041846DFB7910C8F5AA286948BD3) == 0x000008, "Member 'FSystemMessageRequestData::MessageText_2_5864041846DFB7910C8F5AA286948BD3' has a wrong offset!");
static_assert(offsetof(FSystemMessageRequestData, IsLowerPosition_10_3F487D0E441C8FA2E0C049AB62D1718E) == 0x000020, "Member 'FSystemMessageRequestData::IsLowerPosition_10_3F487D0E441C8FA2E0C049AB62D1718E' has a wrong offset!");
static_assert(offsetof(FSystemMessageRequestData, bDoNotSkip_12_943A711042BFBE800D0F06AE400900EC) == 0x000021, "Member 'FSystemMessageRequestData::bDoNotSkip_12_943A711042BFBE800D0F06AE400900EC' has a wrong offset!");

}

