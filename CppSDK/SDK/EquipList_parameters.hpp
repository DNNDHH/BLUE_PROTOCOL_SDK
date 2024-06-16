#pragma once

 

// Package: EquipList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function EquipList.EquipList_C.OnClickedEquipList__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_OnClickedEquipList__DelegateSignature final
{
public:
	int32                                         OutItemId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53D9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_OnClickedEquipList__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_OnClickedEquipList__DelegateSignature");
static_assert(sizeof(EquipList_C_OnClickedEquipList__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_OnClickedEquipList__DelegateSignature");
static_assert(offsetof(EquipList_C_OnClickedEquipList__DelegateSignature, OutItemId) == 0x000000, "Member 'EquipList_C_OnClickedEquipList__DelegateSignature::OutItemId' has a wrong offset!");
static_assert(offsetof(EquipList_C_OnClickedEquipList__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_OnClickedEquipList__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.ExecuteUbergraph_EquipList
// 0x02B0 (0x02B0 - 0x0000)
struct EquipList_C_ExecuteUbergraph_EquipList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InCostumeOwnItemInfoList;       // 0x0018(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InUnderWearOwnItemInfoList;     // 0x0028(0x0010)(ReferenceParm)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InAccesoriesOwnItemInfoList;    // 0x0038(0x0010)(ReferenceParm)
	struct FOwnItemInfo                           K2Node_CustomEvent_InMountImagine;                 // 0x0048(0x0118)()
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_14;        // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53DA[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_14;         // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_13;        // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53DB[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_13;         // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_12;        // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53DC[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_12;         // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_11;        // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53DD[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_11;         // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_10;        // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53DE[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_10;         // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_9;         // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53DF[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_9;          // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_8;         // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E0[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_8;          // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_7;         // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E1[0x4];                                     // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_7;          // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_6;         // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E2[0x4];                                     // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_6;          // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_5;         // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E3[0x4];                                     // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_5;          // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_4;         // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E4[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_4;          // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_3;         // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E5[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_3;          // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_2;         // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E6[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_2;          // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemIndex_1;         // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E7[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId_1;          // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_ExecuteUbergraph_EquipList) == 0x000008, "Wrong alignment on EquipList_C_ExecuteUbergraph_EquipList");
static_assert(sizeof(EquipList_C_ExecuteUbergraph_EquipList) == 0x0002B0, "Wrong size on EquipList_C_ExecuteUbergraph_EquipList");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, EntryPoint) == 0x000000, "Member 'EquipList_C_ExecuteUbergraph_EquipList::EntryPoint' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex) == 0x000004, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId) == 0x000008, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_CustomEvent_InCostumeOwnItemInfoList) == 0x000018, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_CustomEvent_InCostumeOwnItemInfoList' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_CustomEvent_InUnderWearOwnItemInfoList) == 0x000028, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_CustomEvent_InUnderWearOwnItemInfoList' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_CustomEvent_InAccesoriesOwnItemInfoList) == 0x000038, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_CustomEvent_InAccesoriesOwnItemInfoList' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_CustomEvent_InMountImagine) == 0x000048, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_CustomEvent_InMountImagine' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_14) == 0x000160, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_14' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_14) == 0x000168, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_14' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_13) == 0x000178, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_13' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_13) == 0x000180, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_13' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_12) == 0x000190, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_12' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_12) == 0x000198, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_12' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_11) == 0x0001A8, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_11' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_11) == 0x0001B0, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_11' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_10) == 0x0001C0, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_10' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_10) == 0x0001C8, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_10' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_9) == 0x0001D8, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_9' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_9) == 0x0001E0, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_9' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_8) == 0x0001F0, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_8' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_8) == 0x0001F8, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_8' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_7) == 0x000208, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_7' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_7) == 0x000210, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_7' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_6) == 0x000220, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_6' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_6) == 0x000228, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_6' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_5) == 0x000238, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_5' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_5) == 0x000240, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_5' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_4) == 0x000250, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_4' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_4) == 0x000258, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_4' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_3) == 0x000268, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_3' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_3) == 0x000270, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_3' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_2) == 0x000280, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_2' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_2) == 0x000288, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_2' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outItemIndex_1) == 0x000298, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outItemIndex_1' has a wrong offset!");
static_assert(offsetof(EquipList_C_ExecuteUbergraph_EquipList, K2Node_ComponentBoundEvent_outUniqueId_1) == 0x0002A0, "Member 'EquipList_C_ExecuteUbergraph_EquipList::K2Node_ComponentBoundEvent_outUniqueId_1' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53EA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53EB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53EC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53ED[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53EE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53EF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53F0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53F1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53F2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53F3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53F4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53F5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53F6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on EquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(EquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on EquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'EquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(EquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'EquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function EquipList.EquipList_C.SetData
// 0x0148 (0x0148 - 0x0000)
struct EquipList_C_SetData final
{
public:
	TArray<struct FOwnItemInfo>                   InCostumeOwnItemInfoList;                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FOwnItemInfo>                   InUnderWearOwnItemInfoList;                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FOwnItemInfo>                   InAccesoriesOwnItemInfoList;                       // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOwnItemInfo                           InMountImagine;                                    // 0x0030(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(EquipList_C_SetData) == 0x000008, "Wrong alignment on EquipList_C_SetData");
static_assert(sizeof(EquipList_C_SetData) == 0x000148, "Wrong size on EquipList_C_SetData");
static_assert(offsetof(EquipList_C_SetData, InCostumeOwnItemInfoList) == 0x000000, "Member 'EquipList_C_SetData::InCostumeOwnItemInfoList' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetData, InUnderWearOwnItemInfoList) == 0x000010, "Member 'EquipList_C_SetData::InUnderWearOwnItemInfoList' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetData, InAccesoriesOwnItemInfoList) == 0x000020, "Member 'EquipList_C_SetData::InAccesoriesOwnItemInfoList' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetData, InMountImagine) == 0x000030, "Member 'EquipList_C_SetData::InMountImagine' has a wrong offset!");

// Function EquipList.EquipList_C.SetArmorData
// 0x0018 (0x0018 - 0x0000)
struct EquipList_C_SetArmorData final
{
public:
	TArray<struct FOwnItemInfo>                   InOwnItemList;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UArmorList_C*                           InArmorList;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_SetArmorData) == 0x000008, "Wrong alignment on EquipList_C_SetArmorData");
static_assert(sizeof(EquipList_C_SetArmorData) == 0x000018, "Wrong size on EquipList_C_SetArmorData");
static_assert(offsetof(EquipList_C_SetArmorData, InOwnItemList) == 0x000000, "Member 'EquipList_C_SetArmorData::InOwnItemList' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetArmorData, InArmorList) == 0x000010, "Member 'EquipList_C_SetArmorData::InArmorList' has a wrong offset!");

// Function EquipList.EquipList_C.SetCostumeData
// 0x0240 (0x0240 - 0x0000)
struct EquipList_C_SetCostumeData final
{
public:
	TArray<struct FOwnItemInfo>                   InCostumeData;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FOwnItemInfo>                   NewLocalVar_0;                                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	EProtectorCategory                            Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53F7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCostumeIcon_C*                         Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_2;                            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_3;                            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_4;                            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_5;                            // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_6;                            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_7;                            // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_8;                            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_9;                            // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53F8[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0088(0x0118)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCostumeMaster_bIsValid;               // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53F9[0x6];                                     // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_FindCostumeMaster_CostumeMaster;          // 0x01A8(0x0088)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53FA[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCostumeIcon_C*                         K2Node_Select_Default;                             // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_SetCostumeData) == 0x000008, "Wrong alignment on EquipList_C_SetCostumeData");
static_assert(sizeof(EquipList_C_SetCostumeData) == 0x000240, "Wrong size on EquipList_C_SetCostumeData");
static_assert(offsetof(EquipList_C_SetCostumeData, InCostumeData) == 0x000000, "Member 'EquipList_C_SetCostumeData::InCostumeData' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, NewLocalVar_0) == 0x000010, "Member 'EquipList_C_SetCostumeData::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_byte_Variable) == 0x000020, "Member 'EquipList_C_SetCostumeData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_object_Variable) == 0x000028, "Member 'EquipList_C_SetCostumeData::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_object_Variable_1) == 0x000030, "Member 'EquipList_C_SetCostumeData::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_object_Variable_2) == 0x000038, "Member 'EquipList_C_SetCostumeData::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_object_Variable_3) == 0x000040, "Member 'EquipList_C_SetCostumeData::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_object_Variable_4) == 0x000048, "Member 'EquipList_C_SetCostumeData::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_object_Variable_5) == 0x000050, "Member 'EquipList_C_SetCostumeData::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_object_Variable_6) == 0x000058, "Member 'EquipList_C_SetCostumeData::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_object_Variable_7) == 0x000060, "Member 'EquipList_C_SetCostumeData::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_object_Variable_8) == 0x000068, "Member 'EquipList_C_SetCostumeData::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_object_Variable_9) == 0x000070, "Member 'EquipList_C_SetCostumeData::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'EquipList_C_SetCostumeData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_int_Array_Index_Variable) == 0x00007C, "Member 'EquipList_C_SetCostumeData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, Temp_int_Loop_Counter_Variable) == 0x000080, "Member 'EquipList_C_SetCostumeData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, CallFunc_Array_Get_Item) == 0x000088, "Member 'EquipList_C_SetCostumeData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, CallFunc_Less_IntInt_ReturnValue) == 0x0001A0, "Member 'EquipList_C_SetCostumeData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, CallFunc_FindCostumeMaster_bIsValid) == 0x0001A1, "Member 'EquipList_C_SetCostumeData::CallFunc_FindCostumeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, CallFunc_FindCostumeMaster_CostumeMaster) == 0x0001A8, "Member 'EquipList_C_SetCostumeData::CallFunc_FindCostumeMaster_CostumeMaster' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, CallFunc_Add_IntInt_ReturnValue) == 0x000230, "Member 'EquipList_C_SetCostumeData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetCostumeData, K2Node_Select_Default) == 0x000238, "Member 'EquipList_C_SetCostumeData::K2Node_Select_Default' has a wrong offset!");

// Function EquipList.EquipList_C.SetUnderWearData
// 0x01E0 (0x01E0 - 0x0000)
struct EquipList_C_SetUnderWearData final
{
public:
	TArray<struct FOwnItemInfo>                   InUnderWearData;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FOwnItemInfo>                   NewLocalVar_0;                                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53FB[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0030(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCostumeMaster_bIsValid;               // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53FC[0x2];                                     // 0x014E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_FindCostumeMaster_CostumeMaster;          // 0x0150(0x0088)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipList_C_SetUnderWearData) == 0x000008, "Wrong alignment on EquipList_C_SetUnderWearData");
static_assert(sizeof(EquipList_C_SetUnderWearData) == 0x0001E0, "Wrong size on EquipList_C_SetUnderWearData");
static_assert(offsetof(EquipList_C_SetUnderWearData, InUnderWearData) == 0x000000, "Member 'EquipList_C_SetUnderWearData::InUnderWearData' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetUnderWearData, NewLocalVar_0) == 0x000010, "Member 'EquipList_C_SetUnderWearData::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetUnderWearData, Temp_int_Array_Index_Variable) == 0x000020, "Member 'EquipList_C_SetUnderWearData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetUnderWearData, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'EquipList_C_SetUnderWearData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetUnderWearData, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'EquipList_C_SetUnderWearData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetUnderWearData, CallFunc_Array_Get_Item) == 0x000030, "Member 'EquipList_C_SetUnderWearData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetUnderWearData, CallFunc_Array_Length_ReturnValue) == 0x000148, "Member 'EquipList_C_SetUnderWearData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetUnderWearData, CallFunc_Less_IntInt_ReturnValue) == 0x00014C, "Member 'EquipList_C_SetUnderWearData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetUnderWearData, CallFunc_FindCostumeMaster_bIsValid) == 0x00014D, "Member 'EquipList_C_SetUnderWearData::CallFunc_FindCostumeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetUnderWearData, CallFunc_FindCostumeMaster_CostumeMaster) == 0x000150, "Member 'EquipList_C_SetUnderWearData::CallFunc_FindCostumeMaster_CostumeMaster' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetUnderWearData, K2Node_SwitchEnum_CmpSuccess) == 0x0001D8, "Member 'EquipList_C_SetUnderWearData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function EquipList.EquipList_C.SetAccessoriesData
// 0x0258 (0x0258 - 0x0000)
struct EquipList_C_SetAccessoriesData final
{
public:
	TArray<struct FOwnItemInfo>                   InAccessoriesData;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         LocalItemId;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53FD[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalUniqueId;                                     // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         LocalCostumeIcon;                                  // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            LocalProtectorCategory;                            // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             LocalEquipType;                                    // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53FE[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   LocalAccesoriesData;                               // 0x0038(0x0010)(Edit, BlueprintVisible)
	class UCostumeIcon_C*                         Temp_object_Variable;                              // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_1;                            // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_2;                            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_3;                            // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_4;                            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_5;                            // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_6;                            // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCostumeMaster_bIsValid;               // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53FF[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_FindCostumeMaster_CostumeMaster;          // 0x0090(0x0088)()
	class UCostumeIcon_C*                         Temp_object_Variable_7;                            // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_8;                            // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EProtectorCategory                            Temp_byte_Variable;                                // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_FindEquipItemInfo_ReturnValue;            // 0x012B(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5400[0x2];                                     // 0x012E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0130(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5401[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCostumeIcon_C*                         K2Node_Select_Default;                             // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_SetAccessoriesData) == 0x000008, "Wrong alignment on EquipList_C_SetAccessoriesData");
static_assert(sizeof(EquipList_C_SetAccessoriesData) == 0x000258, "Wrong size on EquipList_C_SetAccessoriesData");
static_assert(offsetof(EquipList_C_SetAccessoriesData, InAccessoriesData) == 0x000000, "Member 'EquipList_C_SetAccessoriesData::InAccessoriesData' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, LocalItemId) == 0x000010, "Member 'EquipList_C_SetAccessoriesData::LocalItemId' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, LocalUniqueId) == 0x000018, "Member 'EquipList_C_SetAccessoriesData::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, LocalCostumeIcon) == 0x000028, "Member 'EquipList_C_SetAccessoriesData::LocalCostumeIcon' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, LocalProtectorCategory) == 0x000030, "Member 'EquipList_C_SetAccessoriesData::LocalProtectorCategory' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, LocalEquipType) == 0x000031, "Member 'EquipList_C_SetAccessoriesData::LocalEquipType' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, LocalAccesoriesData) == 0x000038, "Member 'EquipList_C_SetAccessoriesData::LocalAccesoriesData' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_object_Variable) == 0x000048, "Member 'EquipList_C_SetAccessoriesData::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_object_Variable_1) == 0x000050, "Member 'EquipList_C_SetAccessoriesData::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_object_Variable_2) == 0x000058, "Member 'EquipList_C_SetAccessoriesData::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_object_Variable_3) == 0x000060, "Member 'EquipList_C_SetAccessoriesData::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_object_Variable_4) == 0x000068, "Member 'EquipList_C_SetAccessoriesData::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_object_Variable_5) == 0x000070, "Member 'EquipList_C_SetAccessoriesData::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_object_Variable_6) == 0x000078, "Member 'EquipList_C_SetAccessoriesData::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_int_Loop_Counter_Variable) == 0x000080, "Member 'EquipList_C_SetAccessoriesData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'EquipList_C_SetAccessoriesData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_int_Array_Index_Variable) == 0x000088, "Member 'EquipList_C_SetAccessoriesData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, CallFunc_FindCostumeMaster_bIsValid) == 0x00008C, "Member 'EquipList_C_SetAccessoriesData::CallFunc_FindCostumeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, CallFunc_FindCostumeMaster_CostumeMaster) == 0x000090, "Member 'EquipList_C_SetAccessoriesData::CallFunc_FindCostumeMaster_CostumeMaster' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_object_Variable_7) == 0x000118, "Member 'EquipList_C_SetAccessoriesData::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_object_Variable_8) == 0x000120, "Member 'EquipList_C_SetAccessoriesData::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000128, "Member 'EquipList_C_SetAccessoriesData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, Temp_byte_Variable) == 0x000129, "Member 'EquipList_C_SetAccessoriesData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00012A, "Member 'EquipList_C_SetAccessoriesData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, CallFunc_FindEquipItemInfo_ReturnValue) == 0x00012B, "Member 'EquipList_C_SetAccessoriesData::CallFunc_FindEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, CallFunc_IsValid_ReturnValue) == 0x00012C, "Member 'EquipList_C_SetAccessoriesData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00012D, "Member 'EquipList_C_SetAccessoriesData::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, CallFunc_Array_Get_Item) == 0x000130, "Member 'EquipList_C_SetAccessoriesData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, CallFunc_Array_Length_ReturnValue) == 0x000248, "Member 'EquipList_C_SetAccessoriesData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, CallFunc_Less_IntInt_ReturnValue) == 0x00024C, "Member 'EquipList_C_SetAccessoriesData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetAccessoriesData, K2Node_Select_Default) == 0x000250, "Member 'EquipList_C_SetAccessoriesData::K2Node_Select_Default' has a wrong offset!");

// Function EquipList.EquipList_C.SetMountImagineData
// 0x0190 (0x0190 - 0x0000)
struct EquipList_C_SetMountImagineData final
{
public:
	struct FOwnItemInfo                           InMountImagine;                                    // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_FindMountImagineMaster_bIsValid;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5402[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_FindMountImagineMaster_MountImagineMaster; // 0x0120(0x0070)()
};
static_assert(alignof(EquipList_C_SetMountImagineData) == 0x000008, "Wrong alignment on EquipList_C_SetMountImagineData");
static_assert(sizeof(EquipList_C_SetMountImagineData) == 0x000190, "Wrong size on EquipList_C_SetMountImagineData");
static_assert(offsetof(EquipList_C_SetMountImagineData, InMountImagine) == 0x000000, "Member 'EquipList_C_SetMountImagineData::InMountImagine' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetMountImagineData, CallFunc_FindMountImagineMaster_bIsValid) == 0x000118, "Member 'EquipList_C_SetMountImagineData::CallFunc_FindMountImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetMountImagineData, CallFunc_FindMountImagineMaster_MountImagineMaster) == 0x000120, "Member 'EquipList_C_SetMountImagineData::CallFunc_FindMountImagineMaster_MountImagineMaster' has a wrong offset!");

// Function EquipList.EquipList_C.SetOtherPCData
// 0x0158 (0x0158 - 0x0000)
struct EquipList_C_SetOtherPCData final
{
public:
	TArray<struct FOwnItemInfo>                   InEquipCostumesOwnItemInfoList;                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FOwnItemInfo>                   InEquipAccessoriesOwnItemInfoList;                 // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FOwnItemInfo>                   InEquipUnderwearOwnItemInfoList;                   // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPlayerProfileMenuDetailCharaEquipInfo InCharaEquipInfo;                                  // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           InEquipMountImagineOwnItemInfo;                    // 0x0040(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(EquipList_C_SetOtherPCData) == 0x000008, "Wrong alignment on EquipList_C_SetOtherPCData");
static_assert(sizeof(EquipList_C_SetOtherPCData) == 0x000158, "Wrong size on EquipList_C_SetOtherPCData");
static_assert(offsetof(EquipList_C_SetOtherPCData, InEquipCostumesOwnItemInfoList) == 0x000000, "Member 'EquipList_C_SetOtherPCData::InEquipCostumesOwnItemInfoList' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCData, InEquipAccessoriesOwnItemInfoList) == 0x000010, "Member 'EquipList_C_SetOtherPCData::InEquipAccessoriesOwnItemInfoList' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCData, InEquipUnderwearOwnItemInfoList) == 0x000020, "Member 'EquipList_C_SetOtherPCData::InEquipUnderwearOwnItemInfoList' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCData, InCharaEquipInfo) == 0x000030, "Member 'EquipList_C_SetOtherPCData::InCharaEquipInfo' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCData, InEquipMountImagineOwnItemInfo) == 0x000040, "Member 'EquipList_C_SetOtherPCData::InEquipMountImagineOwnItemInfo' has a wrong offset!");

// Function EquipList.EquipList_C.SetOtherPCAccessoriesData
// 0x03C8 (0x03C8 - 0x0000)
struct EquipList_C_SetOtherPCAccessoriesData final
{
public:
	TArray<struct FOwnItemInfo>                   InAccessoriesData;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPlayerProfileMenuDetailCharaEquipInfo InCharaEquipInfo;                                  // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0020(0x0118)(Edit, BlueprintVisible)
	int32                                         LocalItemId;                                       // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5403[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalUniqueId;                                     // 0x0140(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         LocalCostumeIcon;                                  // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            LocalProtectorCategory;                            // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             LocalEquipType;                                    // 0x0159(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5404[0x6];                                     // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 LocalConcernedList;                                // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerProfileMenuDetailCharaEquipInfo LocalCharaEquipInfo;                               // 0x0168(0x0010)(Edit, BlueprintVisible)
	TArray<struct FOwnItemInfo>                   LocalAccesoriesData;                               // 0x0178(0x0010)(Edit, BlueprintVisible)
	class UCostumeIcon_C*                         Temp_object_Variable;                              // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_1;                            // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_2;                            // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_3;                            // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCostumeMaster_bIsValid;               // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5405[0x3];                                     // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_FindCostumeMaster_CostumeMaster;          // 0x01B0(0x0088)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_4;                            // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_5;                            // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindPlayerProfileMenuDetailEquipItemInfo_IsValid; // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_FindPlayerProfileMenuDetailEquipItemInfo_ReturnValue; // 0x0252(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5406[0x5];                                     // 0x0253(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5407[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5408[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCostumeIcon_C*                         Temp_object_Variable_6;                            // 0x0278(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Temp_object_Variable_7;                            // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5409[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCostumeIcon_C*                         Temp_object_Variable_8;                            // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable;                                // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x029A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x029B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_540A[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x02A0(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_540B[0x3];                                     // 0x03BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCostumeIcon_C*                         K2Node_Select_Default;                             // 0x03C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipList_C_SetOtherPCAccessoriesData) == 0x000008, "Wrong alignment on EquipList_C_SetOtherPCAccessoriesData");
static_assert(sizeof(EquipList_C_SetOtherPCAccessoriesData) == 0x0003C8, "Wrong size on EquipList_C_SetOtherPCAccessoriesData");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, InAccessoriesData) == 0x000000, "Member 'EquipList_C_SetOtherPCAccessoriesData::InAccessoriesData' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, InCharaEquipInfo) == 0x000010, "Member 'EquipList_C_SetOtherPCAccessoriesData::InCharaEquipInfo' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, LocalOwnItemInfo) == 0x000020, "Member 'EquipList_C_SetOtherPCAccessoriesData::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, LocalItemId) == 0x000138, "Member 'EquipList_C_SetOtherPCAccessoriesData::LocalItemId' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, LocalUniqueId) == 0x000140, "Member 'EquipList_C_SetOtherPCAccessoriesData::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, LocalCostumeIcon) == 0x000150, "Member 'EquipList_C_SetOtherPCAccessoriesData::LocalCostumeIcon' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, LocalProtectorCategory) == 0x000158, "Member 'EquipList_C_SetOtherPCAccessoriesData::LocalProtectorCategory' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, LocalEquipType) == 0x000159, "Member 'EquipList_C_SetOtherPCAccessoriesData::LocalEquipType' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, LocalConcernedList) == 0x000160, "Member 'EquipList_C_SetOtherPCAccessoriesData::LocalConcernedList' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, LocalCharaEquipInfo) == 0x000168, "Member 'EquipList_C_SetOtherPCAccessoriesData::LocalCharaEquipInfo' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, LocalAccesoriesData) == 0x000178, "Member 'EquipList_C_SetOtherPCAccessoriesData::LocalAccesoriesData' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_object_Variable) == 0x000188, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_object_Variable_1) == 0x000190, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_object_Variable_2) == 0x000198, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_object_Variable_3) == 0x0001A0, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_int_Loop_Counter_Variable) == 0x0001A8, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_FindCostumeMaster_bIsValid) == 0x0001AC, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_FindCostumeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_FindCostumeMaster_CostumeMaster) == 0x0001B0, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_FindCostumeMaster_CostumeMaster' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_Add_IntInt_ReturnValue) == 0x000238, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_int_Array_Index_Variable) == 0x00023C, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_object_Variable_4) == 0x000240, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_object_Variable_5) == 0x000248, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_IsValid_ReturnValue) == 0x000250, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_FindPlayerProfileMenuDetailEquipItemInfo_IsValid) == 0x000251, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_FindPlayerProfileMenuDetailEquipItemInfo_IsValid' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_FindPlayerProfileMenuDetailEquipItemInfo_ReturnValue) == 0x000252, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_FindPlayerProfileMenuDetailEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_GetSBPlayerController_ReturnValue) == 0x000258, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_IsValid_ReturnValue_1) == 0x000260, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_GetConcernedList_ReturnValue) == 0x000268, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_IsValid_ReturnValue_2) == 0x000270, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_object_Variable_6) == 0x000278, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_object_Variable_7) == 0x000280, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000288, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_object_Variable_8) == 0x000290, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, Temp_byte_Variable) == 0x000298, "Member 'EquipList_C_SetOtherPCAccessoriesData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_IsValid_ReturnValue_3) == 0x000299, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00029A, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00029B, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_Array_Get_Item) == 0x0002A0, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_Array_Length_ReturnValue) == 0x0003B8, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, CallFunc_Less_IntInt_ReturnValue) == 0x0003BC, "Member 'EquipList_C_SetOtherPCAccessoriesData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipList_C_SetOtherPCAccessoriesData, K2Node_Select_Default) == 0x0003C0, "Member 'EquipList_C_SetOtherPCAccessoriesData::K2Node_Select_Default' has a wrong offset!");

}

