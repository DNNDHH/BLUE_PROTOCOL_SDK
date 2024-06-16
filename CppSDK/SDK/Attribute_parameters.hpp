#pragma once

 

// Package: Attribute

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Attribute.Attribute_C.SetAttribute
// 0x00B8 (0x00B8 - 0x0000)
struct Attribute_C_SetAttribute final
{
public:
	int32                                         ImagineId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E3E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0008(0x00B0)()
};
static_assert(alignof(Attribute_C_SetAttribute) == 0x000008, "Wrong alignment on Attribute_C_SetAttribute");
static_assert(sizeof(Attribute_C_SetAttribute) == 0x0000B8, "Wrong size on Attribute_C_SetAttribute");
static_assert(offsetof(Attribute_C_SetAttribute, ImagineId) == 0x000000, "Member 'Attribute_C_SetAttribute::ImagineId' has a wrong offset!");
static_assert(offsetof(Attribute_C_SetAttribute, CallFunc_FindImagineMaster_bIsValid) == 0x000004, "Member 'Attribute_C_SetAttribute::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(Attribute_C_SetAttribute, CallFunc_FindImagineMaster_ImagineMaster) == 0x000008, "Member 'Attribute_C_SetAttribute::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");

}

