#pragma once

 

// Package: UMG_SeasonPassInfoIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UMG_SeasonPassInfoIcon.UMG_SeasonPassInfoIcon_C.ExecuteUbergraph_UMG_SeasonPassInfoIcon
// 0x00F0 (0x00F0 - 0x0000)
struct UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D22[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGuidePaidPlanText_ReturnValue;         // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetShopEmancipationRank_ReturnValue;      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D23[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipText_Fixed_C*         CallFunc_Create_ReturnValue;                       // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D24[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
};
static_assert(alignof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon) == 0x000008, "Wrong alignment on UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon");
static_assert(sizeof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon) == 0x0000F0, "Wrong size on UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, EntryPoint) == 0x000000, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000010, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, CallFunc_GetGuidePaidPlanText_ReturnValue) == 0x000018, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::CallFunc_GetGuidePaidPlanText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, CallFunc_GetShopEmancipationRank_ReturnValue) == 0x000028, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::CallFunc_GetShopEmancipationRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, K2Node_MakeArray_Array) == 0x000088, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, CallFunc_GetOwningPlayer_ReturnValue) == 0x000098, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, CallFunc_Create_ReturnValue) == 0x0000A0, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, K2Node_SwitchEnum_CmpSuccess) == 0x0000A8, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000B0, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C0, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon::CallFunc_Format_ReturnValue' has a wrong offset!");

}

