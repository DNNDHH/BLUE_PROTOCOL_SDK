#pragma once

 

// Package: ST_PartyListPartyType

#include "Basic.hpp"

#include "E_PartyListPartyType_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_PartyListPartyType.ST_PartyListPartyType
// 0x001C (0x001C - 0x0000)
struct FST_PartyListPartyType final
{
public:
	E_PartyListPartyType                          PartyType_2_A805561A41CD4C04C6C1DE9CD326E1B6;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71CA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   PartyTypeLabel_5_24D25D434CDFBFC9167345A091055F14; // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_8_D8DE8A804BC4E92FEF0888AFB90703E0;          // 0x000C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_PartyListPartyType) == 0x000004, "Wrong alignment on FST_PartyListPartyType");
static_assert(sizeof(FST_PartyListPartyType) == 0x00001C, "Wrong size on FST_PartyListPartyType");
static_assert(offsetof(FST_PartyListPartyType, PartyType_2_A805561A41CD4C04C6C1DE9CD326E1B6) == 0x000000, "Member 'FST_PartyListPartyType::PartyType_2_A805561A41CD4C04C6C1DE9CD326E1B6' has a wrong offset!");
static_assert(offsetof(FST_PartyListPartyType, PartyTypeLabel_5_24D25D434CDFBFC9167345A091055F14) == 0x000004, "Member 'FST_PartyListPartyType::PartyTypeLabel_5_24D25D434CDFBFC9167345A091055F14' has a wrong offset!");
static_assert(offsetof(FST_PartyListPartyType, Color_8_D8DE8A804BC4E92FEF0888AFB90703E0) == 0x00000C, "Member 'FST_PartyListPartyType::Color_8_D8DE8A804BC4E92FEF0888AFB90703E0' has a wrong offset!");

}

