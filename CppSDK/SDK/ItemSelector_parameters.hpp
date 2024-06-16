#pragma once

 

// Package: ItemSelector

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InventoryData_structs.hpp"


namespace SDK::Params
{

// Function ItemSelector.ItemSelector_C.ExecuteUbergraph_ItemSelector
// 0x0210 (0x0210 - 0x0000)
struct ItemSelector_C_ExecuteUbergraph_ItemSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x0034(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7424[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLockItemData>                K2Node_CustomEvent_LockItemData;                   // 0x0038(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_InRetCode_1;                    // 0x0048(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7425[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue_1;  // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7426[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, TArray<struct FSBLockItemData>& LockItemData, int32 InRetCode)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0074(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InDirtyItems;                   // 0x0078(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0088(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7427[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue_2;  // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue_3;  // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7428[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChangeItemAmountParam               K2Node_CustomEvent_InParam;                        // 0x00E0(0x0020)(ConstParm)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_5;            // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7429[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_742A[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue_1;             // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0140(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_742B[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_742C[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FSBChangeItemAmountParam& InParam)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x015C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_742D[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_742E[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_2;                       // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_2;                        // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_2;           // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_3;           // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_4;           // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_5;           // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShortcutCoolTime_C*                    K2Node_CustomEvent_CoolTimeWidget_1;               // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x01F0(0x0010)(ZeroConstructor, NoDestructor)
	class UShortcutCoolTime_C*                    K2Node_CustomEvent_CoolTimeWidget;                 // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSetupList_ReturnValue;                  // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemSelector_C_ExecuteUbergraph_ItemSelector) == 0x000008, "Wrong alignment on ItemSelector_C_ExecuteUbergraph_ItemSelector");
static_assert(sizeof(ItemSelector_C_ExecuteUbergraph_ItemSelector) == 0x000210, "Wrong size on ItemSelector_C_ExecuteUbergraph_ItemSelector");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, EntryPoint) == 0x000000, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_Result_1) == 0x000034, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_LockItemData) == 0x000038, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_LockItemData' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_InRetCode_1) == 0x000048, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_InRetCode_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000050, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetPlayerStorageComponent_ReturnValue_1) == 0x000058, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetPlayerStorageComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CreateDelegate_OutputDelegate_3) == 0x000064, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_InRetCode) == 0x000074, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_InDirtyItems) == 0x000078, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_InDirtyItems' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetSBRetMessage_ReturnValue) == 0x000088, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CreateDelegate_OutputDelegate_4) == 0x000098, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetPlayerStorageComponent_ReturnValue_2) == 0x0000C8, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetPlayerStorageComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetPlayerStorageComponent_ReturnValue_3) == 0x0000D0, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetPlayerStorageComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_IsValid_ReturnValue_2) == 0x0000D8, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_IsValid_ReturnValue_3) == 0x0000D9, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_InParam) == 0x0000E0, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_InParam' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CreateDelegate_OutputDelegate_5) == 0x000100, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000110, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000111, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_BooleanAND_ReturnValue) == 0x000112, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetNetworkDataCache_IsValid) == 0x000113, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000118, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetNetworkDataCache_IsValid_1) == 0x000120, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x000128, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetOwnItemList_ReturnValue) == 0x000130, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetOwnItemList_ReturnValue_1) == 0x000138, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetOwnItemList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_Result) == 0x000140, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetPlayerController_ReturnValue) == 0x000148, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000150, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CreateDelegate_OutputDelegate_6) == 0x00015C, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetPlayerController_ReturnValue_1) == 0x000170, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000178, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_DynamicCast_bSuccess_1) == 0x000180, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetEventExecutor_ReturnValue) == 0x000188, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000190, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_Sender_2) == 0x000198, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_Param_2) == 0x0001A0, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_Param_2' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetEventExecutor_ReturnValue_2) == 0x0001A8, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetEventExecutor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetEventExecutor_ReturnValue_3) == 0x0001B0, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetEventExecutor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_Sender_1) == 0x0001B8, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_Param_1) == 0x0001C0, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetEventExecutor_ReturnValue_4) == 0x0001C8, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetEventExecutor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_GetEventExecutor_ReturnValue_5) == 0x0001D0, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_GetEventExecutor_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_Sender) == 0x0001D8, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_Param) == 0x0001E0, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_CoolTimeWidget_1) == 0x0001E8, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_CoolTimeWidget_1' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CreateDelegate_OutputDelegate_7) == 0x0001F0, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, K2Node_CustomEvent_CoolTimeWidget) == 0x000200, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::K2Node_CustomEvent_CoolTimeWidget' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_ExecuteUbergraph_ItemSelector, CallFunc_IsSetupList_ReturnValue) == 0x000208, "Member 'ItemSelector_C_ExecuteUbergraph_ItemSelector::CallFunc_IsSetupList_ReturnValue' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.UnbindEndCoolTime
// 0x0008 (0x0008 - 0x0000)
struct ItemSelector_C_UnbindEndCoolTime final
{
public:
	class UShortcutCoolTime_C*                    CoolTimeWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelector_C_UnbindEndCoolTime) == 0x000008, "Wrong alignment on ItemSelector_C_UnbindEndCoolTime");
static_assert(sizeof(ItemSelector_C_UnbindEndCoolTime) == 0x000008, "Wrong size on ItemSelector_C_UnbindEndCoolTime");
static_assert(offsetof(ItemSelector_C_UnbindEndCoolTime, CoolTimeWidget) == 0x000000, "Member 'ItemSelector_C_UnbindEndCoolTime::CoolTimeWidget' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.BindEndCoolTime
// 0x0008 (0x0008 - 0x0000)
struct ItemSelector_C_BindEndCoolTime final
{
public:
	class UShortcutCoolTime_C*                    CoolTimeWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelector_C_BindEndCoolTime) == 0x000008, "Wrong alignment on ItemSelector_C_BindEndCoolTime");
static_assert(sizeof(ItemSelector_C_BindEndCoolTime) == 0x000008, "Wrong size on ItemSelector_C_BindEndCoolTime");
static_assert(offsetof(ItemSelector_C_BindEndCoolTime, CoolTimeWidget) == 0x000000, "Member 'ItemSelector_C_BindEndCoolTime::CoolTimeWidget' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.CustomEvent_4
// 0x0010 (0x0010 - 0x0000)
struct ItemSelector_C_CustomEvent_4 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelector_C_CustomEvent_4) == 0x000008, "Wrong alignment on ItemSelector_C_CustomEvent_4");
static_assert(sizeof(ItemSelector_C_CustomEvent_4) == 0x000010, "Wrong size on ItemSelector_C_CustomEvent_4");
static_assert(offsetof(ItemSelector_C_CustomEvent_4, Sender) == 0x000000, "Member 'ItemSelector_C_CustomEvent_4::Sender' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_CustomEvent_4, Param) == 0x000008, "Member 'ItemSelector_C_CustomEvent_4::Param' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.CustomEvent_3
// 0x0010 (0x0010 - 0x0000)
struct ItemSelector_C_CustomEvent_3 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelector_C_CustomEvent_3) == 0x000008, "Wrong alignment on ItemSelector_C_CustomEvent_3");
static_assert(sizeof(ItemSelector_C_CustomEvent_3) == 0x000010, "Wrong size on ItemSelector_C_CustomEvent_3");
static_assert(offsetof(ItemSelector_C_CustomEvent_3, Sender) == 0x000000, "Member 'ItemSelector_C_CustomEvent_3::Sender' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_CustomEvent_3, Param) == 0x000008, "Member 'ItemSelector_C_CustomEvent_3::Param' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.CustomEvent_1
// 0x0010 (0x0010 - 0x0000)
struct ItemSelector_C_CustomEvent_1 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelector_C_CustomEvent_1) == 0x000008, "Wrong alignment on ItemSelector_C_CustomEvent_1");
static_assert(sizeof(ItemSelector_C_CustomEvent_1) == 0x000010, "Wrong size on ItemSelector_C_CustomEvent_1");
static_assert(offsetof(ItemSelector_C_CustomEvent_1, Sender) == 0x000000, "Member 'ItemSelector_C_CustomEvent_1::Sender' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_CustomEvent_1, Param) == 0x000008, "Member 'ItemSelector_C_CustomEvent_1::Param' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.EventOnUseSupply
// 0x0001 (0x0001 - 0x0000)
struct ItemSelector_C_EventOnUseSupply final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemSelector_C_EventOnUseSupply) == 0x000001, "Wrong alignment on ItemSelector_C_EventOnUseSupply");
static_assert(sizeof(ItemSelector_C_EventOnUseSupply) == 0x000001, "Wrong size on ItemSelector_C_EventOnUseSupply");
static_assert(offsetof(ItemSelector_C_EventOnUseSupply, Result) == 0x000000, "Member 'ItemSelector_C_EventOnUseSupply::Result' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.OnOwnItemChangeAmount
// 0x0020 (0x0020 - 0x0000)
struct ItemSelector_C_OnOwnItemChangeAmount final
{
public:
	struct FSBChangeItemAmountParam               InParam;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ItemSelector_C_OnOwnItemChangeAmount) == 0x000008, "Wrong alignment on ItemSelector_C_OnOwnItemChangeAmount");
static_assert(sizeof(ItemSelector_C_OnOwnItemChangeAmount) == 0x000020, "Wrong size on ItemSelector_C_OnOwnItemChangeAmount");
static_assert(offsetof(ItemSelector_C_OnOwnItemChangeAmount, InParam) == 0x000000, "Member 'ItemSelector_C_OnOwnItemChangeAmount::InParam' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.OnSaveItemStorage
// 0x0018 (0x0018 - 0x0000)
struct ItemSelector_C_OnSaveItemStorage final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_742F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   InDirtyItems;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ItemSelector_C_OnSaveItemStorage) == 0x000008, "Wrong alignment on ItemSelector_C_OnSaveItemStorage");
static_assert(sizeof(ItemSelector_C_OnSaveItemStorage) == 0x000018, "Wrong size on ItemSelector_C_OnSaveItemStorage");
static_assert(offsetof(ItemSelector_C_OnSaveItemStorage, InRetCode) == 0x000000, "Member 'ItemSelector_C_OnSaveItemStorage::InRetCode' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_OnSaveItemStorage, InDirtyItems) == 0x000008, "Member 'ItemSelector_C_OnSaveItemStorage::InDirtyItems' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.OnSaveItemLock
// 0x0020 (0x0020 - 0x0000)
struct ItemSelector_C_OnSaveItemLock final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7430[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLockItemData>                LockItemData;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InRetCode;                                         // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelector_C_OnSaveItemLock) == 0x000008, "Wrong alignment on ItemSelector_C_OnSaveItemLock");
static_assert(sizeof(ItemSelector_C_OnSaveItemLock) == 0x000020, "Wrong size on ItemSelector_C_OnSaveItemLock");
static_assert(offsetof(ItemSelector_C_OnSaveItemLock, Result) == 0x000000, "Member 'ItemSelector_C_OnSaveItemLock::Result' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_OnSaveItemLock, LockItemData) == 0x000008, "Member 'ItemSelector_C_OnSaveItemLock::LockItemData' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_OnSaveItemLock, InRetCode) == 0x000018, "Member 'ItemSelector_C_OnSaveItemLock::InRetCode' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.DebugPrint
// 0x0028 (0x0028 - 0x0000)
struct ItemSelector_C_DebugPrint final
{
public:
	class FString                                 InStr;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7431[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelector_C_DebugPrint) == 0x000008, "Wrong alignment on ItemSelector_C_DebugPrint");
static_assert(sizeof(ItemSelector_C_DebugPrint) == 0x000028, "Wrong size on ItemSelector_C_DebugPrint");
static_assert(offsetof(ItemSelector_C_DebugPrint, InStr) == 0x000000, "Member 'ItemSelector_C_DebugPrint::InStr' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_DebugPrint, Duration) == 0x000010, "Member 'ItemSelector_C_DebugPrint::Duration' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_DebugPrint, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'ItemSelector_C_DebugPrint::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.OnPlaySESelect
// 0x0004 (0x0004 - 0x0000)
struct ItemSelector_C_OnPlaySESelect final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelector_C_OnPlaySESelect) == 0x000004, "Wrong alignment on ItemSelector_C_OnPlaySESelect");
static_assert(sizeof(ItemSelector_C_OnPlaySESelect) == 0x000004, "Wrong size on ItemSelector_C_OnPlaySESelect");
static_assert(offsetof(ItemSelector_C_OnPlaySESelect, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'ItemSelector_C_OnPlaySESelect::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.OnPlaySECanNotUse
// 0x0030 (0x0030 - 0x0000)
struct ItemSelector_C_OnPlaySECanNotUse final
{
public:
	ESBItemUseStatus                              InUseStatus;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7432[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetAt_ReturnValue;           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(ItemSelector_C_OnPlaySECanNotUse) == 0x000008, "Wrong alignment on ItemSelector_C_OnPlaySECanNotUse");
static_assert(sizeof(ItemSelector_C_OnPlaySECanNotUse) == 0x000030, "Wrong size on ItemSelector_C_OnPlaySECanNotUse");
static_assert(offsetof(ItemSelector_C_OnPlaySECanNotUse, InUseStatus) == 0x000000, "Member 'ItemSelector_C_OnPlaySECanNotUse::InUseStatus' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_OnPlaySECanNotUse, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'ItemSelector_C_OnPlaySECanNotUse::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_OnPlaySECanNotUse, CallFunc_GetTextFromAssetAt_ReturnValue) == 0x000008, "Member 'ItemSelector_C_OnPlaySECanNotUse::CallFunc_GetTextFromAssetAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_OnPlaySECanNotUse, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'ItemSelector_C_OnPlaySECanNotUse::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ItemSelector.ItemSelector_C.IsRegistItemForInventoryData
// 0x01C0 (0x01C0 - 0x0000)
struct ItemSelector_C_IsRegistItemForInventoryData final
{
public:
	struct FOwnItemInfo                           InItemInfo;                                        // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0118(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7433[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0120(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRegistItem_ReturnValue;                 // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemSelector_C_IsRegistItemForInventoryData) == 0x000008, "Wrong alignment on ItemSelector_C_IsRegistItemForInventoryData");
static_assert(sizeof(ItemSelector_C_IsRegistItemForInventoryData) == 0x0001C0, "Wrong size on ItemSelector_C_IsRegistItemForInventoryData");
static_assert(offsetof(ItemSelector_C_IsRegistItemForInventoryData, InItemInfo) == 0x000000, "Member 'ItemSelector_C_IsRegistItemForInventoryData::InItemInfo' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_IsRegistItemForInventoryData, ReturnValue) == 0x000118, "Member 'ItemSelector_C_IsRegistItemForInventoryData::ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_IsRegistItemForInventoryData, CallFunc_CreateInventoryData_InventoryData) == 0x000120, "Member 'ItemSelector_C_IsRegistItemForInventoryData::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_IsRegistItemForInventoryData, CallFunc_CreateInventoryData_IsSuccess) == 0x0001B8, "Member 'ItemSelector_C_IsRegistItemForInventoryData::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(ItemSelector_C_IsRegistItemForInventoryData, CallFunc_IsRegistItem_ReturnValue) == 0x0001B9, "Member 'ItemSelector_C_IsRegistItemForInventoryData::CallFunc_IsRegistItem_ReturnValue' has a wrong offset!");

}

