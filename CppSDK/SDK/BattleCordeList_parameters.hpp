#pragma once

 

// Package: BattleCordeList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BattleCordeList.BattleCordeList_C.OnCordeListItemPresssed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeList_C_OnCordeListItemPresssed__DelegateSignature final
{
public:
	class UBattleCordeListItem_C*                 InListItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeList_C_OnCordeListItemPresssed__DelegateSignature) == 0x000008, "Wrong alignment on BattleCordeList_C_OnCordeListItemPresssed__DelegateSignature");
static_assert(sizeof(BattleCordeList_C_OnCordeListItemPresssed__DelegateSignature) == 0x000008, "Wrong size on BattleCordeList_C_OnCordeListItemPresssed__DelegateSignature");
static_assert(offsetof(BattleCordeList_C_OnCordeListItemPresssed__DelegateSignature, InListItem) == 0x000000, "Member 'BattleCordeList_C_OnCordeListItemPresssed__DelegateSignature::InListItem' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.OnCordeReplaceBtnPressed__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature final
{
public:
	class UBattleCordeListItem_C*                 InSrcCordeListItem;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleCordeListItem_C*                 InDstCordListItem;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature) == 0x000008, "Wrong alignment on BattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature");
static_assert(sizeof(BattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature) == 0x000010, "Wrong size on BattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature");
static_assert(offsetof(BattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature, InSrcCordeListItem) == 0x000000, "Member 'BattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature::InSrcCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature, InDstCordListItem) == 0x000008, "Member 'BattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature::InDstCordListItem' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.OnCordeDeleteBtnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeList_C_OnCordeDeleteBtnPressed__DelegateSignature final
{
public:
	class UBattleCordeListItem_C*                 InSelectedCordeListItem;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeList_C_OnCordeDeleteBtnPressed__DelegateSignature) == 0x000008, "Wrong alignment on BattleCordeList_C_OnCordeDeleteBtnPressed__DelegateSignature");
static_assert(sizeof(BattleCordeList_C_OnCordeDeleteBtnPressed__DelegateSignature) == 0x000008, "Wrong size on BattleCordeList_C_OnCordeDeleteBtnPressed__DelegateSignature");
static_assert(offsetof(BattleCordeList_C_OnCordeDeleteBtnPressed__DelegateSignature, InSelectedCordeListItem) == 0x000000, "Member 'BattleCordeList_C_OnCordeDeleteBtnPressed__DelegateSignature::InSelectedCordeListItem' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.OnCordeRenameBtnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeList_C_OnCordeRenameBtnPressed__DelegateSignature final
{
public:
	class UBattleCordeListItem_C*                 InSelectedCordeListItem;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeList_C_OnCordeRenameBtnPressed__DelegateSignature) == 0x000008, "Wrong alignment on BattleCordeList_C_OnCordeRenameBtnPressed__DelegateSignature");
static_assert(sizeof(BattleCordeList_C_OnCordeRenameBtnPressed__DelegateSignature) == 0x000008, "Wrong size on BattleCordeList_C_OnCordeRenameBtnPressed__DelegateSignature");
static_assert(offsetof(BattleCordeList_C_OnCordeRenameBtnPressed__DelegateSignature, InSelectedCordeListItem) == 0x000000, "Member 'BattleCordeList_C_OnCordeRenameBtnPressed__DelegateSignature::InSelectedCordeListItem' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.OnCordeDataLoaded__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeList_C_OnCordeDataLoaded__DelegateSignature final
{
public:
	bool                                          InIsDataLoadSuccessed;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_OnCordeDataLoaded__DelegateSignature) == 0x000001, "Wrong alignment on BattleCordeList_C_OnCordeDataLoaded__DelegateSignature");
static_assert(sizeof(BattleCordeList_C_OnCordeDataLoaded__DelegateSignature) == 0x000001, "Wrong size on BattleCordeList_C_OnCordeDataLoaded__DelegateSignature");
static_assert(offsetof(BattleCordeList_C_OnCordeDataLoaded__DelegateSignature, InIsDataLoadSuccessed) == 0x000000, "Member 'BattleCordeList_C_OnCordeDataLoaded__DelegateSignature::InIsDataLoadSuccessed' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.ExecuteUbergraph_BattleCordeList
// 0x0118 (0x0118 - 0x0000)
struct BattleCordeList_C_ExecuteUbergraph_BattleCordeList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0008(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_808F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class UBattleCordeListItem_C*                 K2Node_CustomEvent_InSelf;                         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8090[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UBattleCordeListItem_C* InSelf)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8091[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleCordeListItem_C*                 K2Node_ComponentBoundEvent_InSelf;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8092[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData;                // 0x0088(0x0018)()
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData_1;              // 0x00A0(0x0018)()
	bool                                          CallFunc_GetCordeListItemOneUpByCordeId_OutIsValid; // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8093[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 CallFunc_GetCordeListItemOneUpByCordeId_OutCordeListItem; // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCordeListItemOneDownByCordeId_OutIsValid; // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8094[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 CallFunc_GetCordeListItemOneDownByCordeId_OutCordeListItem; // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8095[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8096[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 K2Node_DynamicCast_AsBattle_Corde_List_Item;       // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8097[0x1];                                     // 0x0103(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x0108(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList) == 0x000008, "Wrong alignment on BattleCordeList_C_ExecuteUbergraph_BattleCordeList");
static_assert(sizeof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList) == 0x000118, "Wrong size on BattleCordeList_C_ExecuteUbergraph_BattleCordeList");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, EntryPoint) == 0x000000, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, K2Node_CustomEvent_RetCode) == 0x000004, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_GetSBRetMessage_ReturnValue) == 0x000008, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, K2Node_CustomEvent_InSelf) == 0x000038, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::K2Node_CustomEvent_InSelf' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000040, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, K2Node_CreateDelegate_OutputDelegate_1) == 0x00005C, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_IsValid_ReturnValue_2) == 0x00006C, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_GetChildrenCount_ReturnValue) == 0x000070, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000074, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, K2Node_ComponentBoundEvent_InSelf) == 0x000078, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::K2Node_ComponentBoundEvent_InSelf' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_IsValid_ReturnValue_3) == 0x000080, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_GetCordeData_OutCordeData) == 0x000088, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_GetCordeData_OutCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_GetCordeData_OutCordeData_1) == 0x0000A0, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_GetCordeData_OutCordeData_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_GetCordeListItemOneUpByCordeId_OutIsValid) == 0x0000B8, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_GetCordeListItemOneUpByCordeId_OutIsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_GetCordeListItemOneUpByCordeId_OutCordeListItem) == 0x0000C0, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_GetCordeListItemOneUpByCordeId_OutCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_GetCordeListItemOneDownByCordeId_OutIsValid) == 0x0000C8, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_GetCordeListItemOneDownByCordeId_OutIsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_GetCordeListItemOneDownByCordeId_OutCordeListItem) == 0x0000D0, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_GetCordeListItemOneDownByCordeId_OutCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, Temp_int_Variable) == 0x0000D8, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x0000E0, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_GetChildAt_ReturnValue) == 0x0000E8, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_IsValid_ReturnValue_4) == 0x0000F0, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_IsValid_ReturnValue_5) == 0x0000F1, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, K2Node_DynamicCast_AsBattle_Corde_List_Item) == 0x0000F8, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::K2Node_DynamicCast_AsBattle_Corde_List_Item' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_IsValid_ReturnValue_6) == 0x000101, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000102, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, CallFunc_Add_IntInt_ReturnValue) == 0x000104, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_ExecuteUbergraph_BattleCordeList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000108, "Member 'BattleCordeList_C_ExecuteUbergraph_BattleCordeList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeList_C_BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature final
{
public:
	class UBattleCordeListItem_C*                 InSelf;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeList_C_BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on BattleCordeList_C_BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
static_assert(sizeof(BattleCordeList_C_BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature) == 0x000008, "Wrong size on BattleCordeList_C_BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
static_assert(offsetof(BattleCordeList_C_BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature, InSelf) == 0x000000, "Member 'BattleCordeList_C_BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature::InSelf' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.OnCordeListItemClickedEvent
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeList_C_OnCordeListItemClickedEvent final
{
public:
	class UBattleCordeListItem_C*                 InSelf;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeList_C_OnCordeListItemClickedEvent) == 0x000008, "Wrong alignment on BattleCordeList_C_OnCordeListItemClickedEvent");
static_assert(sizeof(BattleCordeList_C_OnCordeListItemClickedEvent) == 0x000008, "Wrong size on BattleCordeList_C_OnCordeListItemClickedEvent");
static_assert(offsetof(BattleCordeList_C_OnCordeListItemClickedEvent, InSelf) == 0x000000, "Member 'BattleCordeList_C_OnCordeListItemClickedEvent::InSelf' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.OnLoadPresetEquipmentList
// 0x0004 (0x0004 - 0x0000)
struct BattleCordeList_C_OnLoadPresetEquipmentList final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeList_C_OnLoadPresetEquipmentList) == 0x000004, "Wrong alignment on BattleCordeList_C_OnLoadPresetEquipmentList");
static_assert(sizeof(BattleCordeList_C_OnLoadPresetEquipmentList) == 0x000004, "Wrong size on BattleCordeList_C_OnLoadPresetEquipmentList");
static_assert(offsetof(BattleCordeList_C_OnLoadPresetEquipmentList, RetCode) == 0x000000, "Member 'BattleCordeList_C_OnLoadPresetEquipmentList::RetCode' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.Init
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeList_C_Init final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_Init) == 0x000001, "Wrong alignment on BattleCordeList_C_Init");
static_assert(sizeof(BattleCordeList_C_Init) == 0x000001, "Wrong size on BattleCordeList_C_Init");
static_assert(offsetof(BattleCordeList_C_Init, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleCordeList_C_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.CreateCordeList
// 0x0068 (0x0068 - 0x0000)
struct BattleCordeList_C_CreateCordeList final
{
public:
	TArray<struct FSBPlayerPresetEquipList>       LocalPresetEquipList;                              // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8098[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_Array_Get_Item;                           // 0x0020(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8099[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCordeListItemByCordeId_OutIsValid;     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_809A[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 CallFunc_GetCordeListItemByCordeId_OutCordeListItem; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPlayerPresetEquipList>       CallFunc_GetPlayerPresetEquipList_OutParam;        // 0x0050(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetPlayerPresetEquipList_ReturnValue;     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_CreateCordeList) == 0x000008, "Wrong alignment on BattleCordeList_C_CreateCordeList");
static_assert(sizeof(BattleCordeList_C_CreateCordeList) == 0x000068, "Wrong size on BattleCordeList_C_CreateCordeList");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, LocalPresetEquipList) == 0x000000, "Member 'BattleCordeList_C_CreateCordeList::LocalPresetEquipList' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BattleCordeList_C_CreateCordeList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BattleCordeList_C_CreateCordeList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BattleCordeList_C_CreateCordeList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, CallFunc_Array_Get_Item) == 0x000020, "Member 'BattleCordeList_C_CreateCordeList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BattleCordeList_C_CreateCordeList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000039, "Member 'BattleCordeList_C_CreateCordeList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BattleCordeList_C_CreateCordeList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BattleCordeList_C_CreateCordeList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, CallFunc_GetCordeListItemByCordeId_OutIsValid) == 0x000041, "Member 'BattleCordeList_C_CreateCordeList::CallFunc_GetCordeListItemByCordeId_OutIsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, CallFunc_GetCordeListItemByCordeId_OutCordeListItem) == 0x000048, "Member 'BattleCordeList_C_CreateCordeList::CallFunc_GetCordeListItemByCordeId_OutCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, CallFunc_GetPlayerPresetEquipList_OutParam) == 0x000050, "Member 'BattleCordeList_C_CreateCordeList::CallFunc_GetPlayerPresetEquipList_OutParam' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, CallFunc_GetPlayerPresetEquipList_ReturnValue) == 0x000060, "Member 'BattleCordeList_C_CreateCordeList::CallFunc_GetPlayerPresetEquipList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_CreateCordeList, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'BattleCordeList_C_CreateCordeList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.AddCordeListItem
// 0x0048 (0x0048 - 0x0000)
struct BattleCordeList_C_AddCordeListItem final
{
public:
	struct FSBPlayerPresetEquipList               InCordeData;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	TDelegate<void(class UBattleCordeListItem_C* InSelf)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UBattleCordeListItem_C*                 CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_809B[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScrollBoxSlot*                         CallFunc_SlotAsScrollBoxSlot_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeList_C_AddCordeListItem) == 0x000008, "Wrong alignment on BattleCordeList_C_AddCordeListItem");
static_assert(sizeof(BattleCordeList_C_AddCordeListItem) == 0x000048, "Wrong size on BattleCordeList_C_AddCordeListItem");
static_assert(offsetof(BattleCordeList_C_AddCordeListItem, InCordeData) == 0x000000, "Member 'BattleCordeList_C_AddCordeListItem::InCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_AddCordeListItem, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BattleCordeList_C_AddCordeListItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_AddCordeListItem, CallFunc_Create_ReturnValue) == 0x000028, "Member 'BattleCordeList_C_AddCordeListItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_AddCordeListItem, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BattleCordeList_C_AddCordeListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_AddCordeListItem, CallFunc_SlotAsScrollBoxSlot_ReturnValue) == 0x000038, "Member 'BattleCordeList_C_AddCordeListItem::CallFunc_SlotAsScrollBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_AddCordeListItem, CallFunc_AddChild_ReturnValue) == 0x000040, "Member 'BattleCordeList_C_AddCordeListItem::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.SetupCurrEquippedBattleSetInfo
// 0x0038 (0x0038 - 0x0000)
struct BattleCordeList_C_SetupCurrEquippedBattleSetInfo final
{
public:
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_809C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipList               K2Node_MakeStruct_SBPlayerPresetEquipList;         // 0x0018(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_SetupCurrEquippedBattleSetInfo) == 0x000008, "Wrong alignment on BattleCordeList_C_SetupCurrEquippedBattleSetInfo");
static_assert(sizeof(BattleCordeList_C_SetupCurrEquippedBattleSetInfo) == 0x000038, "Wrong size on BattleCordeList_C_SetupCurrEquippedBattleSetInfo");
static_assert(offsetof(BattleCordeList_C_SetupCurrEquippedBattleSetInfo, CallFunc_GetPlayerClassType_ClassType) == 0x000000, "Member 'BattleCordeList_C_SetupCurrEquippedBattleSetInfo::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetupCurrEquippedBattleSetInfo, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'BattleCordeList_C_SetupCurrEquippedBattleSetInfo::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetupCurrEquippedBattleSetInfo, K2Node_MakeStruct_SBPlayerPresetEquipList) == 0x000018, "Member 'BattleCordeList_C_SetupCurrEquippedBattleSetInfo::K2Node_MakeStruct_SBPlayerPresetEquipList' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetupCurrEquippedBattleSetInfo, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BattleCordeList_C_SetupCurrEquippedBattleSetInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.GetCurrEquippedBattleCordeName
// 0x0030 (0x0030 - 0x0000)
struct BattleCordeList_C_GetCurrEquippedBattleCordeName final
{
public:
	class FString                                 OutCordeName;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData;                // 0x0010(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_GetCurrEquippedBattleCordeName) == 0x000008, "Wrong alignment on BattleCordeList_C_GetCurrEquippedBattleCordeName");
static_assert(sizeof(BattleCordeList_C_GetCurrEquippedBattleCordeName) == 0x000030, "Wrong size on BattleCordeList_C_GetCurrEquippedBattleCordeName");
static_assert(offsetof(BattleCordeList_C_GetCurrEquippedBattleCordeName, OutCordeName) == 0x000000, "Member 'BattleCordeList_C_GetCurrEquippedBattleCordeName::OutCordeName' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCurrEquippedBattleCordeName, CallFunc_GetCordeData_OutCordeData) == 0x000010, "Member 'BattleCordeList_C_GetCurrEquippedBattleCordeName::CallFunc_GetCordeData_OutCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCurrEquippedBattleCordeName, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BattleCordeList_C_GetCurrEquippedBattleCordeName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.GetCurrEquippedCordeData
// 0x0038 (0x0038 - 0x0000)
struct BattleCordeList_C_GetCurrEquippedCordeData final
{
public:
	struct FSBPlayerPresetEquipList               OutCordeData;                                      // 0x0000(0x0018)(Parm, OutParm)
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData;                // 0x0018(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_GetCurrEquippedCordeData) == 0x000008, "Wrong alignment on BattleCordeList_C_GetCurrEquippedCordeData");
static_assert(sizeof(BattleCordeList_C_GetCurrEquippedCordeData) == 0x000038, "Wrong size on BattleCordeList_C_GetCurrEquippedCordeData");
static_assert(offsetof(BattleCordeList_C_GetCurrEquippedCordeData, OutCordeData) == 0x000000, "Member 'BattleCordeList_C_GetCurrEquippedCordeData::OutCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCurrEquippedCordeData, CallFunc_GetCordeData_OutCordeData) == 0x000018, "Member 'BattleCordeList_C_GetCurrEquippedCordeData::CallFunc_GetCordeData_OutCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCurrEquippedCordeData, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BattleCordeList_C_GetCurrEquippedCordeData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.UpdateCordeListSelectedItem
// 0x00E8 (0x00E8 - 0x0000)
struct BattleCordeList_C_UpdateCordeListSelectedItem final
{
public:
	class UBattleCordeListItem_C*                 InSelectedCordeListItem;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleCordeListItem_C*                 LocalSelectedCordeListItem;                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSelectedCordeListItemId;                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalListItemCnt;                                  // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsDefaultEquippedCorde;                       // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_809D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               LocalSelectedCordeData;                            // 0x0020(0x0018)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_809E[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_809F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData;                // 0x0048(0x0018)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80A0[0x1];                                     // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80A1[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80A2[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80A3[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 K2Node_DynamicCast_AsBattle_Corde_List_Item;       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80A4[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData_1;              // 0x0098(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80A5[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80A6[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80A7[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 K2Node_DynamicCast_AsBattle_Corde_List_Item_1;     // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_UpdateCordeListSelectedItem) == 0x000008, "Wrong alignment on BattleCordeList_C_UpdateCordeListSelectedItem");
static_assert(sizeof(BattleCordeList_C_UpdateCordeListSelectedItem) == 0x0000E8, "Wrong size on BattleCordeList_C_UpdateCordeListSelectedItem");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, InSelectedCordeListItem) == 0x000000, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::InSelectedCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, LocalSelectedCordeListItem) == 0x000008, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::LocalSelectedCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, LocalSelectedCordeListItemId) == 0x000010, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::LocalSelectedCordeListItemId' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, LocalListItemCnt) == 0x000014, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::LocalListItemCnt' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, LocalIsDefaultEquippedCorde) == 0x000018, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::LocalIsDefaultEquippedCorde' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, LocalSelectedCordeData) == 0x000020, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::LocalSelectedCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, Temp_int_Variable) == 0x000038, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_GetCordeData_OutCordeData) == 0x000048, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_GetCordeData_OutCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_Greater_IntInt_ReturnValue) == 0x000065, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000066, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_Add_IntInt_ReturnValue_1) == 0x000068, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_GetChildAt_ReturnValue) == 0x000070, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_GetChildrenCount_ReturnValue) == 0x000078, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_IsValid_ReturnValue_1) == 0x00007C, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000080, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000084, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, K2Node_DynamicCast_AsBattle_Corde_List_Item) == 0x000088, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::K2Node_DynamicCast_AsBattle_Corde_List_Item' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_GetCordeData_OutCordeData_1) == 0x000098, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_GetCordeData_OutCordeData_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_IsValid_ReturnValue_2) == 0x0000B0, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B1, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, Temp_int_Variable_1) == 0x0000B4, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000B8, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, Temp_int_Variable_2) == 0x0000BC, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_GetChildAt_ReturnValue_1) == 0x0000C0, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_GetChildrenCount_ReturnValue_1) == 0x0000C8, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_IsValid_ReturnValue_3) == 0x0000CC, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0000D0, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000D4, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, K2Node_DynamicCast_AsBattle_Corde_List_Item_1) == 0x0000D8, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::K2Node_DynamicCast_AsBattle_Corde_List_Item_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_IsValid_ReturnValue_4) == 0x0000E1, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_IsValid_ReturnValue_5) == 0x0000E2, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_UpdateCordeListSelectedItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000E3, "Member 'BattleCordeList_C_UpdateCordeListSelectedItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.GetDefaultEquippedCordeId
// 0x0004 (0x0004 - 0x0000)
struct BattleCordeList_C_GetDefaultEquippedCordeId final
{
public:
	int32                                         OutCordeId;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeList_C_GetDefaultEquippedCordeId) == 0x000004, "Wrong alignment on BattleCordeList_C_GetDefaultEquippedCordeId");
static_assert(sizeof(BattleCordeList_C_GetDefaultEquippedCordeId) == 0x000004, "Wrong size on BattleCordeList_C_GetDefaultEquippedCordeId");
static_assert(offsetof(BattleCordeList_C_GetDefaultEquippedCordeId, OutCordeId) == 0x000000, "Member 'BattleCordeList_C_GetDefaultEquippedCordeId::OutCordeId' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.GetCordeListItemByCordeId
// 0x0068 (0x0068 - 0x0000)
struct BattleCordeList_C_GetCordeListItemByCordeId final
{
public:
	int32                                         InCordeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80A8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 OutCordeListItem;                                  // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalCordeId;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80A9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80AA[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80AB[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 K2Node_DynamicCast_AsBattle_Corde_List_Item;       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80AC[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData;                // 0x0048(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_GetCordeListItemByCordeId) == 0x000008, "Wrong alignment on BattleCordeList_C_GetCordeListItemByCordeId");
static_assert(sizeof(BattleCordeList_C_GetCordeListItemByCordeId) == 0x000068, "Wrong size on BattleCordeList_C_GetCordeListItemByCordeId");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, InCordeId) == 0x000000, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::InCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, OutIsValid) == 0x000004, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::OutIsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, OutCordeListItem) == 0x000008, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::OutCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, LocalCordeId) == 0x000010, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::LocalCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, Temp_int_Variable) == 0x000014, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, CallFunc_GetChildrenCount_ReturnValue) == 0x000028, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000034, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, K2Node_DynamicCast_AsBattle_Corde_List_Item) == 0x000038, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::K2Node_DynamicCast_AsBattle_Corde_List_Item' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, CallFunc_GetCordeData_OutCordeData) == 0x000048, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::CallFunc_GetCordeData_OutCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemByCordeId, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000061, "Member 'BattleCordeList_C_GetCordeListItemByCordeId::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.ResetSelectedCordeToDefault
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeList_C_ResetSelectedCordeToDefault final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_ResetSelectedCordeToDefault) == 0x000001, "Wrong alignment on BattleCordeList_C_ResetSelectedCordeToDefault");
static_assert(sizeof(BattleCordeList_C_ResetSelectedCordeToDefault) == 0x000001, "Wrong size on BattleCordeList_C_ResetSelectedCordeToDefault");
static_assert(offsetof(BattleCordeList_C_ResetSelectedCordeToDefault, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleCordeList_C_ResetSelectedCordeToDefault::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceUpBtnEnable
// 0x0002 (0x0002 - 0x0000)
struct BattleCordeList_C_SetCordeListItemReplaceUpBtnEnable final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_SetCordeListItemReplaceUpBtnEnable) == 0x000001, "Wrong alignment on BattleCordeList_C_SetCordeListItemReplaceUpBtnEnable");
static_assert(sizeof(BattleCordeList_C_SetCordeListItemReplaceUpBtnEnable) == 0x000002, "Wrong size on BattleCordeList_C_SetCordeListItemReplaceUpBtnEnable");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceUpBtnEnable, InIsEnabled) == 0x000000, "Member 'BattleCordeList_C_SetCordeListItemReplaceUpBtnEnable::InIsEnabled' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceUpBtnEnable, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleCordeList_C_SetCordeListItemReplaceUpBtnEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceDownBtnEnable
// 0x0002 (0x0002 - 0x0000)
struct BattleCordeList_C_SetCordeListItemReplaceDownBtnEnable final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_SetCordeListItemReplaceDownBtnEnable) == 0x000001, "Wrong alignment on BattleCordeList_C_SetCordeListItemReplaceDownBtnEnable");
static_assert(sizeof(BattleCordeList_C_SetCordeListItemReplaceDownBtnEnable) == 0x000002, "Wrong size on BattleCordeList_C_SetCordeListItemReplaceDownBtnEnable");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceDownBtnEnable, InIsEnabled) == 0x000000, "Member 'BattleCordeList_C_SetCordeListItemReplaceDownBtnEnable::InIsEnabled' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceDownBtnEnable, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleCordeList_C_SetCordeListItemReplaceDownBtnEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceBtnsEnable
// 0x0038 (0x0038 - 0x0000)
struct BattleCordeList_C_SetCordeListItemReplaceBtnsEnable final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEnabled;                                    // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80AD[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80AE[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80AF[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B0[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBButton_C*                            K2Node_DynamicCast_AsSBButton;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable) == 0x000008, "Wrong alignment on BattleCordeList_C_SetCordeListItemReplaceBtnsEnable");
static_assert(sizeof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable) == 0x000038, "Wrong size on BattleCordeList_C_SetCordeListItemReplaceBtnsEnable");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, InIsEnabled) == 0x000000, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::InIsEnabled' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, LocalIsEnabled) == 0x000001, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::LocalIsEnabled' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, Temp_int_Variable) == 0x000004, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, K2Node_DynamicCast_AsSBButton) == 0x000028, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::K2Node_DynamicCast_AsSBButton' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemReplaceBtnsEnable, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BattleCordeList_C_SetCordeListItemReplaceBtnsEnable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.SetCordeListItemEditBtnsEnable
// 0x0038 (0x0038 - 0x0000)
struct BattleCordeList_C_SetCordeListItemEditBtnsEnable final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEnabled;                                    // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B1[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80B2[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B3[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B4[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBButton_C*                            K2Node_DynamicCast_AsSBButton;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_SetCordeListItemEditBtnsEnable) == 0x000008, "Wrong alignment on BattleCordeList_C_SetCordeListItemEditBtnsEnable");
static_assert(sizeof(BattleCordeList_C_SetCordeListItemEditBtnsEnable) == 0x000038, "Wrong size on BattleCordeList_C_SetCordeListItemEditBtnsEnable");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, InIsEnabled) == 0x000000, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::InIsEnabled' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, LocalIsEnabled) == 0x000001, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::LocalIsEnabled' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, Temp_int_Variable) == 0x000004, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, K2Node_DynamicCast_AsSBButton) == 0x000028, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::K2Node_DynamicCast_AsSBButton' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_SetCordeListItemEditBtnsEnable, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BattleCordeList_C_SetCordeListItemEditBtnsEnable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.GetCordeListItemOneUpByCordeId
// 0x0098 (0x0098 - 0x0000)
struct BattleCordeList_C_GetCordeListItemOneUpByCordeId final
{
public:
	int32                                         InCordeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 OutCordeListItem;                                  // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalChildIdUp;                                    // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalChildId;                                      // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalCordeId;                                      // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B6[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B7[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B8[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 K2Node_DynamicCast_AsBattle_Corde_List_Item;       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B9[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80BA[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80BB[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 K2Node_DynamicCast_AsBattle_Corde_List_Item_1;     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80BC[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData;                // 0x0078(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80BD[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeList_C_GetCordeListItemOneUpByCordeId) == 0x000008, "Wrong alignment on BattleCordeList_C_GetCordeListItemOneUpByCordeId");
static_assert(sizeof(BattleCordeList_C_GetCordeListItemOneUpByCordeId) == 0x000098, "Wrong size on BattleCordeList_C_GetCordeListItemOneUpByCordeId");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, InCordeId) == 0x000000, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::InCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, OutIsValid) == 0x000004, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::OutIsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, OutCordeListItem) == 0x000008, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::OutCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, LocalChildIdUp) == 0x000010, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::LocalChildIdUp' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, LocalChildId) == 0x000014, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::LocalChildId' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, LocalCordeId) == 0x000018, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::LocalCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001C, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_GetChildrenCount_ReturnValue) == 0x000024, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_GetChildAt_ReturnValue) == 0x000030, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, K2Node_DynamicCast_AsBattle_Corde_List_Item) == 0x000040, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::K2Node_DynamicCast_AsBattle_Corde_List_Item' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, Temp_int_Variable) == 0x00004C, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_GetChildAt_ReturnValue_1) == 0x000050, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000058, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_IsValid_ReturnValue_1) == 0x00005C, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000060, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000064, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, K2Node_DynamicCast_AsBattle_Corde_List_Item_1) == 0x000068, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::K2Node_DynamicCast_AsBattle_Corde_List_Item_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_GetCordeData_OutCordeData) == 0x000078, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_GetCordeData_OutCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_IsValid_ReturnValue_2) == 0x000090, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000091, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneUpByCordeId, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'BattleCordeList_C_GetCordeListItemOneUpByCordeId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.GetCordeListItemOneDownByCordeId
// 0x0098 (0x0098 - 0x0000)
struct BattleCordeList_C_GetCordeListItemOneDownByCordeId final
{
public:
	int32                                         InCordeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80BE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 OutCordeListItem;                                  // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalChildIdDown;                                  // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalChildId;                                      // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalCordeId;                                      // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80BF[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80C0[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80C1[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 K2Node_DynamicCast_AsBattle_Corde_List_Item;       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80C2[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80C3[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80C4[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 K2Node_DynamicCast_AsBattle_Corde_List_Item_1;     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80C5[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData;                // 0x0078(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80C6[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeList_C_GetCordeListItemOneDownByCordeId) == 0x000008, "Wrong alignment on BattleCordeList_C_GetCordeListItemOneDownByCordeId");
static_assert(sizeof(BattleCordeList_C_GetCordeListItemOneDownByCordeId) == 0x000098, "Wrong size on BattleCordeList_C_GetCordeListItemOneDownByCordeId");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, InCordeId) == 0x000000, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::InCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, OutIsValid) == 0x000004, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::OutIsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, OutCordeListItem) == 0x000008, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::OutCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, LocalChildIdDown) == 0x000010, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::LocalChildIdDown' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, LocalChildId) == 0x000014, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::LocalChildId' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, LocalCordeId) == 0x000018, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::LocalCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001C, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_GetChildrenCount_ReturnValue) == 0x000024, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_GetChildAt_ReturnValue) == 0x000030, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, K2Node_DynamicCast_AsBattle_Corde_List_Item) == 0x000040, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::K2Node_DynamicCast_AsBattle_Corde_List_Item' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, Temp_int_Variable) == 0x00004C, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_GetChildAt_ReturnValue_1) == 0x000050, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000058, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_IsValid_ReturnValue_1) == 0x00005C, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000064, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, K2Node_DynamicCast_AsBattle_Corde_List_Item_1) == 0x000068, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::K2Node_DynamicCast_AsBattle_Corde_List_Item_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_GetCordeData_OutCordeData) == 0x000078, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_GetCordeData_OutCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_IsValid_ReturnValue_2) == 0x000090, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000091, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_GetCordeListItemOneDownByCordeId, CallFunc_Add_IntInt_ReturnValue_1) == 0x000094, "Member 'BattleCordeList_C_GetCordeListItemOneDownByCordeId::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function BattleCordeList.BattleCordeList_C.RequestLoadCordeData
// 0x0028 (0x0028 - 0x0000)
struct BattleCordeList_C_RequestLoadCordeData final
{
public:
	bool                                          OutRequestSuccessed;                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80C7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeList_C_RequestLoadCordeData) == 0x000008, "Wrong alignment on BattleCordeList_C_RequestLoadCordeData");
static_assert(sizeof(BattleCordeList_C_RequestLoadCordeData) == 0x000028, "Wrong size on BattleCordeList_C_RequestLoadCordeData");
static_assert(offsetof(BattleCordeList_C_RequestLoadCordeData, OutRequestSuccessed) == 0x000000, "Member 'BattleCordeList_C_RequestLoadCordeData::OutRequestSuccessed' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_RequestLoadCordeData, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000008, "Member 'BattleCordeList_C_RequestLoadCordeData::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_RequestLoadCordeData, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BattleCordeList_C_RequestLoadCordeData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_RequestLoadCordeData, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BattleCordeList_C_RequestLoadCordeData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeList_C_RequestLoadCordeData, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BattleCordeList_C_RequestLoadCordeData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

