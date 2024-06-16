#pragma once

 

// Package: RankingMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function RankingMenu.RankingMenu_C.ExecuteUbergraph_RankingMenu
// 0x06A8 (0x06A8 - 0x0000)
struct RankingMenu_C_ExecuteUbergraph_RankingMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90A8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMyItemPosition_Index;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90A9[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90AA[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowEmptyMyRankingData_Show;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90AB[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue;    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90AC[0x1];                                     // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90AD[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_RankingHistory_ReturnValue;       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90AE[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_2;         // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_2;        // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90AF[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FindOptionIndex_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90B0[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ButtonId;                       // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90B1[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90B2[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90B3[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoad_ReturnValue;                       // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90B4[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRankingHistoryData>            CallFunc_GetHistoryComboBoxList_ReturnValue;       // 0x00D0(0x0010)(ReferenceParm)
	TArray<struct FRankingData>                   CallFunc_GetRankingList_ReturnValue;               // 0x00E0(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetTotalCount_ReturnValue;                // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMyRank_ReturnValue;                    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0108(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90B5[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x012E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90B6[0x1];                                     // 0x012F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90B7[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90B8[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90B9[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90BA[0x2];                                     // 0x014E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOptionIndex_ReturnValue;       // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_PlayAnimation;                  // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90BB[0x6];                                     // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90BC[0x2];                                     // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOptionIndex_ReturnValue_1;     // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URankingRewardMenu_C*                   CallFunc_Create_ReturnValue_2;                     // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x017D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90BD[0x2];                                     // 0x017E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Solo_Ranking_List_Active;             // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0186(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0187(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMyItemPosition_Index_1;                // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOptionIndex_ReturnValue_2;     // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90BE[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ButtonId)>               K2Node_CreateDelegate_OutputDelegate;              // 0x01AC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetSelectedOptionIndex_ReturnValue_3;     // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOptionIndex_ReturnValue_4;     // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90BF[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRankingHistoryData                    K2Node_MakeStruct_RankingHistoryData;              // 0x01C8(0x00A8)()
	struct FRankingHistoryData                    K2Node_MakeStruct_RankingHistoryData_1;            // 0x0270(0x00A8)()
	struct FRankingHistoryData                    K2Node_Select_Default_2;                           // 0x0318(0x00A8)(ConstParm)
	struct FRankingHistoryData                    K2Node_Select_Default_3;                           // 0x03C0(0x00A8)(ConstParm)
	struct FRankingHistoryData                    CallFunc_SearchRankingHistoryData_ReturnValue;     // 0x0468(0x00A8)(ConstParm)
	bool                                          CallFunc_CheckEventTermDataInstantNow_ReturnValue; // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90C0[0x7];                                     // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0518(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0521(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0522(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0523(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90C1[0x4];                                     // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0528(0x0018)()
	struct FRankingHistoryData                    K2Node_MakeStruct_RankingHistoryData_2;            // 0x0540(0x00A8)()
	struct FRankingHistoryData                    K2Node_Select_Default_4;                           // 0x05E8(0x00A8)(ConstParm)
	bool                                          CallFunc_Request_RankingPageView_ReturnValue;      // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90C2[0x3];                                     // 0x0691(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x0694(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0698(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue_1;            // 0x069C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x06A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x06A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x06A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x06A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x06A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_C_ExecuteUbergraph_RankingMenu) == 0x000008, "Wrong alignment on RankingMenu_C_ExecuteUbergraph_RankingMenu");
static_assert(sizeof(RankingMenu_C_ExecuteUbergraph_RankingMenu) == 0x0006A8, "Wrong size on RankingMenu_C_ExecuteUbergraph_RankingMenu");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, EntryPoint) == 0x000000, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetMyItemPosition_Index) == 0x000008, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetMyItemPosition_Index' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000014, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000018, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x00001C, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Create_ReturnValue) == 0x000020, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_IsShowEmptyMyRankingData_Show) == 0x000028, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_IsShowEmptyMyRankingData_Show' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, Temp_bool_Variable) == 0x000029, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00002A, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00002B, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00002C, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x00002D, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, Temp_bool_Variable_1) == 0x00002E, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, Temp_bool_Variable_2) == 0x00002F, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_PlaySE_ReturnValue) == 0x000030, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Conv_IntToBool_ReturnValue) == 0x000034, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Create_ReturnValue_1) == 0x000038, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_IsPackagedForDistribution_ReturnValue) == 0x000040, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_IsPackagedForDistribution_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000041, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, Temp_bool_Variable_3) == 0x000042, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, Temp_int_Variable) == 0x000044, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, Temp_int_Variable_1) == 0x000048, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000050, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Request_RankingHistory_ReturnValue) == 0x000058, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Request_RankingHistory_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_ComponentBoundEvent_SelectedItem_2) == 0x000060, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_ComponentBoundEvent_SelectedItem_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_ComponentBoundEvent_SelectionType_2) == 0x000070, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_ComponentBoundEvent_SelectionType_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_FindOptionIndex_ReturnValue) == 0x000074, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_FindOptionIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000078, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_CustomEvent_ButtonId) == 0x00007C, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_CustomEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x000080, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_ComponentBoundEvent_SelectionType_1) == 0x000090, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000098, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x0000A0, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000A8, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, Temp_bool_Variable_4) == 0x0000B0, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_Select_Default) == 0x0000B4, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_ComponentBoundEvent_SelectedItem) == 0x0000B8, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_ComponentBoundEvent_SelectionType) == 0x0000C8, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_IsLoad_ReturnValue) == 0x0000C9, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_IsLoad_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetHistoryComboBoxList_ReturnValue) == 0x0000D0, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetHistoryComboBoxList_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetRankingList_ReturnValue) == 0x0000E0, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetRankingList_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetTotalCount_ReturnValue) == 0x0000F0, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetTotalCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetMyRank_ReturnValue) == 0x0000F4, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetMyRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000F8, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000108, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000121, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000124, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Divide_IntInt_ReturnValue) == 0x000128, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00012C, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00012D, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_BooleanAND_ReturnValue) == 0x00012E, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000130, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000134, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000138, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x00013C, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00013D, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Array_LastIndex_ReturnValue) == 0x000140, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_IsValid_ReturnValue_2) == 0x000144, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Array_Find_ReturnValue) == 0x000148, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetClassType_ReturnValue) == 0x00014C, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x00014D, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetSelectedOptionIndex_ReturnValue) == 0x000150, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetSelectedOptionIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Array_Length_ReturnValue) == 0x000154, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000158, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_CustomEvent_PlayAnimation) == 0x000159, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_CustomEvent_PlayAnimation' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_PlayAnimationForward_ReturnValue) == 0x000160, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000168, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x000169, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetSelectedOptionIndex_ReturnValue_1) == 0x00016C, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetSelectedOptionIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Create_ReturnValue_2) == 0x000170, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Array_Length_ReturnValue_1) == 0x000178, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00017C, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Not_PreBool_ReturnValue_2) == 0x00017D, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Array_Find_ReturnValue_1) == 0x000180, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Set_Solo_Ranking_List_Active) == 0x000184, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Set_Solo_Ranking_List_Active' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_IsValid_ReturnValue_3) == 0x000185, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Not_PreBool_ReturnValue_3) == 0x000186, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_Select_Default_1) == 0x000187, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetMyItemPosition_Index_1) == 0x000188, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetMyItemPosition_Index_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x00018C, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x000190, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000194, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000198, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetSelectedOptionIndex_ReturnValue_2) == 0x0001A0, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetSelectedOptionIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Array_Length_ReturnValue_2) == 0x0001A4, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0001A8, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_CreateDelegate_OutputDelegate) == 0x0001AC, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetSelectedOptionIndex_ReturnValue_3) == 0x0001BC, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetSelectedOptionIndex_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetSelectedOptionIndex_ReturnValue_4) == 0x0001C0, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetSelectedOptionIndex_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, Temp_bool_Variable_5) == 0x0001C4, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_MakeStruct_RankingHistoryData) == 0x0001C8, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_MakeStruct_RankingHistoryData' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_MakeStruct_RankingHistoryData_1) == 0x000270, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_MakeStruct_RankingHistoryData_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_Select_Default_2) == 0x000318, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_Select_Default_3) == 0x0003C0, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_SearchRankingHistoryData_ReturnValue) == 0x000468, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_SearchRankingHistoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_CheckEventTermDataInstantNow_ReturnValue) == 0x000510, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_CheckEventTermDataInstantNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000518, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000520, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Not_PreBool_ReturnValue_4) == 0x000521, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_SetDateTime_ReturnValue) == 0x000522, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000523, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000528, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_MakeStruct_RankingHistoryData_2) == 0x000540, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_MakeStruct_RankingHistoryData_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_Select_Default_4) == 0x0005E8, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Request_RankingPageView_ReturnValue) == 0x000690, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Request_RankingPageView_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetScrollOffset_ReturnValue) == 0x000694, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000698, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GetScrollOffset_ReturnValue_1) == 0x00069C, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GetScrollOffset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0006A0, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Not_PreBool_ReturnValue_5) == 0x0006A1, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, K2Node_Select_Default_5) == 0x0006A2, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x0006A3, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_ExecuteUbergraph_RankingMenu, CallFunc_Not_PreBool_ReturnValue_6) == 0x0006A4, "Member 'RankingMenu_C_ExecuteUbergraph_RankingMenu::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.ChangeEnd
// 0x0001 (0x0001 - 0x0000)
struct RankingMenu_C_ChangeEnd final
{
public:
	bool                                          Param_PlayAnimation;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_C_ChangeEnd) == 0x000001, "Wrong alignment on RankingMenu_C_ChangeEnd");
static_assert(sizeof(RankingMenu_C_ChangeEnd) == 0x000001, "Wrong size on RankingMenu_C_ChangeEnd");
static_assert(offsetof(RankingMenu_C_ChangeEnd, Param_PlayAnimation) == 0x000000, "Member 'RankingMenu_C_ChangeEnd::Param_PlayAnimation' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct RankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on RankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(RankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on RankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(RankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'RankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'RankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct RankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on RankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(RankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on RankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(RankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'RankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'RankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.ChangeFocusCategory
// 0x0004 (0x0004 - 0x0000)
struct RankingMenu_C_ChangeFocusCategory final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_C_ChangeFocusCategory) == 0x000004, "Wrong alignment on RankingMenu_C_ChangeFocusCategory");
static_assert(sizeof(RankingMenu_C_ChangeFocusCategory) == 0x000004, "Wrong size on RankingMenu_C_ChangeFocusCategory");
static_assert(offsetof(RankingMenu_C_ChangeFocusCategory, ButtonId) == 0x000000, "Member 'RankingMenu_C_ChangeFocusCategory::ButtonId' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct RankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on RankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(RankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on RankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(RankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'RankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'RankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.SetClassComboBox
// 0x0040 (0x0040 - 0x0000)
struct RankingMenu_C_SetClassComboBox final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90C3[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBClassType>                          CallFunc_GetSortedPlayerClassList_ReturnValue;     // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_Array_Get_Item;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90C4[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90C5[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_C_SetClassComboBox) == 0x000008, "Wrong alignment on RankingMenu_C_SetClassComboBox");
static_assert(sizeof(RankingMenu_C_SetClassComboBox) == 0x000040, "Wrong size on RankingMenu_C_SetClassComboBox");
static_assert(offsetof(RankingMenu_C_SetClassComboBox, Temp_int_Array_Index_Variable) == 0x000000, "Member 'RankingMenu_C_SetClassComboBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetClassComboBox, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'RankingMenu_C_SetClassComboBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetClassComboBox, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'RankingMenu_C_SetClassComboBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetClassComboBox, CallFunc_GetSortedPlayerClassList_ReturnValue) == 0x000010, "Member 'RankingMenu_C_SetClassComboBox::CallFunc_GetSortedPlayerClassList_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetClassComboBox, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'RankingMenu_C_SetClassComboBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetClassComboBox, CallFunc_Array_Get_Item) == 0x000024, "Member 'RankingMenu_C_SetClassComboBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetClassComboBox, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'RankingMenu_C_SetClassComboBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetClassComboBox, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'RankingMenu_C_SetClassComboBox::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetClassComboBox, CallFunc_GetClassNameText_ReturnValue) == 0x000030, "Member 'RankingMenu_C_SetClassComboBox::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.Set Page Combo Box Option
// 0x0158 (0x0158 - 0x0000)
struct RankingMenu_C_Set_Page_Combo_Box_Option final
{
public:
	int32                                         InLastIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BottomRank;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastIndex;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90C6[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90C7[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90C8[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0088(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90C9[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0108(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0120(0x0018)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90CA[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_C_Set_Page_Combo_Box_Option) == 0x000008, "Wrong alignment on RankingMenu_C_Set_Page_Combo_Box_Option");
static_assert(sizeof(RankingMenu_C_Set_Page_Combo_Box_Option) == 0x000158, "Wrong size on RankingMenu_C_Set_Page_Combo_Box_Option");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, InLastIndex) == 0x000000, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::InLastIndex' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, BottomRank) == 0x000004, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::BottomRank' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, LastIndex) == 0x000008, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::LastIndex' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, Temp_int_Variable) == 0x000010, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Multiply_IntInt_ReturnValue) == 0x000078, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x00007C, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Add_IntInt_ReturnValue_1) == 0x000080, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Add_IntInt_ReturnValue_2) == 0x000084, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000088, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A8, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, K2Node_MakeArray_Array) == 0x0000E8, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000F8, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Conv_StringToText_ReturnValue) == 0x000108, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Format_ReturnValue) == 0x000120, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Subtract_IntInt_ReturnValue) == 0x000138, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Conv_TextToString_ReturnValue) == 0x000140, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_Divide_IntInt_ReturnValue) == 0x000150, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_Set_Page_Combo_Box_Option, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000154, "Member 'RankingMenu_C_Set_Page_Combo_Box_Option::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.SetHistoryComboBox
// 0x0178 (0x0178 - 0x0000)
struct RankingMenu_C_SetHistoryComboBox final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90CB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FRankingHistoryData                    CallFunc_Array_Get_Item;                           // 0x0020(0x00A8)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEventTermDataInstantNow_ReturnValue; // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90CC[0x2];                                     // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00E8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0100(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0140(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0150(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_C_SetHistoryComboBox) == 0x000008, "Wrong alignment on RankingMenu_C_SetHistoryComboBox");
static_assert(sizeof(RankingMenu_C_SetHistoryComboBox) == 0x000178, "Wrong size on RankingMenu_C_SetHistoryComboBox");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, Temp_int_Array_Index_Variable) == 0x000000, "Member 'RankingMenu_C_SetHistoryComboBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'RankingMenu_C_SetHistoryComboBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'RankingMenu_C_SetHistoryComboBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'RankingMenu_C_SetHistoryComboBox::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, CallFunc_Array_Get_Item) == 0x000020, "Member 'RankingMenu_C_SetHistoryComboBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'RankingMenu_C_SetHistoryComboBox::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'RankingMenu_C_SetHistoryComboBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, CallFunc_CheckEventTermDataInstantNow_ReturnValue) == 0x0000E4, "Member 'RankingMenu_C_SetHistoryComboBox::CallFunc_CheckEventTermDataInstantNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, CallFunc_Less_IntInt_ReturnValue) == 0x0000E5, "Member 'RankingMenu_C_SetHistoryComboBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000E8, "Member 'RankingMenu_C_SetHistoryComboBox::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, K2Node_MakeStruct_FormatArgumentData) == 0x000100, "Member 'RankingMenu_C_SetHistoryComboBox::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, K2Node_MakeArray_Array) == 0x000140, "Member 'RankingMenu_C_SetHistoryComboBox::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, CallFunc_Format_ReturnValue) == 0x000150, "Member 'RankingMenu_C_SetHistoryComboBox::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetHistoryComboBox, CallFunc_Conv_TextToString_ReturnValue) == 0x000168, "Member 'RankingMenu_C_SetHistoryComboBox::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.On_Page_ComboBox_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct RankingMenu_C_On_Page_ComboBox_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(RankingMenu_C_On_Page_ComboBox_GenerateWidget_0) == 0x000008, "Wrong alignment on RankingMenu_C_On_Page_ComboBox_GenerateWidget_0");
static_assert(sizeof(RankingMenu_C_On_Page_ComboBox_GenerateWidget_0) == 0x000038, "Wrong size on RankingMenu_C_On_Page_ComboBox_GenerateWidget_0");
static_assert(offsetof(RankingMenu_C_On_Page_ComboBox_GenerateWidget_0, Item) == 0x000000, "Member 'RankingMenu_C_On_Page_ComboBox_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_On_Page_ComboBox_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'RankingMenu_C_On_Page_ComboBox_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_On_Page_ComboBox_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'RankingMenu_C_On_Page_ComboBox_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_On_Page_ComboBox_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'RankingMenu_C_On_Page_ComboBox_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.On_ClassType_ComboBox_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0) == 0x000008, "Wrong alignment on RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0");
static_assert(sizeof(RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0) == 0x000038, "Wrong size on RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0");
static_assert(offsetof(RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0, Item) == 0x000000, "Member 'RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.On_RankingHistory_ComboBox_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0) == 0x000008, "Wrong alignment on RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0");
static_assert(sizeof(RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0) == 0x000038, "Wrong size on RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0");
static_assert(offsetof(RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0, Item) == 0x000000, "Member 'RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.SetPage_ComboBoxSelectAt
// 0x0008 (0x0008 - 0x0000)
struct RankingMenu_C_SetPage_ComboBoxSelectAt final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_NotUpdatePage;                               // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_C_SetPage_ComboBoxSelectAt) == 0x000004, "Wrong alignment on RankingMenu_C_SetPage_ComboBoxSelectAt");
static_assert(sizeof(RankingMenu_C_SetPage_ComboBoxSelectAt) == 0x000008, "Wrong size on RankingMenu_C_SetPage_ComboBoxSelectAt");
static_assert(offsetof(RankingMenu_C_SetPage_ComboBoxSelectAt, Param_Index) == 0x000000, "Member 'RankingMenu_C_SetPage_ComboBoxSelectAt::Param_Index' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetPage_ComboBoxSelectAt, Param_NotUpdatePage) == 0x000004, "Member 'RankingMenu_C_SetPage_ComboBoxSelectAt::Param_NotUpdatePage' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.SetClassType_ComboBoxSelectAt
// 0x0008 (0x0008 - 0x0000)
struct RankingMenu_C_SetClassType_ComboBoxSelectAt final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_NotUpdateClassType;                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_C_SetClassType_ComboBoxSelectAt) == 0x000004, "Wrong alignment on RankingMenu_C_SetClassType_ComboBoxSelectAt");
static_assert(sizeof(RankingMenu_C_SetClassType_ComboBoxSelectAt) == 0x000008, "Wrong size on RankingMenu_C_SetClassType_ComboBoxSelectAt");
static_assert(offsetof(RankingMenu_C_SetClassType_ComboBoxSelectAt, Param_Index) == 0x000000, "Member 'RankingMenu_C_SetClassType_ComboBoxSelectAt::Param_Index' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetClassType_ComboBoxSelectAt, Param_NotUpdateClassType) == 0x000004, "Member 'RankingMenu_C_SetClassType_ComboBoxSelectAt::Param_NotUpdateClassType' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.ClearPage_ComboBox
// 0x0001 (0x0001 - 0x0000)
struct RankingMenu_C_ClearPage_ComboBox final
{
public:
	bool                                          Param_NotUpdatePage;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_C_ClearPage_ComboBox) == 0x000001, "Wrong alignment on RankingMenu_C_ClearPage_ComboBox");
static_assert(sizeof(RankingMenu_C_ClearPage_ComboBox) == 0x000001, "Wrong size on RankingMenu_C_ClearPage_ComboBox");
static_assert(offsetof(RankingMenu_C_ClearPage_ComboBox, Param_NotUpdatePage) == 0x000000, "Member 'RankingMenu_C_ClearPage_ComboBox::Param_NotUpdatePage' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.SetRankingHistory_ComboBoxSelectAt
// 0x0008 (0x0008 - 0x0000)
struct RankingMenu_C_SetRankingHistory_ComboBoxSelectAt final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_NotUpdateRankingHistory;                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_C_SetRankingHistory_ComboBoxSelectAt) == 0x000004, "Wrong alignment on RankingMenu_C_SetRankingHistory_ComboBoxSelectAt");
static_assert(sizeof(RankingMenu_C_SetRankingHistory_ComboBoxSelectAt) == 0x000008, "Wrong size on RankingMenu_C_SetRankingHistory_ComboBoxSelectAt");
static_assert(offsetof(RankingMenu_C_SetRankingHistory_ComboBoxSelectAt, Param_Index) == 0x000000, "Member 'RankingMenu_C_SetRankingHistory_ComboBoxSelectAt::Param_Index' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_SetRankingHistory_ComboBoxSelectAt, Param_NotUpdateRankingHistory) == 0x000004, "Member 'RankingMenu_C_SetRankingHistory_ComboBoxSelectAt::Param_NotUpdateRankingHistory' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.IsShowEmptyMyRankingData
// 0x0007 (0x0007 - 0x0000)
struct RankingMenu_C_IsShowEmptyMyRankingData final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_C_IsShowEmptyMyRankingData) == 0x000001, "Wrong alignment on RankingMenu_C_IsShowEmptyMyRankingData");
static_assert(sizeof(RankingMenu_C_IsShowEmptyMyRankingData) == 0x000007, "Wrong size on RankingMenu_C_IsShowEmptyMyRankingData");
static_assert(offsetof(RankingMenu_C_IsShowEmptyMyRankingData, Show) == 0x000000, "Member 'RankingMenu_C_IsShowEmptyMyRankingData::Show' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_IsShowEmptyMyRankingData, CallFunc_Conv_IntToBool_ReturnValue) == 0x000001, "Member 'RankingMenu_C_IsShowEmptyMyRankingData::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_IsShowEmptyMyRankingData, CallFunc_GetClassType_ReturnValue) == 0x000002, "Member 'RankingMenu_C_IsShowEmptyMyRankingData::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_IsShowEmptyMyRankingData, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'RankingMenu_C_IsShowEmptyMyRankingData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_IsShowEmptyMyRankingData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'RankingMenu_C_IsShowEmptyMyRankingData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_IsShowEmptyMyRankingData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000005, "Member 'RankingMenu_C_IsShowEmptyMyRankingData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_IsShowEmptyMyRankingData, CallFunc_BooleanAND_ReturnValue) == 0x000006, "Member 'RankingMenu_C_IsShowEmptyMyRankingData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function RankingMenu.RankingMenu_C.GetMyItemPosition
// 0x00A8 (0x00A8 - 0x0000)
struct RankingMenu_C_GetMyItemPosition final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90CD[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRankingData                           CallFunc_Array_Get_Item;                           // 0x0028(0x0078)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_C_GetMyItemPosition) == 0x000008, "Wrong alignment on RankingMenu_C_GetMyItemPosition");
static_assert(sizeof(RankingMenu_C_GetMyItemPosition) == 0x0000A8, "Wrong size on RankingMenu_C_GetMyItemPosition");
static_assert(offsetof(RankingMenu_C_GetMyItemPosition, Param_Index) == 0x000000, "Member 'RankingMenu_C_GetMyItemPosition::Param_Index' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_GetMyItemPosition, Temp_int_Array_Index_Variable) == 0x000004, "Member 'RankingMenu_C_GetMyItemPosition::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_GetMyItemPosition, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'RankingMenu_C_GetMyItemPosition::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_GetMyItemPosition, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'RankingMenu_C_GetMyItemPosition::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_GetMyItemPosition, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'RankingMenu_C_GetMyItemPosition::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_GetMyItemPosition, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'RankingMenu_C_GetMyItemPosition::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_GetMyItemPosition, CallFunc_Array_Get_Item) == 0x000028, "Member 'RankingMenu_C_GetMyItemPosition::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_GetMyItemPosition, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'RankingMenu_C_GetMyItemPosition::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_C_GetMyItemPosition, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000A1, "Member 'RankingMenu_C_GetMyItemPosition::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

}

