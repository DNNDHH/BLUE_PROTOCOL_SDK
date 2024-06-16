#pragma once

 

// Package: UMG_MatchingMenu_MissionDetail

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "EntryConditionType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickRewardIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_OnClickRewardIcon__DelegateSignature final
{
public:
	class UQuestRewardIcon_C*                     Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_OnClickRewardIcon__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_OnClickRewardIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_OnClickRewardIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_MissionDetail_C_OnClickRewardIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_OnClickRewardIcon__DelegateSignature, Sender) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_OnClickRewardIcon__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickSupplyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_OnClickSupplyIcon__DelegateSignature final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_OnClickSupplyIcon__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_OnClickSupplyIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_OnClickSupplyIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_MissionDetail_C_OnClickSupplyIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_OnClickSupplyIcon__DelegateSignature, DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_OnClickSupplyIcon__DelegateSignature::DungeonSupply' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.ExecuteUbergraph_UMG_MatchingMenu_MissionDetail
// 0x00F0 (0x00F0 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86BD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MatchingMenu_EntryCondition_C*     CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0048(0x0028)()
	class UWBP_CommonToolTipText_Fixed_C*         CallFunc_Create_ReturnValue_1;                     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionClass_C* CallFunc_Create_ReturnValue_2;                     // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionQuest_C* CallFunc_Create_ReturnValue_3;                     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	class UQuestRewardIcon_C*                     K2Node_CustomEvent_Sender;                         // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EntryConditionType                            K2Node_ComponentBoundEvent_EntryConditionType;     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86BE[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_Value;                  // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_ComponentBoundEvent_Position_2;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86BF[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDungeonSupply                       K2Node_ComponentBoundEvent_DungeonSupply;          // 0x00C4(0x0008)(NoDestructor)
	struct FVector2D                              K2Node_ComponentBoundEvent_Position_1;             // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_ComponentBoundEvent_Position;               // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UQuestRewardIcon_C* Sender)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00DC(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail) == 0x0000F0, "Wrong size on UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_MakeStruct_SlateColor_1) == 0x000048, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, CallFunc_Create_ReturnValue_1) == 0x000070, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, CallFunc_Create_ReturnValue_2) == 0x000078, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, CallFunc_Create_ReturnValue_3) == 0x000080, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_CreateDelegate_OutputDelegate_1) == 0x000088, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_CreateDelegate_OutputDelegate_2) == 0x000098, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_CustomEvent_Sender) == 0x0000A8, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_ComponentBoundEvent_EntryConditionType) == 0x0000B0, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_ComponentBoundEvent_EntryConditionType' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_ComponentBoundEvent_Value) == 0x0000B4, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_ComponentBoundEvent_Position_2) == 0x0000B8, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_ComponentBoundEvent_Position_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C0, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_ComponentBoundEvent_DungeonSupply) == 0x0000C4, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_ComponentBoundEvent_DungeonSupply' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_ComponentBoundEvent_Position_1) == 0x0000CC, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_ComponentBoundEvent_Position_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_ComponentBoundEvent_Position) == 0x0000D4, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_ComponentBoundEvent_Position' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000DC, "Member 'UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature, Position) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature::Position' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature, Position) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature::Position' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature, DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature::DungeonSupply' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature final
{
public:
	EntryConditionType                            EntryConditionType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86C0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Value;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature) == 0x000010, "Wrong size on UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature, EntryConditionType) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature::EntryConditionType' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature, Value) == 0x000004, "Member 'UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature::Value' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature, Position) == 0x000008, "Member 'UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature::Position' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickRewardIconEvent
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_OnClickRewardIconEvent final
{
public:
	class UQuestRewardIcon_C*                     Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_OnClickRewardIconEvent) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_OnClickRewardIconEvent");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_OnClickRewardIconEvent) == 0x000008, "Wrong size on UMG_MatchingMenu_MissionDetail_C_OnClickRewardIconEvent");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_OnClickRewardIconEvent, Sender) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_OnClickRewardIconEvent::Sender' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetDungeonInfo
// 0x02D0 (0x02D0 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo final
{
public:
	struct FSBMapInfo                             DungeonMapInfo;                                    // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         L_Test_EntryScbNum;                                // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Test_EntrySubLv;                                 // 0x01E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           L_Test_EntryQuest;                                 // 0x01E8(0x0010)(Edit, BlueprintVisible)
	TArray<ESBClassType>                          L_Test_EntryClass;                                 // 0x01F8(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86C1[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0210(0x0018)()
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0228(0x0010)(ReferenceParm)
	TArray<ESBClassType>                          K2Node_MakeArray_Array_1;                          // 0x0238(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetHelpMatchingModeId_ReturnValue;        // 0x0248(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Get_Reward_Search_Name_SearchName;        // 0x024C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86C2[0x3];                                     // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0258(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86C3[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0278(0x0018)()
	class FString                                 CallFunc_GetDungeonDisplayDesc_ReturnValue;        // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x02A0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02B8(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo) == 0x0002D0, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, DungeonMapInfo) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::DungeonMapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, L_Test_EntryScbNum) == 0x0001E0, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::L_Test_EntryScbNum' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, L_Test_EntrySubLv) == 0x0001E4, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::L_Test_EntrySubLv' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, L_Test_EntryQuest) == 0x0001E8, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::L_Test_EntryQuest' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, L_Test_EntryClass) == 0x0001F8, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::L_Test_EntryClass' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, Temp_bool_Variable) == 0x000208, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, Temp_text_Variable) == 0x000210, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, K2Node_MakeArray_Array) == 0x000228, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, K2Node_MakeArray_Array_1) == 0x000238, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, CallFunc_GetHelpMatchingModeId_ReturnValue) == 0x000248, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::CallFunc_GetHelpMatchingModeId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, CallFunc_Get_Reward_Search_Name_SearchName) == 0x00024C, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::CallFunc_Get_Reward_Search_Name_SearchName' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000254, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, CallFunc_Conv_IntToText_ReturnValue) == 0x000258, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000270, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, K2Node_Select_Default) == 0x000278, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, CallFunc_GetDungeonDisplayDesc_ReturnValue) == 0x000290, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::CallFunc_GetDungeonDisplayDesc_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0002A0, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x0002B8, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetDungeonInfo2
// 0x0278 (0x0278 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2 final
{
public:
	struct FSBMapInfo                             DungeonMapInfo;                                    // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         L_Test_EntryScbNum;                                // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Test_EntrySubLv;                                 // 0x01E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           L_Test_EntryQuest;                                 // 0x01E8(0x0010)(Edit, BlueprintVisible)
	TArray<ESBClassType>                          L_Test_EntryClass;                                 // 0x01F8(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0208(0x0010)(ReferenceParm)
	TArray<ESBClassType>                          K2Node_MakeArray_Array_1;                          // 0x0218(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDungeonDisplayDesc_ReturnValue;        // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0260(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2) == 0x000278, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, DungeonMapInfo) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::DungeonMapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, L_Test_EntryScbNum) == 0x0001E0, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::L_Test_EntryScbNum' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, L_Test_EntrySubLv) == 0x0001E4, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::L_Test_EntrySubLv' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, L_Test_EntryQuest) == 0x0001E8, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::L_Test_EntryQuest' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, L_Test_EntryClass) == 0x0001F8, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::L_Test_EntryClass' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, K2Node_MakeArray_Array) == 0x000208, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, K2Node_MakeArray_Array_1) == 0x000218, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, CallFunc_Conv_IntToString_ReturnValue) == 0x000228, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, CallFunc_Concat_StrStr_ReturnValue) == 0x000238, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, CallFunc_Conv_StringToName_ReturnValue) == 0x000248, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, CallFunc_GetDungeonDisplayDesc_ReturnValue) == 0x000250, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::CallFunc_GetDungeonDisplayDesc_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2, CallFunc_Conv_StringToText_ReturnValue) == 0x000260, "Member 'UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetTimeLimit
// 0x0088 (0x0088 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetTimeLimit final
{
public:
	int32                                         TimeLimit;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86C4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86C5[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86C6[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetTimeLimit");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit) == 0x000088, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetTimeLimit");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit, TimeLimit) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetTimeLimit::TimeLimit' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'UMG_MatchingMenu_MissionDetail_C_SetTimeLimit::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit, CallFunc_Percent_IntInt_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_MissionDetail_C_SetTimeLimit::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetTimeLimit::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit, CallFunc_Divide_IntInt_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_MissionDetail_C_SetTimeLimit::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit, CallFunc_Conv_TextToString_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_MissionDetail_C_SetTimeLimit::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit, CallFunc_Conv_IntToString_ReturnValue) == 0x000040, "Member 'UMG_MatchingMenu_MissionDetail_C_SetTimeLimit::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit, CallFunc_Concat_StrStr_ReturnValue) == 0x000050, "Member 'UMG_MatchingMenu_MissionDetail_C_SetTimeLimit::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'UMG_MatchingMenu_MissionDetail_C_SetTimeLimit::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetTimeLimit, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'UMG_MatchingMenu_MissionDetail_C_SetTimeLimit::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetEntryCondition
// 0x0070 (0x0070 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetEntryCondition final
{
public:
	int32                                         RequiredBattleScore;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LevelSync;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequiredAdventurerRank;                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_EntryConditionId;                            // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEntryConditionPartyState                   RequiredPartyState;                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86C7[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RequiredClassLevel;                                // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Param_EntryConditionQuest;                         // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<ESBClassType>                          Param_EntryConditionClass;                         // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         EntryConditionSubClassLv;                          // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EntryConditionScbNum;                              // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Added;                                             // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidVariationMission_ReturnValue;        // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidVariationMission_ReturnValue_1;      // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidKiwami_ReturnValue;                  // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBEntryConditionPartyState                   Temp_byte_Variable;                                // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86C8[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckEquipItemOr_ReturnValue;             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetTotalPower_ReturnValue;                // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetEntryCondition");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition) == 0x000070, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetEntryCondition");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, RequiredBattleScore) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::RequiredBattleScore' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, LevelSync) == 0x000004, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::LevelSync' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, RequiredAdventurerRank) == 0x000008, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::RequiredAdventurerRank' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, Param_EntryConditionId) == 0x00000C, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::Param_EntryConditionId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, RequiredPartyState) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::RequiredPartyState' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, RequiredClassLevel) == 0x000014, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::RequiredClassLevel' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, Param_EntryConditionQuest) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::Param_EntryConditionQuest' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, Param_EntryConditionClass) == 0x000028, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::Param_EntryConditionClass' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, EntryConditionSubClassLv) == 0x000038, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::EntryConditionSubClassLv' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, EntryConditionScbNum) == 0x00003C, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::EntryConditionScbNum' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, Added) == 0x000040, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::Added' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, Temp_bool_Variable) == 0x000041, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, Temp_bool_Variable_1) == 0x000042, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, Temp_bool_Variable_2) == 0x000043, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_ValidVariationMission_ReturnValue) == 0x000044, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_ValidVariationMission_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_ValidVariationMission_ReturnValue_1) == 0x000045, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_ValidVariationMission_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_ValidKiwami_ReturnValue) == 0x000046, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_ValidKiwami_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, Temp_byte_Variable) == 0x000047, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_GetClassLevel_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00004C, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_Greater_IntInt_ReturnValue) == 0x00004D, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_GetCurrentParty_OutPartyState) == 0x000050, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_GetCurrentParty_ReturnValue) == 0x000058, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00005A, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, K2Node_Select_Default) == 0x00005B, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_GetAdventurerRank_ReturnValue) == 0x00005C, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000060, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_CheckEquipItemOr_ReturnValue) == 0x000061, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_CheckEquipItemOr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000062, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000063, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_GetTotalPower_ReturnValue) == 0x000064, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_GetTotalPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000068, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000069, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetEntryCondition2
// 0x001C (0x001C - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2 final
{
public:
	int32                                         RequiredBattleScore;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequiredClassLevel;                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Added;                                             // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86C9[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86CA[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalPower_ReturnValue;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2) == 0x000004, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2) == 0x00001C, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2, RequiredBattleScore) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2::RequiredBattleScore' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2, RequiredClassLevel) == 0x000004, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2::RequiredClassLevel' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2, Added) == 0x000008, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2::Added' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2, CallFunc_GetClassLevel_ReturnValue) == 0x00000C, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2, CallFunc_Greater_IntInt_ReturnValue) == 0x000011, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2, CallFunc_GetTotalPower_ReturnValue) == 0x000014, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2::CallFunc_GetTotalPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000019, "Member 'UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetWebButton
// 0x0018 (0x0018 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetWebButton final
{
public:
	class FString                                 InSiteUrl;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetWebButton) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetWebButton");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetWebButton) == 0x000018, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetWebButton");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetWebButton, InSiteUrl) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetWebButton::InSiteUrl' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetWebButton, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetWebButton::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList
// 0x0068 (0x0068 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetRewardList final
{
public:
	class FName                                   DungeonId;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DungeonRewardId;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 DungeonGameMode;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBClassType                                  TmpClassType;                                      // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86CB[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        CallFunc_GetEffectiveRewardBoostMissionData_RewardBoostMissionData; // 0x0038(0x0028)(NoDestructor)
	bool                                          CallFunc_GetEffectiveRewardBoostMissionData_ReturnValue; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetRewardList) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetRewardList");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetRewardList) == 0x000068, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetRewardList");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList, DungeonId) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList::DungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList, DungeonRewardId) == 0x000008, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList::DungeonRewardId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList, DungeonGameMode) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList::DungeonGameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList, TmpClassType) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList::TmpClassType' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList, CallFunc_GetSBPlayerController_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList, CallFunc_GetEffectiveRewardBoostMissionData_RewardBoostMissionData) == 0x000038, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList::CallFunc_GetEffectiveRewardBoostMissionData_RewardBoostMissionData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList, CallFunc_GetEffectiveRewardBoostMissionData_ReturnValue) == 0x000060, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList::CallFunc_GetEffectiveRewardBoostMissionData_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList2
// 0x0068 (0x0068 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetRewardList2 final
{
public:
	class FName                                   DungeonId;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DungeonRewardId;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 DungeonGameMode;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBClassType                                  TmpClassType;                                      // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86CC[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        CallFunc_GetEffectiveRewardBoostMissionData_RewardBoostMissionData; // 0x0038(0x0028)(NoDestructor)
	bool                                          CallFunc_GetEffectiveRewardBoostMissionData_ReturnValue; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetRewardList2) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetRewardList2");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetRewardList2) == 0x000068, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetRewardList2");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList2, DungeonId) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList2::DungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList2, DungeonRewardId) == 0x000008, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList2::DungeonRewardId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList2, DungeonGameMode) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList2::DungeonGameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList2, TmpClassType) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList2::TmpClassType' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList2, CallFunc_GetSBPlayerController_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList2::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList2, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList2::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList2, CallFunc_GetEffectiveRewardBoostMissionData_RewardBoostMissionData) == 0x000038, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList2::CallFunc_GetEffectiveRewardBoostMissionData_RewardBoostMissionData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList2, CallFunc_GetEffectiveRewardBoostMissionData_ReturnValue) == 0x000060, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList2::CallFunc_GetEffectiveRewardBoostMissionData_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstRanked
// 0x0048 (0x0048 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked final
{
public:
	class FString                                 GameMode;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   DungeonId;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x0018(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked) == 0x000048, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked, GameMode) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked::GameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked, DungeonId) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked::DungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked, RewardBoostData) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked, RewardBoostIsValid) == 0x000040, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked::RewardBoostIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000041, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000042, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked, CallFunc_BooleanOR_ReturnValue) == 0x000043, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_NormalRanked
// 0x0048 (0x0048 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked final
{
public:
	class FString                                 GameMode;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   DungeonId;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x0018(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked) == 0x000048, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked, GameMode) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked::GameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked, DungeonId) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked::DungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked, RewardBoostData) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked, RewardBoostIsValid) == 0x000040, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked::RewardBoostIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000041, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstNormal
// 0x0050 (0x0050 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal final
{
public:
	class FString                                 GameMode;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   DungeonId;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RewardId;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x0020(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal) == 0x000050, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal, GameMode) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal::GameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal, DungeonId) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal::DungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal, RewardId) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal::RewardId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal, RewardBoostData) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal, RewardBoostIsValid) == 0x000048, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal::RewardBoostIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000049, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstNormal2
// 0x0050 (0x0050 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2 final
{
public:
	class FString                                 GameMode;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   DungeonId;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RewardId;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x0020(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2) == 0x000050, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2, GameMode) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2::GameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2, DungeonId) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2::DungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2, RewardId) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2::RewardId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2, RewardBoostData) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2, RewardBoostIsValid) == 0x000048, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2::RewardBoostIsValid' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_LimitTermFirst
// 0x0050 (0x0050 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst final
{
public:
	class FString                                 GameMode;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   DungeonId;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RewardId;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x0020(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst) == 0x000050, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst, GameMode) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst::GameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst, DungeonId) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst::DungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst, RewardId) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst::RewardId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst, RewardBoostData) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst, RewardBoostIsValid) == 0x000048, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst::RewardBoostIsValid' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_Plus
// 0x0020 (0x0020 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus final
{
public:
	class FString                                 GameMode;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   DungeonId;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RewardId;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus) == 0x000020, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus, GameMode) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus::GameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus, DungeonId) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus::DungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus, RewardId) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus::RewardId' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_Plus2
// 0x0020 (0x0020 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2 final
{
public:
	class FString                                 GameMode;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   DungeonId;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RewardId;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2) == 0x000020, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2, GameMode) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2::GameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2, DungeonId) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2::DungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2, RewardId) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2::RewardId' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_HelpBonus
// 0x0058 (0x0058 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus final
{
public:
	class FString                                 GameMode;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   DungeonId;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RewardId;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x0020(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86CD[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus) == 0x000058, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus, GameMode) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus::GameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus, DungeonId) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus::DungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus, RewardId) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus::RewardId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus, RewardBoostData) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus, RewardBoostIsValid) == 0x000048, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus::RewardBoostIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus, CallFunc_GetTokenAmount_ReturnValue) == 0x00004C, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetStackB
// 0x0078 (0x0078 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_SetStackB final
{
public:
	ESBStackBEnableType                           StackB;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86CE[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_SetStackB) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_SetStackB");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_SetStackB) == 0x000078, "Wrong size on UMG_MatchingMenu_MissionDetail_C_SetStackB");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetStackB, StackB) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_SetStackB::StackB' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetStackB, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'UMG_MatchingMenu_MissionDetail_C_SetStackB::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetStackB, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_MissionDetail_C_SetStackB::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetStackB, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_SetStackB::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetStackB, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_SetStackB::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetStackB, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_SetStackB::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetStackB, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_MissionDetail_C_SetStackB::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetStackB, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000038, "Member 'UMG_MatchingMenu_MissionDetail_C_SetStackB::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetStackB, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_MissionDetail_C_SetStackB::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_SetStackB, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'UMG_MatchingMenu_MissionDetail_C_SetStackB::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionClass
// 0x0030 (0x0030 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass final
{
public:
	TArray<ESBClassType>                          Param_Class;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Passed;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86CF[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_Array_Get_Item;                           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86D0[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass) == 0x000030, "Wrong size on UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass, Param_Class) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass::Param_Class' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass, Passed) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass::Passed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass, Temp_int_Array_Index_Variable) == 0x000014, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass, CallFunc_GetClassType_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass, CallFunc_Array_Get_Item) == 0x000021, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass, CallFunc_Less_IntInt_ReturnValue) == 0x000029, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00002A, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionQuest
// 0x0168 (0x0168 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest final
{
public:
	TArray<class FName>                           Quest;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Passed;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86D1[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   L_Master;                                          // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestMasterDataByLongId_IsExists;      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86D2[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_GetQuestMasterDataByLongId_ReturnValue;   // 0x0040(0x0118)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue;               // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x015B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86D3[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest) == 0x000168, "Wrong size on UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, Quest) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::Quest' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, Passed) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::Passed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, L_Master) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::L_Master' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, Temp_int_Array_Index_Variable) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, CallFunc_Array_Get_Item) == 0x00002C, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, CallFunc_GetQuestMasterDataByLongId_IsExists) == 0x000038, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::CallFunc_GetQuestMasterDataByLongId_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, CallFunc_GetQuestMasterDataByLongId_ReturnValue) == 0x000040, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::CallFunc_GetQuestMasterDataByLongId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, CallFunc_Less_IntInt_ReturnValue) == 0x000158, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, CallFunc_GetQuestStatus_ReturnValue) == 0x000159, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::CallFunc_GetQuestStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00015A, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00015B, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, CallFunc_GetMasterDataManager_IsValid) == 0x00015C, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest, CallFunc_GetMasterDataManager_ReturnValue) == 0x000160, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionScb
// 0x0050 (0x0050 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb final
{
public:
	int32                                         Lv;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86D4[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_Count;                                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86D5[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBClassType>                          CallFunc_GetSortedPlayerClassList_ReturnValue;     // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_Array_Get_Item;                           // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86D6[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Ex_Rank_by_Class_Lv_Rank;             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb) == 0x000050, "Wrong size on UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, Lv) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::Lv' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, Num) == 0x000004, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::Num' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, Ret) == 0x000008, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::Ret' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, L_Count) == 0x00000C, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::L_Count' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, Temp_int_Array_Index_Variable) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, Temp_int_Variable) == 0x00001C, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, CallFunc_GetSortedPlayerClassList_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::CallFunc_GetSortedPlayerClassList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, CallFunc_Array_Get_Item) == 0x00003C, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, CallFunc_Less_IntInt_ReturnValue) == 0x00003D, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x000040, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, CallFunc_Get_Ex_Rank_by_Class_Lv_Rank) == 0x000044, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::CallFunc_Get_Ex_Rank_by_Class_Lv_Rank' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000048, "Member 'UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Get Ex Rank by Class Lv
// 0x0018 (0x0018 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv final
{
public:
	int32                                         Lv;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Rank;                                              // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86D7[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv) == 0x000004, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv) == 0x000018, "Wrong size on UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv, Lv) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv::Lv' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv, Rank) == 0x000004, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv::Rank' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv, CallFunc_Divide_IntInt_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv, CallFunc_SelectInt_ReturnValue) == 0x000014, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.ClearRewardList
// 0x0001 (0x0001 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_ClearRewardList final
{
public:
	bool                                          IsHelpMode;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_ClearRewardList) == 0x000001, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_ClearRewardList");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_ClearRewardList) == 0x000001, "Wrong size on UMG_MatchingMenu_MissionDetail_C_ClearRewardList");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_ClearRewardList, IsHelpMode) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_ClearRewardList::IsHelpMode' has a wrong offset!");

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Get Reward Search Name
// 0x0088 (0x0088 - 0x0000)
struct UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name final
{
public:
	int32                                         ModeId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SearchName;                                        // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_Name;                                        // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Sub;                                               // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86D8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBHelpMatchingRewardInfo>      CallFunc_BP_GetHelpMatchingRewardInfoMasterData_ReturnValue; // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86D9[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBHelpMatchingRewardInfo              CallFunc_Array_Get_Item;                           // 0x0050(0x0020)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86DA[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name) == 0x000008, "Wrong alignment on UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name");
static_assert(sizeof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name) == 0x000088, "Wrong size on UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, ModeId) == 0x000000, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::ModeId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, SearchName) == 0x000004, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::SearchName' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, Param_Name) == 0x00000C, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::Param_Name' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, Sub) == 0x000014, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::Sub' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, Temp_int_Array_Index_Variable) == 0x000018, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_GetAdventurerRank_ReturnValue) == 0x000024, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_GetMasterDataManager_IsValid) == 0x000028, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_BP_GetHelpMatchingRewardInfoMasterData_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_BP_GetHelpMatchingRewardInfoMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_Array_Get_Item) == 0x000050, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_Conv_StringToName_ReturnValue) == 0x000074, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_Subtract_IntInt_ReturnValue) == 0x00007C, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000080, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_Less_IntInt_ReturnValue_1) == 0x000081, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000082, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name, CallFunc_BooleanAND_ReturnValue) == 0x000083, "Member 'UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

