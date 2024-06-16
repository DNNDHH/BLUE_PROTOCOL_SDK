#pragma once

 

// Package: ST_CheckGameInput

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ST_CheckGameInput.ST_CheckGameInput_C.ReceiveCanEnter
// 0x0058 (0x0058 - 0x0000)
struct ST_CheckGameInput_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ADB[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9ADC[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ADD[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ADE[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameInput                                    CallFunc_Array_Get_Item;                           // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGameInputPressTriggered_ReturnValue;    // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ADF[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGameInput                                    CallFunc_Array_Get_Item_1;                         // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameInputPressed_ReturnValue;           // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_CheckGameInput_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_CheckGameInput_C_ReceiveCanEnter");
static_assert(sizeof(ST_CheckGameInput_C_ReceiveCanEnter) == 0x000058, "Wrong size on ST_CheckGameInput_C_ReceiveCanEnter");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000020, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_IsLocallyControlled_ReturnValue) == 0x000030, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, Temp_int_Array_Index_Variable) == 0x000034, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, Temp_int_Loop_Counter_Variable_1) == 0x000038, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_Array_Get_Item) == 0x000044, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_Less_IntInt_ReturnValue) == 0x000045, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_IsGameInputPressTriggered_ReturnValue) == 0x000046, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_IsGameInputPressTriggered_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_Array_Length_ReturnValue_1) == 0x000048, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, Temp_int_Array_Index_Variable_1) == 0x00004C, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_Less_IntInt_ReturnValue_1) == 0x000050, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_Array_Get_Item_1) == 0x000051, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ST_CheckGameInput_C_ReceiveCanEnter, CallFunc_IsGameInputPressed_ReturnValue) == 0x000052, "Member 'ST_CheckGameInput_C_ReceiveCanEnter::CallFunc_IsGameInputPressed_ReturnValue' has a wrong offset!");

}

