#pragma once

 

// Package: IconFacility

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function IconFacility.IconFacility_C.OnSetup
// 0x0058 (0x0058 - 0x0000)
struct IconFacility_C_OnSetup final
{
public:
	ESBFacilityType                               CallFunc_GetFacilityType_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFacilityType                               CallFunc_GetFacilityType_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C01[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetNpcFacilityIconTexture_IsFound;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetNpcFacilityIconTexture_IsEnable;       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C02[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C03[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(IconFacility_C_OnSetup) == 0x000008, "Wrong alignment on IconFacility_C_OnSetup");
static_assert(sizeof(IconFacility_C_OnSetup) == 0x000058, "Wrong size on IconFacility_C_OnSetup");
static_assert(offsetof(IconFacility_C_OnSetup, CallFunc_GetFacilityType_ReturnValue) == 0x000000, "Member 'IconFacility_C_OnSetup::CallFunc_GetFacilityType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconFacility_C_OnSetup, CallFunc_GetFacilityType_ReturnValue_1) == 0x000001, "Member 'IconFacility_C_OnSetup::CallFunc_GetFacilityType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconFacility_C_OnSetup, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000008, "Member 'IconFacility_C_OnSetup::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconFacility_C_OnSetup, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'IconFacility_C_OnSetup::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconFacility_C_OnSetup, CallFunc_SetNpcFacilityIconTexture_IsFound) == 0x000028, "Member 'IconFacility_C_OnSetup::CallFunc_SetNpcFacilityIconTexture_IsFound' has a wrong offset!");
static_assert(offsetof(IconFacility_C_OnSetup, CallFunc_SetNpcFacilityIconTexture_IsEnable) == 0x000029, "Member 'IconFacility_C_OnSetup::CallFunc_SetNpcFacilityIconTexture_IsEnable' has a wrong offset!");
static_assert(offsetof(IconFacility_C_OnSetup, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000030, "Member 'IconFacility_C_OnSetup::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconFacility_C_OnSetup, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'IconFacility_C_OnSetup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconFacility_C_OnSetup, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000048, "Member 'IconFacility_C_OnSetup::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

}

