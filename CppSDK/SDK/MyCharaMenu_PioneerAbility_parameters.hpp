#pragma once

 

// Package: MyCharaMenu_PioneerAbility

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_PioneerAbility.MyCharaMenu_PioneerAbility_C.ExecuteUbergraph_MyCharaMenu_PioneerAbility
// 0x00F0 (0x00F0 - 0x0000)
struct MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77EF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEffect_Container_C*                    CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77F0[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77F1[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77F2[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWarehouseAbilityComponent*           CallFunc_GetWarehouseAbilityComponent_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77F3[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FPioneerAbilityList> CallFunc_GetPioneerAbilityMap_ReturnValue;         // 0x0068(0x0050)()
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x00B8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77F4[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPioneerAbilityList                    CallFunc_Map_Find_Value;                           // 0x00D8(0x0010)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility) == 0x000008, "Wrong alignment on MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility");
static_assert(sizeof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility) == 0x0000F0, "Wrong size on MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, EntryPoint) == 0x000000, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000018, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, Temp_int_Array_Index_Variable) == 0x000024, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, K2Node_MakeStruct_Margin) == 0x000028, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_GetPlayerController_ReturnValue) == 0x000038, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000048, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_GetWarehouseAbilityComponent_ReturnValue) == 0x000058, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_GetWarehouseAbilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_GetPioneerAbilityMap_ReturnValue) == 0x000068, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_GetPioneerAbilityMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_Map_Keys_Keys) == 0x0000B8, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_Map_Find_Value) == 0x0000D8, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_Map_Find_ReturnValue) == 0x0000E8, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility, CallFunc_Less_IntInt_ReturnValue) == 0x0000E9, "Member 'MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

