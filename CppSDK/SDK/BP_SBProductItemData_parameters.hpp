#pragma once

 

// Package: BP_SBProductItemData

#include "Basic.hpp"

#include "E_SBProductDetailType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SBProductItemData.BP_SBProductItemData_C.OnChangeTrying__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_SBProductItemData_C_OnChangeTrying__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_OnChangeTrying__DelegateSignature) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_OnChangeTrying__DelegateSignature");
static_assert(sizeof(BP_SBProductItemData_C_OnChangeTrying__DelegateSignature) == 0x000010, "Wrong size on BP_SBProductItemData_C_OnChangeTrying__DelegateSignature");
static_assert(offsetof(BP_SBProductItemData_C_OnChangeTrying__DelegateSignature, Sender) == 0x000000, "Member 'BP_SBProductItemData_C_OnChangeTrying__DelegateSignature::Sender' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_OnChangeTrying__DelegateSignature, bTrying) == 0x000008, "Member 'BP_SBProductItemData_C_OnChangeTrying__DelegateSignature::bTrying' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.OnChangeVisibility__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductItemData_C_OnChangeVisibility__DelegateSignature final
{
public:
	ESlateVisibility                              Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_OnChangeVisibility__DelegateSignature) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_OnChangeVisibility__DelegateSignature");
static_assert(sizeof(BP_SBProductItemData_C_OnChangeVisibility__DelegateSignature) == 0x000001, "Wrong size on BP_SBProductItemData_C_OnChangeVisibility__DelegateSignature");
static_assert(offsetof(BP_SBProductItemData_C_OnChangeVisibility__DelegateSignature, Visibility) == 0x000000, "Member 'BP_SBProductItemData_C_OnChangeVisibility__DelegateSignature::Visibility' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.ExecuteUbergraph_BP_SBProductItemData
// 0x0018 (0x0018 - 0x0000)
struct BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10FD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                K2Node_Event_Data;                                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Value;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData");
static_assert(sizeof(BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData) == 0x000018, "Wrong size on BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData");
static_assert(offsetof(BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData, EntryPoint) == 0x000000, "Member 'BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData, K2Node_Event_Data) == 0x000008, "Member 'BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData::K2Node_Event_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData, K2Node_Event_Value) == 0x000010, "Member 'BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData::K2Node_Event_Value' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.SetSelectedData
// 0x0008 (0x0008 - 0x0000)
struct BP_SBProductItemData_C_SetSelectedData final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_SetSelectedData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_SetSelectedData");
static_assert(sizeof(BP_SBProductItemData_C_SetSelectedData) == 0x000008, "Wrong size on BP_SBProductItemData_C_SetSelectedData");
static_assert(offsetof(BP_SBProductItemData_C_SetSelectedData, Data) == 0x000000, "Member 'BP_SBProductItemData_C_SetSelectedData::Data' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.SetScrollOffset
// 0x0004 (0x0004 - 0x0000)
struct BP_SBProductItemData_C_SetScrollOffset final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_SetScrollOffset) == 0x000004, "Wrong alignment on BP_SBProductItemData_C_SetScrollOffset");
static_assert(sizeof(BP_SBProductItemData_C_SetScrollOffset) == 0x000004, "Wrong size on BP_SBProductItemData_C_SetScrollOffset");
static_assert(offsetof(BP_SBProductItemData_C_SetScrollOffset, Value) == 0x000000, "Member 'BP_SBProductItemData_C_SetScrollOffset::Value' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromUniqueId
// 0x01B8 (0x01B8 - 0x0000)
struct BP_SBProductItemData_C_InitFromUniqueId final
{
public:
	class FString                                 Param_UniqueId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10FE[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0028(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10FF[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBNetworkDataCache*              CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0088(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItemByAllStorage_bOutExist;        // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1100[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItemByAllStorage_ReturnValue;      // 0x00A0(0x0118)()
};
static_assert(alignof(BP_SBProductItemData_C_InitFromUniqueId) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromUniqueId");
static_assert(sizeof(BP_SBProductItemData_C_InitFromUniqueId) == 0x0001B8, "Wrong size on BP_SBProductItemData_C_InitFromUniqueId");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, Param_UniqueId) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromUniqueId::Param_UniqueId' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_IsEmpty_ReturnValue) == 0x000010, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_IsEmpty_ReturnValue_1) == 0x000011, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, K2Node_MakeArray_Array) == 0x000018, "Member 'BP_SBProductItemData_C_InitFromUniqueId::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, K2Node_MakeArray_Array_1) == 0x000028, "Member 'BP_SBProductItemData_C_InitFromUniqueId::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000048, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000050, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_GetDisplayName_ReturnValue) == 0x000058, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_GetDisplayName_ReturnValue_1) == 0x000068, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_IsEmpty_ReturnValue_2) == 0x000078, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_GetSBPlayerController_ReturnValue) == 0x000080, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000088, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_GetOwnItemList_ReturnValue) == 0x000090, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_BP_FindItemByAllStorage_bOutExist) == 0x000098, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_BP_FindItemByAllStorage_bOutExist' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromUniqueId, CallFunc_BP_FindItemByAllStorage_ReturnValue) == 0x0000A0, "Member 'BP_SBProductItemData_C_InitFromUniqueId::CallFunc_BP_FindItemByAllStorage_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromItemData
// 0x0148 (0x0148 - 0x0000)
struct BP_SBProductItemData_C_InitFromItemData final
{
public:
	EItemType                                     Param_ItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1101[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1102[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1103[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1104[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00E0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0120(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0130(0x0018)()
};
static_assert(alignof(BP_SBProductItemData_C_InitFromItemData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromItemData");
static_assert(sizeof(BP_SBProductItemData_C_InitFromItemData) == 0x000148, "Wrong size on BP_SBProductItemData_C_InitFromItemData");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, Param_ItemType) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromItemData::Param_ItemType' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, ItemId) == 0x000004, "Member 'BP_SBProductItemData_C_InitFromItemData::ItemId' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, Param_Amount) == 0x000008, "Member 'BP_SBProductItemData_C_InitFromItemData::Param_Amount' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_SBProductItemData_C_InitFromItemData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, CallFunc_GetItemName_OutName) == 0x000020, "Member 'BP_SBProductItemData_C_InitFromItemData::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, CallFunc_GetItemName_ReturnValue) == 0x000030, "Member 'BP_SBProductItemData_C_InitFromItemData::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_SBProductItemData_C_InitFromItemData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000040, "Member 'BP_SBProductItemData_C_InitFromItemData::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'BP_SBProductItemData_C_InitFromItemData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, CallFunc_GetDisplayName_ReturnValue) == 0x000060, "Member 'BP_SBProductItemData_C_InitFromItemData::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, CallFunc_IsEmpty_ReturnValue) == 0x000070, "Member 'BP_SBProductItemData_C_InitFromItemData::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'BP_SBProductItemData_C_InitFromItemData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0000B8, "Member 'BP_SBProductItemData_C_InitFromItemData::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C8, "Member 'BP_SBProductItemData_C_InitFromItemData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000E0, "Member 'BP_SBProductItemData_C_InitFromItemData::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, K2Node_MakeArray_Array_1) == 0x000120, "Member 'BP_SBProductItemData_C_InitFromItemData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemData, CallFunc_Format_ReturnValue) == 0x000130, "Member 'BP_SBProductItemData_C_InitFromItemData::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromRewardData
// 0x0090 (0x0090 - 0x0000)
struct BP_SBProductItemData_C_InitFromRewardData final
{
public:
	ESBRewardItemType                             Param_RewardType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1105[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_AmountMin;                                   // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1106[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1107[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetRewardItemNameAndType2_OutName;        // 0x0058(0x0018)()
	class FText                                   CallFunc_GetRewardItemNameAndType2_OutType;        // 0x0070(0x0018)()
	bool                                          CallFunc_GetRewardItemNameAndType2_OutNoName;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromRewardData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromRewardData");
static_assert(sizeof(BP_SBProductItemData_C_InitFromRewardData) == 0x000090, "Wrong size on BP_SBProductItemData_C_InitFromRewardData");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, Param_RewardType) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromRewardData::Param_RewardType' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, ItemId) == 0x000004, "Member 'BP_SBProductItemData_C_InitFromRewardData::ItemId' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, Param_Amount) == 0x000008, "Member 'BP_SBProductItemData_C_InitFromRewardData::Param_Amount' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, Param_AmountMin) == 0x00000C, "Member 'BP_SBProductItemData_C_InitFromRewardData::Param_AmountMin' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_SBProductItemData_C_InitFromRewardData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_SBProductItemData_C_InitFromRewardData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'BP_SBProductItemData_C_InitFromRewardData::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, CallFunc_IsEmpty_ReturnValue) == 0x000030, "Member 'BP_SBProductItemData_C_InitFromRewardData::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'BP_SBProductItemData_C_InitFromRewardData::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000048, "Member 'BP_SBProductItemData_C_InitFromRewardData::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, CallFunc_GetSBPlayerController_ReturnValue) == 0x000050, "Member 'BP_SBProductItemData_C_InitFromRewardData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, CallFunc_GetRewardItemNameAndType2_OutName) == 0x000058, "Member 'BP_SBProductItemData_C_InitFromRewardData::CallFunc_GetRewardItemNameAndType2_OutName' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, CallFunc_GetRewardItemNameAndType2_OutType) == 0x000070, "Member 'BP_SBProductItemData_C_InitFromRewardData::CallFunc_GetRewardItemNameAndType2_OutType' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromRewardData, CallFunc_GetRewardItemNameAndType2_OutNoName) == 0x000088, "Member 'BP_SBProductItemData_C_InitFromRewardData::CallFunc_GetRewardItemNameAndType2_OutNoName' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromMasterReward
// 0x0058 (0x0058 - 0x0000)
struct BP_SBProductItemData_C_InitFromMasterReward final
{
public:
	struct FSBMasterReward                        Param_MasterReward;                                // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_1108[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1109[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromMasterReward) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromMasterReward");
static_assert(sizeof(BP_SBProductItemData_C_InitFromMasterReward) == 0x000058, "Wrong size on BP_SBProductItemData_C_InitFromMasterReward");
static_assert(offsetof(BP_SBProductItemData_C_InitFromMasterReward, Param_MasterReward) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromMasterReward::Param_MasterReward' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromMasterReward, K2Node_MakeArray_Array) == 0x000018, "Member 'BP_SBProductItemData_C_InitFromMasterReward::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromMasterReward, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_SBProductItemData_C_InitFromMasterReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromMasterReward, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000030, "Member 'BP_SBProductItemData_C_InitFromMasterReward::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromMasterReward, CallFunc_IsEmpty_ReturnValue) == 0x000038, "Member 'BP_SBProductItemData_C_InitFromMasterReward::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromMasterReward, CallFunc_GetDisplayName_ReturnValue) == 0x000040, "Member 'BP_SBProductItemData_C_InitFromMasterReward::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromMasterReward, CallFunc_NotEqual_NameName_ReturnValue) == 0x000050, "Member 'BP_SBProductItemData_C_InitFromMasterReward::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.initFromItemBoxContentParam
// 0x0090 (0x0090 - 0x0000)
struct BP_SBProductItemData_C_InitFromItemBoxContentParam final
{
public:
	struct FSBItemBoxContentParam                 ItemBoxContentParam;                               // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bCanParentBppExchange;                             // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_110A[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_110B[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_MathExpression_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_110C[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_110D[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_MathExpression_ReturnValue_1;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_110E[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_110F[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0088(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromItemBoxContentParam) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromItemBoxContentParam");
static_assert(sizeof(BP_SBProductItemData_C_InitFromItemBoxContentParam) == 0x000090, "Wrong size on BP_SBProductItemData_C_InitFromItemBoxContentParam");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, ItemBoxContentParam) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::ItemBoxContentParam' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, bCanParentBppExchange) == 0x000020, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::bCanParentBppExchange' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_IsEmpty_ReturnValue) == 0x000021, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, K2Node_MakeArray_Array) == 0x000028, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000040, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_GetDisplayName_ReturnValue) == 0x000048, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000058, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, K2Node_MathExpression_ReturnValue) == 0x00005C, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000068, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00006C, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, Temp_int_Variable) == 0x000070, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, K2Node_MathExpression_ReturnValue_1) == 0x000074, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::K2Node_MathExpression_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000078, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_Add_IntInt_ReturnValue_1) == 0x00007C, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, Temp_bool_Variable) == 0x000080, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000084, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, K2Node_Select_Default) == 0x000088, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromItemBoxContentParam, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00008C, "Member 'BP_SBProductItemData_C_InitFromItemBoxContentParam::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitIfItemBox
// 0x0208 (0x0208 - 0x0000)
struct BP_SBProductItemData_C_InitIfItemBox final
{
public:
	struct FSBMasterRewardLotteryGroups           LotteryGroupsMaster;                               // 0x0000(0x0018)(Edit, BlueprintVisible)
	struct FRecipeSetMasterData                   RecipeSetMaster;                                   // 0x0018(0x0018)(Edit, BlueprintVisible)
	struct FSBMasterItemBox                       MasterItemBox;                                     // 0x0030(0x0020)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1110[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1111[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroupsRewards    CallFunc_Array_Get_Item_1;                         // 0x0078(0x0038)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1112[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBItemBoxContentParam                 CallFunc_Array_Get_Item_2;                         // 0x00C0(0x0020)(NoDestructor)
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1113[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemIndex_ItemIndex;                   // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             CallFunc_GetRewardType_RewardType;                 // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindRewardLotteryGroupsMaster_bIsValid;   // 0x010E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1114[0x1];                                     // 0x010F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroups           CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster; // 0x0110(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1115[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             CallFunc_GetRewardType_RewardType_1;               // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             CallFunc_GetRewardType_RewardType_2;               // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1116[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemIndex_ItemIndex_1;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1117[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists; // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1118[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBBPPtExchangeMasterData              CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue; // 0x015C(0x0018)(NoDestructor)
	bool                                          CallFunc_FindItemBoxMaster_bIsValid;               // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1119[0x3];                                     // 0x0175(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterItemBox                       CallFunc_FindItemBoxMaster_ItemBoxMaster;          // 0x0178(0x0020)()
	int32                                         CallFunc_GetItemIndex_ItemIndex_2;                 // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindRecipeSetMaster_bIsValid;             // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111A[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRecipeSetMasterData                   CallFunc_FindRecipeSetMaster_RecipeSetMaster;      // 0x01A0(0x0018)()
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue_1;                // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data_1;         // 0x01C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111B[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111C[0x3];                                     // 0x01DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111D[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue_2;                // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data_2;         // 0x01F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111E[0x3];                                     // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_InitIfItemBox) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitIfItemBox");
static_assert(sizeof(BP_SBProductItemData_C_InitIfItemBox) == 0x000208, "Wrong size on BP_SBProductItemData_C_InitIfItemBox");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, LotteryGroupsMaster) == 0x000000, "Member 'BP_SBProductItemData_C_InitIfItemBox::LotteryGroupsMaster' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, RecipeSetMaster) == 0x000018, "Member 'BP_SBProductItemData_C_InitIfItemBox::RecipeSetMaster' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, MasterItemBox) == 0x000030, "Member 'BP_SBProductItemData_C_InitIfItemBox::MasterItemBox' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Array_Length_ReturnValue_1) == 0x000054, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000058, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'BP_SBProductItemData_C_InitIfItemBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, Temp_int_Array_Index_Variable) == 0x000064, "Member 'BP_SBProductItemData_C_InitIfItemBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Array_Length_ReturnValue_2) == 0x00006C, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, Temp_int_Array_Index_Variable_1) == 0x000070, "Member 'BP_SBProductItemData_C_InitIfItemBox::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, Temp_int_Loop_Counter_Variable_1) == 0x0000B0, "Member 'BP_SBProductItemData_C_InitIfItemBox::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B4, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B8, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, Temp_int_Array_Index_Variable_2) == 0x0000BC, "Member 'BP_SBProductItemData_C_InitIfItemBox::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Array_Get_Item_2) == 0x0000C0, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_SpawnObject_ReturnValue) == 0x0000E0, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x0000E8, "Member 'BP_SBProductItemData_C_InitIfItemBox::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'BP_SBProductItemData_C_InitIfItemBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Array_Add_ReturnValue) == 0x0000FC, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_GetSBPlayerController_ReturnValue) == 0x000100, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_GetItemIndex_ItemIndex) == 0x000108, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_GetItemIndex_ItemIndex' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_GetRewardType_RewardType) == 0x00010C, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_GetRewardType_RewardType' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00010D, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_FindRewardLotteryGroupsMaster_bIsValid) == 0x00010E, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_FindRewardLotteryGroupsMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster) == 0x000110, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_GetMasterDataManager_IsValid) == 0x000128, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_GetMasterDataManager_ReturnValue) == 0x000130, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_GetRewardType_RewardType_1) == 0x000138, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_GetRewardType_RewardType_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_GetRewardType_RewardType_2) == 0x000139, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_GetRewardType_RewardType_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00013A, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00013B, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000140, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_GetItemIndex_ItemIndex_1) == 0x000148, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_GetItemIndex_ItemIndex_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000150, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists) == 0x000158, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue) == 0x00015C, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_FindItemBoxMaster_bIsValid) == 0x000174, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_FindItemBoxMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_FindItemBoxMaster_ItemBoxMaster) == 0x000178, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_FindItemBoxMaster_ItemBoxMaster' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_GetItemIndex_ItemIndex_2) == 0x000198, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_GetItemIndex_ItemIndex_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_FindRecipeSetMaster_bIsValid) == 0x00019C, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_FindRecipeSetMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_FindRecipeSetMaster_RecipeSetMaster) == 0x0001A0, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_FindRecipeSetMaster_RecipeSetMaster' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_SpawnObject_ReturnValue_1) == 0x0001B8, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, K2Node_DynamicCast_AsBPI_SBProduct_Data_1) == 0x0001C0, "Member 'BP_SBProductItemData_C_InitIfItemBox::K2Node_DynamicCast_AsBPI_SBProduct_Data_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, K2Node_DynamicCast_bSuccess_1) == 0x0001D0, "Member 'BP_SBProductItemData_C_InitIfItemBox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Array_Add_ReturnValue_1) == 0x0001D4, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, Temp_int_Loop_Counter_Variable_2) == 0x0001D8, "Member 'BP_SBProductItemData_C_InitIfItemBox::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001DC, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001E0, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_SpawnObject_ReturnValue_2) == 0x0001E8, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_SpawnObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, K2Node_DynamicCast_AsBPI_SBProduct_Data_2) == 0x0001F0, "Member 'BP_SBProductItemData_C_InitIfItemBox::K2Node_DynamicCast_AsBPI_SBProduct_Data_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, K2Node_DynamicCast_bSuccess_2) == 0x000200, "Member 'BP_SBProductItemData_C_InitIfItemBox::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitIfItemBox, CallFunc_Array_Add_ReturnValue_2) == 0x000204, "Member 'BP_SBProductItemData_C_InitIfItemBox::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromShopItemInfo
// 0x000C (0x000C - 0x0000)
struct BP_SBProductItemData_C_InitFromShopItemInfo final
{
public:
	struct FShopItemInfo                          ShopItemInfo;                                      // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromShopItemInfo) == 0x000004, "Wrong alignment on BP_SBProductItemData_C_InitFromShopItemInfo");
static_assert(sizeof(BP_SBProductItemData_C_InitFromShopItemInfo) == 0x00000C, "Wrong size on BP_SBProductItemData_C_InitFromShopItemInfo");
static_assert(offsetof(BP_SBProductItemData_C_InitFromShopItemInfo, ShopItemInfo) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromShopItemInfo::ShopItemInfo' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemData
// 0x04B8 (0x04B8 - 0x0000)
struct BP_SBProductItemData_C_InitFromDummyItemData final
{
public:
	int32                                         Param_DummyDataIndex;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1120[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1121[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1122[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_1;                    // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_1;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1123[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	bool                                          Temp_bool_Variable_3;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1124[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_2;                    // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_2;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1125[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_3;                    // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_3;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1126[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00C8(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1127[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_4;                    // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_4;                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1128[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0100(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1129[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_5;                    // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_5;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_112A[0x6];                                     // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0138(0x0018)()
	bool                                          Temp_bool_Variable_6;                              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_112B[0x5];                                     // 0x0153(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_6;                    // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_6;                // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_112C[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0170(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_8;          // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_112D[0x5];                                     // 0x018B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_7;                    // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_7;                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_112E[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x01A8(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_9;          // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_112F[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_8;                    // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_8;                // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1130[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x01E0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_9;                              // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1131[0x6];                                     // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_9;                    // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_9;                // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1132[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0218(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_10;         // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1133[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_10;                   // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_10;               // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1134[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0250(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_10;           // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_10;                             // 0x026A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_11;         // 0x026B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1135[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_11;                   // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_11;               // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_11;           // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1136[0x6];                                     // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x0288(0x0018)()
	bool                                          Temp_bool_Variable_11;                             // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_12;         // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x02A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1137[0x5];                                     // 0x02A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_12;                   // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_12;               // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1138[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x02C0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_12;           // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_13;         // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_13;                             // 0x02DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1139[0x5];                                     // 0x02DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_13;                   // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_13;               // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_13;           // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_113A[0x6];                                     // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x02F8(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_14;         // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_14;                             // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_113B[0x6];                                     // 0x0312(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_14;                   // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_14;               // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_113C[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x0330(0x0018)()
	class FString                                 CallFunc_GetItemName_OutName_15;                   // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_15;               // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_113D[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x0360(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_14;           // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_15;         // 0x0379(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_15;                             // 0x037A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_15;           // 0x037B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_16;         // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_113E[0x3];                                     // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_17;         // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_113F[0x3];                                     // 0x0385(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_16;                   // 0x0388(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_16;               // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1140[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_16;         // 0x03A0(0x0018)()
	int32                                         K2Node_Select_Default;                             // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x03BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_18;         // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1141[0x3];                                     // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_19;         // 0x03CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1142[0x3];                                     // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_20;         // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1143[0x3];                                     // 0x03D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_3;                           // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_21;         // 0x03E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1144[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_4;                           // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_22;         // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1145[0x3];                                     // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_5;                           // 0x03F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_23;         // 0x03FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1146[0x3];                                     // 0x03FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_6;                           // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x0404(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_24;         // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1147[0x3];                                     // 0x0409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_7;                           // 0x040C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;                 // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_25;         // 0x0414(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1148[0x3];                                     // 0x0415(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_8;                           // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_9;                 // 0x041C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_26;         // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1149[0x3];                                     // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_9;                           // 0x0424(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_10;                // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_27;         // 0x042C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_114A[0x3];                                     // 0x042D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_10;                          // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_11;                // 0x0434(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_28;         // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_114B[0x3];                                     // 0x0439(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_11;                          // 0x043C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_12;                // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_29;         // 0x0444(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_16;           // 0x0445(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_16;                             // 0x0446(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_114C[0x1];                                     // 0x0447(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_12;                          // 0x0448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_13;                // 0x044C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_30;         // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_114D[0x3];                                     // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_13;                          // 0x0454(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_14;                // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_31;         // 0x045C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_114E[0x3];                                     // 0x045D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_14;                          // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_15;                // 0x0464(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_32;         // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_114F[0x3];                                     // 0x0469(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_15;                          // 0x046C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_16;                // 0x0470(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_33;         // 0x0474(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1150[0x3];                                     // 0x0475(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_16;                          // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_34;         // 0x047C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1151[0x3];                                     // 0x047D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_17;                   // 0x0480(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_17;               // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1152[0x7];                                     // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_17;         // 0x0498(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_17;           // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_35;         // 0x04B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromDummyItemData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromDummyItemData");
static_assert(sizeof(BP_SBProductItemData_C_InitFromDummyItemData) == 0x0004B8, "Wrong size on BP_SBProductItemData_C_InitFromDummyItemData");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Param_DummyDataIndex) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Param_DummyDataIndex' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable) == 0x000004, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName) == 0x000008, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue) == 0x000018, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_1) == 0x000038, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000039, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue) == 0x00003A, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_int_Variable) == 0x00003C, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_2) == 0x000041, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000042, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_1) == 0x000048, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_1) == 0x000058, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000059, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_3) == 0x000078, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000079, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_2) == 0x000080, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_2) == 0x000090, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_3) == 0x000098, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_3) == 0x0000A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000B0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0000E1, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_4) == 0x0000E2, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0000E3, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_4) == 0x0000E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_4) == 0x0000F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000100, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000118, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000119, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x00011A, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_5) == 0x00011B, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x00011C, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_5) == 0x000120, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_5) == 0x000130, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000131, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000138, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_6) == 0x000150, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_7) == 0x000151, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x000152, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_6) == 0x000158, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_6) == 0x000168, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000170, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000188, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x000189, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_8) == 0x00018A, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_7) == 0x000190, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_7) == 0x0001A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0001A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_9) == 0x0001C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_8) == 0x0001C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_8) == 0x0001D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_8) == 0x0001E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x0001F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_9) == 0x0001F9, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_9) == 0x000200, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_9) == 0x000210, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000218, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_10) == 0x000230, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_10) == 0x000238, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_10) == 0x000248, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000250, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x000268, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_10) == 0x000269, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_10) == 0x00026A, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_11) == 0x00026B, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_11) == 0x000270, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_11) == 0x000280, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_11) == 0x000281, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_11) == 0x000288, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_11) == 0x0002A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_12) == 0x0002A1, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_12) == 0x0002A2, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_12) == 0x0002A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_12) == 0x0002B8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_12) == 0x0002C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_12) == 0x0002D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_13) == 0x0002D9, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_13) == 0x0002DA, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_13) == 0x0002E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_13) == 0x0002F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_13) == 0x0002F1, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_13) == 0x0002F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_14) == 0x000310, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_14) == 0x000311, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_14) == 0x000318, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_14) == 0x000328, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_14) == 0x000330, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_15) == 0x000348, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_15) == 0x000358, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_15) == 0x000360, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_14) == 0x000378, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_15) == 0x000379, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_15) == 0x00037A, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_15) == 0x00037B, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_16) == 0x00037C, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue) == 0x000380, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_17) == 0x000384, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_16) == 0x000388, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_16) == 0x000398, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_16) == 0x0003A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default) == 0x0003B8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_1) == 0x0003BC, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_18) == 0x0003C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_1) == 0x0003C4, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_2) == 0x0003C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_19) == 0x0003CC, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_2) == 0x0003D0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_3) == 0x0003D4, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_20) == 0x0003D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_3) == 0x0003DC, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_4) == 0x0003E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_21) == 0x0003E4, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_4) == 0x0003E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_5) == 0x0003EC, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_22) == 0x0003F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_5) == 0x0003F4, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_6) == 0x0003F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_23) == 0x0003FC, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_6) == 0x000400, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_7) == 0x000404, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_24) == 0x000408, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_7) == 0x00040C, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_8) == 0x000410, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_25) == 0x000414, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_8) == 0x000418, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_9) == 0x00041C, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_26) == 0x000420, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_9) == 0x000424, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_10) == 0x000428, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_27) == 0x00042C, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_10) == 0x000430, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_11) == 0x000434, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_28) == 0x000438, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_11) == 0x00043C, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_12) == 0x000440, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_29) == 0x000444, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_16) == 0x000445, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, Temp_bool_Variable_16) == 0x000446, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::Temp_bool_Variable_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_12) == 0x000448, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_13) == 0x00044C, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_30) == 0x000450, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_13) == 0x000454, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_14) == 0x000458, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_31) == 0x00045C, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_14) == 0x000460, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_15) == 0x000464, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_32) == 0x000468, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_15) == 0x00046C, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Add_IntInt_ReturnValue_16) == 0x000470, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Add_IntInt_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_33) == 0x000474, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, K2Node_Select_Default_16) == 0x000478, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::K2Node_Select_Default_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_34) == 0x00047C, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_OutName_17) == 0x000480, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_OutName_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_GetItemName_ReturnValue_17) == 0x000490, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_GetItemName_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_Conv_StringToText_ReturnValue_17) == 0x000498, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_Conv_StringToText_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_MakeLiteralByte_ReturnValue_17) == 0x0004B0, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_MakeLiteralByte_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemData, CallFunc_EqualEqual_IntInt_ReturnValue_35) == 0x0004B1, "Member 'BP_SBProductItemData_C_InitFromDummyItemData::CallFunc_EqualEqual_IntInt_ReturnValue_35' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemDataInItemBox
// 0x0800 (0x0800 - 0x0000)
struct BP_SBProductItemData_C_InitFromDummyItemDataInItemBox final
{
public:
	int32                                         Param_DummyDataIndex;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1153[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1154[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1155[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_1;                    // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_1;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1156[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0058(0x0018)()
	class FString                                 CallFunc_GetItemName_OutName_2;                    // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_2;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1157[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0088(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1158[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_3;                    // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_3;                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1159[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00C0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115A[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_4;                    // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_4;                // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115B[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x00F8(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115C[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_5;                    // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_5;                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115D[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0130(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115E[0x6];                                     // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_6;                    // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_6;                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115F[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0168(0x0018)()
	bool                                          Temp_bool_Variable_7;                              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x0183(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1160[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_7;                    // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_7;                // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1161[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_8;                    // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_8;                // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1162[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x01B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x01D0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_9;                              // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1163[0x5];                                     // 0x01EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_9;                    // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_9;                // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1164[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_10;                   // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_10;               // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1165[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0220(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0238(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_10;           // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_10;                             // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x0252(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1166[0x5];                                     // 0x0253(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_11;                   // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_11;               // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_11;           // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1167[0x6];                                     // 0x026A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x0270(0x0018)()
	bool                                          Temp_bool_Variable_12;                             // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1168[0x6];                                     // 0x028A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_12;                   // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_12;               // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_12;           // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1169[0x6];                                     // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x02A8(0x0018)()
	bool                                          Temp_bool_Variable_13;                             // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_116A[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_13;                   // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_13;               // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_116B[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x02E0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_13;           // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_14;                             // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_116C[0x6];                                     // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_14;                   // 0x0300(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_14;               // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_116D[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x0318(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_14;           // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_116E[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_15;                   // 0x0338(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_15;               // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_116F[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x0350(0x0018)()
	bool                                          Temp_bool_Variable_15;                             // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_15;           // 0x0369(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_16;           // 0x036A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1170[0x5];                                     // 0x036B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_16;                   // 0x0370(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_16;               // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1171[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_16;         // 0x0388(0x0018)()
	bool                                          Temp_bool_Variable_16;                             // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1172[0x6];                                     // 0x03A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_17;                   // 0x03A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_17;               // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1173[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_17;         // 0x03C0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_17;           // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_17;                             // 0x03D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_18;                             // 0x03DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1174[0x5];                                     // 0x03DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_18;                   // 0x03E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_18;               // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_18;           // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1175[0x6];                                     // 0x03F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_18;         // 0x03F8(0x0018)()
	bool                                          Temp_bool_Variable_19;                             // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1176[0x7];                                     // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_19;                   // 0x0418(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_19;               // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_19;           // 0x0429(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1177[0x6];                                     // 0x042A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_19;         // 0x0430(0x0018)()
	bool                                          Temp_bool_Variable_20;                             // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1178[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_20;                   // 0x0450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_20;               // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1179[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_21;                   // 0x0468(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_21;               // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_117A[0x7];                                     // 0x0479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_20;         // 0x0480(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_21;         // 0x0498(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_20;           // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_21;                             // 0x04B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_21;           // 0x04B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_117B[0x1];                                     // 0x04B3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x04B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_22;           // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x04B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_117C[0x2];                                     // 0x04BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x04BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_117D[0x7];                                     // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_22;                   // 0x04C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_22;               // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_117E[0x7];                                     // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_22;         // 0x04E0(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_23;           // 0x04FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x04FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_117F[0x2];                                     // 0x04FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0500(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0504(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_8;          // 0x0509(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1180[0x2];                                     // 0x050A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x050C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_9;          // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1181[0x3];                                     // 0x0511(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0514(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_10;         // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1182[0x3];                                     // 0x0519(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x051C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_11;         // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_22;                             // 0x0521(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1183[0x2];                                     // 0x0522(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;                 // 0x0524(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_12;         // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1184[0x3];                                     // 0x0529(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_9;                 // 0x052C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_13;         // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1185[0x7];                                     // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_23;                   // 0x0538(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_23;               // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1186[0x7];                                     // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_23;         // 0x0550(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_10;                // 0x0568(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_11;                // 0x056C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_14;         // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_15;         // 0x0571(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1187[0x2];                                     // 0x0572(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_12;                // 0x0574(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_16;         // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1188[0x3];                                     // 0x0579(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_13;                // 0x057C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_14;                // 0x0580(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_17;         // 0x0584(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_18;         // 0x0585(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1189[0x2];                                     // 0x0586(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_15;                // 0x0588(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_19;         // 0x058C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_118A[0x3];                                     // 0x058D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_16;                // 0x0590(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_118B[0x4];                                     // 0x0594(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_24;                   // 0x0598(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_24;               // 0x05A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_20;         // 0x05A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_118C[0x6];                                     // 0x05AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_24;         // 0x05B0(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_17;                // 0x05C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_21;         // 0x05CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_118D[0x3];                                     // 0x05CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_25;                   // 0x05D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_25;               // 0x05E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_118E[0x7];                                     // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_25;         // 0x05E8(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_18;                // 0x0600(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_22;         // 0x0604(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_118F[0x3];                                     // 0x0605(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_19;                // 0x0608(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_23;                             // 0x060C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_23;         // 0x060D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_24;         // 0x060E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_24;           // 0x060F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_24;                             // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_25;           // 0x0611(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_25;         // 0x0612(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_26;         // 0x0613(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1190[0x4];                                     // 0x0614(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_26;                   // 0x0618(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_26;               // 0x0628(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1191[0x7];                                     // 0x0629(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_26;         // 0x0630(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_26;           // 0x0648(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_25;                             // 0x0649(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_27;         // 0x064A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1192[0x5];                                     // 0x064B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_27;                   // 0x0650(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_27;               // 0x0660(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1193[0x7];                                     // 0x0661(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_27;         // 0x0668(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_27;           // 0x0680(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_26;                             // 0x0681(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_27;                             // 0x0682(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_28;         // 0x0683(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_20;                // 0x0684(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_29;         // 0x0688(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1194[0x3];                                     // 0x0689(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x068C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_21;                // 0x0690(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1195[0x4];                                     // 0x0694(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_28;                   // 0x0698(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_28;               // 0x06A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1196[0x3];                                     // 0x06A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x06AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_28;         // 0x06B0(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_22;                // 0x06C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x06CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_30;         // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1197[0x3];                                     // 0x06D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_23;                // 0x06D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x06D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_31;         // 0x06DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1198[0x3];                                     // 0x06DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_24;                // 0x06E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_4;                           // 0x06E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_32;         // 0x06E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1199[0x3];                                     // 0x06E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_25;                // 0x06EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_5;                           // 0x06F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_33;         // 0x06F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119A[0x3];                                     // 0x06F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_26;                // 0x06F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_6;                           // 0x06FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_34;         // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119B[0x3];                                     // 0x0701(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_27;                // 0x0704(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_7;                           // 0x0708(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_35;         // 0x070C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119C[0x3];                                     // 0x070D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_28;                // 0x0710(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_8;                           // 0x0714(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_36;         // 0x0718(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119D[0x3];                                     // 0x0719(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_29;                // 0x071C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_9;                           // 0x0720(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_37;         // 0x0724(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119E[0x3];                                     // 0x0725(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_30;                // 0x0728(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_10;                          // 0x072C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_38;         // 0x0730(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119F[0x3];                                     // 0x0731(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_31;                // 0x0734(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_11;                          // 0x0738(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_39;         // 0x073C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A0[0x3];                                     // 0x073D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_32;                // 0x0740(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_12;                          // 0x0744(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_40;         // 0x0748(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A1[0x3];                                     // 0x0749(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_33;                // 0x074C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_13;                          // 0x0750(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_41;         // 0x0754(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A2[0x3];                                     // 0x0755(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_34;                // 0x0758(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_14;                          // 0x075C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_42;         // 0x0760(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A3[0x3];                                     // 0x0761(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_35;                // 0x0764(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_15;                          // 0x0768(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_43;         // 0x076C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A4[0x3];                                     // 0x076D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_36;                // 0x0770(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_16;                          // 0x0774(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_44;         // 0x0778(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A5[0x3];                                     // 0x0779(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_37;                // 0x077C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_17;                          // 0x0780(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_45;         // 0x0784(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A6[0x3];                                     // 0x0785(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_38;                // 0x0788(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_18;                          // 0x078C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_46;         // 0x0790(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A7[0x3];                                     // 0x0791(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_39;                // 0x0794(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_19;                          // 0x0798(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_47;         // 0x079C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A8[0x3];                                     // 0x079D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_40;                // 0x07A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_20;                          // 0x07A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_48;         // 0x07A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A9[0x3];                                     // 0x07A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_41;                // 0x07AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_21;                          // 0x07B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_49;         // 0x07B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11AA[0x3];                                     // 0x07B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_42;                // 0x07B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_22;                          // 0x07BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_50;         // 0x07C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11AB[0x3];                                     // 0x07C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_43;                // 0x07C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_23;                          // 0x07C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_51;         // 0x07CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11AC[0x3];                                     // 0x07CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_44;                // 0x07D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_24;                          // 0x07D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_52;         // 0x07D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11AD[0x3];                                     // 0x07D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_45;                // 0x07DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_25;                          // 0x07E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_53;         // 0x07E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11AE[0x3];                                     // 0x07E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_46;                // 0x07E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_26;                          // 0x07EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_54;         // 0x07F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11AF[0x3];                                     // 0x07F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_47;                // 0x07F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_27;                          // 0x07F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_55;         // 0x07FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_56;         // 0x07FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_28;           // 0x07FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_57;         // 0x07FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromDummyItemDataInItemBox");
static_assert(sizeof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox) == 0x000800, "Wrong size on BP_SBProductItemData_C_InitFromDummyItemDataInItemBox");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Param_DummyDataIndex) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Param_DummyDataIndex' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable) == 0x000004, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName) == 0x000008, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue) == 0x000018, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_int_Variable) == 0x000038, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_1) == 0x00003C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003D, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_1) == 0x000040, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_1) == 0x000050, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000051, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000058, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_2) == 0x000070, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_2) == 0x000080, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000088, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_2) == 0x0000A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000A1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_3) == 0x0000A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_3) == 0x0000B8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0000D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_3) == 0x0000D9, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_4) == 0x0000E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_4) == 0x0000F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0000F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000110, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_4) == 0x000111, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_5) == 0x000112, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_6) == 0x000113, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_5) == 0x000118, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_5) == 0x000128, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000130, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000148, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000149, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_6) == 0x000150, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_6) == 0x000160, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000168, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_7) == 0x000180, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000181, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000182, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_8) == 0x000183, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_7) == 0x000188, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_7) == 0x000198, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_8) == 0x0001A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_8) == 0x0001B0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0001B8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_8) == 0x0001D0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x0001E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_9) == 0x0001E9, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x0001EA, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_9) == 0x0001F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_9) == 0x000200, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_10) == 0x000208, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_10) == 0x000218, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000220, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000238, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_10) == 0x000250, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_10) == 0x000251, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_11) == 0x000252, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_11) == 0x000258, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_11) == 0x000268, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_11) == 0x000269, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_11) == 0x000270, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_12) == 0x000288, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000289, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_12) == 0x000290, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_12) == 0x0002A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_12) == 0x0002A1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_12) == 0x0002A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_13) == 0x0002C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_13) == 0x0002C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_13) == 0x0002D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_13) == 0x0002E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_13) == 0x0002F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_14) == 0x0002F9, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_14) == 0x000300, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_14) == 0x000310, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_14) == 0x000318, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_14) == 0x000330, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_15) == 0x000338, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_15) == 0x000348, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_15) == 0x000350, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_15) == 0x000368, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_15) == 0x000369, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_16) == 0x00036A, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_16) == 0x000370, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_16) == 0x000380, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_16) == 0x000388, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_16) == 0x0003A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0003A1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_17) == 0x0003A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_17) == 0x0003B8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_17) == 0x0003C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_17) == 0x0003D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_17) == 0x0003D9, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_18) == 0x0003DA, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_18) == 0x0003E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_18) == 0x0003F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_18) == 0x0003F1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_18) == 0x0003F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_19) == 0x000410, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_19) == 0x000418, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_19) == 0x000428, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_19) == 0x000429, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_19) == 0x000430, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_20) == 0x000448, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_20) == 0x000450, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_20) == 0x000460, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_21) == 0x000468, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_21) == 0x000478, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_20) == 0x000480, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_21) == 0x000498, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_20) == 0x0004B0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_21) == 0x0004B1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_21) == 0x0004B2, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue) == 0x0004B4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_22) == 0x0004B8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0004B9, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x0004BC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x0004C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_22) == 0x0004C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_22) == 0x0004D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_22) == 0x0004E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_2) == 0x0004F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_23) == 0x0004FC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x0004FD, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_3) == 0x000500, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_4) == 0x000504, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x000508, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x000509, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_5) == 0x00050C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_9) == 0x000510, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_6) == 0x000514, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_10) == 0x000518, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_7) == 0x00051C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_11) == 0x000520, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_22) == 0x000521, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_8) == 0x000524, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_12) == 0x000528, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_9) == 0x00052C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_13) == 0x000530, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_23) == 0x000538, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_23) == 0x000548, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_23) == 0x000550, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_10) == 0x000568, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_11) == 0x00056C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_14) == 0x000570, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_15) == 0x000571, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_12) == 0x000574, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_16) == 0x000578, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_13) == 0x00057C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_14) == 0x000580, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_17) == 0x000584, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_18) == 0x000585, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_15) == 0x000588, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_19) == 0x00058C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_16) == 0x000590, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_24) == 0x000598, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_24) == 0x0005A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_20) == 0x0005A9, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_24) == 0x0005B0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_17) == 0x0005C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_21) == 0x0005CC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_25) == 0x0005D0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_25) == 0x0005E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_25) == 0x0005E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_18) == 0x000600, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_22) == 0x000604, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_19) == 0x000608, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_23) == 0x00060C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_23) == 0x00060D, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_24) == 0x00060E, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_24) == 0x00060F, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_24) == 0x000610, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_25) == 0x000611, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_25) == 0x000612, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_26) == 0x000613, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_26) == 0x000618, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_26) == 0x000628, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_26) == 0x000630, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_26) == 0x000648, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_25) == 0x000649, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_27) == 0x00064A, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_27) == 0x000650, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_27) == 0x000660, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_27) == 0x000668, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_27) == 0x000680, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_26) == 0x000681, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, Temp_bool_Variable_27) == 0x000682, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::Temp_bool_Variable_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_28) == 0x000683, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_20) == 0x000684, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_29) == 0x000688, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default) == 0x00068C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_21) == 0x000690, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_OutName_28) == 0x000698, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_OutName_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_GetItemName_ReturnValue_28) == 0x0006A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_GetItemName_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_1) == 0x0006AC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Conv_StringToText_ReturnValue_28) == 0x0006B0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Conv_StringToText_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_22) == 0x0006C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_2) == 0x0006CC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_30) == 0x0006D0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_23) == 0x0006D4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_3) == 0x0006D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_31) == 0x0006DC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_24) == 0x0006E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_4) == 0x0006E4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_32) == 0x0006E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_25) == 0x0006EC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_5) == 0x0006F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_33) == 0x0006F4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_26) == 0x0006F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_6) == 0x0006FC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_34) == 0x000700, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_27) == 0x000704, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_7) == 0x000708, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_35) == 0x00070C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_28) == 0x000710, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_8) == 0x000714, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_36) == 0x000718, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_29) == 0x00071C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_9) == 0x000720, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_37) == 0x000724, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_30) == 0x000728, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_10) == 0x00072C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_38) == 0x000730, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_31) == 0x000734, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_11) == 0x000738, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_39) == 0x00073C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_32) == 0x000740, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_12) == 0x000744, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_40) == 0x000748, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_33) == 0x00074C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_13) == 0x000750, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_41) == 0x000754, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_34) == 0x000758, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_14) == 0x00075C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_42) == 0x000760, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_35) == 0x000764, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_15) == 0x000768, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_43) == 0x00076C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_36) == 0x000770, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_16) == 0x000774, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_44) == 0x000778, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_37) == 0x00077C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_17) == 0x000780, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_45) == 0x000784, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_45' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_38) == 0x000788, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_18) == 0x00078C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_46) == 0x000790, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_46' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_39) == 0x000794, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_19) == 0x000798, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_47) == 0x00079C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_47' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_40) == 0x0007A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_20) == 0x0007A4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_48) == 0x0007A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_48' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_41) == 0x0007AC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_21) == 0x0007B0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_49) == 0x0007B4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_49' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_42) == 0x0007B8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_22) == 0x0007BC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_50) == 0x0007C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_50' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_43) == 0x0007C4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_23) == 0x0007C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_51) == 0x0007CC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_51' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_44) == 0x0007D0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_24) == 0x0007D4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_52) == 0x0007D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_52' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_45) == 0x0007DC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_45' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_25) == 0x0007E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_53) == 0x0007E4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_53' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_46) == 0x0007E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_46' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_26) == 0x0007EC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_54) == 0x0007F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_54' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_Add_IntInt_ReturnValue_47) == 0x0007F4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_Add_IntInt_ReturnValue_47' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, K2Node_Select_Default_27) == 0x0007F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::K2Node_Select_Default_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_55) == 0x0007FC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_55' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_56) == 0x0007FD, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_56' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_MakeLiteralByte_ReturnValue_28) == 0x0007FE, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_MakeLiteralByte_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_57) == 0x0007FF, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_57' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemDataInCostumeSet
// 0x0DB8 (0x0DB8 - 0x0000)
struct BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet final
{
public:
	int32                                         DummyCostumeSetIndex;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_DummyDataIndex;                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11B0[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11B1[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11B2[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11B3[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_1;                    // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_1;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11B4[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0068(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11B5[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11B6[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_2;                    // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_2;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11B7[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00A8(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11B8[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_3;                    // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_3;                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11B9[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00E0(0x0018)()
	class FString                                 CallFunc_GetItemName_OutName_4;                    // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_4;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11BA[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0110(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11BB[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_5;                    // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_5;                // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11BC[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0148(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11BD[0x5];                                     // 0x0163(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_6;                    // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_6;                // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11BE[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0180(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11BF[0x6];                                     // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_7;                    // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_7;                // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11C0[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x01B8(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x01D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11C1[0x2];                                     // 0x01D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C2[0x5];                                     // 0x01E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_8;                    // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_8;                // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11C3[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0200(0x0018)()
	int32                                         Temp_int_Variable_2;                               // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C4[0x4];                                     // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_9;                    // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_9;                // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11C5[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0238(0x0018)()
	bool                                          Temp_bool_Variable_7;                              // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_10;           // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C6[0x6];                                     // 0x0252(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_10;                   // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_10;               // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11C7[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0270(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_11;           // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C8[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_11;                   // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_11;               // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_12;           // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C9[0x6];                                     // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x02A8(0x0018)()
	bool                                          Temp_bool_Variable_8;                              // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11CA[0x6];                                     // 0x02C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_12;                   // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_12;               // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11CB[0x6];                                     // 0x02DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x02E0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11CC[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_13;           // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x0302(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11CD[0x5];                                     // 0x0303(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_13;                   // 0x0308(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_13;               // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11CE[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x0320(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_14;           // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_12;                             // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11CF[0x2];                                     // 0x033A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_15;           // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D0[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_14;                   // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_14;               // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11D1[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x0360(0x0018)()
	int32                                         Temp_int_Variable_3;                               // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D2[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_15;                   // 0x0380(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_15;               // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11D3[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x0398(0x0018)()
	bool                                          Temp_bool_Variable_13;                             // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11D4[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_16;                   // 0x03B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_16;               // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_16;           // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D5[0x6];                                     // 0x03CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_16;         // 0x03D0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_17;           // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D6[0x3];                                     // 0x03E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_14;                             // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11D7[0x7];                                     // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_17;                   // 0x03F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_17;               // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_8;          // 0x0409(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11D8[0x6];                                     // 0x040A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_17;         // 0x0410(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_18;           // 0x042C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_9;          // 0x042D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_15;                             // 0x042E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_16;                             // 0x042F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_19;           // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D9[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_18;                   // 0x0438(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_18;               // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11DA[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_18;         // 0x0450(0x0018)()
	bool                                          Temp_bool_Variable_17;                             // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_20;           // 0x0469(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11DB[0x6];                                     // 0x046A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_19;                   // 0x0470(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_19;               // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11DC[0x7];                                     // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_19;         // 0x0488(0x0018)()
	bool                                          Temp_bool_Variable_18;                             // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11DD[0x7];                                     // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_20;                   // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_20;               // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_21;           // 0x04B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11DE[0x6];                                     // 0x04BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_20;         // 0x04C0(0x0018)()
	class FString                                 CallFunc_GetItemName_OutName_21;                   // 0x04D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_21;               // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11DF[0x7];                                     // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_21;         // 0x04F0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_22;           // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11E0[0x3];                                     // 0x0509(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x050C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_19;                             // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11E1[0x7];                                     // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_22;                   // 0x0518(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_22;               // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11E2[0x7];                                     // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_22;         // 0x0530(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_10;         // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11E3[0x3];                                     // 0x0549(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x054C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_11;         // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11E4[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_23;                   // 0x0558(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_23;               // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_23;           // 0x0569(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11E5[0x6];                                     // 0x056A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_23;         // 0x0570(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_24;           // 0x0588(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11E6[0x7];                                     // 0x0589(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_24;                   // 0x0590(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_24;               // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_25;           // 0x05A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11E7[0x6];                                     // 0x05A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_24;         // 0x05A8(0x0018)()
	bool                                          Temp_bool_Variable_20;                             // 0x05C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11E8[0x7];                                     // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_25;                   // 0x05C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_25;               // 0x05D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11E9[0x7];                                     // 0x05D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_25;         // 0x05E0(0x0018)()
	class FString                                 CallFunc_GetItemName_OutName_26;                   // 0x05F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_26;               // 0x0608(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11EA[0x7];                                     // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_26;         // 0x0610(0x0018)()
	bool                                          Temp_bool_Variable_21;                             // 0x0628(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_26;           // 0x0629(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_22;                             // 0x062A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11EB[0x5];                                     // 0x062B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_27;                   // 0x0630(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_27;               // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11EC[0x7];                                     // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_27;         // 0x0648(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_27;           // 0x0660(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_23;                             // 0x0661(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11ED[0x6];                                     // 0x0662(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_28;                   // 0x0668(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_28;               // 0x0678(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11EE[0x7];                                     // 0x0679(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_28;         // 0x0680(0x0018)()
	class FString                                 CallFunc_GetItemName_OutName_29;                   // 0x0698(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_29;               // 0x06A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11EF[0x7];                                     // 0x06A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_29;         // 0x06B0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_12;         // 0x06C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11F0[0x3];                                     // 0x06C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x06CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_28;           // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_13;         // 0x06D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11F1[0x2];                                     // 0x06D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x06D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;                 // 0x06D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x06DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_29;           // 0x06E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_24;                             // 0x06E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11F2[0x2];                                     // 0x06E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x06E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_9;                 // 0x06E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_14;         // 0x06EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_15;         // 0x06ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_30;           // 0x06EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11F3[0x1];                                     // 0x06EF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_30;                   // 0x06F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_30;               // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11F4[0x7];                                     // 0x0701(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_30;         // 0x0708(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_31;           // 0x0720(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11F5[0x7];                                     // 0x0721(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_31;                   // 0x0728(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_31;               // 0x0738(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11F6[0x7];                                     // 0x0739(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_31;         // 0x0740(0x0018)()
	bool                                          Temp_bool_Variable_25;                             // 0x0758(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11F7[0x3];                                     // 0x0759(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_7;                               // 0x075C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_32;           // 0x0760(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11F8[0x7];                                     // 0x0761(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_32;                   // 0x0768(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_32;               // 0x0778(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11F9[0x7];                                     // 0x0779(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_32;         // 0x0780(0x0018)()
	bool                                          Temp_bool_Variable_26;                             // 0x0798(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_33;           // 0x0799(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11FA[0x6];                                     // 0x079A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_33;                   // 0x07A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_33;               // 0x07B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11FB[0x7];                                     // 0x07B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_33;         // 0x07B8(0x0018)()
	bool                                          Temp_bool_Variable_27;                             // 0x07D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11FC[0x3];                                     // 0x07D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_3;                           // 0x07D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_28;                             // 0x07D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11FD[0x3];                                     // 0x07D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_10;                // 0x07DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_16;         // 0x07E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_17;         // 0x07E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11FE[0x2];                                     // 0x07E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_11;                // 0x07E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_18;         // 0x07E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11FF[0x3];                                     // 0x07E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_4;                           // 0x07EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_12;                // 0x07F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1200[0x4];                                     // 0x07F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_34;                   // 0x07F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_34;               // 0x0808(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1201[0x7];                                     // 0x0809(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_34;         // 0x0810(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_34;           // 0x0828(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1202[0x3];                                     // 0x0829(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_8;                               // 0x082C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_19;         // 0x0830(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_29;                             // 0x0831(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1203[0x2];                                     // 0x0832(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_5;                           // 0x0834(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_13;                // 0x0838(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_20;         // 0x083C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1204[0x3];                                     // 0x083D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_35;                   // 0x0840(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_35;               // 0x0850(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_35;           // 0x0851(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1205[0x6];                                     // 0x0852(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_35;         // 0x0858(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_36;           // 0x0870(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1206[0x7];                                     // 0x0871(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_36;                   // 0x0878(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_36;               // 0x0888(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1207[0x7];                                     // 0x0889(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_37;                   // 0x0890(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_37;               // 0x08A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1208[0x7];                                     // 0x08A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_36;         // 0x08A8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_37;         // 0x08C0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_37;           // 0x08D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_30;                             // 0x08D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_38;           // 0x08DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_21;         // 0x08DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1209[0x4];                                     // 0x08DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_38;                   // 0x08E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_38;               // 0x08F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120A[0x7];                                     // 0x08F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_38;         // 0x08F8(0x0018)()
	int32                                         K2Node_Select_Default_6;                           // 0x0910(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_14;                // 0x0914(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_22;         // 0x0918(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_39;           // 0x0919(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_31;                             // 0x091A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_23;         // 0x091B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_15;                // 0x091C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_24;         // 0x0920(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120B[0x7];                                     // 0x0921(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_39;                   // 0x0928(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_39;               // 0x0938(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120C[0x3];                                     // 0x0939(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_7;                           // 0x093C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_39;         // 0x0940(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_16;                // 0x0958(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_40;           // 0x095C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_32;                             // 0x095D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_25;         // 0x095E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_41;           // 0x095F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemName_OutName_40;                   // 0x0960(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_40;               // 0x0970(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120D[0x7];                                     // 0x0971(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_40;         // 0x0978(0x0018)()
	class FString                                 CallFunc_GetItemName_OutName_41;                   // 0x0990(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_41;               // 0x09A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120E[0x3];                                     // 0x09A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_9;                               // 0x09A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_41;         // 0x09A8(0x0018)()
	bool                                          Temp_bool_Variable_33;                             // 0x09C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120F[0x3];                                     // 0x09C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_8;                           // 0x09C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_42;           // 0x09C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1210[0x3];                                     // 0x09C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_17;                // 0x09CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_26;         // 0x09D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1211[0x7];                                     // 0x09D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_42;                   // 0x09D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_42;               // 0x09E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1212[0x7];                                     // 0x09E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_42;         // 0x09F0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_43;           // 0x0A08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1213[0x7];                                     // 0x0A09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_43;                   // 0x0A10(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_43;               // 0x0A20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1214[0x7];                                     // 0x0A21(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_43;         // 0x0A28(0x0018)()
	class FString                                 CallFunc_GetItemName_OutName_44;                   // 0x0A40(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_44;               // 0x0A50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_44;           // 0x0A51(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1215[0x6];                                     // 0x0A52(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_44;         // 0x0A58(0x0018)()
	bool                                          Temp_bool_Variable_34;                             // 0x0A70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_35;                             // 0x0A71(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1216[0x2];                                     // 0x0A72(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_18;                // 0x0A74(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_27;         // 0x0A78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1217[0x3];                                     // 0x0A79(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_19;                // 0x0A7C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_28;         // 0x0A80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1218[0x7];                                     // 0x0A81(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_45;                   // 0x0A88(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_45;               // 0x0A98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1219[0x7];                                     // 0x0A99(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_45;         // 0x0AA0(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_20;                // 0x0AB8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_29;         // 0x0ABC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121A[0x3];                                     // 0x0ABD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_21;                // 0x0AC0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_22;                // 0x0AC4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_30;         // 0x0AC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_31;         // 0x0AC9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121B[0x2];                                     // 0x0ACA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_23;                // 0x0ACC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_32;         // 0x0AD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121C[0x3];                                     // 0x0AD1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_24;                // 0x0AD4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_33;         // 0x0AD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121D[0x7];                                     // 0x0AD9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_46;                   // 0x0AE0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_46;               // 0x0AF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121E[0x7];                                     // 0x0AF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_46;         // 0x0AF8(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_25;                // 0x0B10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_45;           // 0x0B14(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_34;         // 0x0B15(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_36;                             // 0x0B16(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121F[0x1];                                     // 0x0B17(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_26;                // 0x0B18(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_46;           // 0x0B1C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_35;         // 0x0B1D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1220[0x2];                                     // 0x0B1E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_9;                           // 0x0B20(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_27;                // 0x0B24(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_36;         // 0x0B28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1221[0x3];                                     // 0x0B29(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_28;                // 0x0B2C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_37;         // 0x0B30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1222[0x3];                                     // 0x0B31(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_10;                          // 0x0B34(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_29;                // 0x0B38(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_30;                // 0x0B3C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_38;         // 0x0B40(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1223[0x3];                                     // 0x0B41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_11;                          // 0x0B44(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_31;                // 0x0B48(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_39;         // 0x0B4C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_40;         // 0x0B4D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_41;         // 0x0B4E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1224[0x1];                                     // 0x0B4F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_32;                // 0x0B50(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_37;                             // 0x0B54(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_42;         // 0x0B55(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1225[0x2];                                     // 0x0B56(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_33;                // 0x0B58(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_43;         // 0x0B5C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1226[0x3];                                     // 0x0B5D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_34;                // 0x0B60(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_35;                // 0x0B64(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_44;         // 0x0B68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_45;         // 0x0B69(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1227[0x2];                                     // 0x0B6A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_12;                          // 0x0B6C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_36;                // 0x0B70(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_46;         // 0x0B74(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1228[0x3];                                     // 0x0B75(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_37;                // 0x0B78(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_47;         // 0x0B7C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1229[0x3];                                     // 0x0B7D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_13;                          // 0x0B80(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_38;                // 0x0B84(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_39;                // 0x0B88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_48;         // 0x0B8C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122A[0x3];                                     // 0x0B8D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_14;                          // 0x0B90(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_40;                // 0x0B94(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_49;         // 0x0B98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_50;         // 0x0B99(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_51;         // 0x0B9A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122B[0x1];                                     // 0x0B9B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_41;                // 0x0B9C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_52;         // 0x0BA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_47;           // 0x0BA1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_122C[0x6];                                     // 0x0BA2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_47;                   // 0x0BA8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_47;               // 0x0BB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122D[0x7];                                     // 0x0BB9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_47;         // 0x0BC0(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_42;                // 0x0BD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_53;         // 0x0BDC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122E[0x3];                                     // 0x0BDD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_15;                          // 0x0BE0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_43;                // 0x0BE4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_44;                // 0x0BE8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_54;         // 0x0BEC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122F[0x3];                                     // 0x0BED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_16;                          // 0x0BF0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_45;                // 0x0BF4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_46;                // 0x0BF8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_55;         // 0x0BFC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1230[0x3];                                     // 0x0BFD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_17;                          // 0x0C00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_47;                // 0x0C04(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_56;         // 0x0C08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_57;         // 0x0C09(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_58;         // 0x0C0A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_59;         // 0x0C0B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_48;                // 0x0C0C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_60;         // 0x0C10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1231[0x7];                                     // 0x0C11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_48;                   // 0x0C18(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_48;               // 0x0C28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1232[0x7];                                     // 0x0C29(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_48;         // 0x0C30(0x0018)()
	int32                                         K2Node_Select_Default_18;                          // 0x0C48(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_49;                // 0x0C4C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_61;         // 0x0C50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1233[0x3];                                     // 0x0C51(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_50;                // 0x0C54(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_62;         // 0x0C58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1234[0x3];                                     // 0x0C59(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_19;                          // 0x0C5C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_51;                // 0x0C60(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_52;                // 0x0C64(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_63;         // 0x0C68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1235[0x3];                                     // 0x0C69(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_20;                          // 0x0C6C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_53;                // 0x0C70(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_64;         // 0x0C74(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_65;         // 0x0C75(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_66;         // 0x0C76(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_38;                             // 0x0C77(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_54;                // 0x0C78(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_21;                          // 0x0C7C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_67;         // 0x0C80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1236[0x3];                                     // 0x0C81(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_55;                // 0x0C84(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_22;                          // 0x0C88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_23;                          // 0x0C8C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_56;                // 0x0C90(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_57;                // 0x0C94(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_24;                          // 0x0C98(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_68;         // 0x0C9C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_69;         // 0x0C9D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_70;         // 0x0C9E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_71;         // 0x0C9F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_58;                // 0x0CA0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_48;           // 0x0CA4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_72;         // 0x0CA5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1237[0x2];                                     // 0x0CA6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_25;                          // 0x0CA8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_59;                // 0x0CAC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_73;         // 0x0CB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1238[0x3];                                     // 0x0CB1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_60;                // 0x0CB4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_74;         // 0x0CB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1239[0x3];                                     // 0x0CB9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_26;                          // 0x0CBC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_61;                // 0x0CC0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_75;         // 0x0CC4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_76;         // 0x0CC5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_123A[0x2];                                     // 0x0CC6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_62;                // 0x0CC8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_39;                             // 0x0CCC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_77;         // 0x0CCD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_123B[0x2];                                     // 0x0CCE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_27;                          // 0x0CD0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_28;                          // 0x0CD4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_63;                // 0x0CD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_64;                // 0x0CDC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_29;                          // 0x0CE0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_78;         // 0x0CE4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_123C[0x3];                                     // 0x0CE5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_65;                // 0x0CE8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_30;                          // 0x0CEC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_79;         // 0x0CF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_80;         // 0x0CF1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_81;         // 0x0CF2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_123D[0x1];                                     // 0x0CF3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_66;                // 0x0CF4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_82;         // 0x0CF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_123E[0x3];                                     // 0x0CF9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_31;                          // 0x0CFC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_67;                // 0x0D00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_68;                // 0x0D04(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_83;         // 0x0D08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_123F[0x3];                                     // 0x0D09(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_32;                          // 0x0D0C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_69;                // 0x0D10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_84;         // 0x0D14(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_85;         // 0x0D15(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_86;         // 0x0D16(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1240[0x1];                                     // 0x0D17(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName_49;                   // 0x0D18(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue_49;               // 0x0D28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_87;         // 0x0D29(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1241[0x6];                                     // 0x0D2A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_49;         // 0x0D30(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_49;           // 0x0D48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1242[0x3];                                     // 0x0D49(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_70;                // 0x0D4C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_88;         // 0x0D50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1243[0x3];                                     // 0x0D51(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_33;                          // 0x0D54(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_71;                // 0x0D58(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_89;         // 0x0D5C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1244[0x3];                                     // 0x0D5D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_72;                // 0x0D60(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_90;         // 0x0D64(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1245[0x3];                                     // 0x0D65(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_34;                          // 0x0D68(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_73;                // 0x0D6C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_74;                // 0x0D70(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_91;         // 0x0D74(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1246[0x3];                                     // 0x0D75(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_35;                          // 0x0D78(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_75;                // 0x0D7C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_92;         // 0x0D80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_93;         // 0x0D81(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_94;         // 0x0D82(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1247[0x1];                                     // 0x0D83(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_76;                // 0x0D84(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_36;                          // 0x0D88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_77;                // 0x0D8C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_95;         // 0x0D90(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1248[0x3];                                     // 0x0D91(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_37;                          // 0x0D94(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_78;                // 0x0D98(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_96;         // 0x0D9C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1249[0x3];                                     // 0x0D9D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_38;                          // 0x0DA0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_79;                // 0x0DA4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_97;         // 0x0DA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_124A[0x3];                                     // 0x0DA9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_39;                          // 0x0DAC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_98;         // 0x0DB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_99;         // 0x0DB1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet");
static_assert(sizeof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet) == 0x000DB8, "Wrong size on BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, DummyCostumeSetIndex) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::DummyCostumeSetIndex' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Param_DummyDataIndex) == 0x000004, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Param_DummyDataIndex' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_SwitchInteger_CmpSuccess) == 0x000008, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_int_Variable) == 0x00000C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_int_Variable_1) == 0x000014, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName) == 0x000018, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue) == 0x000028, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable) == 0x000048, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_1) == 0x000049, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue) == 0x00004A, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_1) == 0x000050, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_1) == 0x000060, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000068, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_2) == 0x000080, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000081, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000088, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000089, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_2) == 0x000090, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_2) == 0x0000A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_3) == 0x0000A1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_3) == 0x0000C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_3) == 0x0000D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_4) == 0x0000F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_4) == 0x000108, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000110, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000128, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000129, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_5) == 0x000130, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_5) == 0x000140, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000148, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000160, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_4) == 0x000161, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000162, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_6) == 0x000168, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_6) == 0x000178, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000180, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000198, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_5) == 0x000199, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_7) == 0x0001A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_7) == 0x0001B0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0001B1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0001B8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001D0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x0001D4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0001D5, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default) == 0x0001D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001DC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_6) == 0x0001E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x0001E1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x0001E2, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_8) == 0x0001E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_8) == 0x0001F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000200, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_int_Variable_2) == 0x000218, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_9) == 0x000220, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_9) == 0x000230, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000238, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_7) == 0x000250, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_10) == 0x000251, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_10) == 0x000258, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_10) == 0x000268, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000270, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_11) == 0x000288, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_11) == 0x000290, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_11) == 0x0002A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_12) == 0x0002A1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_11) == 0x0002A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_8) == 0x0002C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_9) == 0x0002C1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_12) == 0x0002C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_12) == 0x0002D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_10) == 0x0002D9, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_12) == 0x0002E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x0002F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_3) == 0x0002FC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_13) == 0x000300, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x000301, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_11) == 0x000302, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_13) == 0x000308, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_13) == 0x000318, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_13) == 0x000320, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_14) == 0x000338, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_12) == 0x000339, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_4) == 0x00033C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_15) == 0x000340, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_14) == 0x000348, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_14) == 0x000358, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_14) == 0x000360, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_int_Variable_3) == 0x000378, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_15) == 0x000380, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_15) == 0x000390, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_15) == 0x000398, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_13) == 0x0003B0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_16) == 0x0003B8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_16) == 0x0003C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_16) == 0x0003C9, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_16) == 0x0003D0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_17) == 0x0003E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_int_Variable_4) == 0x0003EC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_14) == 0x0003F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_17) == 0x0003F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_17) == 0x000408, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x000409, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_17) == 0x000410, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_5) == 0x000428, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_18) == 0x00042C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_9) == 0x00042D, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_15) == 0x00042E, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_16) == 0x00042F, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_19) == 0x000430, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_18) == 0x000438, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_18) == 0x000448, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_18) == 0x000450, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_17) == 0x000468, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_20) == 0x000469, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_19) == 0x000470, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_19) == 0x000480, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_19) == 0x000488, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_18) == 0x0004A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_20) == 0x0004A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_20) == 0x0004B8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_21) == 0x0004B9, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_20) == 0x0004C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_21) == 0x0004D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_21) == 0x0004E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_21) == 0x0004F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_22) == 0x000508, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_int_Variable_5) == 0x00050C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_19) == 0x000510, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_22) == 0x000518, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_22) == 0x000528, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_22) == 0x000530, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_10) == 0x000548, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_6) == 0x00054C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_11) == 0x000550, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_23) == 0x000558, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_23) == 0x000568, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_23) == 0x000569, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_23) == 0x000570, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_24) == 0x000588, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_24) == 0x000590, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_24) == 0x0005A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_25) == 0x0005A1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_24) == 0x0005A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_20) == 0x0005C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_25) == 0x0005C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_25) == 0x0005D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_25) == 0x0005E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_26) == 0x0005F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_26) == 0x000608, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_26) == 0x000610, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_21) == 0x000628, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_26) == 0x000629, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_22) == 0x00062A, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_27) == 0x000630, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_27) == 0x000640, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_27) == 0x000648, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_27) == 0x000660, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_23) == 0x000661, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_28) == 0x000668, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_28) == 0x000678, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_28) == 0x000680, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_29) == 0x000698, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_29' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_29) == 0x0006A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_29) == 0x0006B0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_12) == 0x0006C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_7) == 0x0006CC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_28) == 0x0006D0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_13) == 0x0006D1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_1) == 0x0006D4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_8) == 0x0006D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_int_Variable_6) == 0x0006DC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_29) == 0x0006E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_24) == 0x0006E1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_2) == 0x0006E4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_9) == 0x0006E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_14) == 0x0006EC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_15) == 0x0006ED, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_30) == 0x0006EE, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_30) == 0x0006F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_30' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_30) == 0x000700, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_30) == 0x000708, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_31) == 0x000720, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_31) == 0x000728, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_31' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_31) == 0x000738, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_31) == 0x000740, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_25) == 0x000758, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_int_Variable_7) == 0x00075C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_32) == 0x000760, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_32) == 0x000768, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_32' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_32) == 0x000778, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_32) == 0x000780, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_26) == 0x000798, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_33) == 0x000799, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_33) == 0x0007A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_33' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_33) == 0x0007B0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_33) == 0x0007B8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_27) == 0x0007D0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_3) == 0x0007D4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_28) == 0x0007D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_10) == 0x0007DC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_16) == 0x0007E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_17) == 0x0007E1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_11) == 0x0007E4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_18) == 0x0007E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_4) == 0x0007EC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_12) == 0x0007F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_34) == 0x0007F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_34' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_34) == 0x000808, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_34) == 0x000810, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_34) == 0x000828, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_int_Variable_8) == 0x00082C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_19) == 0x000830, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_29) == 0x000831, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_29' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_5) == 0x000834, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_13) == 0x000838, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_20) == 0x00083C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_35) == 0x000840, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_35' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_35) == 0x000850, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_35) == 0x000851, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_35) == 0x000858, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_36) == 0x000870, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_36) == 0x000878, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_36' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_36) == 0x000888, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_37) == 0x000890, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_37' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_37) == 0x0008A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_36) == 0x0008A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_37) == 0x0008C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_37) == 0x0008D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_30) == 0x0008D9, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_30' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_38) == 0x0008DA, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_21) == 0x0008DB, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_38) == 0x0008E0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_38' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_38) == 0x0008F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_38) == 0x0008F8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_6) == 0x000910, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_14) == 0x000914, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_22) == 0x000918, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_39) == 0x000919, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_31) == 0x00091A, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_31' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_23) == 0x00091B, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_15) == 0x00091C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_24) == 0x000920, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_39) == 0x000928, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_39' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_39) == 0x000938, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_7) == 0x00093C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_39) == 0x000940, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_16) == 0x000958, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_40) == 0x00095C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_32) == 0x00095D, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_32' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_25) == 0x00095E, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_41) == 0x00095F, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_40) == 0x000960, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_40' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_40) == 0x000970, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_40) == 0x000978, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_41) == 0x000990, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_41' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_41) == 0x0009A0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_int_Variable_9) == 0x0009A4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_41) == 0x0009A8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_33) == 0x0009C0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_33' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_8) == 0x0009C4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_42) == 0x0009C8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_17) == 0x0009CC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_26) == 0x0009D0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_42) == 0x0009D8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_42' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_42) == 0x0009E8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_42) == 0x0009F0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_43) == 0x000A08, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_43) == 0x000A10, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_43' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_43) == 0x000A20, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_43) == 0x000A28, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_44) == 0x000A40, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_44' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_44) == 0x000A50, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_44) == 0x000A51, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_44) == 0x000A58, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_34) == 0x000A70, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_34' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_35) == 0x000A71, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_35' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_18) == 0x000A74, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_27) == 0x000A78, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_19) == 0x000A7C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_28) == 0x000A80, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_45) == 0x000A88, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_45' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_45) == 0x000A98, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_45' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_45) == 0x000AA0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_45' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_20) == 0x000AB8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_29) == 0x000ABC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_21) == 0x000AC0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_22) == 0x000AC4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_30) == 0x000AC8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_31) == 0x000AC9, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_23) == 0x000ACC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_32) == 0x000AD0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_24) == 0x000AD4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_33) == 0x000AD8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_46) == 0x000AE0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_46' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_46) == 0x000AF0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_46' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_46) == 0x000AF8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_46' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_25) == 0x000B10, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_45) == 0x000B14, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_45' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_34) == 0x000B15, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_36) == 0x000B16, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_36' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_26) == 0x000B18, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_46) == 0x000B1C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_46' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_35) == 0x000B1D, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_9) == 0x000B20, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_27) == 0x000B24, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_36) == 0x000B28, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_28) == 0x000B2C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_37) == 0x000B30, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_10) == 0x000B34, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_29) == 0x000B38, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_30) == 0x000B3C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_38) == 0x000B40, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_11) == 0x000B44, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_31) == 0x000B48, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_39) == 0x000B4C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_40) == 0x000B4D, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_41) == 0x000B4E, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_32) == 0x000B50, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_37) == 0x000B54, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_37' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_42) == 0x000B55, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_33) == 0x000B58, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_43) == 0x000B5C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_34) == 0x000B60, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_35) == 0x000B64, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_44) == 0x000B68, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_45) == 0x000B69, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_45' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_12) == 0x000B6C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_12' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_36) == 0x000B70, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_46) == 0x000B74, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_46' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_37) == 0x000B78, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_47) == 0x000B7C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_47' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_13) == 0x000B80, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_13' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_38) == 0x000B84, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_39) == 0x000B88, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_48) == 0x000B8C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_48' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_14) == 0x000B90, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_14' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_40) == 0x000B94, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_49) == 0x000B98, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_49' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_50) == 0x000B99, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_50' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_51) == 0x000B9A, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_51' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_41) == 0x000B9C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_52) == 0x000BA0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_52' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_47) == 0x000BA1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_47' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_47) == 0x000BA8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_47' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_47) == 0x000BB8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_47' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_47) == 0x000BC0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_47' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_42) == 0x000BD8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_53) == 0x000BDC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_53' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_15) == 0x000BE0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_15' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_43) == 0x000BE4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_44) == 0x000BE8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_54) == 0x000BEC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_54' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_16) == 0x000BF0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_16' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_45) == 0x000BF4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_45' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_46) == 0x000BF8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_46' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_55) == 0x000BFC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_55' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_17) == 0x000C00, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_17' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_47) == 0x000C04, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_47' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_56) == 0x000C08, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_56' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_57) == 0x000C09, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_57' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_58) == 0x000C0A, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_58' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_59) == 0x000C0B, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_59' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_48) == 0x000C0C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_48' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_60) == 0x000C10, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_60' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_48) == 0x000C18, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_48' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_48) == 0x000C28, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_48' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_48) == 0x000C30, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_48' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_18) == 0x000C48, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_18' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_49) == 0x000C4C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_49' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_61) == 0x000C50, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_61' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_50) == 0x000C54, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_50' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_62) == 0x000C58, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_62' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_19) == 0x000C5C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_19' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_51) == 0x000C60, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_51' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_52) == 0x000C64, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_52' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_63) == 0x000C68, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_63' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_20) == 0x000C6C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_20' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_53) == 0x000C70, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_53' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_64) == 0x000C74, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_64' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_65) == 0x000C75, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_65' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_66) == 0x000C76, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_66' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_38) == 0x000C77, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_38' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_54) == 0x000C78, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_54' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_21) == 0x000C7C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_21' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_67) == 0x000C80, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_67' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_55) == 0x000C84, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_55' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_22) == 0x000C88, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_22' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_23) == 0x000C8C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_23' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_56) == 0x000C90, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_56' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_57) == 0x000C94, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_57' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_24) == 0x000C98, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_24' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_68) == 0x000C9C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_68' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_69) == 0x000C9D, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_69' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_70) == 0x000C9E, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_70' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_71) == 0x000C9F, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_71' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_58) == 0x000CA0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_58' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_48) == 0x000CA4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_48' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_72) == 0x000CA5, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_72' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_25) == 0x000CA8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_25' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_59) == 0x000CAC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_59' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_73) == 0x000CB0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_73' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_60) == 0x000CB4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_60' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_74) == 0x000CB8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_74' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_26) == 0x000CBC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_26' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_61) == 0x000CC0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_61' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_75) == 0x000CC4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_75' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_76) == 0x000CC5, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_76' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_62) == 0x000CC8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_62' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, Temp_bool_Variable_39) == 0x000CCC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::Temp_bool_Variable_39' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_77) == 0x000CCD, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_77' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_27) == 0x000CD0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_27' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_28) == 0x000CD4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_28' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_63) == 0x000CD8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_63' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_64) == 0x000CDC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_64' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_29) == 0x000CE0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_29' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_78) == 0x000CE4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_78' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_65) == 0x000CE8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_65' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_30) == 0x000CEC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_30' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_79) == 0x000CF0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_79' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_80) == 0x000CF1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_80' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_81) == 0x000CF2, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_81' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_66) == 0x000CF4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_66' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_82) == 0x000CF8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_82' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_31) == 0x000CFC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_31' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_67) == 0x000D00, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_67' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_68) == 0x000D04, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_68' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_83) == 0x000D08, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_83' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_32) == 0x000D0C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_32' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_69) == 0x000D10, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_69' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_84) == 0x000D14, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_84' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_85) == 0x000D15, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_85' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_86) == 0x000D16, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_86' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_OutName_49) == 0x000D18, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_OutName_49' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_GetItemName_ReturnValue_49) == 0x000D28, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_GetItemName_ReturnValue_49' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_87) == 0x000D29, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_87' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Conv_StringToText_ReturnValue_49) == 0x000D30, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Conv_StringToText_ReturnValue_49' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_MakeLiteralByte_ReturnValue_49) == 0x000D48, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_MakeLiteralByte_ReturnValue_49' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_70) == 0x000D4C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_70' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_88) == 0x000D50, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_88' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_33) == 0x000D54, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_33' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_71) == 0x000D58, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_71' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_89) == 0x000D5C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_89' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_72) == 0x000D60, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_72' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_90) == 0x000D64, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_90' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_34) == 0x000D68, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_34' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_73) == 0x000D6C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_73' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_74) == 0x000D70, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_74' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_91) == 0x000D74, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_91' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_35) == 0x000D78, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_35' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_75) == 0x000D7C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_75' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_92) == 0x000D80, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_92' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_93) == 0x000D81, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_93' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_94) == 0x000D82, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_94' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_76) == 0x000D84, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_76' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_36) == 0x000D88, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_36' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_77) == 0x000D8C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_77' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_95) == 0x000D90, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_95' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_37) == 0x000D94, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_37' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_78) == 0x000D98, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_78' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_96) == 0x000D9C, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_96' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_38) == 0x000DA0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_38' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_Add_IntInt_ReturnValue_79) == 0x000DA4, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_Add_IntInt_ReturnValue_79' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_97) == 0x000DA8, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_97' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, K2Node_Select_Default_39) == 0x000DAC, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::K2Node_Select_Default_39' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_98) == 0x000DB0, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_98' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet, CallFunc_EqualEqual_IntInt_ReturnValue_99) == 0x000DB1, "Member 'BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet::CallFunc_EqualEqual_IntInt_ReturnValue_99' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyCostumeSetBox
// 0x00E0 (0x00E0 - 0x0000)
struct BP_SBProductItemData_C_InitFromDummyCostumeSetBox final
{
public:
	int32                                         Param_DummyDataIndex;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_124C[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0028(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0040(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0058(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0070(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_124D[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_124E[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_1;                           // 0x00B0(0x0018)()
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_124F[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromDummyCostumeSetBox");
static_assert(sizeof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox) == 0x0000E0, "Wrong size on BP_SBProductItemData_C_InitFromDummyCostumeSetBox");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, Param_DummyDataIndex) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::Param_DummyDataIndex' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, Temp_text_Variable) == 0x000008, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, Temp_text_Variable_1) == 0x000028, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, Temp_text_Variable_2) == 0x000040, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, Temp_text_Variable_3) == 0x000058, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, Temp_text_Variable_4) == 0x000070, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, Temp_bool_Variable) == 0x000088, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, Temp_int_Variable) == 0x00008C, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, Temp_int_Variable_1) == 0x000090, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, Temp_int_Variable_2) == 0x000094, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, K2Node_Select_Default) == 0x000098, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, CallFunc_Add_IntInt_ReturnValue) == 0x00009C, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A0, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, Temp_int_Variable_3) == 0x0000A4, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, CallFunc_SpawnObject_ReturnValue) == 0x0000A8, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, K2Node_Select_Default_1) == 0x0000B0, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x0000C8, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyCostumeSetBox, CallFunc_Array_Add_ReturnValue) == 0x0000DC, "Member 'BP_SBProductItemData_C_InitFromDummyCostumeSetBox::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemBox
// 0x0070 (0x0070 - 0x0000)
struct BP_SBProductItemData_C_InitFromDummyItemBox final
{
public:
	int32                                         DummyItemCountMax;                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1250[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1251[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1252[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1253[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue_1;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data_1;         // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1254[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1255[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromDummyItemBox) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromDummyItemBox");
static_assert(sizeof(BP_SBProductItemData_C_InitFromDummyItemBox) == 0x000070, "Wrong size on BP_SBProductItemData_C_InitFromDummyItemBox");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, DummyItemCountMax) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::DummyItemCountMax' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, Temp_int_Variable) == 0x000004, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, CallFunc_RandomBool_ReturnValue) == 0x000010, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x000020, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000034, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, Temp_int_Variable_1) == 0x000038, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, CallFunc_SpawnObject_ReturnValue_1) == 0x000048, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, K2Node_DynamicCast_AsBPI_SBProduct_Data_1) == 0x000050, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::K2Node_DynamicCast_AsBPI_SBProduct_Data_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x000064, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000068, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromDummyItemBox, CallFunc_Array_Add_ReturnValue_1) == 0x00006C, "Member 'BP_SBProductItemData_C_InitFromDummyItemBox::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.HasUniqueId
// 0x0003 (0x0003 - 0x0000)
struct BP_SBProductItemData_C_HasUniqueId final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_HasUniqueId) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_HasUniqueId");
static_assert(sizeof(BP_SBProductItemData_C_HasUniqueId) == 0x000003, "Wrong size on BP_SBProductItemData_C_HasUniqueId");
static_assert(offsetof(BP_SBProductItemData_C_HasUniqueId, bResult) == 0x000000, "Member 'BP_SBProductItemData_C_HasUniqueId::bResult' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_HasUniqueId, CallFunc_IsEmpty_ReturnValue) == 0x000001, "Member 'BP_SBProductItemData_C_HasUniqueId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_HasUniqueId, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'BP_SBProductItemData_C_HasUniqueId::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.HasItemBoxContent
// 0x0002 (0x0002 - 0x0000)
struct BP_SBProductItemData_C_HasItemBoxContent final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_HasItemBoxContent) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_HasItemBoxContent");
static_assert(sizeof(BP_SBProductItemData_C_HasItemBoxContent) == 0x000002, "Wrong size on BP_SBProductItemData_C_HasItemBoxContent");
static_assert(offsetof(BP_SBProductItemData_C_HasItemBoxContent, bResult) == 0x000000, "Member 'BP_SBProductItemData_C_HasItemBoxContent::bResult' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_HasItemBoxContent, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000001, "Member 'BP_SBProductItemData_C_HasItemBoxContent::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.HasMasterReward
// 0x0002 (0x0002 - 0x0000)
struct BP_SBProductItemData_C_HasMasterReward final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_HasMasterReward) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_HasMasterReward");
static_assert(sizeof(BP_SBProductItemData_C_HasMasterReward) == 0x000002, "Wrong size on BP_SBProductItemData_C_HasMasterReward");
static_assert(offsetof(BP_SBProductItemData_C_HasMasterReward, bResult) == 0x000000, "Member 'BP_SBProductItemData_C_HasMasterReward::bResult' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_HasMasterReward, CallFunc_NotEqual_NameName_ReturnValue) == 0x000001, "Member 'BP_SBProductItemData_C_HasMasterReward::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.HasRewardType
// 0x0002 (0x0002 - 0x0000)
struct BP_SBProductItemData_C_HasRewardType final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_HasRewardType) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_HasRewardType");
static_assert(sizeof(BP_SBProductItemData_C_HasRewardType) == 0x000002, "Wrong size on BP_SBProductItemData_C_HasRewardType");
static_assert(offsetof(BP_SBProductItemData_C_HasRewardType, bResult) == 0x000000, "Member 'BP_SBProductItemData_C_HasRewardType::bResult' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_HasRewardType, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000001, "Member 'BP_SBProductItemData_C_HasRewardType::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetCostumeMasterData
// 0x01B8 (0x01B8 - 0x0000)
struct BP_SBProductItemData_C_GetCostumeMasterData final
{
public:
	struct FSBMasterCostume                       CostumeMasterData;                                 // 0x0000(0x0088)(Parm, OutParm)
	struct FSBMasterCostume                       Ret;                                               // 0x0088(0x0088)(Edit, BlueprintVisible)
	bool                                          CallFunc_IsCostumeData_bFlag;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1256[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemIndex_ItemIndex;                   // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1257[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1258[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0130(0x0088)()
};
static_assert(alignof(BP_SBProductItemData_C_GetCostumeMasterData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_GetCostumeMasterData");
static_assert(sizeof(BP_SBProductItemData_C_GetCostumeMasterData) == 0x0001B8, "Wrong size on BP_SBProductItemData_C_GetCostumeMasterData");
static_assert(offsetof(BP_SBProductItemData_C_GetCostumeMasterData, CostumeMasterData) == 0x000000, "Member 'BP_SBProductItemData_C_GetCostumeMasterData::CostumeMasterData' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetCostumeMasterData, Ret) == 0x000088, "Member 'BP_SBProductItemData_C_GetCostumeMasterData::Ret' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetCostumeMasterData, CallFunc_IsCostumeData_bFlag) == 0x000110, "Member 'BP_SBProductItemData_C_GetCostumeMasterData::CallFunc_IsCostumeData_bFlag' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetCostumeMasterData, CallFunc_GetItemIndex_ItemIndex) == 0x000114, "Member 'BP_SBProductItemData_C_GetCostumeMasterData::CallFunc_GetItemIndex_ItemIndex' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetCostumeMasterData, CallFunc_GetMasterDataManager_IsValid) == 0x000118, "Member 'BP_SBProductItemData_C_GetCostumeMasterData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetCostumeMasterData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000120, "Member 'BP_SBProductItemData_C_GetCostumeMasterData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetCostumeMasterData, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000128, "Member 'BP_SBProductItemData_C_GetCostumeMasterData::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetCostumeMasterData, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000130, "Member 'BP_SBProductItemData_C_GetCostumeMasterData::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetTrying
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductItemData_C_GetTrying final
{
public:
	bool                                          bTrying;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_GetTrying) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_GetTrying");
static_assert(sizeof(BP_SBProductItemData_C_GetTrying) == 0x000001, "Wrong size on BP_SBProductItemData_C_GetTrying");
static_assert(offsetof(BP_SBProductItemData_C_GetTrying, bTrying) == 0x000000, "Member 'BP_SBProductItemData_C_GetTrying::bTrying' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.SetTrying
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductItemData_C_SetTrying final
{
public:
	bool                                          bTrying;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_SetTrying) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_SetTrying");
static_assert(sizeof(BP_SBProductItemData_C_SetTrying) == 0x000001, "Wrong size on BP_SBProductItemData_C_SetTrying");
static_assert(offsetof(BP_SBProductItemData_C_SetTrying, bTrying) == 0x000000, "Member 'BP_SBProductItemData_C_SetTrying::bTrying' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.SetVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductItemData_C_SetVisibility final
{
public:
	ESlateVisibility                              Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_SetVisibility) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_SetVisibility");
static_assert(sizeof(BP_SBProductItemData_C_SetVisibility) == 0x000001, "Wrong size on BP_SBProductItemData_C_SetVisibility");
static_assert(offsetof(BP_SBProductItemData_C_SetVisibility, Visibility) == 0x000000, "Member 'BP_SBProductItemData_C_SetVisibility::Visibility' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductItemData_C_GetVisibility final
{
public:
	ESlateVisibility                              Visibility;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_GetVisibility) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_GetVisibility");
static_assert(sizeof(BP_SBProductItemData_C_GetVisibility) == 0x000001, "Wrong size on BP_SBProductItemData_C_GetVisibility");
static_assert(offsetof(BP_SBProductItemData_C_GetVisibility, Visibility) == 0x000000, "Member 'BP_SBProductItemData_C_GetVisibility::Visibility' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.IsSetItem
// 0x0002 (0x0002 - 0x0000)
struct BP_SBProductItemData_C_IsSetItem final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_IsSetItem) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_IsSetItem");
static_assert(sizeof(BP_SBProductItemData_C_IsSetItem) == 0x000002, "Wrong size on BP_SBProductItemData_C_IsSetItem");
static_assert(offsetof(BP_SBProductItemData_C_IsSetItem, ReturnValue) == 0x000000, "Member 'BP_SBProductItemData_C_IsSetItem::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsSetItem, CallFunc_BooleanOR_ReturnValue) == 0x000001, "Member 'BP_SBProductItemData_C_IsSetItem::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromGashaReward
// 0x0034 (0x0034 - 0x0000)
struct BP_SBProductItemData_C_InitFromGashaReward final
{
public:
	struct FSBGashaReward                         GashaReward;                                       // 0x0000(0x0024)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1259[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromGashaReward) == 0x000004, "Wrong alignment on BP_SBProductItemData_C_InitFromGashaReward");
static_assert(sizeof(BP_SBProductItemData_C_InitFromGashaReward) == 0x000034, "Wrong size on BP_SBProductItemData_C_InitFromGashaReward");
static_assert(offsetof(BP_SBProductItemData_C_InitFromGashaReward, GashaReward) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromGashaReward::GashaReward' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromGashaReward, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_SBProductItemData_C_InitFromGashaReward::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromGashaReward, CallFunc_Conv_IntToByte_ReturnValue) == 0x000028, "Member 'BP_SBProductItemData_C_InitFromGashaReward::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromGashaReward, CallFunc_Add_FloatFloat_ReturnValue) == 0x00002C, "Member 'BP_SBProductItemData_C_InitFromGashaReward::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromGashaReward, CallFunc_GetValidValue_ReturnValue) == 0x000030, "Member 'BP_SBProductItemData_C_InitFromGashaReward::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.HasWight
// 0x0002 (0x0002 - 0x0000)
struct BP_SBProductItemData_C_HasWight final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_HasWight) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_HasWight");
static_assert(sizeof(BP_SBProductItemData_C_HasWight) == 0x000002, "Wrong size on BP_SBProductItemData_C_HasWight");
static_assert(offsetof(BP_SBProductItemData_C_HasWight, ReturnValue) == 0x000000, "Member 'BP_SBProductItemData_C_HasWight::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_HasWight, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000001, "Member 'BP_SBProductItemData_C_HasWight::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.ToItemType(IntegerFromMasterData)
// 0x0008 (0x0008 - 0x0000)
struct BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_ final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Param_ItemType;                                    // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_) == 0x000004, "Wrong alignment on BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_");
static_assert(sizeof(BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_) == 0x000008, "Wrong size on BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_");
static_assert(offsetof(BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_, Param_Index) == 0x000000, "Member 'BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_, Param_ItemType) == 0x000004, "Member 'BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_::Param_ItemType' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_, K2Node_SwitchInteger_CmpSuccess) == 0x000005, "Member 'BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.IsCostumeData
// 0x0006 (0x0006 - 0x0000)
struct BP_SBProductItemData_C_IsCostumeData final
{
public:
	bool                                          bFlag;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_IsCostumeData) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_IsCostumeData");
static_assert(sizeof(BP_SBProductItemData_C_IsCostumeData) == 0x000006, "Wrong size on BP_SBProductItemData_C_IsCostumeData");
static_assert(offsetof(BP_SBProductItemData_C_IsCostumeData, bFlag) == 0x000000, "Member 'BP_SBProductItemData_C_IsCostumeData::bFlag' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsCostumeData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'BP_SBProductItemData_C_IsCostumeData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsCostumeData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000002, "Member 'BP_SBProductItemData_C_IsCostumeData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsCostumeData, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000003, "Member 'BP_SBProductItemData_C_IsCostumeData::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsCostumeData, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'BP_SBProductItemData_C_IsCostumeData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsCostumeData, CallFunc_BooleanOR_ReturnValue_1) == 0x000005, "Member 'BP_SBProductItemData_C_IsCostumeData::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemIndex
// 0x000C (0x000C - 0x0000)
struct BP_SBProductItemData_C_GetItemIndex final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMasterReward_bResult;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_125A[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_GetItemIndex) == 0x000004, "Wrong alignment on BP_SBProductItemData_C_GetItemIndex");
static_assert(sizeof(BP_SBProductItemData_C_GetItemIndex) == 0x00000C, "Wrong size on BP_SBProductItemData_C_GetItemIndex");
static_assert(offsetof(BP_SBProductItemData_C_GetItemIndex, ItemIndex) == 0x000000, "Member 'BP_SBProductItemData_C_GetItemIndex::ItemIndex' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetItemIndex, Temp_bool_Variable) == 0x000004, "Member 'BP_SBProductItemData_C_GetItemIndex::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetItemIndex, CallFunc_HasMasterReward_bResult) == 0x000005, "Member 'BP_SBProductItemData_C_GetItemIndex::CallFunc_HasMasterReward_bResult' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetItemIndex, K2Node_Select_Default) == 0x000008, "Member 'BP_SBProductItemData_C_GetItemIndex::K2Node_Select_Default' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromEventShopProductData
// 0x0208 (0x0208 - 0x0000)
struct BP_SBProductItemData_C_InitFromEventShopProductData final
{
public:
	struct FSBEventShopProduct                    ProductData;                                       // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBEventShopProduct                    L_ProductData;                                     // 0x0070(0x0070)(Edit, BlueprintVisible)
	struct FSBProductData                         L_product_data_old;                                // 0x00E0(0x00D8)(Edit, BlueprintVisible)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_125B[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_125C[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x01CC(0x0034)(NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromEventShopProductData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromEventShopProductData");
static_assert(sizeof(BP_SBProductItemData_C_InitFromEventShopProductData) == 0x000208, "Wrong size on BP_SBProductItemData_C_InitFromEventShopProductData");
static_assert(offsetof(BP_SBProductItemData_C_InitFromEventShopProductData, ProductData) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromEventShopProductData::ProductData' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromEventShopProductData, L_ProductData) == 0x000070, "Member 'BP_SBProductItemData_C_InitFromEventShopProductData::L_ProductData' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromEventShopProductData, L_product_data_old) == 0x0000E0, "Member 'BP_SBProductItemData_C_InitFromEventShopProductData::L_product_data_old' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromEventShopProductData, CallFunc_GetMasterDataManager_IsValid) == 0x0001B8, "Member 'BP_SBProductItemData_C_InitFromEventShopProductData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromEventShopProductData, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001C0, "Member 'BP_SBProductItemData_C_InitFromEventShopProductData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromEventShopProductData, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x0001C8, "Member 'BP_SBProductItemData_C_InitFromEventShopProductData::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromEventShopProductData, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x0001CC, "Member 'BP_SBProductItemData_C_InitFromEventShopProductData::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromEventShopProductData, CallFunc_Conv_IntToByte_ReturnValue) == 0x000200, "Member 'BP_SBProductItemData_C_InitFromEventShopProductData::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitFromEventShopProductData, CallFunc_GetValidValue_ReturnValue) == 0x000201, "Member 'BP_SBProductItemData_C_InitFromEventShopProductData::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromMailData
// 0x0190 (0x0190 - 0x0000)
struct BP_SBProductItemData_C_InitFromMailData final
{
public:
	struct FSBMailData                            MailData;                                          // 0x0000(0x0190)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_SBProductItemData_C_InitFromMailData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitFromMailData");
static_assert(sizeof(BP_SBProductItemData_C_InitFromMailData) == 0x000190, "Wrong size on BP_SBProductItemData_C_InitFromMailData");
static_assert(offsetof(BP_SBProductItemData_C_InitFromMailData, MailData) == 0x000000, "Member 'BP_SBProductItemData_C_InitFromMailData::MailData' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.IsShowRate
// 0x0018 (0x0018 - 0x0000)
struct BP_SBProductItemData_C_IsShowRate final
{
public:
	bool                                          bValue;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasWight_ReturnValue;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBProductDetailType                         CallFunc_GetDetailType_DetailType;                 // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemBox_bReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_125D[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_IsShowRate) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_IsShowRate");
static_assert(sizeof(BP_SBProductItemData_C_IsShowRate) == 0x000018, "Wrong size on BP_SBProductItemData_C_IsShowRate");
static_assert(offsetof(BP_SBProductItemData_C_IsShowRate, bValue) == 0x000000, "Member 'BP_SBProductItemData_C_IsShowRate::bValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsShowRate, CallFunc_HasWight_ReturnValue) == 0x000001, "Member 'BP_SBProductItemData_C_IsShowRate::CallFunc_HasWight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsShowRate, CallFunc_GetDetailType_DetailType) == 0x000002, "Member 'BP_SBProductItemData_C_IsShowRate::CallFunc_GetDetailType_DetailType' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsShowRate, CallFunc_IsItemBox_bReturnValue) == 0x000003, "Member 'BP_SBProductItemData_C_IsShowRate::CallFunc_IsItemBox_bReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsShowRate, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'BP_SBProductItemData_C_IsShowRate::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsShowRate, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'BP_SBProductItemData_C_IsShowRate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsShowRate, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000008, "Member 'BP_SBProductItemData_C_IsShowRate::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsShowRate, CallFunc_BooleanAND_ReturnValue) == 0x000010, "Member 'BP_SBProductItemData_C_IsShowRate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsShowRate, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_SBProductItemData_C_IsShowRate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsShowRate, CallFunc_BooleanAND_ReturnValue_1) == 0x000012, "Member 'BP_SBProductItemData_C_IsShowRate::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.InitSeasonPassRewardExtraData
// 0x0010 (0x0010 - 0x0000)
struct BP_SBProductItemData_C_InitSeasonPassRewardExtraData final
{
public:
	class USBSeasonPassMenuRewardItemData*        InSeasonPassMenuRewardItemData;                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_InitSeasonPassRewardExtraData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_InitSeasonPassRewardExtraData");
static_assert(sizeof(BP_SBProductItemData_C_InitSeasonPassRewardExtraData) == 0x000010, "Wrong size on BP_SBProductItemData_C_InitSeasonPassRewardExtraData");
static_assert(offsetof(BP_SBProductItemData_C_InitSeasonPassRewardExtraData, InSeasonPassMenuRewardItemData) == 0x000000, "Member 'BP_SBProductItemData_C_InitSeasonPassRewardExtraData::InSeasonPassMenuRewardItemData' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_InitSeasonPassRewardExtraData, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_SBProductItemData_C_InitSeasonPassRewardExtraData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetRewardType
// 0x000D (0x000D - 0x0000)
struct BP_SBProductItemData_C_GetRewardType final
{
public:
	ESBRewardItemType                             Param_RewardType;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_5;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_6;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_7;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_8;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasRewardType_bResult;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMasterReward_bResult;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_GetRewardType) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_GetRewardType");
static_assert(sizeof(BP_SBProductItemData_C_GetRewardType) == 0x00000D, "Wrong size on BP_SBProductItemData_C_GetRewardType");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, Param_RewardType) == 0x000000, "Member 'BP_SBProductItemData_C_GetRewardType::Param_RewardType' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, Temp_byte_Variable) == 0x000001, "Member 'BP_SBProductItemData_C_GetRewardType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, Temp_byte_Variable_1) == 0x000002, "Member 'BP_SBProductItemData_C_GetRewardType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, Temp_byte_Variable_2) == 0x000003, "Member 'BP_SBProductItemData_C_GetRewardType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, Temp_byte_Variable_3) == 0x000004, "Member 'BP_SBProductItemData_C_GetRewardType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, Temp_byte_Variable_4) == 0x000005, "Member 'BP_SBProductItemData_C_GetRewardType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, Temp_byte_Variable_5) == 0x000006, "Member 'BP_SBProductItemData_C_GetRewardType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, Temp_byte_Variable_6) == 0x000007, "Member 'BP_SBProductItemData_C_GetRewardType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, Temp_byte_Variable_7) == 0x000008, "Member 'BP_SBProductItemData_C_GetRewardType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, Temp_byte_Variable_8) == 0x000009, "Member 'BP_SBProductItemData_C_GetRewardType::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, CallFunc_HasRewardType_bResult) == 0x00000A, "Member 'BP_SBProductItemData_C_GetRewardType::CallFunc_HasRewardType_bResult' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, CallFunc_HasMasterReward_bResult) == 0x00000B, "Member 'BP_SBProductItemData_C_GetRewardType::CallFunc_HasMasterReward_bResult' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetRewardType, K2Node_Select_Default) == 0x00000C, "Member 'BP_SBProductItemData_C_GetRewardType::K2Node_Select_Default' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.SetBonus
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductItemData_C_SetBonus final
{
public:
	bool                                          Param_bBonus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_SetBonus) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_SetBonus");
static_assert(sizeof(BP_SBProductItemData_C_SetBonus) == 0x000001, "Wrong size on BP_SBProductItemData_C_SetBonus");
static_assert(offsetof(BP_SBProductItemData_C_SetBonus, Param_bBonus) == 0x000000, "Member 'BP_SBProductItemData_C_SetBonus::Param_bBonus' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.SetLotteryAbility
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductItemData_C_SetLotteryAbility final
{
public:
	bool                                          bValue;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_SetLotteryAbility) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_SetLotteryAbility");
static_assert(sizeof(BP_SBProductItemData_C_SetLotteryAbility) == 0x000001, "Wrong size on BP_SBProductItemData_C_SetLotteryAbility");
static_assert(offsetof(BP_SBProductItemData_C_SetLotteryAbility, bValue) == 0x000000, "Member 'BP_SBProductItemData_C_SetLotteryAbility::bValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.SetAmount
// 0x0004 (0x0004 - 0x0000)
struct BP_SBProductItemData_C_SetAmount final
{
public:
	int32                                         Param_Amount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_SetAmount) == 0x000004, "Wrong alignment on BP_SBProductItemData_C_SetAmount");
static_assert(sizeof(BP_SBProductItemData_C_SetAmount) == 0x000004, "Wrong size on BP_SBProductItemData_C_SetAmount");
static_assert(offsetof(BP_SBProductItemData_C_SetAmount, Param_Amount) == 0x000000, "Member 'BP_SBProductItemData_C_SetAmount::Param_Amount' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetSelectedData
// 0x0008 (0x0008 - 0x0000)
struct BP_SBProductItemData_C_GetSelectedData final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_GetSelectedData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_GetSelectedData");
static_assert(sizeof(BP_SBProductItemData_C_GetSelectedData) == 0x000008, "Wrong size on BP_SBProductItemData_C_GetSelectedData");
static_assert(offsetof(BP_SBProductItemData_C_GetSelectedData, Data) == 0x000000, "Member 'BP_SBProductItemData_C_GetSelectedData::Data' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetDetailType
// 0x0018 (0x0018 - 0x0000)
struct BP_SBProductItemData_C_GetDetailType final
{
public:
	E_SBProductDetailType                         DetailType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_125E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         CallFunc_GetDetailType_DetailType;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_GetDetailType) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_GetDetailType");
static_assert(sizeof(BP_SBProductItemData_C_GetDetailType) == 0x000018, "Wrong size on BP_SBProductItemData_C_GetDetailType");
static_assert(offsetof(BP_SBProductItemData_C_GetDetailType, DetailType) == 0x000000, "Member 'BP_SBProductItemData_C_GetDetailType::DetailType' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetDetailType, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000008, "Member 'BP_SBProductItemData_C_GetDetailType::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetDetailType, CallFunc_GetDetailType_DetailType) == 0x000010, "Member 'BP_SBProductItemData_C_GetDetailType::CallFunc_GetDetailType_DetailType' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetDetailType, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_SBProductItemData_C_GetDetailType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.IsCostumeSet
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductItemData_C_IsCostumeSet final
{
public:
	bool                                          bReturnValue;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_IsCostumeSet) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_IsCostumeSet");
static_assert(sizeof(BP_SBProductItemData_C_IsCostumeSet) == 0x000001, "Wrong size on BP_SBProductItemData_C_IsCostumeSet");
static_assert(offsetof(BP_SBProductItemData_C_IsCostumeSet, bReturnValue) == 0x000000, "Member 'BP_SBProductItemData_C_IsCostumeSet::bReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetIconItemData
// 0x0008 (0x0008 - 0x0000)
struct BP_SBProductItemData_C_GetIconItemData final
{
public:
	class UBP_SBProductItemData_C*                ItemData;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_GetIconItemData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_GetIconItemData");
static_assert(sizeof(BP_SBProductItemData_C_GetIconItemData) == 0x000008, "Wrong size on BP_SBProductItemData_C_GetIconItemData");
static_assert(offsetof(BP_SBProductItemData_C_GetIconItemData, ItemData) == 0x000000, "Member 'BP_SBProductItemData_C_GetIconItemData::ItemData' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.IsItemBox
// 0x0002 (0x0002 - 0x0000)
struct BP_SBProductItemData_C_IsItemBox final
{
public:
	bool                                          bReturnValue;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_IsItemBox) == 0x000001, "Wrong alignment on BP_SBProductItemData_C_IsItemBox");
static_assert(sizeof(BP_SBProductItemData_C_IsItemBox) == 0x000002, "Wrong size on BP_SBProductItemData_C_IsItemBox");
static_assert(offsetof(BP_SBProductItemData_C_IsItemBox, bReturnValue) == 0x000000, "Member 'BP_SBProductItemData_C_IsItemBox::bReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_IsItemBox, CallFunc_BooleanOR_ReturnValue) == 0x000001, "Member 'BP_SBProductItemData_C_IsItemBox::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemBoxDepthIndex
// 0x0028 (0x0028 - 0x0000)
struct BP_SBProductItemData_C_GetItemBoxDepthIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetParentData_bIsValid;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_125F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_GetParentData_ParentData;                 // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemBox_bReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1260[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemBoxDepthIndex_Index;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_GetItemBoxDepthIndex) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_GetItemBoxDepthIndex");
static_assert(sizeof(BP_SBProductItemData_C_GetItemBoxDepthIndex) == 0x000028, "Wrong size on BP_SBProductItemData_C_GetItemBoxDepthIndex");
static_assert(offsetof(BP_SBProductItemData_C_GetItemBoxDepthIndex, Param_Index) == 0x000000, "Member 'BP_SBProductItemData_C_GetItemBoxDepthIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetItemBoxDepthIndex, CallFunc_GetParentData_bIsValid) == 0x000004, "Member 'BP_SBProductItemData_C_GetItemBoxDepthIndex::CallFunc_GetParentData_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetItemBoxDepthIndex, CallFunc_GetParentData_ParentData) == 0x000008, "Member 'BP_SBProductItemData_C_GetItemBoxDepthIndex::CallFunc_GetParentData_ParentData' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetItemBoxDepthIndex, CallFunc_IsItemBox_bReturnValue) == 0x000018, "Member 'BP_SBProductItemData_C_GetItemBoxDepthIndex::CallFunc_IsItemBox_bReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetItemBoxDepthIndex, CallFunc_GetItemBoxDepthIndex_Index) == 0x00001C, "Member 'BP_SBProductItemData_C_GetItemBoxDepthIndex::CallFunc_GetItemBoxDepthIndex_Index' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetItemBoxDepthIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_SBProductItemData_C_GetItemBoxDepthIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetParentData
// 0x0028 (0x0028 - 0x0000)
struct BP_SBProductItemData_C_GetParentData final
{
public:
	bool                                          bIsValid;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1261[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  Param_ParentData;                                  // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductItemData_C_GetParentData) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_GetParentData");
static_assert(sizeof(BP_SBProductItemData_C_GetParentData) == 0x000028, "Wrong size on BP_SBProductItemData_C_GetParentData");
static_assert(offsetof(BP_SBProductItemData_C_GetParentData, bIsValid) == 0x000000, "Member 'BP_SBProductItemData_C_GetParentData::bIsValid' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetParentData, Param_ParentData) == 0x000008, "Member 'BP_SBProductItemData_C_GetParentData::Param_ParentData' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetParentData, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000018, "Member 'BP_SBProductItemData_C_GetParentData::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductItemData_C_GetParentData, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_SBProductItemData_C_GetParentData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetScrollOffset
// 0x0004 (0x0004 - 0x0000)
struct BP_SBProductItemData_C_GetScrollOffset final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductItemData_C_GetScrollOffset) == 0x000004, "Wrong alignment on BP_SBProductItemData_C_GetScrollOffset");
static_assert(sizeof(BP_SBProductItemData_C_GetScrollOffset) == 0x000004, "Wrong size on BP_SBProductItemData_C_GetScrollOffset");
static_assert(offsetof(BP_SBProductItemData_C_GetScrollOffset, ReturnValue) == 0x000000, "Member 'BP_SBProductItemData_C_GetScrollOffset::ReturnValue' has a wrong offset!");

// Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemDataList
// 0x0010 (0x0010 - 0x0000)
struct BP_SBProductItemData_C_GetItemDataList final
{
public:
	TArray<class UBP_SBProductItemData_C*>        ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BP_SBProductItemData_C_GetItemDataList) == 0x000008, "Wrong alignment on BP_SBProductItemData_C_GetItemDataList");
static_assert(sizeof(BP_SBProductItemData_C_GetItemDataList) == 0x000010, "Wrong size on BP_SBProductItemData_C_GetItemDataList");
static_assert(offsetof(BP_SBProductItemData_C_GetItemDataList, ReturnValue) == 0x000000, "Member 'BP_SBProductItemData_C_GetItemDataList::ReturnValue' has a wrong offset!");

}

