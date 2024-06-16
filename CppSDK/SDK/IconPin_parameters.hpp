#pragma once

 

// Package: IconPin

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function IconPin.IconPin_C.OnSetup
// 0x0080 (0x0080 - 0x0000)
struct IconPin_C_OnSetup final
{
public:
	EMapPinType                                   Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7094[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapPinInfo                            CallFunc_GetPinInfo_ReturnValue;                   // 0x0038(0x0040)(ConstParm)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconPin_C_OnSetup) == 0x000008, "Wrong alignment on IconPin_C_OnSetup");
static_assert(sizeof(IconPin_C_OnSetup) == 0x000080, "Wrong size on IconPin_C_OnSetup");
static_assert(offsetof(IconPin_C_OnSetup, Temp_byte_Variable) == 0x000000, "Member 'IconPin_C_OnSetup::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetup, Temp_object_Variable) == 0x000008, "Member 'IconPin_C_OnSetup::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetup, Temp_object_Variable_1) == 0x000010, "Member 'IconPin_C_OnSetup::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetup, Temp_object_Variable_2) == 0x000018, "Member 'IconPin_C_OnSetup::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetup, Temp_object_Variable_3) == 0x000020, "Member 'IconPin_C_OnSetup::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetup, Temp_object_Variable_4) == 0x000028, "Member 'IconPin_C_OnSetup::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetup, Temp_object_Variable_5) == 0x000030, "Member 'IconPin_C_OnSetup::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetup, CallFunc_GetPinInfo_ReturnValue) == 0x000038, "Member 'IconPin_C_OnSetup::CallFunc_GetPinInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetup, K2Node_Select_Default) == 0x000078, "Member 'IconPin_C_OnSetup::K2Node_Select_Default' has a wrong offset!");

// Function IconPin.IconPin_C.OnSetInside
// 0x0034 (0x0034 - 0x0000)
struct IconPin_C_OnSetInside final
{
public:
	bool                                          IsInSide;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7095[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconPin_C_OnSetInside) == 0x000004, "Wrong alignment on IconPin_C_OnSetInside");
static_assert(sizeof(IconPin_C_OnSetInside) == 0x000034, "Wrong size on IconPin_C_OnSetInside");
static_assert(offsetof(IconPin_C_OnSetInside, IsInSide) == 0x000000, "Member 'IconPin_C_OnSetInside::IsInSide' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetInside, Temp_bool_Variable) == 0x000001, "Member 'IconPin_C_OnSetInside::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetInside, Temp_struct_Variable) == 0x000004, "Member 'IconPin_C_OnSetInside::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetInside, Temp_struct_Variable_1) == 0x000014, "Member 'IconPin_C_OnSetInside::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(IconPin_C_OnSetInside, K2Node_Select_Default) == 0x000024, "Member 'IconPin_C_OnSetInside::K2Node_Select_Default' has a wrong offset!");

}

