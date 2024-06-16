#pragma once

 

// Package: UMG_SeasonPassMenuReward

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.OnClickRewardItemIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuReward_C_OnClickRewardItemIcon__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        RewardItemData;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_OnClickRewardItemIcon__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuReward_C_OnClickRewardItemIcon__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_OnClickRewardItemIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuReward_C_OnClickRewardItemIcon__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_OnClickRewardItemIcon__DelegateSignature, RewardItemData) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_OnClickRewardItemIcon__DelegateSignature::RewardItemData' has a wrong offset!");

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.ExecuteUbergraph_UMG_SeasonPassMenuReward
// 0x0210 (0x0210 - 0x0000)
struct UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D2A[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapLevelInfo                        CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo;   // 0x0010(0x0080)()
	bool                                          CallFunc_GetCurrentMapLevelInfo_ReturnValue;       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D2B[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_GetCurrentMasterSeason_bIsExists;      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D2C[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterSeason                        CallFunc_BP_GetCurrentMasterSeason_ReturnValue;    // 0x00B0(0x0048)(ConstParm, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D2D[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D2E[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_1;     // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRank_ReturnValue;                      // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D2F[0x2];                                     // 0x0126(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_2;     // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSeasonProgressValid_ReturnValue;        // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidDiscount_ReturnValue;              // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D30[0x1];                                     // 0x013B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentPaidPlanIndex_ReturnValue;      // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPaidPlanSubscribed_ReturnValue;         // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D31[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardData*            K2Node_CustomEvent_Data;                           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSeasonPassMenuRewardItemData*        K2Node_CustomEvent_RewardItemData;                 // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSeasonPassMenuRewardItemData*        K2Node_ComponentBoundEvent_RewardItemData;         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_CurrentOffset;          // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Rank;                           // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_AnimateScroll;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D32[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D33[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D34[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_SeasonPassMenuRewardRankWrap_C*    CallFunc_Array_Get_Item;                           // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuRewardRankWrap_C*    CallFunc_Array_Get_Item_1;                         // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0196(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0197(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x01A0(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAchievedRank_ReturnValue;              // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x01CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x01CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D35[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuRewardRank_C*        K2Node_DynamicCast_AsUMG_Season_Pass_Menu_Reward_Rank; // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D36[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x01FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D37[0x2];                                     // 0x01FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward) == 0x000010, "Wrong alignment on UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward) == 0x000210, "Wrong size on UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, EntryPoint) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo) == 0x000010, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetCurrentMapLevelInfo_ReturnValue) == 0x000090, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetCurrentMapLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetSBPlayerController_ReturnValue) == 0x000098, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x0000A0, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_SwitchEnum_CmpSuccess) == 0x0000A8, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_BP_GetCurrentMasterSeason_bIsExists) == 0x0000A9, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_BP_GetCurrentMasterSeason_bIsExists' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_BP_GetCurrentMasterSeason_ReturnValue) == 0x0000B0, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_BP_GetCurrentMasterSeason_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, Temp_bool_Variable) == 0x0000F8, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000100, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, Temp_int_Loop_Counter_Variable) == 0x000108, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetSeasonPassComponent_ReturnValue_1) == 0x000110, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetSeasonPassComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_Add_IntInt_ReturnValue) == 0x000118, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetRank_ReturnValue) == 0x00011C, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, Temp_int_Array_Index_Variable) == 0x000120, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_MakeLiteralByte_ReturnValue) == 0x000124, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000125, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000128, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetSeasonPassComponent_ReturnValue_2) == 0x000130, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetSeasonPassComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000138, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_IsSeasonProgressValid_ReturnValue) == 0x000139, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_IsSeasonProgressValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_IsValidDiscount_ReturnValue) == 0x00013A, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_IsValidDiscount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetCurrentPaidPlanIndex_ReturnValue) == 0x00013C, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetCurrentPaidPlanIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_IsPaidPlanSubscribed_ReturnValue) == 0x000140, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_IsPaidPlanSubscribed_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_CustomEvent_Data) == 0x000148, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_CustomEvent_RewardItemData) == 0x000150, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_CustomEvent_RewardItemData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_ComponentBoundEvent_RewardItemData) == 0x000158, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_ComponentBoundEvent_RewardItemData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_ComponentBoundEvent_CurrentOffset) == 0x000160, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_ComponentBoundEvent_CurrentOffset' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_CustomEvent_Rank) == 0x000164, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_CustomEvent_Rank' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_CustomEvent_AnimateScroll) == 0x000168, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_CustomEvent_AnimateScroll' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_Subtract_IntInt_ReturnValue) == 0x00016C, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, Temp_bool_Variable_1) == 0x000170, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_Array_LastIndex_ReturnValue) == 0x000174, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_Clamp_ReturnValue) == 0x000178, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_Array_Get_Item) == 0x000180, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_Array_Get_Item_1) == 0x000188, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_Array_Length_ReturnValue) == 0x000190, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000194, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_Less_IntInt_ReturnValue) == 0x000195, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_Event_IsDesignTime) == 0x000196, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_BooleanAND_ReturnValue) == 0x000197, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetEventExecutor_ReturnValue) == 0x000198, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_CreateDelegate_OutputDelegate) == 0x0001A0, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_CustomEvent_Sender) == 0x0001B0, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_CustomEvent_Param) == 0x0001B8, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetEventExecutor_ReturnValue_1) == 0x0001C0, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetAchievedRank_ReturnValue) == 0x0001C8, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetAchievedRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001CC, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_SwitchInteger_CmpSuccess) == 0x0001CD, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0001CE, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_Select_Default) == 0x0001CF, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, Temp_int_Variable) == 0x0001D0, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001D4, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_Select_Default_1) == 0x0001D8, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetChildAt_ReturnValue) == 0x0001E0, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_DynamicCast_AsUMG_Season_Pass_Menu_Reward_Rank) == 0x0001E8, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_DynamicCast_AsUMG_Season_Pass_Menu_Reward_Rank' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, K2Node_DynamicCast_bSuccess) == 0x0001F0, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetChildrenCount_ReturnValue) == 0x0001F4, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001F8, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0001FC, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetCurrentMatchmakingState_bExists) == 0x0001FD, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000200, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_IsValid_ReturnValue) == 0x000208, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x000209, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward, CallFunc_BooleanOR_ReturnValue) == 0x00020A, "Member 'UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.OnUpdateSeasonPassRank
// 0x0010 (0x0010 - 0x0000)
struct UMG_SeasonPassMenuReward_C_OnUpdateSeasonPassRank final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_OnUpdateSeasonPassRank) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuReward_C_OnUpdateSeasonPassRank");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_OnUpdateSeasonPassRank) == 0x000010, "Wrong size on UMG_SeasonPassMenuReward_C_OnUpdateSeasonPassRank");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_OnUpdateSeasonPassRank, Sender) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_OnUpdateSeasonPassRank::Sender' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_OnUpdateSeasonPassRank, Param) == 0x000008, "Member 'UMG_SeasonPassMenuReward_C_OnUpdateSeasonPassRank::Param' has a wrong offset!");

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_SeasonPassMenuReward_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_SeasonPassMenuReward_C_PreConstruct");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_PreConstruct) == 0x000001, "Wrong size on UMG_SeasonPassMenuReward_C_PreConstruct");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.ScrollToRank
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuReward_C_ScrollToRank final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AnimateScroll;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_ScrollToRank) == 0x000004, "Wrong alignment on UMG_SeasonPassMenuReward_C_ScrollToRank");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_ScrollToRank) == 0x000008, "Wrong size on UMG_SeasonPassMenuReward_C_ScrollToRank");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ScrollToRank, Rank) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_ScrollToRank::Rank' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ScrollToRank, AnimateScroll) == 0x000004, "Member 'UMG_SeasonPassMenuReward_C_ScrollToRank::AnimateScroll' has a wrong offset!");

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_SeasonPassMenuReward_C_BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature final
{
public:
	float                                         CurrentOffset;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong alignment on UMG_SeasonPassMenuReward_C_BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong size on UMG_SeasonPassMenuReward_C_BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature, CurrentOffset) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature::CurrentOffset' has a wrong offset!");

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuReward_C_BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        RewardItemData;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuReward_C_BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuReward_C_BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature, RewardItemData) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature::RewardItemData' has a wrong offset!");

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.OnClickRankRewardItemIcon
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuReward_C_OnClickRankRewardItemIcon final
{
public:
	class USBSeasonPassMenuRewardItemData*        RewardItemData;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_OnClickRankRewardItemIcon) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuReward_C_OnClickRankRewardItemIcon");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_OnClickRankRewardItemIcon) == 0x000008, "Wrong size on UMG_SeasonPassMenuReward_C_OnClickRankRewardItemIcon");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_OnClickRankRewardItemIcon, RewardItemData) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_OnClickRankRewardItemIcon::RewardItemData' has a wrong offset!");

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuReward_C_SetData final
{
public:
	class USBSeasonPassMenuRewardData*            Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_SetData) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuReward_C_SetData");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_SetData) == 0x000008, "Wrong size on UMG_SeasonPassMenuReward_C_SetData");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_SetData, Param_Data) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_SetData::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.ClearRewardRankItem
// 0x0002 (0x0002 - 0x0000)
struct UMG_SeasonPassMenuReward_C_ClearRewardRankItem final
{
public:
	bool                                          bLoopFlag;                                         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveChildAt_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_ClearRewardRankItem) == 0x000001, "Wrong alignment on UMG_SeasonPassMenuReward_C_ClearRewardRankItem");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_ClearRewardRankItem) == 0x000002, "Wrong size on UMG_SeasonPassMenuReward_C_ClearRewardRankItem");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ClearRewardRankItem, bLoopFlag) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_ClearRewardRankItem::bLoopFlag' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ClearRewardRankItem, CallFunc_RemoveChildAt_ReturnValue) == 0x000001, "Member 'UMG_SeasonPassMenuReward_C_ClearRewardRankItem::CallFunc_RemoveChildAt_ReturnValue' has a wrong offset!");

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.CreateRewardRankItem
// 0x00A0 (0x00A0 - 0x0000)
struct UMG_SeasonPassMenuReward_C_CreateRewardRankItem final
{
public:
	class USBSeasonPassMenuRewardData*            Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Rank;                                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D38[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_SeasonPassMenuRewardRankWrap_C*    CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               CallFunc_CreateSizeBox_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D39[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardRankData*        CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D3A[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D3B[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBSeasonPassMenuRewardItemData* RewardItemData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScrollBoxSlot*                         K2Node_DynamicCast_AsScroll_Box_Slot;              // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D3C[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x008C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuReward_C_CreateRewardRankItem");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem) == 0x0000A0, "Wrong size on UMG_SeasonPassMenuReward_C_CreateRewardRankItem");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, Param_Data) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::Param_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, Rank) == 0x000008, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::Rank' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, Temp_float_Variable) == 0x00000C, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_Array_LastIndex_ReturnValue) == 0x000010, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, Temp_float_Variable_1) == 0x000014, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_Create_ReturnValue) == 0x000020, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_CreateSizeBox_ReturnValue) == 0x000028, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_CreateSizeBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, Temp_int_Variable) == 0x000030, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_Array_Get_Item) == 0x000038, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000040, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000044, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_Abs_Int_ReturnValue) == 0x000048, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00004C, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_AddChild_ReturnValue) == 0x000058, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, K2Node_CreateDelegate_OutputDelegate) == 0x000060, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_AddChild_ReturnValue_1) == 0x000070, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, K2Node_DynamicCast_AsScroll_Box_Slot) == 0x000078, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::K2Node_DynamicCast_AsScroll_Box_Slot' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, Temp_bool_Variable) == 0x000081, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, CallFunc_Array_Add_ReturnValue) == 0x000084, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, K2Node_Select_Default) == 0x000088, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_CreateRewardRankItem, K2Node_MakeStruct_Margin) == 0x00008C, "Member 'UMG_SeasonPassMenuReward_C_CreateRewardRankItem::K2Node_MakeStruct_Margin' has a wrong offset!");

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.ChangePickupRewardIfNeeded
// 0x0060 (0x0060 - 0x0000)
struct UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded final
{
public:
	float                                         ScrollOffset;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PickupItemIndex;                                   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         VisibleItemIndex;                                  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RightItemScrollOffset;                             // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RightScrollOffset;                                 // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorkScrollOffset;                                  // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_MathExpression_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D3D[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardRankData*        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D3E[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D3F[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue_1;           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue_2;           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded");
static_assert(sizeof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded) == 0x000060, "Wrong size on UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, ScrollOffset) == 0x000000, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::ScrollOffset' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, PickupItemIndex) == 0x000004, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::PickupItemIndex' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, VisibleItemIndex) == 0x000008, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::VisibleItemIndex' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, RightItemScrollOffset) == 0x00000C, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::RightItemScrollOffset' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, RightScrollOffset) == 0x000010, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::RightScrollOffset' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, WorkScrollOffset) == 0x000014, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::WorkScrollOffset' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, K2Node_MathExpression_ReturnValue) == 0x000018, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_Array_Get_Item) == 0x000020, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_Array_LastIndex_ReturnValue) == 0x000028, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00002C, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_Min_ReturnValue) == 0x000030, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000034, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000038, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_MakeLiteralFloat_ReturnValue_1) == 0x00003C, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_MakeLiteralFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_MakeLiteralFloat_ReturnValue_2) == 0x000040, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_MakeLiteralFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000044, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_Add_FloatFloat_ReturnValue) == 0x000048, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00004C, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_FFloor_ReturnValue) == 0x000050, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000054, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000058, "Member 'UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");

}

