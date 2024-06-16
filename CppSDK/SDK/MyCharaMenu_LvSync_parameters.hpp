#pragma once

 

// Package: MyCharaMenu_LvSync

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.ExecuteUbergraph_MyCharaMenu_LvSync
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_LvSync_C_ExecuteUbergraph_MyCharaMenu_LvSync final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LvSync_C_ExecuteUbergraph_MyCharaMenu_LvSync) == 0x000004, "Wrong alignment on MyCharaMenu_LvSync_C_ExecuteUbergraph_MyCharaMenu_LvSync");
static_assert(sizeof(MyCharaMenu_LvSync_C_ExecuteUbergraph_MyCharaMenu_LvSync) == 0x000004, "Wrong size on MyCharaMenu_LvSync_C_ExecuteUbergraph_MyCharaMenu_LvSync");
static_assert(offsetof(MyCharaMenu_LvSync_C_ExecuteUbergraph_MyCharaMenu_LvSync, EntryPoint) == 0x000000, "Member 'MyCharaMenu_LvSync_C_ExecuteUbergraph_MyCharaMenu_LvSync::EntryPoint' has a wrong offset!");

// Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.Update
// 0x01F8 (0x01F8 - 0x0000)
struct MyCharaMenu_LvSync_C_Update final
{
public:
	bool                                          bIsLevelSync;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E1D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterStatus                     NewLocalVar_0;                                     // 0x0004(0x0040)(Edit, BlueprintVisible, NoDestructor)
	struct FSBCharacterStatus                     OriginalStatus;                                    // 0x0044(0x0040)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_6E1E[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 OriginalParamArray;                                // 0x0088(0x0010)(Edit, BlueprintVisible)
	TArray<class UMyCharaMenu_LvSyncNum3_C*>      TextArray;                                         // 0x0098(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<int32>                                 ParamArray;                                        // 0x00A8(0x0010)(Edit, BlueprintVisible)
	struct FSBCharacterStatus                     Status;                                            // 0x00B8(0x0040)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E1F[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array_1;                          // 0x0118(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetTotalPower_ReturnValue;                // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E20[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LvSyncNum3_C*              CallFunc_Array_Get_Item_2;                         // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E21[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMyCharaMenu_LvSyncNum3_C*>      K2Node_MakeArray_Array_2;                          // 0x0150(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E22[0x2];                                     // 0x0162(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPower_ReturnValue_1;              // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetOriginalLevel_ReturnValue;             // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterStatus                     CallFunc_GetOriginalStatus_ReturnValue;            // 0x0170(0x0040)(ConstParm, NoDestructor)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterStatus                     CallFunc_GetStatus_ReturnValue;                    // 0x01B4(0x0040)(ConstParm, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LvSync_C_Update) == 0x000008, "Wrong alignment on MyCharaMenu_LvSync_C_Update");
static_assert(sizeof(MyCharaMenu_LvSync_C_Update) == 0x0001F8, "Wrong size on MyCharaMenu_LvSync_C_Update");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, bIsLevelSync) == 0x000000, "Member 'MyCharaMenu_LvSync_C_Update::bIsLevelSync' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, NewLocalVar_0) == 0x000004, "Member 'MyCharaMenu_LvSync_C_Update::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, OriginalStatus) == 0x000044, "Member 'MyCharaMenu_LvSync_C_Update::OriginalStatus' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, OriginalParamArray) == 0x000088, "Member 'MyCharaMenu_LvSync_C_Update::OriginalParamArray' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, TextArray) == 0x000098, "Member 'MyCharaMenu_LvSync_C_Update::TextArray' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, ParamArray) == 0x0000A8, "Member 'MyCharaMenu_LvSync_C_Update::ParamArray' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, Status) == 0x0000B8, "Member 'MyCharaMenu_LvSync_C_Update::Status' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, Temp_int_Loop_Counter_Variable) == 0x0000F8, "Member 'MyCharaMenu_LvSync_C_Update::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_Add_IntInt_ReturnValue) == 0x0000FC, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, K2Node_MakeArray_Array) == 0x000100, "Member 'MyCharaMenu_LvSync_C_Update::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, Temp_int_Array_Index_Variable) == 0x000110, "Member 'MyCharaMenu_LvSync_C_Update::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, K2Node_MakeArray_Array_1) == 0x000118, "Member 'MyCharaMenu_LvSync_C_Update::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_GetTotalPower_ReturnValue) == 0x000128, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_GetTotalPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_Array_Get_Item) == 0x00012C, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_Array_Get_Item_1) == 0x000130, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_Array_Get_Item_2) == 0x000138, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_Less_IntInt_ReturnValue) == 0x000144, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000148, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, K2Node_MakeArray_Array_2) == 0x000150, "Member 'MyCharaMenu_LvSync_C_Update::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x000160, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_BooleanOR_ReturnValue) == 0x000161, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x000164, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_GetTotalPower_ReturnValue_1) == 0x000168, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_GetTotalPower_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_GetOriginalLevel_ReturnValue) == 0x00016C, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_GetOriginalLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_GetOriginalStatus_ReturnValue) == 0x000170, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_GetOriginalStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_GetLevel_ReturnValue) == 0x0001B0, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSync_C_Update, CallFunc_GetStatus_ReturnValue) == 0x0001B4, "Member 'MyCharaMenu_LvSync_C_Update::CallFunc_GetStatus_ReturnValue' has a wrong offset!");

}

