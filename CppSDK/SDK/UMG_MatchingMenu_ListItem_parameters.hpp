#pragma once

 

// Package: UMG_MatchingMenu_ListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.OnSelected__DelegateSignature
// 0x01E8 (0x01E8 - 0x0000)
struct UMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature final
{
public:
	struct FSBMapInfo                             Param_DungeonMapInfo;                              // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUMG_MatchingMenu_ListItem_C*           ListItem;                                          // 0x01E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature) == 0x0001E8, "Wrong size on UMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature, Param_DungeonMapInfo) == 0x000000, "Member 'UMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature::Param_DungeonMapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature, ListItem) == 0x0001E0, "Member 'UMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature::ListItem' has a wrong offset!");

// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.ExecuteUbergraph_UMG_MatchingMenu_ListItem
// 0x0310 (0x0310 - 0x0000)
struct UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B8A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B8B[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B8C[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0040(0x0018)()
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B8D[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetDungeonMapInfo_MapInfo;                // 0x0060(0x01E0)()
	bool                                          CallFunc_GetDungeonMapInfo_ReturnValue;            // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B8E[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDungeonCompleteType                        CallFunc_GetCompleteStateType_ReturnValue;         // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0252(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0253(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B8F[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEffectiveMissionByMapId_ReturnValue;    // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B90[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDungeonDisplayName_ReturnValue;        // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0290(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x02AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B91[0x5];                                     // 0x02AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_RewardBoostTooltip_C*              CallFunc_Create_ReturnValue;                       // 0x02B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBRewardBoostTooltipData>      CallFunc_GetMissionTooltipTextByMapId_TooltipDataList; // 0x02C0(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B92[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       CallFunc_Conv_SBTextTableHashToInt_ReturnValue;    // 0x02D8(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B93[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetHelpMatchingModeText_ReturnValue;      // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02F0(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem");
static_assert(sizeof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem) == 0x000310, "Wrong size on UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, Temp_byte_Variable) == 0x000004, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, Temp_bool_Variable) == 0x000020, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000034, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, Temp_bool_Variable_1) == 0x000035, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, Temp_byte_Variable_1) == 0x000036, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, Temp_byte_Variable_2) == 0x000037, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, Temp_byte_Variable_3) == 0x000038, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000040, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000058, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, K2Node_Select_Default) == 0x000059, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_GetDungeonMapInfo_MapInfo) == 0x000060, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_GetDungeonMapInfo_MapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_GetDungeonMapInfo_ReturnValue) == 0x000240, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_GetDungeonMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_GetSBPlayerState_ReturnValue) == 0x000248, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, Temp_bool_Variable_2) == 0x000250, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_GetCompleteStateType_ReturnValue) == 0x000251, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_GetCompleteStateType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000252, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, K2Node_Select_Default_1) == 0x000253, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, K2Node_CustomEvent_Sender) == 0x000258, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, K2Node_CustomEvent_Param) == 0x000260, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_GetSBPlayerController_ReturnValue) == 0x000268, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000270, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_IsEffectiveMissionByMapId_ReturnValue) == 0x000278, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_IsEffectiveMissionByMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_GetDungeonDisplayName_ReturnValue) == 0x000280, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_GetDungeonDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000290, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0002A8, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_IsValid_ReturnValue) == 0x0002A9, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, K2Node_Select_Default_2) == 0x0002AA, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_GetOwningPlayer_ReturnValue) == 0x0002B0, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_Create_ReturnValue) == 0x0002B8, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_GetMissionTooltipTextByMapId_TooltipDataList) == 0x0002C0, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_GetMissionTooltipTextByMapId_TooltipDataList' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x0002D0, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_Conv_StringToInt_ReturnValue) == 0x0002D4, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_Conv_SBTextTableHashToInt_ReturnValue) == 0x0002D8, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_Conv_SBTextTableHashToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_Not_PreBool_ReturnValue) == 0x0002DC, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_GetHelpMatchingModeText_ReturnValue) == 0x0002E0, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_GetHelpMatchingModeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002F0, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x000308, "Member 'UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.OnUpdateRewardBoostInfo
// 0x0010 (0x0010 - 0x0000)
struct UMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo");
static_assert(sizeof(UMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo) == 0x000010, "Wrong size on UMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo, Sender) == 0x000000, "Member 'UMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo::Sender' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo, Param) == 0x000008, "Member 'UMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo::Param' has a wrong offset!");

// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Update Style
// 0x0CF8 (0x0CF8 - 0x0000)
struct UMG_MatchingMenu_ListItem_C_Update_Style final
{
public:
	bool                                          IsFocus;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B94[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            BrushPressed;                                      // 0x0008(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            BrushHovered;                                      // 0x0090(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            BrushNormal;                                       // 0x0118(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x01A0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0228(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x02B0(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0338(0x0278)()
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B95[0x7];                                     // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x05B8(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0830(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_4;                    // 0x08B8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_5;                    // 0x0940(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_6;                    // 0x09C8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_7;                    // 0x0A50(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_8;                    // 0x0AD8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_9;                    // 0x0B60(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_10;                   // 0x0BE8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_11;                   // 0x0C70(0x0088)()
};
static_assert(alignof(UMG_MatchingMenu_ListItem_C_Update_Style) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ListItem_C_Update_Style");
static_assert(sizeof(UMG_MatchingMenu_ListItem_C_Update_Style) == 0x000CF8, "Wrong size on UMG_MatchingMenu_ListItem_C_Update_Style");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, IsFocus) == 0x000000, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::IsFocus' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, BrushPressed) == 0x000008, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::BrushPressed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, BrushHovered) == 0x000090, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::BrushHovered' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, BrushNormal) == 0x000118, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::BrushNormal' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush) == 0x0001A0, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush_1) == 0x000228, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush_2) == 0x0002B0, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_ButtonStyle) == 0x000338, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_SwitchString_CmpSuccess) == 0x0005B0, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_ButtonStyle_1) == 0x0005B8, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush_3) == 0x000830, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush_4) == 0x0008B8, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush_5) == 0x000940, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush_5' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush_6) == 0x0009C8, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush_6' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush_7) == 0x000A50, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush_7' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush_8) == 0x000AD8, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush_8' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush_9) == 0x000B60, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush_9' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush_10) == 0x000BE8, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush_10' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Update_Style, K2Node_MakeStruct_SlateBrush_11) == 0x000C70, "Member 'UMG_MatchingMenu_ListItem_C_Update_Style::K2Node_MakeStruct_SlateBrush_11' has a wrong offset!");

// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.SetSelect
// 0x0001 (0x0001 - 0x0000)
struct UMG_MatchingMenu_ListItem_C_SetSelect final
{
public:
	bool                                          Select;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_ListItem_C_SetSelect) == 0x000001, "Wrong alignment on UMG_MatchingMenu_ListItem_C_SetSelect");
static_assert(sizeof(UMG_MatchingMenu_ListItem_C_SetSelect) == 0x000001, "Wrong size on UMG_MatchingMenu_ListItem_C_SetSelect");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_SetSelect, Select) == 0x000000, "Member 'UMG_MatchingMenu_ListItem_C_SetSelect::Select' has a wrong offset!");

// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Get_ItemButton_ToolTipWidget_0
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_ListItem_C_Get_ItemButton_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_ListItem_C_Get_ItemButton_ToolTipWidget_0) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ListItem_C_Get_ItemButton_ToolTipWidget_0");
static_assert(sizeof(UMG_MatchingMenu_ListItem_C_Get_ItemButton_ToolTipWidget_0) == 0x000008, "Wrong size on UMG_MatchingMenu_ListItem_C_Get_ItemButton_ToolTipWidget_0");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_Get_ItemButton_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_ListItem_C_Get_ItemButton_ToolTipWidget_0::ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.SetVisibilityNew
// 0x0005 (0x0005 - 0x0000)
struct UMG_MatchingMenu_ListItem_C_SetVisibilityNew final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_ListItem_C_SetVisibilityNew) == 0x000001, "Wrong alignment on UMG_MatchingMenu_ListItem_C_SetVisibilityNew");
static_assert(sizeof(UMG_MatchingMenu_ListItem_C_SetVisibilityNew) == 0x000005, "Wrong size on UMG_MatchingMenu_ListItem_C_SetVisibilityNew");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_SetVisibilityNew, bShow) == 0x000000, "Member 'UMG_MatchingMenu_ListItem_C_SetVisibilityNew::bShow' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_SetVisibilityNew, Temp_bool_Variable) == 0x000001, "Member 'UMG_MatchingMenu_ListItem_C_SetVisibilityNew::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_SetVisibilityNew, Temp_byte_Variable) == 0x000002, "Member 'UMG_MatchingMenu_ListItem_C_SetVisibilityNew::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_SetVisibilityNew, Temp_byte_Variable_1) == 0x000003, "Member 'UMG_MatchingMenu_ListItem_C_SetVisibilityNew::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_SetVisibilityNew, K2Node_Select_Default) == 0x000004, "Member 'UMG_MatchingMenu_ListItem_C_SetVisibilityNew::K2Node_Select_Default' has a wrong offset!");

// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.GetHelpMatchingRequiredInfo
// 0x0068 (0x0068 - 0x0000)
struct UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo final
{
public:
	int32                                         BattleScore;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClassLevel;                                        // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBHelpMatchingRequiredInfo            FixedMaster;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Sub;                                               // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B96[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBHelpMatchingRequiredInfo>    CallFunc_BP_GetHelpMatchingRequiredInfoMasterData_ReturnValue; // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBHelpMatchingRequiredInfo            CallFunc_Array_Get_Item;                           // 0x004C(0x0010)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B97[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo");
static_assert(sizeof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo) == 0x000068, "Wrong size on UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, BattleScore) == 0x000000, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::BattleScore' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, ClassLevel) == 0x000004, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::ClassLevel' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, FixedMaster) == 0x000008, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::FixedMaster' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, Sub) == 0x000018, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::Sub' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_GetClassLevel_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_GetMasterDataManager_IsValid) == 0x00002C, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_BP_GetHelpMatchingRequiredInfoMasterData_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_BP_GetHelpMatchingRequiredInfoMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_Array_Get_Item) == 0x00004C, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00005D, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000064, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x000065, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo, CallFunc_BooleanAND_ReturnValue) == 0x000066, "Member 'UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.MakeMapInfo
// 0x01F0 (0x01F0 - 0x0000)
struct UMG_MatchingMenu_ListItem_C_MakeMapInfo final
{
public:
	class FName                                   CallFunc_GetRewardSearchName_SearchName;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHelpMatchingRequiredInfo_BattleScore;  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHelpMatchingRequiredInfo_ClassLevel;   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapInfo                             K2Node_MakeStruct_SBMapInfo;                       // 0x0010(0x01E0)()
};
static_assert(alignof(UMG_MatchingMenu_ListItem_C_MakeMapInfo) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ListItem_C_MakeMapInfo");
static_assert(sizeof(UMG_MatchingMenu_ListItem_C_MakeMapInfo) == 0x0001F0, "Wrong size on UMG_MatchingMenu_ListItem_C_MakeMapInfo");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_MakeMapInfo, CallFunc_GetRewardSearchName_SearchName) == 0x000000, "Member 'UMG_MatchingMenu_ListItem_C_MakeMapInfo::CallFunc_GetRewardSearchName_SearchName' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_MakeMapInfo, CallFunc_GetHelpMatchingRequiredInfo_BattleScore) == 0x000008, "Member 'UMG_MatchingMenu_ListItem_C_MakeMapInfo::CallFunc_GetHelpMatchingRequiredInfo_BattleScore' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_MakeMapInfo, CallFunc_GetHelpMatchingRequiredInfo_ClassLevel) == 0x00000C, "Member 'UMG_MatchingMenu_ListItem_C_MakeMapInfo::CallFunc_GetHelpMatchingRequiredInfo_ClassLevel' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_MakeMapInfo, K2Node_MakeStruct_SBMapInfo) == 0x000010, "Member 'UMG_MatchingMenu_ListItem_C_MakeMapInfo::K2Node_MakeStruct_SBMapInfo' has a wrong offset!");

// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.GetRewardSearchName
// 0x0078 (0x0078 - 0x0000)
struct UMG_MatchingMenu_ListItem_C_GetRewardSearchName final
{
public:
	class FName                                   SearchName;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Sub;                                               // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_Name;                                        // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B98[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBHelpMatchingRewardInfo>      CallFunc_BP_GetHelpMatchingRewardInfoMasterData_ReturnValue; // 0x0030(0x0010)(ReferenceParm)
	struct FSBHelpMatchingRewardInfo              CallFunc_Array_Get_Item;                           // 0x0040(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B99[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ListItem_C_GetRewardSearchName");
static_assert(sizeof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName) == 0x000078, "Wrong size on UMG_MatchingMenu_ListItem_C_GetRewardSearchName");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, SearchName) == 0x000000, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::SearchName' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, Sub) == 0x000008, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::Sub' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, Param_Name) == 0x00000C, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::Param_Name' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, Temp_int_Array_Index_Variable) == 0x000014, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_GetAdventurerRank_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_GetMasterDataManager_IsValid) == 0x000024, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_BP_GetHelpMatchingRewardInfoMasterData_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_BP_GetHelpMatchingRewardInfoMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_Array_Get_Item) == 0x000040, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_Conv_StringToName_ReturnValue) == 0x000068, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_Subtract_IntInt_ReturnValue) == 0x000070, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000074, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000075, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_Less_IntInt_ReturnValue_1) == 0x000076, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ListItem_C_GetRewardSearchName, CallFunc_BooleanAND_ReturnValue) == 0x000077, "Member 'UMG_MatchingMenu_ListItem_C_GetRewardSearchName::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

