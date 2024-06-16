#pragma once

 

// Package: UMG_SeasonPassMenuInvalid

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UMG_SeasonPassMenuInvalid.UMG_SeasonPassMenuInvalid_C.ExecuteUbergraph_UMG_SeasonPassMenuInvalid
// 0x0148 (0x0148 - 0x0000)
struct UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D40[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D41[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNextSeasonPoint_ReturnValue;           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_GetNextSeasonDiscount_ReturnValue;        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D42[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00F8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0118(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0130(0x0018)()
};
static_assert(alignof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid");
static_assert(sizeof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid) == 0x000148, "Wrong size on UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, EntryPoint) == 0x000000, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, CallFunc_GetSBPlayerController_ReturnValue) == 0x000030, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000038, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, CallFunc_GetNextSeasonPoint_ReturnValue) == 0x000044, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::CallFunc_GetNextSeasonPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, CallFunc_GetNextSeasonDiscount_ReturnValue) == 0x000088, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::CallFunc_GetNextSeasonDiscount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, K2Node_MakeArray_Array) == 0x000090, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A0, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, K2Node_MakeArray_Array_1) == 0x0000F8, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000108, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000118, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid, CallFunc_Format_ReturnValue_1) == 0x000130, "Member 'UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid::CallFunc_Format_ReturnValue_1' has a wrong offset!");

}

