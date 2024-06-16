#pragma once

 

// Package: CmnBonusSmall

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CmnBonusSmall.CmnBonusSmall_C.ExecuteUbergraph_CmnBonusSmall
// 0x0098 (0x0098 - 0x0000)
struct CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D91[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D92[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D93[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   K2Node_CustomEvent_MasterImagineRecepi;            // 0x0028(0x0038)(ConstParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D94[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBRewardBoostTooltipData>      CallFunc_GetImagineCraftTooltipText_TooltipDataList; // 0x0068(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsEffectiveImagineCraft_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D95[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_RewardBoostTooltip_C*              CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall) == 0x000008, "Wrong alignment on CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall");
static_assert(sizeof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall) == 0x000098, "Wrong size on CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, EntryPoint) == 0x000000, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, Temp_bool_Variable) == 0x000010, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000018, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, CallFunc_MakeLiteralByte_ReturnValue) == 0x000020, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, K2Node_CustomEvent_MasterImagineRecepi) == 0x000028, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::K2Node_CustomEvent_MasterImagineRecepi' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000060, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, CallFunc_GetImagineCraftTooltipText_TooltipDataList) == 0x000068, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::CallFunc_GetImagineCraftTooltipText_TooltipDataList' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, CallFunc_IsEffectiveImagineCraft_ReturnValue) == 0x000078, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::CallFunc_IsEffectiveImagineCraft_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, CallFunc_GetOwningPlayer_ReturnValue) == 0x000080, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, CallFunc_Create_ReturnValue) == 0x000088, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, K2Node_Select_Default) == 0x000090, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnBonusSmall.CmnBonusSmall_C.UpdateVisibilityByMasterImagineRecepi
// 0x0038 (0x0038 - 0x0000)
struct CmnBonusSmall_C_UpdateVisibilityByMasterImagineRecepi final
{
public:
	struct FMasterImagineRecepi                   MasterImagineRecepi;                               // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CmnBonusSmall_C_UpdateVisibilityByMasterImagineRecepi) == 0x000008, "Wrong alignment on CmnBonusSmall_C_UpdateVisibilityByMasterImagineRecepi");
static_assert(sizeof(CmnBonusSmall_C_UpdateVisibilityByMasterImagineRecepi) == 0x000038, "Wrong size on CmnBonusSmall_C_UpdateVisibilityByMasterImagineRecepi");
static_assert(offsetof(CmnBonusSmall_C_UpdateVisibilityByMasterImagineRecepi, MasterImagineRecepi) == 0x000000, "Member 'CmnBonusSmall_C_UpdateVisibilityByMasterImagineRecepi::MasterImagineRecepi' has a wrong offset!");

}

