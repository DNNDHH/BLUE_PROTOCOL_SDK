#pragma once

 

// Package: UMG_MatchingMenu_SupplyList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.OnClickIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_SupplyList_C_OnClickIcon__DelegateSignature final
{
public:
	struct FSBDungeonSupply                       Param_DungeonSupply;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_SupplyList_C_OnClickIcon__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_SupplyList_C_OnClickIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_SupplyList_C_OnClickIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_SupplyList_C_OnClickIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_OnClickIcon__DelegateSignature, Param_DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_SupplyList_C_OnClickIcon__DelegateSignature::Param_DungeonSupply' has a wrong offset!");

// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.ExecuteUbergraph_UMG_MatchingMenu_SupplyList
// 0x0028 (0x0028 - 0x0000)
struct UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8644[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          K2Node_ComponentBoundEvent_Sender_3;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          K2Node_ComponentBoundEvent_Sender_2;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          K2Node_ComponentBoundEvent_Sender_1;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          K2Node_ComponentBoundEvent_Sender;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList) == 0x000008, "Wrong alignment on UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList");
static_assert(sizeof(UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList) == 0x000028, "Wrong size on UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList, K2Node_ComponentBoundEvent_Sender_3) == 0x000008, "Member 'UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList::K2Node_ComponentBoundEvent_Sender_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList, K2Node_ComponentBoundEvent_Sender_2) == 0x000010, "Member 'UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList::K2Node_ComponentBoundEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList, K2Node_ComponentBoundEvent_Sender_1) == 0x000018, "Member 'UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList, K2Node_ComponentBoundEvent_Sender) == 0x000020, "Member 'UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");

// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature final
{
public:
	class UCommonIcon_C*                          Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature, Sender) == 0x000000, "Member 'UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature final
{
public:
	class UCommonIcon_C*                          Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature, Sender) == 0x000000, "Member 'UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature final
{
public:
	class UCommonIcon_C*                          Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature, Sender) == 0x000000, "Member 'UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	class UCommonIcon_C*                          Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, Sender) == 0x000000, "Member 'UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.Setup
// 0x0288 (0x0288 - 0x0000)
struct UMG_MatchingMenu_SupplyList_C_Setup final
{
public:
	class FName                                   GameContentId;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSupplyMasterData                    MasterData;                                        // 0x0008(0x0020)(Edit, BlueprintVisible)
	struct FSBMapInfo                             CallFunc_GetDungeonMapInfo_MapInfo;                // 0x0028(0x01E0)()
	bool                                          CallFunc_GetDungeonMapInfo_ReturnValue;            // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8645[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8646[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDungeonSupply                       CallFunc_Array_Get_Item;                           // 0x022C(0x0008)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8647[0x5];                                     // 0x023B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonIcon_C*>                  K2Node_MakeArray_Array;                            // 0x0248(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_FindMasterSupplyForBP_IsExists;           // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8648[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSupplyMasterData                    CallFunc_FindMasterSupplyForBP_ReturnValue;        // 0x0260(0x0020)()
	class UCommonIcon_C*                          CallFunc_Array_Get_Item_1;                         // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_SupplyList_C_Setup) == 0x000008, "Wrong alignment on UMG_MatchingMenu_SupplyList_C_Setup");
static_assert(sizeof(UMG_MatchingMenu_SupplyList_C_Setup) == 0x000288, "Wrong size on UMG_MatchingMenu_SupplyList_C_Setup");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, GameContentId) == 0x000000, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::GameContentId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, MasterData) == 0x000008, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::MasterData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_GetDungeonMapInfo_MapInfo) == 0x000028, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_GetDungeonMapInfo_MapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_GetDungeonMapInfo_ReturnValue) == 0x000208, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_GetDungeonMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, Temp_int_Array_Index_Variable) == 0x00020C, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, Temp_int_Loop_Counter_Variable) == 0x000210, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_Conv_NameToString_ReturnValue) == 0x000218, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000228, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_Array_Get_Item) == 0x00022C, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x000234, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x000238, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_Greater_IntInt_ReturnValue) == 0x000239, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_GetMasterDataManager_IsValid) == 0x00023A, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_GetMasterDataManager_ReturnValue) == 0x000240, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, K2Node_MakeArray_Array) == 0x000248, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_FindMasterSupplyForBP_IsExists) == 0x000258, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_FindMasterSupplyForBP_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_FindMasterSupplyForBP_ReturnValue) == 0x000260, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_FindMasterSupplyForBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup, CallFunc_Array_Get_Item_1) == 0x000280, "Member 'UMG_MatchingMenu_SupplyList_C_Setup::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.Clear
// 0x0040 (0x0040 - 0x0000)
struct UMG_MatchingMenu_SupplyList_C_Clear final
{
public:
	TArray<class UCommonIcon_C*>                  Array;                                             // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8649[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCommonIcon_C*>                  K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCommonIcon_C*                          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_SupplyList_C_Clear) == 0x000008, "Wrong alignment on UMG_MatchingMenu_SupplyList_C_Clear");
static_assert(sizeof(UMG_MatchingMenu_SupplyList_C_Clear) == 0x000040, "Wrong size on UMG_MatchingMenu_SupplyList_C_Clear");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Clear, Array) == 0x000000, "Member 'UMG_MatchingMenu_SupplyList_C_Clear::Array' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Clear, Temp_int_Array_Index_Variable) == 0x000010, "Member 'UMG_MatchingMenu_SupplyList_C_Clear::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Clear, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'UMG_MatchingMenu_SupplyList_C_Clear::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Clear, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_SupplyList_C_Clear::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Clear, K2Node_MakeArray_Array) == 0x000020, "Member 'UMG_MatchingMenu_SupplyList_C_Clear::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Clear, CallFunc_Array_Get_Item) == 0x000030, "Member 'UMG_MatchingMenu_SupplyList_C_Clear::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Clear, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_SupplyList_C_Clear::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Clear, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'UMG_MatchingMenu_SupplyList_C_Clear::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.OnClickCommonIcon
// 0x0004 (0x0004 - 0x0000)
struct UMG_MatchingMenu_SupplyList_C_OnClickCommonIcon final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_SupplyList_C_OnClickCommonIcon) == 0x000004, "Wrong alignment on UMG_MatchingMenu_SupplyList_C_OnClickCommonIcon");
static_assert(sizeof(UMG_MatchingMenu_SupplyList_C_OnClickCommonIcon) == 0x000004, "Wrong size on UMG_MatchingMenu_SupplyList_C_OnClickCommonIcon");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_OnClickCommonIcon, Param_Index) == 0x000000, "Member 'UMG_MatchingMenu_SupplyList_C_OnClickCommonIcon::Param_Index' has a wrong offset!");

// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.Setup2
// 0x0020 (0x0020 - 0x0000)
struct UMG_MatchingMenu_SupplyList_C_Setup2 final
{
public:
	struct FSBSupplyMasterData                    MasterData;                                        // 0x0000(0x0020)(Edit, BlueprintVisible)
};
static_assert(alignof(UMG_MatchingMenu_SupplyList_C_Setup2) == 0x000008, "Wrong alignment on UMG_MatchingMenu_SupplyList_C_Setup2");
static_assert(sizeof(UMG_MatchingMenu_SupplyList_C_Setup2) == 0x000020, "Wrong size on UMG_MatchingMenu_SupplyList_C_Setup2");
static_assert(offsetof(UMG_MatchingMenu_SupplyList_C_Setup2, MasterData) == 0x000000, "Member 'UMG_MatchingMenu_SupplyList_C_Setup2::MasterData' has a wrong offset!");

}

