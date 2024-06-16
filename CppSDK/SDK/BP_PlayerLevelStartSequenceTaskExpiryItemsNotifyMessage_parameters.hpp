#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage.BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage
// 0x0058 (0x0058 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBActiveItemData                      CallFunc_Array_Get_Item;                           // 0x0008(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_919D[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_919E[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_919F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBActiveItemData>              CallFunc_GetExpiryItems_BP_ReturnValue;            // 0x0048(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage) == 0x000058, "Wrong size on BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage, CallFunc_IsStandalone_ReturnValue) == 0x00002C, "Member 'BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000030, "Member 'BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage, CallFunc_Less_IntInt_ReturnValue) == 0x00003D, "Member 'BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage, CallFunc_GetExpiryItems_BP_ReturnValue) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage::CallFunc_GetExpiryItems_BP_ReturnValue' has a wrong offset!");

}

